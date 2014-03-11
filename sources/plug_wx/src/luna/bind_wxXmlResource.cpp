#include <plug_common.h>

#include <luna/wrappers/wrapper_wxXmlResource.h>

class luna_wrapper_wxXmlResource {
public:
	typedef Luna< wxXmlResource > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxXmlResource* self= (wxXmlResource*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxXmlResource >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxXmlResource* ptr= dynamic_cast< wxXmlResource* >(Luna< wxObject >::check(L,1));
		wxXmlResource* ptr= luna_caster< wxObject, wxXmlResource >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxXmlResource >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AttachUnknownControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearHandlers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CompareVersion(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDomain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetResourceNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitAllHandlers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadAllFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadDialog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadDialog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxDialog >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFrame(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadMenuBar_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadMenuBar_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadObjectRecursively_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadObjectRecursively_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadPanel_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadPanel_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxPanel >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadToolBar(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDomain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unload(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindXRCIDById(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetXRCID(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxXmlResource::AddHandler(wxXmlResourceHandler * handler)
	static int _bind_AddHandler(lua_State *L) {
		if (!_lg_typecheck_AddHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResource::AddHandler(wxXmlResourceHandler * handler) function, expected prototype:\nvoid wxXmlResource::AddHandler(wxXmlResourceHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlResourceHandler* handler=(Luna< wxObject >::checkSubType< wxXmlResourceHandler >(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResource::AddHandler(wxXmlResourceHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddHandler(handler);

		return 0;
	}

	// bool wxXmlResource::AttachUnknownControl(const wxString & name, wxWindow * control, wxWindow * parent = NULL)
	static int _bind_AttachUnknownControl(lua_State *L) {
		if (!_lg_typecheck_AttachUnknownControl(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::AttachUnknownControl(const wxString & name, wxWindow * control, wxWindow * parent = NULL) function, expected prototype:\nbool wxXmlResource::AttachUnknownControl(const wxString & name, wxWindow * control, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxWindow* control=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::AttachUnknownControl(const wxString &, wxWindow *, wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AttachUnknownControl(name, control, parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxXmlResource::ClearHandlers()
	static int _bind_ClearHandlers(lua_State *L) {
		if (!_lg_typecheck_ClearHandlers(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResource::ClearHandlers() function, expected prototype:\nvoid wxXmlResource::ClearHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResource::ClearHandlers(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearHandlers();

		return 0;
	}

	// int wxXmlResource::CompareVersion(int major, int minor, int release, int revision) const
	static int _bind_CompareVersion(lua_State *L) {
		if (!_lg_typecheck_CompareVersion(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlResource::CompareVersion(int major, int minor, int release, int revision) const function, expected prototype:\nint wxXmlResource::CompareVersion(int major, int minor, int release, int revision) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int major=(int)lua_tointeger(L,2);
		int minor=(int)lua_tointeger(L,3);
		int release=(int)lua_tointeger(L,4);
		int revision=(int)lua_tointeger(L,5);

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlResource::CompareVersion(int, int, int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CompareVersion(major, minor, release, revision);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxXmlResource::GetDomain() const
	static int _bind_GetDomain(lua_State *L) {
		if (!_lg_typecheck_GetDomain(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxXmlResource::GetDomain() const function, expected prototype:\nconst wxString & wxXmlResource::GetDomain() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxXmlResource::GetDomain() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetDomain();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxXmlResource::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxXmlResource::GetFlags() const function, expected prototype:\nint wxXmlResource::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxXmlResource::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxXmlNode * wxXmlResource::GetResourceNode(const wxString & name) const
	static int _bind_GetResourceNode(lua_State *L) {
		if (!_lg_typecheck_GetResourceNode(L)) {
			luaL_error(L, "luna typecheck failed in const wxXmlNode * wxXmlResource::GetResourceNode(const wxString & name) const function, expected prototype:\nconst wxXmlNode * wxXmlResource::GetResourceNode(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxXmlNode * wxXmlResource::GetResourceNode(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxXmlNode * lret = self->GetResourceNode(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlNode >::push(L,lret,false);

		return 1;
	}

	// long wxXmlResource::GetVersion() const
	static int _bind_GetVersion(lua_State *L) {
		if (!_lg_typecheck_GetVersion(L)) {
			luaL_error(L, "luna typecheck failed in long wxXmlResource::GetVersion() const function, expected prototype:\nlong wxXmlResource::GetVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxXmlResource::GetVersion() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxXmlResource::InitAllHandlers()
	static int _bind_InitAllHandlers(lua_State *L) {
		if (!_lg_typecheck_InitAllHandlers(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResource::InitAllHandlers() function, expected prototype:\nvoid wxXmlResource::InitAllHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResource::InitAllHandlers(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InitAllHandlers();

		return 0;
	}

	// bool wxXmlResource::Load(const wxString & filemask)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::Load(const wxString & filemask) function, expected prototype:\nbool wxXmlResource::Load(const wxString & filemask)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filemask(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::Load(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Load(filemask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlResource::LoadFile(const wxFileName & file)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadFile(const wxFileName & file) function, expected prototype:\nbool wxXmlResource::LoadFile(const wxFileName & file)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* file_ptr=(Luna< wxFileName >::check(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxXmlResource::LoadFile function");
		}
		const wxFileName & file=*file_ptr;

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadFile(const wxFileName &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxXmlResource::LoadAllFiles(const wxString & dirname)
	static int _bind_LoadAllFiles(lua_State *L) {
		if (!_lg_typecheck_LoadAllFiles(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadAllFiles(const wxString & dirname) function, expected prototype:\nbool wxXmlResource::LoadAllFiles(const wxString & dirname)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dirname(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadAllFiles(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadAllFiles(dirname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxBitmap wxXmlResource::LoadBitmap(const wxString & name)
	static int _bind_LoadBitmap(lua_State *L) {
		if (!_lg_typecheck_LoadBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxXmlResource::LoadBitmap(const wxString & name) function, expected prototype:\nwxBitmap wxXmlResource::LoadBitmap(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxXmlResource::LoadBitmap(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->LoadBitmap(name);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxDialog * wxXmlResource::LoadDialog(wxWindow * parent, const wxString & name)
	static int _bind_LoadDialog_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadDialog_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDialog * wxXmlResource::LoadDialog(wxWindow * parent, const wxString & name) function, expected prototype:\nwxDialog * wxXmlResource::LoadDialog(wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDialog * wxXmlResource::LoadDialog(wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDialog * lret = self->LoadDialog(parent, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDialog >::push(L,lret,false);

		return 1;
	}

	// bool wxXmlResource::LoadDialog(wxDialog * dlg, wxWindow * parent, const wxString & name)
	static int _bind_LoadDialog_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadDialog_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadDialog(wxDialog * dlg, wxWindow * parent, const wxString & name) function, expected prototype:\nbool wxXmlResource::LoadDialog(wxDialog * dlg, wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDialog* dlg=(Luna< wxObject >::checkSubType< wxDialog >(L,2));
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadDialog(wxDialog *, wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadDialog(dlg, parent, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxXmlResource::LoadDialog
	static int _bind_LoadDialog(lua_State *L) {
		if (_lg_typecheck_LoadDialog_overload_1(L)) return _bind_LoadDialog_overload_1(L);
		if (_lg_typecheck_LoadDialog_overload_2(L)) return _bind_LoadDialog_overload_2(L);

		luaL_error(L, "error in function LoadDialog, cannot match any of the overloads for function LoadDialog:\n  LoadDialog(wxWindow *, const wxString &)\n  LoadDialog(wxDialog *, wxWindow *, const wxString &)\n");
		return 0;
	}

	// bool wxXmlResource::LoadFrame(wxFrame * frame, wxWindow * parent, const wxString & name)
	static int _bind_LoadFrame(lua_State *L) {
		if (!_lg_typecheck_LoadFrame(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadFrame(wxFrame * frame, wxWindow * parent, const wxString & name) function, expected prototype:\nbool wxXmlResource::LoadFrame(wxFrame * frame, wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadFrame(wxFrame *, wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFrame(frame, parent, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxIcon wxXmlResource::LoadIcon(const wxString & name)
	static int _bind_LoadIcon(lua_State *L) {
		if (!_lg_typecheck_LoadIcon(L)) {
			luaL_error(L, "luna typecheck failed in wxIcon wxXmlResource::LoadIcon(const wxString & name) function, expected prototype:\nwxIcon wxXmlResource::LoadIcon(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIcon wxXmlResource::LoadIcon(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxIcon stack_lret = self->LoadIcon(name);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// wxMenu * wxXmlResource::LoadMenu(const wxString & name)
	static int _bind_LoadMenu(lua_State *L) {
		if (!_lg_typecheck_LoadMenu(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxXmlResource::LoadMenu(const wxString & name) function, expected prototype:\nwxMenu * wxXmlResource::LoadMenu(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxXmlResource::LoadMenu(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->LoadMenu(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxMenuBar * wxXmlResource::LoadMenuBar(wxWindow * parent, const wxString & name)
	static int _bind_LoadMenuBar_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadMenuBar_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxXmlResource::LoadMenuBar(wxWindow * parent, const wxString & name) function, expected prototype:\nwxMenuBar * wxXmlResource::LoadMenuBar(wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuBar * wxXmlResource::LoadMenuBar(wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuBar * lret = self->LoadMenuBar(parent, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// wxMenuBar * wxXmlResource::LoadMenuBar(const wxString & name)
	static int _bind_LoadMenuBar_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadMenuBar_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxXmlResource::LoadMenuBar(const wxString & name) function, expected prototype:\nwxMenuBar * wxXmlResource::LoadMenuBar(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuBar * wxXmlResource::LoadMenuBar(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuBar * lret = self->LoadMenuBar(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxXmlResource::LoadMenuBar
	static int _bind_LoadMenuBar(lua_State *L) {
		if (_lg_typecheck_LoadMenuBar_overload_1(L)) return _bind_LoadMenuBar_overload_1(L);
		if (_lg_typecheck_LoadMenuBar_overload_2(L)) return _bind_LoadMenuBar_overload_2(L);

		luaL_error(L, "error in function LoadMenuBar, cannot match any of the overloads for function LoadMenuBar:\n  LoadMenuBar(wxWindow *, const wxString &)\n  LoadMenuBar(const wxString &)\n");
		return 0;
	}

	// wxObject * wxXmlResource::LoadObject(wxWindow * parent, const wxString & name, const wxString & classname)
	static int _bind_LoadObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxXmlResource::LoadObject(wxWindow * parent, const wxString & name, const wxString & classname) function, expected prototype:\nwxObject * wxXmlResource::LoadObject(wxWindow * parent, const wxString & name, const wxString & classname)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString classname(lua_tostring(L,4),lua_objlen(L,4));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxXmlResource::LoadObject(wxWindow *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->LoadObject(parent, name, classname);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxXmlResource::LoadObject(wxObject * instance, wxWindow * parent, const wxString & name, const wxString & classname)
	static int _bind_LoadObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadObject(wxObject * instance, wxWindow * parent, const wxString & name, const wxString & classname) function, expected prototype:\nbool wxXmlResource::LoadObject(wxObject * instance, wxWindow * parent, const wxString & name, const wxString & classname)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* instance=(Luna< wxObject >::check(L,2));
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString classname(lua_tostring(L,5),lua_objlen(L,5));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadObject(wxObject *, wxWindow *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadObject(instance, parent, name, classname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxXmlResource::LoadObject
	static int _bind_LoadObject(lua_State *L) {
		if (_lg_typecheck_LoadObject_overload_1(L)) return _bind_LoadObject_overload_1(L);
		if (_lg_typecheck_LoadObject_overload_2(L)) return _bind_LoadObject_overload_2(L);

		luaL_error(L, "error in function LoadObject, cannot match any of the overloads for function LoadObject:\n  LoadObject(wxWindow *, const wxString &, const wxString &)\n  LoadObject(wxObject *, wxWindow *, const wxString &, const wxString &)\n");
		return 0;
	}

	// wxObject * wxXmlResource::LoadObjectRecursively(wxWindow * parent, const wxString & name, const wxString & classname)
	static int _bind_LoadObjectRecursively_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadObjectRecursively_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxXmlResource::LoadObjectRecursively(wxWindow * parent, const wxString & name, const wxString & classname) function, expected prototype:\nwxObject * wxXmlResource::LoadObjectRecursively(wxWindow * parent, const wxString & name, const wxString & classname)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));
		wxString classname(lua_tostring(L,4),lua_objlen(L,4));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxXmlResource::LoadObjectRecursively(wxWindow *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->LoadObjectRecursively(parent, name, classname);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxXmlResource::LoadObjectRecursively(wxObject * instance, wxWindow * parent, const wxString & name, const wxString & classname)
	static int _bind_LoadObjectRecursively_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadObjectRecursively_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadObjectRecursively(wxObject * instance, wxWindow * parent, const wxString & name, const wxString & classname) function, expected prototype:\nbool wxXmlResource::LoadObjectRecursively(wxObject * instance, wxWindow * parent, const wxString & name, const wxString & classname)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* instance=(Luna< wxObject >::check(L,2));
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString classname(lua_tostring(L,5),lua_objlen(L,5));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadObjectRecursively(wxObject *, wxWindow *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadObjectRecursively(instance, parent, name, classname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxXmlResource::LoadObjectRecursively
	static int _bind_LoadObjectRecursively(lua_State *L) {
		if (_lg_typecheck_LoadObjectRecursively_overload_1(L)) return _bind_LoadObjectRecursively_overload_1(L);
		if (_lg_typecheck_LoadObjectRecursively_overload_2(L)) return _bind_LoadObjectRecursively_overload_2(L);

		luaL_error(L, "error in function LoadObjectRecursively, cannot match any of the overloads for function LoadObjectRecursively:\n  LoadObjectRecursively(wxWindow *, const wxString &, const wxString &)\n  LoadObjectRecursively(wxObject *, wxWindow *, const wxString &, const wxString &)\n");
		return 0;
	}

	// wxPanel * wxXmlResource::LoadPanel(wxWindow * parent, const wxString & name)
	static int _bind_LoadPanel_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadPanel_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPanel * wxXmlResource::LoadPanel(wxWindow * parent, const wxString & name) function, expected prototype:\nwxPanel * wxXmlResource::LoadPanel(wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPanel * wxXmlResource::LoadPanel(wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPanel * lret = self->LoadPanel(parent, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPanel >::push(L,lret,false);

		return 1;
	}

	// bool wxXmlResource::LoadPanel(wxPanel * panel, wxWindow * parent, const wxString & name)
	static int _bind_LoadPanel_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadPanel_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::LoadPanel(wxPanel * panel, wxWindow * parent, const wxString & name) function, expected prototype:\nbool wxXmlResource::LoadPanel(wxPanel * panel, wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPanel* panel=(Luna< wxObject >::checkSubType< wxPanel >(L,2));
		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::LoadPanel(wxPanel *, wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadPanel(panel, parent, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxXmlResource::LoadPanel
	static int _bind_LoadPanel(lua_State *L) {
		if (_lg_typecheck_LoadPanel_overload_1(L)) return _bind_LoadPanel_overload_1(L);
		if (_lg_typecheck_LoadPanel_overload_2(L)) return _bind_LoadPanel_overload_2(L);

		luaL_error(L, "error in function LoadPanel, cannot match any of the overloads for function LoadPanel:\n  LoadPanel(wxWindow *, const wxString &)\n  LoadPanel(wxPanel *, wxWindow *, const wxString &)\n");
		return 0;
	}

	// wxToolBar * wxXmlResource::LoadToolBar(wxWindow * parent, const wxString & name)
	static int _bind_LoadToolBar(lua_State *L) {
		if (!_lg_typecheck_LoadToolBar(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar * wxXmlResource::LoadToolBar(wxWindow * parent, const wxString & name) function, expected prototype:\nwxToolBar * wxXmlResource::LoadToolBar(wxWindow * parent, const wxString & name)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBar * wxXmlResource::LoadToolBar(wxWindow *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBar * lret = self->LoadToolBar(parent, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// void wxXmlResource::SetDomain(const wxString & domain)
	static int _bind_SetDomain(lua_State *L) {
		if (!_lg_typecheck_SetDomain(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResource::SetDomain(const wxString & domain) function, expected prototype:\nvoid wxXmlResource::SetDomain(const wxString & domain)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResource::SetDomain(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDomain(domain);

		return 0;
	}

	// void wxXmlResource::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlResource::SetFlags(int flags) function, expected prototype:\nvoid wxXmlResource::SetFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlResource::SetFlags(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// bool wxXmlResource::Unload(const wxString & filename)
	static int _bind_Unload(lua_State *L) {
		if (!_lg_typecheck_Unload(L)) {
			luaL_error(L, "luna typecheck failed in bool wxXmlResource::Unload(const wxString & filename) function, expected prototype:\nbool wxXmlResource::Unload(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxXmlResource::Unload(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Unload(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxString wxXmlResource::FindXRCIDById(int numId)
	static int _bind_FindXRCIDById(lua_State *L) {
		if (!_lg_typecheck_FindXRCIDById(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxXmlResource::FindXRCIDById(int numId) function, expected prototype:\nstatic wxString wxXmlResource::FindXRCIDById(int numId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numId=(int)lua_tointeger(L,1);

		wxString lret = wxXmlResource::FindXRCIDById(numId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxXmlResource * wxXmlResource::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static wxXmlResource * wxXmlResource::Get() function, expected prototype:\nstatic wxXmlResource * wxXmlResource::Get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource * lret = wxXmlResource::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlResource >::push(L,lret,false);

		return 1;
	}

	// static int wxXmlResource::GetXRCID(const wxString & str_id, int value_if_not_found = ::wxID_NONE)
	static int _bind_GetXRCID(lua_State *L) {
		if (!_lg_typecheck_GetXRCID(L)) {
			luaL_error(L, "luna typecheck failed in static int wxXmlResource::GetXRCID(const wxString & str_id, int value_if_not_found = ::wxID_NONE) function, expected prototype:\nstatic int wxXmlResource::GetXRCID(const wxString & str_id, int value_if_not_found = ::wxID_NONE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString str_id(lua_tostring(L,1),lua_objlen(L,1));
		int value_if_not_found=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_NONE;

		int lret = wxXmlResource::GetXRCID(str_id, value_if_not_found);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxXmlResource * wxXmlResource::Set(wxXmlResource * res)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in static wxXmlResource * wxXmlResource::Set(wxXmlResource * res) function, expected prototype:\nstatic wxXmlResource * wxXmlResource::Set(wxXmlResource * res)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlResource* res=(Luna< wxObject >::checkSubType< wxXmlResource >(L,1));

		wxXmlResource * lret = wxXmlResource::Set(res);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlResource >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxXmlResource::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxXmlResource::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxXmlResource::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlResource* self=Luna< wxObject >::checkSubType< wxXmlResource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxXmlResource::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxXmlResource::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxXmlResource* LunaTraits< wxXmlResource >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxXmlResource >::_bind_dtor(wxXmlResource* obj) {
	delete obj;
}

const char LunaTraits< wxXmlResource >::className[] = "wxXmlResource";
const char LunaTraits< wxXmlResource >::fullName[] = "wxXmlResource";
const char LunaTraits< wxXmlResource >::moduleName[] = "wx";
const char* LunaTraits< wxXmlResource >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxXmlResource >::hash = 90961110;
const int LunaTraits< wxXmlResource >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxXmlResource >::methods[] = {
	{"AddHandler", &luna_wrapper_wxXmlResource::_bind_AddHandler},
	{"AttachUnknownControl", &luna_wrapper_wxXmlResource::_bind_AttachUnknownControl},
	{"ClearHandlers", &luna_wrapper_wxXmlResource::_bind_ClearHandlers},
	{"CompareVersion", &luna_wrapper_wxXmlResource::_bind_CompareVersion},
	{"GetDomain", &luna_wrapper_wxXmlResource::_bind_GetDomain},
	{"GetFlags", &luna_wrapper_wxXmlResource::_bind_GetFlags},
	{"GetResourceNode", &luna_wrapper_wxXmlResource::_bind_GetResourceNode},
	{"GetVersion", &luna_wrapper_wxXmlResource::_bind_GetVersion},
	{"InitAllHandlers", &luna_wrapper_wxXmlResource::_bind_InitAllHandlers},
	{"Load", &luna_wrapper_wxXmlResource::_bind_Load},
	{"LoadFile", &luna_wrapper_wxXmlResource::_bind_LoadFile},
	{"LoadAllFiles", &luna_wrapper_wxXmlResource::_bind_LoadAllFiles},
	{"LoadBitmap", &luna_wrapper_wxXmlResource::_bind_LoadBitmap},
	{"LoadDialog", &luna_wrapper_wxXmlResource::_bind_LoadDialog},
	{"LoadFrame", &luna_wrapper_wxXmlResource::_bind_LoadFrame},
	{"LoadIcon", &luna_wrapper_wxXmlResource::_bind_LoadIcon},
	{"LoadMenu", &luna_wrapper_wxXmlResource::_bind_LoadMenu},
	{"LoadMenuBar", &luna_wrapper_wxXmlResource::_bind_LoadMenuBar},
	{"LoadObject", &luna_wrapper_wxXmlResource::_bind_LoadObject},
	{"LoadObjectRecursively", &luna_wrapper_wxXmlResource::_bind_LoadObjectRecursively},
	{"LoadPanel", &luna_wrapper_wxXmlResource::_bind_LoadPanel},
	{"LoadToolBar", &luna_wrapper_wxXmlResource::_bind_LoadToolBar},
	{"SetDomain", &luna_wrapper_wxXmlResource::_bind_SetDomain},
	{"SetFlags", &luna_wrapper_wxXmlResource::_bind_SetFlags},
	{"Unload", &luna_wrapper_wxXmlResource::_bind_Unload},
	{"FindXRCIDById", &luna_wrapper_wxXmlResource::_bind_FindXRCIDById},
	{"Get", &luna_wrapper_wxXmlResource::_bind_Get},
	{"GetXRCID", &luna_wrapper_wxXmlResource::_bind_GetXRCID},
	{"Set", &luna_wrapper_wxXmlResource::_bind_Set},
	{"base_GetClassInfo", &luna_wrapper_wxXmlResource::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxXmlResource::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxXmlResource::_bind_asVoid},
	{"getTable", &luna_wrapper_wxXmlResource::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxXmlResource >::converters[] = {
	{"wxObject", &luna_wrapper_wxXmlResource::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxXmlResource >::enumValues[] = {
	{0,0}
};


