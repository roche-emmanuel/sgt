#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlNode.h>

class luna_wrapper_TiXmlNode {
public:
	typedef Luna< TiXmlNode > luna_t;

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

		TiXmlNode* self= (TiXmlNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlNode >::push(L,self,false);
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
		//TiXmlNode* ptr= dynamic_cast< TiXmlNode* >(Luna< TiXmlBase >::check(L,1));
		TiXmlNode* ptr= luna_caster< TiXmlBase, TiXmlNode >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Value(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ValueStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ValueTStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Parent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Parent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChild_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LastChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastChild_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LastChild_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LastChild_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LastChild_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IterateChildren_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IterateChildren_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IterateChildren_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IterateChildren_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IterateChildren_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IterateChildren_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertEndChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LinkEndChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertBeforeChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,89852901) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertAfterChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,89852901) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,89852901) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PreviousSibling_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PreviousSibling_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PreviousSibling_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PreviousSibling_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PreviousSibling_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PreviousSibling_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSibling_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSibling_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSibling_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NextSibling_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NextSibling_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSibling_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSiblingElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NextSiblingElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NextSiblingElement_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSiblingElement_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSiblingElement_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextSiblingElement_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstChildElement_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocument_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocument_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NoChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDocument_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDocument_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToElement_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_ToUnknown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToUnknown_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_ToDeclaration_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDeclaration_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * TiXmlNode::Value() const
	static int _bind_Value(lua_State *L) {
		if (!_lg_typecheck_Value(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlNode::Value() const function, expected prototype:\nconst char * TiXmlNode::Value() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlNode::Value() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Value();
		lua_pushstring(L,lret);

		return 1;
	}

	// const std::string & TiXmlNode::ValueStr() const
	static int _bind_ValueStr(lua_State *L) {
		if (!_lg_typecheck_ValueStr(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & TiXmlNode::ValueStr() const function, expected prototype:\nconst std::string & TiXmlNode::ValueStr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & TiXmlNode::ValueStr() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->ValueStr();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const std::string & TiXmlNode::ValueTStr() const
	static int _bind_ValueTStr(lua_State *L) {
		if (!_lg_typecheck_ValueTStr(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & TiXmlNode::ValueTStr() const function, expected prototype:\nconst std::string & TiXmlNode::ValueTStr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & TiXmlNode::ValueTStr() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->ValueTStr();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void TiXmlNode::SetValue(const char * _value)
	static int _bind_SetValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlNode::SetValue(const char * _value) function, expected prototype:\nvoid TiXmlNode::SetValue(const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlNode::SetValue(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(_value);

		return 0;
	}

	// void TiXmlNode::SetValue(const std::string & _value)
	static int _bind_SetValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlNode::SetValue(const std::string & _value) function, expected prototype:\nvoid TiXmlNode::SetValue(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlNode::SetValue(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(_value);

		return 0;
	}

	// Overload binder for TiXmlNode::SetValue
	static int _bind_SetValue(lua_State *L) {
		if (_lg_typecheck_SetValue_overload_1(L)) return _bind_SetValue_overload_1(L);
		if (_lg_typecheck_SetValue_overload_2(L)) return _bind_SetValue_overload_2(L);

		luaL_error(L, "error in function SetValue, cannot match any of the overloads for function SetValue:\n  SetValue(const char *)\n  SetValue(const std::string &)\n");
		return 0;
	}

	// void TiXmlNode::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlNode::Clear() function, expected prototype:\nvoid TiXmlNode::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlNode::Clear(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// TiXmlNode * TiXmlNode::Parent()
	static int _bind_Parent_overload_1(lua_State *L) {
		if (!_lg_typecheck_Parent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::Parent() function, expected prototype:\nTiXmlNode * TiXmlNode::Parent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::Parent(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Parent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::Parent() const
	static int _bind_Parent_overload_2(lua_State *L) {
		if (!_lg_typecheck_Parent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::Parent() const function, expected prototype:\nconst TiXmlNode * TiXmlNode::Parent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::Parent() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->Parent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::Parent
	static int _bind_Parent(lua_State *L) {
		if (_lg_typecheck_Parent_overload_1(L)) return _bind_Parent_overload_1(L);
		if (_lg_typecheck_Parent_overload_2(L)) return _bind_Parent_overload_2(L);

		luaL_error(L, "error in function Parent, cannot match any of the overloads for function Parent:\n  Parent()\n  Parent()\n");
		return 0;
	}

	// const TiXmlNode * TiXmlNode::FirstChild() const
	static int _bind_FirstChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::FirstChild() const function, expected prototype:\nconst TiXmlNode * TiXmlNode::FirstChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::FirstChild() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->FirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::FirstChild()
	static int _bind_FirstChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::FirstChild() function, expected prototype:\nTiXmlNode * TiXmlNode::FirstChild()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::FirstChild(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->FirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::FirstChild(const char * value) const
	static int _bind_FirstChild_overload_3(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::FirstChild(const char * value) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::FirstChild(const char * value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::FirstChild(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->FirstChild(value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::FirstChild(const char * _value)
	static int _bind_FirstChild_overload_4(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::FirstChild(const char * _value) function, expected prototype:\nTiXmlNode * TiXmlNode::FirstChild(const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::FirstChild(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->FirstChild(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::FirstChild(const std::string & _value) const
	static int _bind_FirstChild_overload_5(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::FirstChild(const std::string & _value) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::FirstChild(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::FirstChild(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->FirstChild(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::FirstChild(const std::string & _value)
	static int _bind_FirstChild_overload_6(lua_State *L) {
		if (!_lg_typecheck_FirstChild_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::FirstChild(const std::string & _value) function, expected prototype:\nTiXmlNode * TiXmlNode::FirstChild(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::FirstChild(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->FirstChild(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::FirstChild
	static int _bind_FirstChild(lua_State *L) {
		if (_lg_typecheck_FirstChild_overload_1(L)) return _bind_FirstChild_overload_1(L);
		if (_lg_typecheck_FirstChild_overload_2(L)) return _bind_FirstChild_overload_2(L);
		if (_lg_typecheck_FirstChild_overload_3(L)) return _bind_FirstChild_overload_3(L);
		if (_lg_typecheck_FirstChild_overload_4(L)) return _bind_FirstChild_overload_4(L);
		if (_lg_typecheck_FirstChild_overload_5(L)) return _bind_FirstChild_overload_5(L);
		if (_lg_typecheck_FirstChild_overload_6(L)) return _bind_FirstChild_overload_6(L);

		luaL_error(L, "error in function FirstChild, cannot match any of the overloads for function FirstChild:\n  FirstChild()\n  FirstChild()\n  FirstChild(const char *)\n  FirstChild(const char *)\n  FirstChild(const std::string &)\n  FirstChild(const std::string &)\n");
		return 0;
	}

	// const TiXmlNode * TiXmlNode::LastChild() const
	static int _bind_LastChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_LastChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::LastChild() const function, expected prototype:\nconst TiXmlNode * TiXmlNode::LastChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::LastChild() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->LastChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::LastChild()
	static int _bind_LastChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_LastChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::LastChild() function, expected prototype:\nTiXmlNode * TiXmlNode::LastChild()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::LastChild(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->LastChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::LastChild(const char * value) const
	static int _bind_LastChild_overload_3(lua_State *L) {
		if (!_lg_typecheck_LastChild_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::LastChild(const char * value) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::LastChild(const char * value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::LastChild(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->LastChild(value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::LastChild(const char * _value)
	static int _bind_LastChild_overload_4(lua_State *L) {
		if (!_lg_typecheck_LastChild_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::LastChild(const char * _value) function, expected prototype:\nTiXmlNode * TiXmlNode::LastChild(const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::LastChild(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->LastChild(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::LastChild(const std::string & _value) const
	static int _bind_LastChild_overload_5(lua_State *L) {
		if (!_lg_typecheck_LastChild_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::LastChild(const std::string & _value) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::LastChild(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::LastChild(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->LastChild(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::LastChild(const std::string & _value)
	static int _bind_LastChild_overload_6(lua_State *L) {
		if (!_lg_typecheck_LastChild_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::LastChild(const std::string & _value) function, expected prototype:\nTiXmlNode * TiXmlNode::LastChild(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::LastChild(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->LastChild(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::LastChild
	static int _bind_LastChild(lua_State *L) {
		if (_lg_typecheck_LastChild_overload_1(L)) return _bind_LastChild_overload_1(L);
		if (_lg_typecheck_LastChild_overload_2(L)) return _bind_LastChild_overload_2(L);
		if (_lg_typecheck_LastChild_overload_3(L)) return _bind_LastChild_overload_3(L);
		if (_lg_typecheck_LastChild_overload_4(L)) return _bind_LastChild_overload_4(L);
		if (_lg_typecheck_LastChild_overload_5(L)) return _bind_LastChild_overload_5(L);
		if (_lg_typecheck_LastChild_overload_6(L)) return _bind_LastChild_overload_6(L);

		luaL_error(L, "error in function LastChild, cannot match any of the overloads for function LastChild:\n  LastChild()\n  LastChild()\n  LastChild(const char *)\n  LastChild(const char *)\n  LastChild(const std::string &)\n  LastChild(const std::string &)\n");
		return 0;
	}

	// const TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode * previous) const
	static int _bind_IterateChildren_overload_1(lua_State *L) {
		if (!_lg_typecheck_IterateChildren_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode * previous) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode * previous) const\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlNode* previous=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->IterateChildren(previous);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode * previous)
	static int _bind_IterateChildren_overload_2(lua_State *L) {
		if (!_lg_typecheck_IterateChildren_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode * previous) function, expected prototype:\nTiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode * previous)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlNode* previous=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::IterateChildren(const TiXmlNode *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->IterateChildren(previous);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::IterateChildren(const char * value, const TiXmlNode * previous) const
	static int _bind_IterateChildren_overload_3(lua_State *L) {
		if (!_lg_typecheck_IterateChildren_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::IterateChildren(const char * value, const TiXmlNode * previous) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::IterateChildren(const char * value, const TiXmlNode * previous) const\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * value=(const char *)lua_tostring(L,2);
		const TiXmlNode* previous=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::IterateChildren(const char *, const TiXmlNode *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->IterateChildren(value, previous);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::IterateChildren(const char * _value, const TiXmlNode * previous)
	static int _bind_IterateChildren_overload_4(lua_State *L) {
		if (!_lg_typecheck_IterateChildren_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::IterateChildren(const char * _value, const TiXmlNode * previous) function, expected prototype:\nTiXmlNode * TiXmlNode::IterateChildren(const char * _value, const TiXmlNode * previous)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);
		const TiXmlNode* previous=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::IterateChildren(const char *, const TiXmlNode *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->IterateChildren(_value, previous);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::IterateChildren(const std::string & _value, const TiXmlNode * previous) const
	static int _bind_IterateChildren_overload_5(lua_State *L) {
		if (!_lg_typecheck_IterateChildren_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::IterateChildren(const std::string & _value, const TiXmlNode * previous) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::IterateChildren(const std::string & _value, const TiXmlNode * previous) const\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));
		const TiXmlNode* previous=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::IterateChildren(const std::string &, const TiXmlNode *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->IterateChildren(_value, previous);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::IterateChildren(const std::string & _value, const TiXmlNode * previous)
	static int _bind_IterateChildren_overload_6(lua_State *L) {
		if (!_lg_typecheck_IterateChildren_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::IterateChildren(const std::string & _value, const TiXmlNode * previous) function, expected prototype:\nTiXmlNode * TiXmlNode::IterateChildren(const std::string & _value, const TiXmlNode * previous)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));
		const TiXmlNode* previous=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::IterateChildren(const std::string &, const TiXmlNode *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->IterateChildren(_value, previous);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::IterateChildren
	static int _bind_IterateChildren(lua_State *L) {
		if (_lg_typecheck_IterateChildren_overload_1(L)) return _bind_IterateChildren_overload_1(L);
		if (_lg_typecheck_IterateChildren_overload_2(L)) return _bind_IterateChildren_overload_2(L);
		if (_lg_typecheck_IterateChildren_overload_3(L)) return _bind_IterateChildren_overload_3(L);
		if (_lg_typecheck_IterateChildren_overload_4(L)) return _bind_IterateChildren_overload_4(L);
		if (_lg_typecheck_IterateChildren_overload_5(L)) return _bind_IterateChildren_overload_5(L);
		if (_lg_typecheck_IterateChildren_overload_6(L)) return _bind_IterateChildren_overload_6(L);

		luaL_error(L, "error in function IterateChildren, cannot match any of the overloads for function IterateChildren:\n  IterateChildren(const TiXmlNode *)\n  IterateChildren(const TiXmlNode *)\n  IterateChildren(const char *, const TiXmlNode *)\n  IterateChildren(const char *, const TiXmlNode *)\n  IterateChildren(const std::string &, const TiXmlNode *)\n  IterateChildren(const std::string &, const TiXmlNode *)\n");
		return 0;
	}

	// TiXmlNode * TiXmlNode::InsertEndChild(const TiXmlNode & addThis)
	static int _bind_InsertEndChild(lua_State *L) {
		if (!_lg_typecheck_InsertEndChild(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::InsertEndChild(const TiXmlNode & addThis) function, expected prototype:\nTiXmlNode * TiXmlNode::InsertEndChild(const TiXmlNode & addThis)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlNode* addThis_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));
		if( !addThis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addThis in TiXmlNode::InsertEndChild function");
		}
		const TiXmlNode & addThis=*addThis_ptr;

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::InsertEndChild(const TiXmlNode &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->InsertEndChild(addThis);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::LinkEndChild(TiXmlNode * addThis)
	static int _bind_LinkEndChild(lua_State *L) {
		if (!_lg_typecheck_LinkEndChild(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::LinkEndChild(TiXmlNode * addThis) function, expected prototype:\nTiXmlNode * TiXmlNode::LinkEndChild(TiXmlNode * addThis)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlNode* addThis=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::LinkEndChild(TiXmlNode *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->LinkEndChild(addThis);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::InsertBeforeChild(TiXmlNode * beforeThis, const TiXmlNode & addThis)
	static int _bind_InsertBeforeChild(lua_State *L) {
		if (!_lg_typecheck_InsertBeforeChild(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::InsertBeforeChild(TiXmlNode * beforeThis, const TiXmlNode & addThis) function, expected prototype:\nTiXmlNode * TiXmlNode::InsertBeforeChild(TiXmlNode * beforeThis, const TiXmlNode & addThis)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlNode* beforeThis=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));
		const TiXmlNode* addThis_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));
		if( !addThis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addThis in TiXmlNode::InsertBeforeChild function");
		}
		const TiXmlNode & addThis=*addThis_ptr;

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::InsertBeforeChild(TiXmlNode *, const TiXmlNode &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->InsertBeforeChild(beforeThis, addThis);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::InsertAfterChild(TiXmlNode * afterThis, const TiXmlNode & addThis)
	static int _bind_InsertAfterChild(lua_State *L) {
		if (!_lg_typecheck_InsertAfterChild(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::InsertAfterChild(TiXmlNode * afterThis, const TiXmlNode & addThis) function, expected prototype:\nTiXmlNode * TiXmlNode::InsertAfterChild(TiXmlNode * afterThis, const TiXmlNode & addThis)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlNode* afterThis=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));
		const TiXmlNode* addThis_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));
		if( !addThis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addThis in TiXmlNode::InsertAfterChild function");
		}
		const TiXmlNode & addThis=*addThis_ptr;

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::InsertAfterChild(TiXmlNode *, const TiXmlNode &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->InsertAfterChild(afterThis, addThis);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::ReplaceChild(TiXmlNode * replaceThis, const TiXmlNode & withThis)
	static int _bind_ReplaceChild(lua_State *L) {
		if (!_lg_typecheck_ReplaceChild(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::ReplaceChild(TiXmlNode * replaceThis, const TiXmlNode & withThis) function, expected prototype:\nTiXmlNode * TiXmlNode::ReplaceChild(TiXmlNode * replaceThis, const TiXmlNode & withThis)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlNode* replaceThis=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));
		const TiXmlNode* withThis_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,3));
		if( !withThis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg withThis in TiXmlNode::ReplaceChild function");
		}
		const TiXmlNode & withThis=*withThis_ptr;

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::ReplaceChild(TiXmlNode *, const TiXmlNode &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->ReplaceChild(replaceThis, withThis);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// bool TiXmlNode::RemoveChild(TiXmlNode * removeThis)
	static int _bind_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlNode::RemoveChild(TiXmlNode * removeThis) function, expected prototype:\nbool TiXmlNode::RemoveChild(TiXmlNode * removeThis)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlNode* removeThis=(Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlNode::RemoveChild(TiXmlNode *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveChild(removeThis);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::PreviousSibling() const
	static int _bind_PreviousSibling_overload_1(lua_State *L) {
		if (!_lg_typecheck_PreviousSibling_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::PreviousSibling() const function, expected prototype:\nconst TiXmlNode * TiXmlNode::PreviousSibling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::PreviousSibling() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->PreviousSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::PreviousSibling()
	static int _bind_PreviousSibling_overload_2(lua_State *L) {
		if (!_lg_typecheck_PreviousSibling_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::PreviousSibling() function, expected prototype:\nTiXmlNode * TiXmlNode::PreviousSibling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::PreviousSibling(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->PreviousSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::PreviousSibling(const char * arg1) const
	static int _bind_PreviousSibling_overload_3(lua_State *L) {
		if (!_lg_typecheck_PreviousSibling_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::PreviousSibling(const char * arg1) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::PreviousSibling(const char * arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::PreviousSibling(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->PreviousSibling(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::PreviousSibling(const char * _prev)
	static int _bind_PreviousSibling_overload_4(lua_State *L) {
		if (!_lg_typecheck_PreviousSibling_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::PreviousSibling(const char * _prev) function, expected prototype:\nTiXmlNode * TiXmlNode::PreviousSibling(const char * _prev)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _prev=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::PreviousSibling(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->PreviousSibling(_prev);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::PreviousSibling(const std::string & _value) const
	static int _bind_PreviousSibling_overload_5(lua_State *L) {
		if (!_lg_typecheck_PreviousSibling_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::PreviousSibling(const std::string & _value) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::PreviousSibling(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::PreviousSibling(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->PreviousSibling(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::PreviousSibling(const std::string & _value)
	static int _bind_PreviousSibling_overload_6(lua_State *L) {
		if (!_lg_typecheck_PreviousSibling_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::PreviousSibling(const std::string & _value) function, expected prototype:\nTiXmlNode * TiXmlNode::PreviousSibling(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::PreviousSibling(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->PreviousSibling(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::PreviousSibling
	static int _bind_PreviousSibling(lua_State *L) {
		if (_lg_typecheck_PreviousSibling_overload_1(L)) return _bind_PreviousSibling_overload_1(L);
		if (_lg_typecheck_PreviousSibling_overload_2(L)) return _bind_PreviousSibling_overload_2(L);
		if (_lg_typecheck_PreviousSibling_overload_3(L)) return _bind_PreviousSibling_overload_3(L);
		if (_lg_typecheck_PreviousSibling_overload_4(L)) return _bind_PreviousSibling_overload_4(L);
		if (_lg_typecheck_PreviousSibling_overload_5(L)) return _bind_PreviousSibling_overload_5(L);
		if (_lg_typecheck_PreviousSibling_overload_6(L)) return _bind_PreviousSibling_overload_6(L);

		luaL_error(L, "error in function PreviousSibling, cannot match any of the overloads for function PreviousSibling:\n  PreviousSibling()\n  PreviousSibling()\n  PreviousSibling(const char *)\n  PreviousSibling(const char *)\n  PreviousSibling(const std::string &)\n  PreviousSibling(const std::string &)\n");
		return 0;
	}

	// const TiXmlNode * TiXmlNode::NextSibling(const std::string & _value) const
	static int _bind_NextSibling_overload_1(lua_State *L) {
		if (!_lg_typecheck_NextSibling_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::NextSibling(const std::string & _value) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::NextSibling(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::NextSibling(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->NextSibling(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::NextSibling(const std::string & _value)
	static int _bind_NextSibling_overload_2(lua_State *L) {
		if (!_lg_typecheck_NextSibling_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::NextSibling(const std::string & _value) function, expected prototype:\nTiXmlNode * TiXmlNode::NextSibling(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::NextSibling(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->NextSibling(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::NextSibling() const
	static int _bind_NextSibling_overload_3(lua_State *L) {
		if (!_lg_typecheck_NextSibling_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::NextSibling() const function, expected prototype:\nconst TiXmlNode * TiXmlNode::NextSibling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::NextSibling() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->NextSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::NextSibling()
	static int _bind_NextSibling_overload_4(lua_State *L) {
		if (!_lg_typecheck_NextSibling_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::NextSibling() function, expected prototype:\nTiXmlNode * TiXmlNode::NextSibling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::NextSibling(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->NextSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlNode * TiXmlNode::NextSibling(const char * arg1) const
	static int _bind_NextSibling_overload_5(lua_State *L) {
		if (!_lg_typecheck_NextSibling_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlNode * TiXmlNode::NextSibling(const char * arg1) const function, expected prototype:\nconst TiXmlNode * TiXmlNode::NextSibling(const char * arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlNode * TiXmlNode::NextSibling(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlNode * lret = self->NextSibling(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// TiXmlNode * TiXmlNode::NextSibling(const char * _next)
	static int _bind_NextSibling_overload_6(lua_State *L) {
		if (!_lg_typecheck_NextSibling_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::NextSibling(const char * _next) function, expected prototype:\nTiXmlNode * TiXmlNode::NextSibling(const char * _next)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _next=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::NextSibling(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->NextSibling(_next);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::NextSibling
	static int _bind_NextSibling(lua_State *L) {
		if (_lg_typecheck_NextSibling_overload_1(L)) return _bind_NextSibling_overload_1(L);
		if (_lg_typecheck_NextSibling_overload_2(L)) return _bind_NextSibling_overload_2(L);
		if (_lg_typecheck_NextSibling_overload_3(L)) return _bind_NextSibling_overload_3(L);
		if (_lg_typecheck_NextSibling_overload_4(L)) return _bind_NextSibling_overload_4(L);
		if (_lg_typecheck_NextSibling_overload_5(L)) return _bind_NextSibling_overload_5(L);
		if (_lg_typecheck_NextSibling_overload_6(L)) return _bind_NextSibling_overload_6(L);

		luaL_error(L, "error in function NextSibling, cannot match any of the overloads for function NextSibling:\n  NextSibling(const std::string &)\n  NextSibling(const std::string &)\n  NextSibling()\n  NextSibling()\n  NextSibling(const char *)\n  NextSibling(const char *)\n");
		return 0;
	}

	// const TiXmlElement * TiXmlNode::NextSiblingElement() const
	static int _bind_NextSiblingElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_NextSiblingElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::NextSiblingElement() const function, expected prototype:\nconst TiXmlElement * TiXmlNode::NextSiblingElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::NextSiblingElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->NextSiblingElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::NextSiblingElement()
	static int _bind_NextSiblingElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_NextSiblingElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::NextSiblingElement() function, expected prototype:\nTiXmlElement * TiXmlNode::NextSiblingElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::NextSiblingElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->NextSiblingElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// const TiXmlElement * TiXmlNode::NextSiblingElement(const char * arg1) const
	static int _bind_NextSiblingElement_overload_3(lua_State *L) {
		if (!_lg_typecheck_NextSiblingElement_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::NextSiblingElement(const char * arg1) const function, expected prototype:\nconst TiXmlElement * TiXmlNode::NextSiblingElement(const char * arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::NextSiblingElement(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->NextSiblingElement(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::NextSiblingElement(const char * _next)
	static int _bind_NextSiblingElement_overload_4(lua_State *L) {
		if (!_lg_typecheck_NextSiblingElement_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::NextSiblingElement(const char * _next) function, expected prototype:\nTiXmlElement * TiXmlNode::NextSiblingElement(const char * _next)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _next=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::NextSiblingElement(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->NextSiblingElement(_next);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// const TiXmlElement * TiXmlNode::NextSiblingElement(const std::string & _value) const
	static int _bind_NextSiblingElement_overload_5(lua_State *L) {
		if (!_lg_typecheck_NextSiblingElement_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::NextSiblingElement(const std::string & _value) const function, expected prototype:\nconst TiXmlElement * TiXmlNode::NextSiblingElement(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::NextSiblingElement(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->NextSiblingElement(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::NextSiblingElement(const std::string & _value)
	static int _bind_NextSiblingElement_overload_6(lua_State *L) {
		if (!_lg_typecheck_NextSiblingElement_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::NextSiblingElement(const std::string & _value) function, expected prototype:\nTiXmlElement * TiXmlNode::NextSiblingElement(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::NextSiblingElement(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->NextSiblingElement(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::NextSiblingElement
	static int _bind_NextSiblingElement(lua_State *L) {
		if (_lg_typecheck_NextSiblingElement_overload_1(L)) return _bind_NextSiblingElement_overload_1(L);
		if (_lg_typecheck_NextSiblingElement_overload_2(L)) return _bind_NextSiblingElement_overload_2(L);
		if (_lg_typecheck_NextSiblingElement_overload_3(L)) return _bind_NextSiblingElement_overload_3(L);
		if (_lg_typecheck_NextSiblingElement_overload_4(L)) return _bind_NextSiblingElement_overload_4(L);
		if (_lg_typecheck_NextSiblingElement_overload_5(L)) return _bind_NextSiblingElement_overload_5(L);
		if (_lg_typecheck_NextSiblingElement_overload_6(L)) return _bind_NextSiblingElement_overload_6(L);

		luaL_error(L, "error in function NextSiblingElement, cannot match any of the overloads for function NextSiblingElement:\n  NextSiblingElement()\n  NextSiblingElement()\n  NextSiblingElement(const char *)\n  NextSiblingElement(const char *)\n  NextSiblingElement(const std::string &)\n  NextSiblingElement(const std::string &)\n");
		return 0;
	}

	// const TiXmlElement * TiXmlNode::FirstChildElement() const
	static int _bind_FirstChildElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::FirstChildElement() const function, expected prototype:\nconst TiXmlElement * TiXmlNode::FirstChildElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::FirstChildElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->FirstChildElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::FirstChildElement()
	static int _bind_FirstChildElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::FirstChildElement() function, expected prototype:\nTiXmlElement * TiXmlNode::FirstChildElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::FirstChildElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->FirstChildElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// const TiXmlElement * TiXmlNode::FirstChildElement(const char * _value) const
	static int _bind_FirstChildElement_overload_3(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::FirstChildElement(const char * _value) const function, expected prototype:\nconst TiXmlElement * TiXmlNode::FirstChildElement(const char * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::FirstChildElement(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->FirstChildElement(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::FirstChildElement(const char * _value)
	static int _bind_FirstChildElement_overload_4(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::FirstChildElement(const char * _value) function, expected prototype:\nTiXmlElement * TiXmlNode::FirstChildElement(const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::FirstChildElement(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->FirstChildElement(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// const TiXmlElement * TiXmlNode::FirstChildElement(const std::string & _value) const
	static int _bind_FirstChildElement_overload_5(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::FirstChildElement(const std::string & _value) const function, expected prototype:\nconst TiXmlElement * TiXmlNode::FirstChildElement(const std::string & _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::FirstChildElement(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->FirstChildElement(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::FirstChildElement(const std::string & _value)
	static int _bind_FirstChildElement_overload_6(lua_State *L) {
		if (!_lg_typecheck_FirstChildElement_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::FirstChildElement(const std::string & _value) function, expected prototype:\nTiXmlElement * TiXmlNode::FirstChildElement(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::FirstChildElement(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->FirstChildElement(_value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::FirstChildElement
	static int _bind_FirstChildElement(lua_State *L) {
		if (_lg_typecheck_FirstChildElement_overload_1(L)) return _bind_FirstChildElement_overload_1(L);
		if (_lg_typecheck_FirstChildElement_overload_2(L)) return _bind_FirstChildElement_overload_2(L);
		if (_lg_typecheck_FirstChildElement_overload_3(L)) return _bind_FirstChildElement_overload_3(L);
		if (_lg_typecheck_FirstChildElement_overload_4(L)) return _bind_FirstChildElement_overload_4(L);
		if (_lg_typecheck_FirstChildElement_overload_5(L)) return _bind_FirstChildElement_overload_5(L);
		if (_lg_typecheck_FirstChildElement_overload_6(L)) return _bind_FirstChildElement_overload_6(L);

		luaL_error(L, "error in function FirstChildElement, cannot match any of the overloads for function FirstChildElement:\n  FirstChildElement()\n  FirstChildElement()\n  FirstChildElement(const char *)\n  FirstChildElement(const char *)\n  FirstChildElement(const std::string &)\n  FirstChildElement(const std::string &)\n");
		return 0;
	}

	// int TiXmlNode::Type() const
	static int _bind_Type(lua_State *L) {
		if (!_lg_typecheck_Type(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlNode::Type() const function, expected prototype:\nint TiXmlNode::Type() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlNode::Type() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const TiXmlDocument * TiXmlNode::GetDocument() const
	static int _bind_GetDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlNode::GetDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlNode::GetDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlNode::GetDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->GetDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlNode::GetDocument()
	static int _bind_GetDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlNode::GetDocument() function, expected prototype:\nTiXmlDocument * TiXmlNode::GetDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlNode::GetDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->GetDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::GetDocument
	static int _bind_GetDocument(lua_State *L) {
		if (_lg_typecheck_GetDocument_overload_1(L)) return _bind_GetDocument_overload_1(L);
		if (_lg_typecheck_GetDocument_overload_2(L)) return _bind_GetDocument_overload_2(L);

		luaL_error(L, "error in function GetDocument, cannot match any of the overloads for function GetDocument:\n  GetDocument()\n  GetDocument()\n");
		return 0;
	}

	// bool TiXmlNode::NoChildren() const
	static int _bind_NoChildren(lua_State *L) {
		if (!_lg_typecheck_NoChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlNode::NoChildren() const function, expected prototype:\nbool TiXmlNode::NoChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlNode::NoChildren() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->NoChildren();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlNode::ToDocument() const
	static int _bind_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlNode::ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlNode::ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlNode::ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlNode::ToDocument()
	static int _bind_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlNode::ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlNode::ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlNode::ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::ToDocument
	static int _bind_ToDocument(lua_State *L) {
		if (_lg_typecheck_ToDocument_overload_1(L)) return _bind_ToDocument_overload_1(L);
		if (_lg_typecheck_ToDocument_overload_2(L)) return _bind_ToDocument_overload_2(L);

		luaL_error(L, "error in function ToDocument, cannot match any of the overloads for function ToDocument:\n  ToDocument()\n  ToDocument()\n");
		return 0;
	}

	// const TiXmlElement * TiXmlNode::ToElement() const
	static int _bind_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlNode::ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::ToElement()
	static int _bind_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::ToElement() function, expected prototype:\nTiXmlElement * TiXmlNode::ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::ToElement
	static int _bind_ToElement(lua_State *L) {
		if (_lg_typecheck_ToElement_overload_1(L)) return _bind_ToElement_overload_1(L);
		if (_lg_typecheck_ToElement_overload_2(L)) return _bind_ToElement_overload_2(L);

		luaL_error(L, "error in function ToElement, cannot match any of the overloads for function ToElement:\n  ToElement()\n  ToElement()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlNode::ToComment() const
	static int _bind_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlNode::ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlNode::ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlNode::ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlNode::ToComment()
	static int _bind_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlNode::ToComment() function, expected prototype:\nTiXmlComment * TiXmlNode::ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlNode::ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::ToComment
	static int _bind_ToComment(lua_State *L) {
		if (_lg_typecheck_ToComment_overload_1(L)) return _bind_ToComment_overload_1(L);
		if (_lg_typecheck_ToComment_overload_2(L)) return _bind_ToComment_overload_2(L);

		luaL_error(L, "error in function ToComment, cannot match any of the overloads for function ToComment:\n  ToComment()\n  ToComment()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlNode::ToUnknown() const
	static int _bind_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlNode::ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlNode::ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlNode::ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlNode::ToUnknown()
	static int _bind_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlNode::ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlNode::ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlNode::ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::ToUnknown
	static int _bind_ToUnknown(lua_State *L) {
		if (_lg_typecheck_ToUnknown_overload_1(L)) return _bind_ToUnknown_overload_1(L);
		if (_lg_typecheck_ToUnknown_overload_2(L)) return _bind_ToUnknown_overload_2(L);

		luaL_error(L, "error in function ToUnknown, cannot match any of the overloads for function ToUnknown:\n  ToUnknown()\n  ToUnknown()\n");
		return 0;
	}

	// const TiXmlText * TiXmlNode::ToText() const
	static int _bind_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlNode::ToText() const function, expected prototype:\nconst TiXmlText * TiXmlNode::ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlNode::ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlNode::ToText()
	static int _bind_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlNode::ToText() function, expected prototype:\nTiXmlText * TiXmlNode::ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlNode::ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::ToText
	static int _bind_ToText(lua_State *L) {
		if (_lg_typecheck_ToText_overload_1(L)) return _bind_ToText_overload_1(L);
		if (_lg_typecheck_ToText_overload_2(L)) return _bind_ToText_overload_2(L);

		luaL_error(L, "error in function ToText, cannot match any of the overloads for function ToText:\n  ToText()\n  ToText()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlNode::ToDeclaration() const
	static int _bind_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlNode::ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlNode::ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlNode::ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlNode::ToDeclaration()
	static int _bind_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlNode::ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlNode::ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlNode::ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::ToDeclaration
	static int _bind_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_ToDeclaration_overload_1(L)) return _bind_ToDeclaration_overload_1(L);
		if (_lg_typecheck_ToDeclaration_overload_2(L)) return _bind_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function ToDeclaration, cannot match any of the overloads for function ToDeclaration:\n  ToDeclaration()\n  ToDeclaration()\n");
		return 0;
	}

	// TiXmlNode * TiXmlNode::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlNode::Clone() const function, expected prototype:\nTiXmlNode * TiXmlNode::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlNode::Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// bool TiXmlNode::Accept(TiXmlVisitor * visitor) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlNode::Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlNode::Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlNode::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlNode::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlNode::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlNode::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlNode::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlNode::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlNode::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlNode::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlNode::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlNode::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlNode::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// const TiXmlElement * TiXmlNode::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlNode::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlNode::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlNode::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlNode::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlNode::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlNode::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlNode::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlNode::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlNode::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlNode::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlNode::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlNode::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlNode::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlNode::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlNode::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlNode::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlNode::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlNode::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlNode::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlNode::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlNode::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlNode::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlNode::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlNode::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlNode::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlNode::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlNode::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlNode::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlNode::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// const TiXmlText * TiXmlNode::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlNode::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlNode::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlNode::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlNode::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlNode::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlNode::base_ToText() function, expected prototype:\nTiXmlText * TiXmlNode::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlNode::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlNode::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlNode::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlNode::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlNode::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlNode::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlNode::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlNode::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlNode::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlNode::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlNode* self=Luna< TiXmlBase >::checkSubType< TiXmlNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlNode::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlNode::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlNode::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}


	// Operator binds:

};

TiXmlNode* LunaTraits< TiXmlNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// TiXmlNode * TiXmlNode::Clone() const
	// bool TiXmlNode::Accept(TiXmlVisitor * visitor) const
	// void TiXmlNode::StreamIn(std::istream * in, std::string * tag)
	// void TiXmlBase::Print(FILE * cfile, int depth) const
	// const char * TiXmlBase::Parse(const char * p, TiXmlParsingData * data, TiXmlEncoding encoding)
}

void LunaTraits< TiXmlNode >::_bind_dtor(TiXmlNode* obj) {
	delete obj;
}

const char LunaTraits< TiXmlNode >::className[] = "TiXmlNode";
const char LunaTraits< TiXmlNode >::fullName[] = "TiXmlNode";
const char LunaTraits< TiXmlNode >::moduleName[] = "land";
const char* LunaTraits< TiXmlNode >::parents[] = {"land.TiXmlBase", 0};
const int LunaTraits< TiXmlNode >::hash = 90223382;
const int LunaTraits< TiXmlNode >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlNode >::methods[] = {
	{"Value", &luna_wrapper_TiXmlNode::_bind_Value},
	{"ValueStr", &luna_wrapper_TiXmlNode::_bind_ValueStr},
	{"ValueTStr", &luna_wrapper_TiXmlNode::_bind_ValueTStr},
	{"SetValue", &luna_wrapper_TiXmlNode::_bind_SetValue},
	{"Clear", &luna_wrapper_TiXmlNode::_bind_Clear},
	{"Parent", &luna_wrapper_TiXmlNode::_bind_Parent},
	{"FirstChild", &luna_wrapper_TiXmlNode::_bind_FirstChild},
	{"LastChild", &luna_wrapper_TiXmlNode::_bind_LastChild},
	{"IterateChildren", &luna_wrapper_TiXmlNode::_bind_IterateChildren},
	{"InsertEndChild", &luna_wrapper_TiXmlNode::_bind_InsertEndChild},
	{"LinkEndChild", &luna_wrapper_TiXmlNode::_bind_LinkEndChild},
	{"InsertBeforeChild", &luna_wrapper_TiXmlNode::_bind_InsertBeforeChild},
	{"InsertAfterChild", &luna_wrapper_TiXmlNode::_bind_InsertAfterChild},
	{"ReplaceChild", &luna_wrapper_TiXmlNode::_bind_ReplaceChild},
	{"RemoveChild", &luna_wrapper_TiXmlNode::_bind_RemoveChild},
	{"PreviousSibling", &luna_wrapper_TiXmlNode::_bind_PreviousSibling},
	{"NextSibling", &luna_wrapper_TiXmlNode::_bind_NextSibling},
	{"NextSiblingElement", &luna_wrapper_TiXmlNode::_bind_NextSiblingElement},
	{"FirstChildElement", &luna_wrapper_TiXmlNode::_bind_FirstChildElement},
	{"Type", &luna_wrapper_TiXmlNode::_bind_Type},
	{"GetDocument", &luna_wrapper_TiXmlNode::_bind_GetDocument},
	{"NoChildren", &luna_wrapper_TiXmlNode::_bind_NoChildren},
	{"ToDocument", &luna_wrapper_TiXmlNode::_bind_ToDocument},
	{"ToElement", &luna_wrapper_TiXmlNode::_bind_ToElement},
	{"ToComment", &luna_wrapper_TiXmlNode::_bind_ToComment},
	{"ToUnknown", &luna_wrapper_TiXmlNode::_bind_ToUnknown},
	{"ToText", &luna_wrapper_TiXmlNode::_bind_ToText},
	{"ToDeclaration", &luna_wrapper_TiXmlNode::_bind_ToDeclaration},
	{"Clone", &luna_wrapper_TiXmlNode::_bind_Clone},
	{"Accept", &luna_wrapper_TiXmlNode::_bind_Accept},
	{"base_ToDocument", &luna_wrapper_TiXmlNode::_bind_base_ToDocument},
	{"base_ToElement", &luna_wrapper_TiXmlNode::_bind_base_ToElement},
	{"base_ToComment", &luna_wrapper_TiXmlNode::_bind_base_ToComment},
	{"base_ToUnknown", &luna_wrapper_TiXmlNode::_bind_base_ToUnknown},
	{"base_ToText", &luna_wrapper_TiXmlNode::_bind_base_ToText},
	{"base_ToDeclaration", &luna_wrapper_TiXmlNode::_bind_base_ToDeclaration},
	{"fromVoid", &luna_wrapper_TiXmlNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlNode::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlNode >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlNode::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlNode >::enumValues[] = {
	{"DOCUMENT", TiXmlNode::DOCUMENT},
	{"ELEMENT", TiXmlNode::ELEMENT},
	{"COMMENT", TiXmlNode::COMMENT},
	{"UNKNOWN", TiXmlNode::UNKNOWN},
	{"TEXT", TiXmlNode::TEXT},
	{"DECLARATION", TiXmlNode::DECLARATION},
	{"TYPECOUNT", TiXmlNode::TYPECOUNT},
	{0,0}
};


