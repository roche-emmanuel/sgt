#include <plug_common.h>

#include <luna/wrappers/wrapper_wxXmlNode.h>

class luna_wrapper_wxXmlNode {
public:
	typedef Luna< wxXmlNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxXmlNode,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64848530) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxXmlNode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* rhs =(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
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

		wxXmlNode* self= (wxXmlNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxXmlNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64848530) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxXmlNode >::check(L,1));
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

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxXmlNode");
		
		return luna_dynamicCast(L,converters,"wxXmlNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,64848530)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxXmlNode >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,23837631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxXmlAttribute >::check(L,5)) ) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,64848530)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxXmlNode >::check(L,6)) ) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64848530) ) return false;
		if( (!(Luna< wxXmlNode >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxXmlNode >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,23837631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxXmlAttribute >::check(L,6)) ) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,64848530)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxXmlNode >::check(L,7)) ) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,64848530) ) return false;
		if( (!(Luna< wxXmlNode >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23837631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxXmlAttribute >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttribute_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDepth(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNoConversion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNodeContent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertChildAfter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsWhitespaceOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttributes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23837631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNoConversion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23837631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxXmlAttribute >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteAttribute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertChildAfter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,64848530)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,64848530)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64848530) ) return false;
		return true;
	}


	// Constructor binds:
	// wxXmlNode::wxXmlNode(wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1)
	static wxXmlNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1) function, expected prototype:\nwxXmlNode::wxXmlNode(wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1)\nClass arguments details:\narg 1 ID = 64848530\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 23837631\narg 6 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxXmlNode* parent=(Luna< wxXmlNode >::check(L,1));
		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,2);
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString content(lua_tostring(L,4),lua_objlen(L,4));
		wxXmlAttribute* attrs=luatop>4 ? (Luna< wxXmlAttribute >::check(L,5)) : (wxXmlAttribute*)NULL;
		wxXmlNode* next=luatop>5 ? (Luna< wxXmlNode >::check(L,6)) : (wxXmlNode*)NULL;
		int lineNo=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		return new wxXmlNode(parent, type, name, content, attrs, next, lineNo);
	}

	// wxXmlNode::wxXmlNode(wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1)
	static wxXmlNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1) function, expected prototype:\nwxXmlNode::wxXmlNode(wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,1);
		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString content(lua_tostring(L,3),lua_objlen(L,3));
		int lineNo=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wxXmlNode(type, name, content, lineNo);
	}

	// wxXmlNode::wxXmlNode(const wxXmlNode & node)
	static wxXmlNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(const wxXmlNode & node) function, expected prototype:\nwxXmlNode::wxXmlNode(const wxXmlNode & node)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxXmlNode* node_ptr=(Luna< wxXmlNode >::check(L,1));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in wxXmlNode::wxXmlNode function");
		}
		const wxXmlNode & node=*node_ptr;

		return new wxXmlNode(node);
	}

	// wxXmlNode::wxXmlNode(lua_Table * data, wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1)
	static wxXmlNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(lua_Table * data, wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1) function, expected prototype:\nwxXmlNode::wxXmlNode(lua_Table * data, wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1)\nClass arguments details:\narg 2 ID = 64848530\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 23837631\narg 7 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxXmlNode* parent=(Luna< wxXmlNode >::check(L,2));
		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,3);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString content(lua_tostring(L,5),lua_objlen(L,5));
		wxXmlAttribute* attrs=luatop>5 ? (Luna< wxXmlAttribute >::check(L,6)) : (wxXmlAttribute*)NULL;
		wxXmlNode* next=luatop>6 ? (Luna< wxXmlNode >::check(L,7)) : (wxXmlNode*)NULL;
		int lineNo=luatop>7 ? (int)lua_tointeger(L,8) : (int)-1;

		return new wrapper_wxXmlNode(L,NULL, parent, type, name, content, attrs, next, lineNo);
	}

	// wxXmlNode::wxXmlNode(lua_Table * data, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1)
	static wxXmlNode* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(lua_Table * data, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1) function, expected prototype:\nwxXmlNode::wxXmlNode(lua_Table * data, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1)\nClass arguments details:\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,2);
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString content(lua_tostring(L,4),lua_objlen(L,4));
		int lineNo=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;

		return new wrapper_wxXmlNode(L,NULL, type, name, content, lineNo);
	}

	// wxXmlNode::wxXmlNode(lua_Table * data, const wxXmlNode & node)
	static wxXmlNode* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode::wxXmlNode(lua_Table * data, const wxXmlNode & node) function, expected prototype:\nwxXmlNode::wxXmlNode(lua_Table * data, const wxXmlNode & node)\nClass arguments details:\narg 2 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxXmlNode* node_ptr=(Luna< wxXmlNode >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in wxXmlNode::wxXmlNode function");
		}
		const wxXmlNode & node=*node_ptr;

		return new wrapper_wxXmlNode(L,NULL, node);
	}

	// Overload binder for wxXmlNode::wxXmlNode
	static wxXmlNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxXmlNode, cannot match any of the overloads for function wxXmlNode:\n  wxXmlNode(wxXmlNode *, wxXmlNodeType, const wxString &, const wxString &, wxXmlAttribute *, wxXmlNode *, int)\n  wxXmlNode(wxXmlNodeType, const wxString &, const wxString &, int)\n  wxXmlNode(const wxXmlNode &)\n  wxXmlNode(lua_Table *, wxXmlNode *, wxXmlNodeType, const wxString &, const wxString &, wxXmlAttribute *, wxXmlNode *, int)\n  wxXmlNode(lua_Table *, wxXmlNodeType, const wxString &, const wxString &, int)\n  wxXmlNode(lua_Table *, const wxXmlNode &)\n");
		return NULL;
	}


	// Function binds:
	// void wxXmlNode::AddAttribute(const wxString & name, const wxString & value)
	static int _bind_AddAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::AddAttribute(const wxString & name, const wxString & value) function, expected prototype:\nvoid wxXmlNode::AddAttribute(const wxString & name, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::AddAttribute(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddAttribute(name, value);

		return 0;
	}

	// void wxXmlNode::AddAttribute(wxXmlAttribute * attr)
	static int _bind_AddAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::AddAttribute(wxXmlAttribute * attr) function, expected prototype:\nvoid wxXmlNode::AddAttribute(wxXmlAttribute * attr)\nClass arguments details:\narg 1 ID = 23837631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlAttribute* attr=(Luna< wxXmlAttribute >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::AddAttribute(wxXmlAttribute *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddAttribute(attr);

		return 0;
	}

	// Overload binder for wxXmlNode::AddAttribute
	static int _bind_AddAttribute(lua_State *L) {
		if (_lg_typecheck_AddAttribute_overload_1(L)) return _bind_AddAttribute_overload_1(L);
		if (_lg_typecheck_AddAttribute_overload_2(L)) return _bind_AddAttribute_overload_2(L);

		luaL_error(L, "error in function AddAttribute, cannot match any of the overloads for function AddAttribute:\n  AddAttribute(const wxString &, const wxString &)\n  AddAttribute(wxXmlAttribute *)\n");
		return 0;
	}

	// void wxXmlNode::AddChild(wxXmlNode * child)
	static int _bind_AddChild(lua_State *L) {
		if (!_lg_typecheck_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::AddChild(wxXmlNode * child) function, expected prototype:\nvoid wxXmlNode::AddChild(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::AddChild(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddChild(child);

		return 0;
	}

	// bool wxXmlNode::DeleteAttribute(const wxString & name)
	static int _bind_DeleteAttribute(lua_State *L) {
		if (!_lg_typecheck_DeleteAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::DeleteAttribute(const wxString & name) function, expected prototype:\nbool wxXmlNode::DeleteAttribute(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::DeleteAttribute(const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteAttribute(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::GetAttribute(const wxString & attrName, wxString * value) const
	static int _bind_GetAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::GetAttribute(const wxString & attrName, wxString * value) const function, expected prototype:\nbool wxXmlNode::GetAttribute(const wxString & attrName, wxString * value) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString attrName(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::GetAttribute(const wxString &, wxString *) const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetAttribute(attrName, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxXmlNode::GetAttribute(const wxString & attrName, const wxString & defaultVal = wxEmptyString) const
	static int _bind_GetAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlNode::GetAttribute(const wxString & attrName, const wxString & defaultVal = wxEmptyString) const function, expected prototype:\nwxString wxXmlNode::GetAttribute(const wxString & attrName, const wxString & defaultVal = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString attrName(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultVal(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlNode::GetAttribute(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetAttribute(attrName, defaultVal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxXmlNode::GetAttribute
	static int _bind_GetAttribute(lua_State *L) {
		if (_lg_typecheck_GetAttribute_overload_1(L)) return _bind_GetAttribute_overload_1(L);
		if (_lg_typecheck_GetAttribute_overload_2(L)) return _bind_GetAttribute_overload_2(L);

		luaL_error(L, "error in function GetAttribute, cannot match any of the overloads for function GetAttribute:\n  GetAttribute(const wxString &, wxString *)\n  GetAttribute(const wxString &, const wxString &)\n");
		return 0;
	}

	// wxXmlAttribute * wxXmlNode::GetAttributes() const
	static int _bind_GetAttributes(lua_State *L) {
		if (!_lg_typecheck_GetAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlAttribute * wxXmlNode::GetAttributes() const function, expected prototype:\nwxXmlAttribute * wxXmlNode::GetAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlAttribute * wxXmlNode::GetAttributes() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlAttribute * lret = self->GetAttributes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// wxXmlNode * wxXmlNode::GetChildren() const
	static int _bind_GetChildren(lua_State *L) {
		if (!_lg_typecheck_GetChildren(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlNode::GetChildren() const function, expected prototype:\nwxXmlNode * wxXmlNode::GetChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlNode::GetChildren() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlNode * lret = self->GetChildren();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxXmlNode::GetContent() const
	static int _bind_GetContent(lua_State *L) {
		if (!_lg_typecheck_GetContent(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxXmlNode::GetContent() const function, expected prototype:\nconst wxString & wxXmlNode::GetContent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxXmlNode::GetContent() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetContent();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxXmlNode::GetDepth(wxXmlNode * grandparent = NULL) const
	static int _bind_GetDepth(lua_State *L) {
		if (!_lg_typecheck_GetDepth(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlNode::GetDepth(wxXmlNode * grandparent = NULL) const function, expected prototype:\nint wxXmlNode::GetDepth(wxXmlNode * grandparent = NULL) const\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxXmlNode* grandparent=luatop>1 ? (Luna< wxXmlNode >::check(L,2)) : (wxXmlNode*)NULL;

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlNode::GetDepth(wxXmlNode *) const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDepth(grandparent);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxXmlNode::GetNoConversion() const
	static int _bind_GetNoConversion(lua_State *L) {
		if (!_lg_typecheck_GetNoConversion(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::GetNoConversion() const function, expected prototype:\nbool wxXmlNode::GetNoConversion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::GetNoConversion() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetNoConversion();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxXmlNode::GetLineNumber() const
	static int _bind_GetLineNumber(lua_State *L) {
		if (!_lg_typecheck_GetLineNumber(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlNode::GetLineNumber() const function, expected prototype:\nint wxXmlNode::GetLineNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlNode::GetLineNumber() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetLineNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxXmlNode::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxXmlNode::GetName() const function, expected prototype:\nconst wxString & wxXmlNode::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxXmlNode::GetName() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxXmlNode * wxXmlNode::GetNext() const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlNode::GetNext() const function, expected prototype:\nwxXmlNode * wxXmlNode::GetNext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlNode::GetNext() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlNode * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// wxString wxXmlNode::GetNodeContent() const
	static int _bind_GetNodeContent(lua_State *L) {
		if (!_lg_typecheck_GetNodeContent(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlNode::GetNodeContent() const function, expected prototype:\nwxString wxXmlNode::GetNodeContent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlNode::GetNodeContent() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetNodeContent();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxXmlNode * wxXmlNode::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode * wxXmlNode::GetParent() const function, expected prototype:\nwxXmlNode * wxXmlNode::GetParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlNode * wxXmlNode::GetParent() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlNode * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// wxXmlNodeType wxXmlNode::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNodeType wxXmlNode::GetType() const function, expected prototype:\nwxXmlNodeType wxXmlNode::GetType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlNodeType wxXmlNode::GetType() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlNodeType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxXmlNode::HasAttribute(const wxString & attrName) const
	static int _bind_HasAttribute(lua_State *L) {
		if (!_lg_typecheck_HasAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::HasAttribute(const wxString & attrName) const function, expected prototype:\nbool wxXmlNode::HasAttribute(const wxString & attrName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString attrName(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::HasAttribute(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasAttribute(attrName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode)
	static int _bind_InsertChild(lua_State *L) {
		if (!_lg_typecheck_InsertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode) function, expected prototype:\nbool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* followingNode=(Luna< wxXmlNode >::check(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::InsertChild(wxXmlNode *, wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertChild(child, followingNode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)
	static int _bind_InsertChildAfter(lua_State *L) {
		if (!_lg_typecheck_InsertChildAfter(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode) function, expected prototype:\nbool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* precedingNode=(Luna< wxXmlNode >::check(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::InsertChildAfter(wxXmlNode *, wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertChildAfter(child, precedingNode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::IsWhitespaceOnly() const
	static int _bind_IsWhitespaceOnly(lua_State *L) {
		if (!_lg_typecheck_IsWhitespaceOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::IsWhitespaceOnly() const function, expected prototype:\nbool wxXmlNode::IsWhitespaceOnly() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::IsWhitespaceOnly() const. Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsWhitespaceOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::RemoveChild(wxXmlNode * child)
	static int _bind_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::RemoveChild(wxXmlNode * child) function, expected prototype:\nbool wxXmlNode::RemoveChild(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::RemoveChild(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxXmlNode::SetAttributes(wxXmlAttribute * attr)
	static int _bind_SetAttributes(lua_State *L) {
		if (!_lg_typecheck_SetAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetAttributes(wxXmlAttribute * attr) function, expected prototype:\nvoid wxXmlNode::SetAttributes(wxXmlAttribute * attr)\nClass arguments details:\narg 1 ID = 23837631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlAttribute* attr=(Luna< wxXmlAttribute >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetAttributes(wxXmlAttribute *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttributes(attr);

		return 0;
	}

	// void wxXmlNode::SetChildren(wxXmlNode * child)
	static int _bind_SetChildren(lua_State *L) {
		if (!_lg_typecheck_SetChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetChildren(wxXmlNode * child) function, expected prototype:\nvoid wxXmlNode::SetChildren(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetChildren(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetChildren(child);

		return 0;
	}

	// void wxXmlNode::SetContent(const wxString & con)
	static int _bind_SetContent(lua_State *L) {
		if (!_lg_typecheck_SetContent(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetContent(const wxString & con) function, expected prototype:\nvoid wxXmlNode::SetContent(const wxString & con)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString con(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetContent(const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetContent(con);

		return 0;
	}

	// void wxXmlNode::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetName(const wxString & name) function, expected prototype:\nvoid wxXmlNode::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxXmlNode::SetNext(wxXmlNode * next)
	static int _bind_SetNext(lua_State *L) {
		if (!_lg_typecheck_SetNext(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetNext(wxXmlNode * next) function, expected prototype:\nvoid wxXmlNode::SetNext(wxXmlNode * next)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* next=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetNext(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNext(next);

		return 0;
	}

	// void wxXmlNode::SetNoConversion(bool noconversion)
	static int _bind_SetNoConversion(lua_State *L) {
		if (!_lg_typecheck_SetNoConversion(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetNoConversion(bool noconversion) function, expected prototype:\nvoid wxXmlNode::SetNoConversion(bool noconversion)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool noconversion=(bool)(lua_toboolean(L,2)==1);

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetNoConversion(bool). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNoConversion(noconversion);

		return 0;
	}

	// void wxXmlNode::SetParent(wxXmlNode * parent)
	static int _bind_SetParent(lua_State *L) {
		if (!_lg_typecheck_SetParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetParent(wxXmlNode * parent) function, expected prototype:\nvoid wxXmlNode::SetParent(wxXmlNode * parent)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* parent=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetParent(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParent(parent);

		return 0;
	}

	// void wxXmlNode::SetType(wxXmlNodeType type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::SetType(wxXmlNodeType type) function, expected prototype:\nvoid wxXmlNode::SetType(wxXmlNodeType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNodeType type=(wxXmlNodeType)lua_tointeger(L,2);

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::SetType(wxXmlNodeType). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetType(type);

		return 0;
	}

	// void wxXmlNode::base_AddAttribute(const wxString & name, const wxString & value)
	static int _bind_base_AddAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_AddAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::base_AddAttribute(const wxString & name, const wxString & value) function, expected prototype:\nvoid wxXmlNode::base_AddAttribute(const wxString & name, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::base_AddAttribute(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxXmlNode::AddAttribute(name, value);

		return 0;
	}

	// void wxXmlNode::base_AddAttribute(wxXmlAttribute * attr)
	static int _bind_base_AddAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_AddAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::base_AddAttribute(wxXmlAttribute * attr) function, expected prototype:\nvoid wxXmlNode::base_AddAttribute(wxXmlAttribute * attr)\nClass arguments details:\narg 1 ID = 23837631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlAttribute* attr=(Luna< wxXmlAttribute >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::base_AddAttribute(wxXmlAttribute *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxXmlNode::AddAttribute(attr);

		return 0;
	}

	// Overload binder for wxXmlNode::base_AddAttribute
	static int _bind_base_AddAttribute(lua_State *L) {
		if (_lg_typecheck_base_AddAttribute_overload_1(L)) return _bind_base_AddAttribute_overload_1(L);
		if (_lg_typecheck_base_AddAttribute_overload_2(L)) return _bind_base_AddAttribute_overload_2(L);

		luaL_error(L, "error in function base_AddAttribute, cannot match any of the overloads for function base_AddAttribute:\n  base_AddAttribute(const wxString &, const wxString &)\n  base_AddAttribute(wxXmlAttribute *)\n");
		return 0;
	}

	// void wxXmlNode::base_AddChild(wxXmlNode * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlNode::base_AddChild(wxXmlNode * child) function, expected prototype:\nvoid wxXmlNode::base_AddChild(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlNode::base_AddChild(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxXmlNode::AddChild(child);

		return 0;
	}

	// bool wxXmlNode::base_DeleteAttribute(const wxString & name)
	static int _bind_base_DeleteAttribute(lua_State *L) {
		if (!_lg_typecheck_base_DeleteAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::base_DeleteAttribute(const wxString & name) function, expected prototype:\nbool wxXmlNode::base_DeleteAttribute(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::base_DeleteAttribute(const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxXmlNode::DeleteAttribute(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::base_InsertChild(wxXmlNode * child, wxXmlNode * followingNode)
	static int _bind_base_InsertChild(lua_State *L) {
		if (!_lg_typecheck_base_InsertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::base_InsertChild(wxXmlNode * child, wxXmlNode * followingNode) function, expected prototype:\nbool wxXmlNode::base_InsertChild(wxXmlNode * child, wxXmlNode * followingNode)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* followingNode=(Luna< wxXmlNode >::check(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::base_InsertChild(wxXmlNode *, wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxXmlNode::InsertChild(child, followingNode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::base_InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)
	static int _bind_base_InsertChildAfter(lua_State *L) {
		if (!_lg_typecheck_base_InsertChildAfter(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::base_InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode) function, expected prototype:\nbool wxXmlNode::base_InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)\nClass arguments details:\narg 1 ID = 64848530\narg 2 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));
		wxXmlNode* precedingNode=(Luna< wxXmlNode >::check(L,3));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::base_InsertChildAfter(wxXmlNode *, wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxXmlNode::InsertChildAfter(child, precedingNode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlNode::base_RemoveChild(wxXmlNode * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlNode::base_RemoveChild(wxXmlNode * child) function, expected prototype:\nbool wxXmlNode::base_RemoveChild(wxXmlNode * child)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlNode* child=(Luna< wxXmlNode >::check(L,2));

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlNode::base_RemoveChild(wxXmlNode *). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxXmlNode::RemoveChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// wxXmlNode & wxXmlNode::operator=(const wxXmlNode & node)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlNode & wxXmlNode::operator=(const wxXmlNode & node) function, expected prototype:\nwxXmlNode & wxXmlNode::operator=(const wxXmlNode & node)\nClass arguments details:\narg 1 ID = 64848530\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxXmlNode* node_ptr=(Luna< wxXmlNode >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in wxXmlNode::operator= function");
		}
		const wxXmlNode & node=*node_ptr;

		wxXmlNode* self=(Luna< wxXmlNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlNode & wxXmlNode::operator=(const wxXmlNode &). Got : '%s'\n%s",typeid(Luna< wxXmlNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxXmlNode* lret = &self->operator=(node);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}


};

wxXmlNode* LunaTraits< wxXmlNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxXmlNode::_bind_ctor(L);
}

void LunaTraits< wxXmlNode >::_bind_dtor(wxXmlNode* obj) {
	delete obj;
}

const char LunaTraits< wxXmlNode >::className[] = "wxXmlNode";
const char LunaTraits< wxXmlNode >::fullName[] = "wxXmlNode";
const char LunaTraits< wxXmlNode >::moduleName[] = "wx";
const char* LunaTraits< wxXmlNode >::parents[] = {0};
const int LunaTraits< wxXmlNode >::hash = 64848530;
const int LunaTraits< wxXmlNode >::uniqueIDs[] = {64848530,0};

luna_RegType LunaTraits< wxXmlNode >::methods[] = {
	{"AddAttribute", &luna_wrapper_wxXmlNode::_bind_AddAttribute},
	{"AddChild", &luna_wrapper_wxXmlNode::_bind_AddChild},
	{"DeleteAttribute", &luna_wrapper_wxXmlNode::_bind_DeleteAttribute},
	{"GetAttribute", &luna_wrapper_wxXmlNode::_bind_GetAttribute},
	{"GetAttributes", &luna_wrapper_wxXmlNode::_bind_GetAttributes},
	{"GetChildren", &luna_wrapper_wxXmlNode::_bind_GetChildren},
	{"GetContent", &luna_wrapper_wxXmlNode::_bind_GetContent},
	{"GetDepth", &luna_wrapper_wxXmlNode::_bind_GetDepth},
	{"GetNoConversion", &luna_wrapper_wxXmlNode::_bind_GetNoConversion},
	{"GetLineNumber", &luna_wrapper_wxXmlNode::_bind_GetLineNumber},
	{"GetName", &luna_wrapper_wxXmlNode::_bind_GetName},
	{"GetNext", &luna_wrapper_wxXmlNode::_bind_GetNext},
	{"GetNodeContent", &luna_wrapper_wxXmlNode::_bind_GetNodeContent},
	{"GetParent", &luna_wrapper_wxXmlNode::_bind_GetParent},
	{"GetType", &luna_wrapper_wxXmlNode::_bind_GetType},
	{"HasAttribute", &luna_wrapper_wxXmlNode::_bind_HasAttribute},
	{"InsertChild", &luna_wrapper_wxXmlNode::_bind_InsertChild},
	{"InsertChildAfter", &luna_wrapper_wxXmlNode::_bind_InsertChildAfter},
	{"IsWhitespaceOnly", &luna_wrapper_wxXmlNode::_bind_IsWhitespaceOnly},
	{"RemoveChild", &luna_wrapper_wxXmlNode::_bind_RemoveChild},
	{"SetAttributes", &luna_wrapper_wxXmlNode::_bind_SetAttributes},
	{"SetChildren", &luna_wrapper_wxXmlNode::_bind_SetChildren},
	{"SetContent", &luna_wrapper_wxXmlNode::_bind_SetContent},
	{"SetName", &luna_wrapper_wxXmlNode::_bind_SetName},
	{"SetNext", &luna_wrapper_wxXmlNode::_bind_SetNext},
	{"SetNoConversion", &luna_wrapper_wxXmlNode::_bind_SetNoConversion},
	{"SetParent", &luna_wrapper_wxXmlNode::_bind_SetParent},
	{"SetType", &luna_wrapper_wxXmlNode::_bind_SetType},
	{"base_AddAttribute", &luna_wrapper_wxXmlNode::_bind_base_AddAttribute},
	{"base_AddChild", &luna_wrapper_wxXmlNode::_bind_base_AddChild},
	{"base_DeleteAttribute", &luna_wrapper_wxXmlNode::_bind_base_DeleteAttribute},
	{"base_InsertChild", &luna_wrapper_wxXmlNode::_bind_base_InsertChild},
	{"base_InsertChildAfter", &luna_wrapper_wxXmlNode::_bind_base_InsertChildAfter},
	{"base_RemoveChild", &luna_wrapper_wxXmlNode::_bind_base_RemoveChild},
	{"op_assign", &luna_wrapper_wxXmlNode::_bind_op_assign},
	{"dynCast", &luna_wrapper_wxXmlNode::_bind_dynCast},
	{"__eq", &luna_wrapper_wxXmlNode::_bind___eq},
	{"fromVoid", &luna_wrapper_wxXmlNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxXmlNode::_bind_asVoid},
	{"getTable", &luna_wrapper_wxXmlNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxXmlNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxXmlNode >::enumValues[] = {
	{0,0}
};


