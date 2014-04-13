#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlDocument.h>

class luna_wrapper_TiXmlDocument {
public:
	typedef Luna< TiXmlDocument > luna_t;

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

		TiXmlDocument* self= (TiXmlDocument*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlDocument >::push(L,self,false);
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
		//TiXmlDocument* ptr= dynamic_cast< TiXmlDocument* >(Luna< TiXmlBase >::check(L,1));
		TiXmlDocument* ptr= luna_caster< TiXmlBase, TiXmlDocument >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlDocument >::push(L,ptr,false);
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

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_LoadFile_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RootElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RootElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ErrorDesc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ErrorId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ErrorRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ErrorCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTabSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TabSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Print(lua_State *L) {
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

	inline static bool _lg_typecheck_Accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86845197)) ) return false;
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

	inline static bool _lg_typecheck_base_ToDocument_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDocument_overload_2(lua_State *L) {
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
	// TiXmlDocument::TiXmlDocument()
	static TiXmlDocument* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument() function, expected prototype:\nTiXmlDocument::TiXmlDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlDocument();
	}

	// TiXmlDocument::TiXmlDocument(const char * documentName)
	static TiXmlDocument* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(const char * documentName) function, expected prototype:\nTiXmlDocument::TiXmlDocument(const char * documentName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * documentName=(const char *)lua_tostring(L,1);

		return new TiXmlDocument(documentName);
	}

	// TiXmlDocument::TiXmlDocument(const std::string & documentName)
	static TiXmlDocument* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(const std::string & documentName) function, expected prototype:\nTiXmlDocument::TiXmlDocument(const std::string & documentName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string documentName(lua_tostring(L,1),lua_objlen(L,1));

		return new TiXmlDocument(documentName);
	}

	// TiXmlDocument::TiXmlDocument(const TiXmlDocument & copy)
	static TiXmlDocument* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(const TiXmlDocument & copy) function, expected prototype:\nTiXmlDocument::TiXmlDocument(const TiXmlDocument & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlDocument::TiXmlDocument function");
		}
		const TiXmlDocument & copy=*copy_ptr;

		return new TiXmlDocument(copy);
	}

	// TiXmlDocument::TiXmlDocument(lua_Table * data)
	static TiXmlDocument* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(lua_Table * data) function, expected prototype:\nTiXmlDocument::TiXmlDocument(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlDocument(L,NULL);
	}

	// TiXmlDocument::TiXmlDocument(lua_Table * data, const char * documentName)
	static TiXmlDocument* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(lua_Table * data, const char * documentName) function, expected prototype:\nTiXmlDocument::TiXmlDocument(lua_Table * data, const char * documentName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * documentName=(const char *)lua_tostring(L,2);

		return new wrapper_TiXmlDocument(L,NULL, documentName);
	}

	// TiXmlDocument::TiXmlDocument(lua_Table * data, const std::string & documentName)
	static TiXmlDocument* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(lua_Table * data, const std::string & documentName) function, expected prototype:\nTiXmlDocument::TiXmlDocument(lua_Table * data, const std::string & documentName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string documentName(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_TiXmlDocument(L,NULL, documentName);
	}

	// TiXmlDocument::TiXmlDocument(lua_Table * data, const TiXmlDocument & copy)
	static TiXmlDocument* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument::TiXmlDocument(lua_Table * data, const TiXmlDocument & copy) function, expected prototype:\nTiXmlDocument::TiXmlDocument(lua_Table * data, const TiXmlDocument & copy)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlDocument::TiXmlDocument function");
		}
		const TiXmlDocument & copy=*copy_ptr;

		return new wrapper_TiXmlDocument(L,NULL, copy);
	}

	// Overload binder for TiXmlDocument::TiXmlDocument
	static TiXmlDocument* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function TiXmlDocument, cannot match any of the overloads for function TiXmlDocument:\n  TiXmlDocument()\n  TiXmlDocument(const char *)\n  TiXmlDocument(const std::string &)\n  TiXmlDocument(const TiXmlDocument &)\n  TiXmlDocument(lua_Table *)\n  TiXmlDocument(lua_Table *, const char *)\n  TiXmlDocument(lua_Table *, const std::string &)\n  TiXmlDocument(lua_Table *, const TiXmlDocument &)\n");
		return NULL;
	}


	// Function binds:
	// bool TiXmlDocument::LoadFile(TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING)
	static int _bind_LoadFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::LoadFile(TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING) function, expected prototype:\nbool TiXmlDocument::LoadFile(TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		TiXmlEncoding encoding=luatop>1 ? (TiXmlEncoding)lua_tointeger(L,2) : (TiXmlEncoding)TIXML_DEFAULT_ENCODING;

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::LoadFile(TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlDocument::LoadFile(const char * filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING)
	static int _bind_LoadFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::LoadFile(const char * filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING) function, expected prototype:\nbool TiXmlDocument::LoadFile(const char * filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * filename=(const char *)lua_tostring(L,2);
		TiXmlEncoding encoding=luatop>2 ? (TiXmlEncoding)lua_tointeger(L,3) : (TiXmlEncoding)TIXML_DEFAULT_ENCODING;

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::LoadFile(const char *, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(filename, encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlDocument::LoadFile(const std::string & filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING)
	static int _bind_LoadFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::LoadFile(const std::string & filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING) function, expected prototype:\nbool TiXmlDocument::LoadFile(const std::string & filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		TiXmlEncoding encoding=luatop>2 ? (TiXmlEncoding)lua_tointeger(L,3) : (TiXmlEncoding)TIXML_DEFAULT_ENCODING;

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::LoadFile(const std::string &, TiXmlEncoding). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(filename, encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlDocument::LoadFile
	static int _bind_LoadFile(lua_State *L) {
		if (_lg_typecheck_LoadFile_overload_1(L)) return _bind_LoadFile_overload_1(L);
		if (_lg_typecheck_LoadFile_overload_2(L)) return _bind_LoadFile_overload_2(L);
		if (_lg_typecheck_LoadFile_overload_3(L)) return _bind_LoadFile_overload_3(L);

		luaL_error(L, "error in function LoadFile, cannot match any of the overloads for function LoadFile:\n  LoadFile(TiXmlEncoding)\n  LoadFile(const char *, TiXmlEncoding)\n  LoadFile(const std::string &, TiXmlEncoding)\n");
		return 0;
	}

	// bool TiXmlDocument::SaveFile() const
	static int _bind_SaveFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::SaveFile() const function, expected prototype:\nbool TiXmlDocument::SaveFile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::SaveFile() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlDocument::SaveFile(const char * filename) const
	static int _bind_SaveFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::SaveFile(const char * filename) const function, expected prototype:\nbool TiXmlDocument::SaveFile(const char * filename) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * filename=(const char *)lua_tostring(L,2);

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::SaveFile(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlDocument::SaveFile(const std::string & filename) const
	static int _bind_SaveFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::SaveFile(const std::string & filename) const function, expected prototype:\nbool TiXmlDocument::SaveFile(const std::string & filename) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::SaveFile(const std::string &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlDocument::SaveFile
	static int _bind_SaveFile(lua_State *L) {
		if (_lg_typecheck_SaveFile_overload_1(L)) return _bind_SaveFile_overload_1(L);
		if (_lg_typecheck_SaveFile_overload_2(L)) return _bind_SaveFile_overload_2(L);
		if (_lg_typecheck_SaveFile_overload_3(L)) return _bind_SaveFile_overload_3(L);

		luaL_error(L, "error in function SaveFile, cannot match any of the overloads for function SaveFile:\n  SaveFile()\n  SaveFile(const char *)\n  SaveFile(const std::string &)\n");
		return 0;
	}

	// const TiXmlElement * TiXmlDocument::RootElement() const
	static int _bind_RootElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_RootElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlDocument::RootElement() const function, expected prototype:\nconst TiXmlElement * TiXmlDocument::RootElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlDocument::RootElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->RootElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlDocument::RootElement()
	static int _bind_RootElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_RootElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlDocument::RootElement() function, expected prototype:\nTiXmlElement * TiXmlDocument::RootElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlDocument::RootElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->RootElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::RootElement
	static int _bind_RootElement(lua_State *L) {
		if (_lg_typecheck_RootElement_overload_1(L)) return _bind_RootElement_overload_1(L);
		if (_lg_typecheck_RootElement_overload_2(L)) return _bind_RootElement_overload_2(L);

		luaL_error(L, "error in function RootElement, cannot match any of the overloads for function RootElement:\n  RootElement()\n  RootElement()\n");
		return 0;
	}

	// bool TiXmlDocument::Error() const
	static int _bind_Error(lua_State *L) {
		if (!_lg_typecheck_Error(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::Error() const function, expected prototype:\nbool TiXmlDocument::Error() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::Error() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Error();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * TiXmlDocument::ErrorDesc() const
	static int _bind_ErrorDesc(lua_State *L) {
		if (!_lg_typecheck_ErrorDesc(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlDocument::ErrorDesc() const function, expected prototype:\nconst char * TiXmlDocument::ErrorDesc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlDocument::ErrorDesc() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ErrorDesc();
		lua_pushstring(L,lret);

		return 1;
	}

	// int TiXmlDocument::ErrorId() const
	static int _bind_ErrorId(lua_State *L) {
		if (!_lg_typecheck_ErrorId(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlDocument::ErrorId() const function, expected prototype:\nint TiXmlDocument::ErrorId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlDocument::ErrorId() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ErrorId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlDocument::ErrorRow() const
	static int _bind_ErrorRow(lua_State *L) {
		if (!_lg_typecheck_ErrorRow(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlDocument::ErrorRow() const function, expected prototype:\nint TiXmlDocument::ErrorRow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlDocument::ErrorRow() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ErrorRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlDocument::ErrorCol() const
	static int _bind_ErrorCol(lua_State *L) {
		if (!_lg_typecheck_ErrorCol(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlDocument::ErrorCol() const function, expected prototype:\nint TiXmlDocument::ErrorCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlDocument::ErrorCol() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ErrorCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void TiXmlDocument::SetTabSize(int _tabsize)
	static int _bind_SetTabSize(lua_State *L) {
		if (!_lg_typecheck_SetTabSize(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlDocument::SetTabSize(int _tabsize) function, expected prototype:\nvoid TiXmlDocument::SetTabSize(int _tabsize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _tabsize=(int)lua_tointeger(L,2);

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlDocument::SetTabSize(int). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTabSize(_tabsize);

		return 0;
	}

	// int TiXmlDocument::TabSize() const
	static int _bind_TabSize(lua_State *L) {
		if (!_lg_typecheck_TabSize(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlDocument::TabSize() const function, expected prototype:\nint TiXmlDocument::TabSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlDocument::TabSize() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TabSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void TiXmlDocument::ClearError()
	static int _bind_ClearError(lua_State *L) {
		if (!_lg_typecheck_ClearError(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlDocument::ClearError() function, expected prototype:\nvoid TiXmlDocument::ClearError()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlDocument::ClearError(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearError();

		return 0;
	}

	// void TiXmlDocument::Print() const
	static int _bind_Print(lua_State *L) {
		if (!_lg_typecheck_Print(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlDocument::Print() const function, expected prototype:\nvoid TiXmlDocument::Print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlDocument::Print() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Print();

		return 0;
	}

	// const TiXmlDocument * TiXmlDocument::ToDocument() const
	static int _bind_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlDocument::ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlDocument::ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlDocument::ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlDocument::ToDocument()
	static int _bind_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlDocument::ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlDocument::ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlDocument::ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::ToDocument
	static int _bind_ToDocument(lua_State *L) {
		if (_lg_typecheck_ToDocument_overload_1(L)) return _bind_ToDocument_overload_1(L);
		if (_lg_typecheck_ToDocument_overload_2(L)) return _bind_ToDocument_overload_2(L);

		luaL_error(L, "error in function ToDocument, cannot match any of the overloads for function ToDocument:\n  ToDocument()\n  ToDocument()\n");
		return 0;
	}

	// bool TiXmlDocument::Accept(TiXmlVisitor * content) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::Accept(TiXmlVisitor * content) const function, expected prototype:\nbool TiXmlDocument::Accept(TiXmlVisitor * content) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* content=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(content);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlElement * TiXmlDocument::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlDocument::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlDocument::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlDocument::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlDocument::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlDocument::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlDocument::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlDocument::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlDocument::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlDocument::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlDocument::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlDocument::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlDocument::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlDocument::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlDocument::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlDocument::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlDocument::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlDocument::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlDocument::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlDocument::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlDocument::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlDocument::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlDocument::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlDocument::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlDocument::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlDocument::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlDocument::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlDocument::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlDocument::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlDocument::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// const TiXmlText * TiXmlDocument::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlDocument::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlDocument::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlDocument::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlDocument::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlDocument::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlDocument::base_ToText() function, expected prototype:\nTiXmlText * TiXmlDocument::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlDocument::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlDocument::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlDocument::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlDocument::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlDocument::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlDocument::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlDocument::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlDocument::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlDocument::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlDocument::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlDocument::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlDocument::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}

	// const TiXmlDocument * TiXmlDocument::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlDocument::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlDocument::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlDocument::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlDocument::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlDocument::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlDocument::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlDocument::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlDocument::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlDocument::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDocument::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// bool TiXmlDocument::base_Accept(TiXmlVisitor * content) const
	static int _bind_base_Accept(lua_State *L) {
		if (!_lg_typecheck_base_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDocument::base_Accept(TiXmlVisitor * content) const function, expected prototype:\nbool TiXmlDocument::base_Accept(TiXmlVisitor * content) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* content=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDocument::base_Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlDocument::Accept(content);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void TiXmlDocument::operator=(const TiXmlDocument & copy)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlDocument::operator=(const TiXmlDocument & copy) function, expected prototype:\nvoid TiXmlDocument::operator=(const TiXmlDocument & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlDocument::operator= function");
		}
		const TiXmlDocument & copy=*copy_ptr;

		TiXmlDocument* self=Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlDocument::operator=(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(copy);

		return 0;
	}


};

TiXmlDocument* LunaTraits< TiXmlDocument >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlDocument::_bind_ctor(L);
}

void LunaTraits< TiXmlDocument >::_bind_dtor(TiXmlDocument* obj) {
	delete obj;
}

const char LunaTraits< TiXmlDocument >::className[] = "TiXmlDocument";
const char LunaTraits< TiXmlDocument >::fullName[] = "TiXmlDocument";
const char LunaTraits< TiXmlDocument >::moduleName[] = "land";
const char* LunaTraits< TiXmlDocument >::parents[] = {"land.TiXmlNode", 0};
const int LunaTraits< TiXmlDocument >::hash = 42990783;
const int LunaTraits< TiXmlDocument >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlDocument >::methods[] = {
	{"LoadFile", &luna_wrapper_TiXmlDocument::_bind_LoadFile},
	{"SaveFile", &luna_wrapper_TiXmlDocument::_bind_SaveFile},
	{"RootElement", &luna_wrapper_TiXmlDocument::_bind_RootElement},
	{"Error", &luna_wrapper_TiXmlDocument::_bind_Error},
	{"ErrorDesc", &luna_wrapper_TiXmlDocument::_bind_ErrorDesc},
	{"ErrorId", &luna_wrapper_TiXmlDocument::_bind_ErrorId},
	{"ErrorRow", &luna_wrapper_TiXmlDocument::_bind_ErrorRow},
	{"ErrorCol", &luna_wrapper_TiXmlDocument::_bind_ErrorCol},
	{"SetTabSize", &luna_wrapper_TiXmlDocument::_bind_SetTabSize},
	{"TabSize", &luna_wrapper_TiXmlDocument::_bind_TabSize},
	{"ClearError", &luna_wrapper_TiXmlDocument::_bind_ClearError},
	{"Print", &luna_wrapper_TiXmlDocument::_bind_Print},
	{"ToDocument", &luna_wrapper_TiXmlDocument::_bind_ToDocument},
	{"Accept", &luna_wrapper_TiXmlDocument::_bind_Accept},
	{"base_ToElement", &luna_wrapper_TiXmlDocument::_bind_base_ToElement},
	{"base_ToComment", &luna_wrapper_TiXmlDocument::_bind_base_ToComment},
	{"base_ToUnknown", &luna_wrapper_TiXmlDocument::_bind_base_ToUnknown},
	{"base_ToText", &luna_wrapper_TiXmlDocument::_bind_base_ToText},
	{"base_ToDeclaration", &luna_wrapper_TiXmlDocument::_bind_base_ToDeclaration},
	{"base_ToDocument", &luna_wrapper_TiXmlDocument::_bind_base_ToDocument},
	{"base_Accept", &luna_wrapper_TiXmlDocument::_bind_base_Accept},
	{"op_assign", &luna_wrapper_TiXmlDocument::_bind_op_assign},
	{"fromVoid", &luna_wrapper_TiXmlDocument::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlDocument::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlDocument::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlDocument >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlDocument::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlDocument >::enumValues[] = {
	{0,0}
};


