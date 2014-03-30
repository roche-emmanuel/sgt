#include <plug_common.h>

class luna_wrapper_wxAboutDialogInfo {
public:
	typedef Luna< wxAboutDialogInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34636380) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAboutDialogInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAboutDialogInfo* rhs =(Luna< wxAboutDialogInfo >::check(L,2));
		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
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

		wxAboutDialogInfo* self= (wxAboutDialogInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAboutDialogInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34636380) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAboutDialogInfo >::check(L,1));
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

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAboutDialogInfo");
		
		return luna_dynamicCast(L,converters,"wxAboutDialogInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddArtist(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDeveloper(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDocWriter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTranslator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCopyright(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCopyright(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetArtists(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCopyright(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDevelopers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDocWriters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLicence(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLicense(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTranslators(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVersion(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWebSite(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAboutDialogInfo::wxAboutDialogInfo()
	static wxAboutDialogInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxAboutDialogInfo::wxAboutDialogInfo() function, expected prototype:\nwxAboutDialogInfo::wxAboutDialogInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAboutDialogInfo();
	}


	// Function binds:
	// void wxAboutDialogInfo::AddArtist(const wxString & artist)
	static int _bind_AddArtist(lua_State *L) {
		if (!_lg_typecheck_AddArtist(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::AddArtist(const wxString & artist) function, expected prototype:\nvoid wxAboutDialogInfo::AddArtist(const wxString & artist)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString artist(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::AddArtist(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddArtist(artist);

		return 0;
	}

	// void wxAboutDialogInfo::AddDeveloper(const wxString & developer)
	static int _bind_AddDeveloper(lua_State *L) {
		if (!_lg_typecheck_AddDeveloper(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::AddDeveloper(const wxString & developer) function, expected prototype:\nvoid wxAboutDialogInfo::AddDeveloper(const wxString & developer)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString developer(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::AddDeveloper(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddDeveloper(developer);

		return 0;
	}

	// void wxAboutDialogInfo::AddDocWriter(const wxString & docwriter)
	static int _bind_AddDocWriter(lua_State *L) {
		if (!_lg_typecheck_AddDocWriter(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::AddDocWriter(const wxString & docwriter) function, expected prototype:\nvoid wxAboutDialogInfo::AddDocWriter(const wxString & docwriter)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString docwriter(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::AddDocWriter(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddDocWriter(docwriter);

		return 0;
	}

	// void wxAboutDialogInfo::AddTranslator(const wxString & translator)
	static int _bind_AddTranslator(lua_State *L) {
		if (!_lg_typecheck_AddTranslator(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::AddTranslator(const wxString & translator) function, expected prototype:\nvoid wxAboutDialogInfo::AddTranslator(const wxString & translator)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString translator(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::AddTranslator(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddTranslator(translator);

		return 0;
	}

	// const wxString & wxAboutDialogInfo::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxAboutDialogInfo::GetName() const function, expected prototype:\nconst wxString & wxAboutDialogInfo::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxAboutDialogInfo::GetName() const. Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxAboutDialogInfo::HasDescription() const
	static int _bind_HasDescription(lua_State *L) {
		if (!_lg_typecheck_HasDescription(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAboutDialogInfo::HasDescription() const function, expected prototype:\nbool wxAboutDialogInfo::HasDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAboutDialogInfo::HasDescription() const. Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasDescription();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxAboutDialogInfo::GetDescription()
	static int _bind_GetDescription(lua_State *L) {
		if (!_lg_typecheck_GetDescription(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxAboutDialogInfo::GetDescription() function, expected prototype:\nconst wxString & wxAboutDialogInfo::GetDescription()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxAboutDialogInfo::GetDescription(). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxAboutDialogInfo::HasCopyright() const
	static int _bind_HasCopyright(lua_State *L) {
		if (!_lg_typecheck_HasCopyright(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAboutDialogInfo::HasCopyright() const function, expected prototype:\nbool wxAboutDialogInfo::HasCopyright() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAboutDialogInfo::HasCopyright() const. Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasCopyright();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxAboutDialogInfo::GetCopyright() const
	static int _bind_GetCopyright(lua_State *L) {
		if (!_lg_typecheck_GetCopyright(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxAboutDialogInfo::GetCopyright() const function, expected prototype:\nconst wxString & wxAboutDialogInfo::GetCopyright() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxAboutDialogInfo::GetCopyright() const. Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetCopyright();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAboutDialogInfo::SetArtists(const wxArrayString & artists)
	static int _bind_SetArtists(lua_State *L) {
		if (!_lg_typecheck_SetArtists(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetArtists(const wxArrayString & artists) function, expected prototype:\nvoid wxAboutDialogInfo::SetArtists(const wxArrayString & artists)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* artists_ptr=(Luna< wxArrayString >::check(L,2));
		if( !artists_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg artists in wxAboutDialogInfo::SetArtists function");
		}
		const wxArrayString & artists=*artists_ptr;

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetArtists(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetArtists(artists);

		return 0;
	}

	// void wxAboutDialogInfo::SetCopyright(const wxString & copyright)
	static int _bind_SetCopyright(lua_State *L) {
		if (!_lg_typecheck_SetCopyright(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetCopyright(const wxString & copyright) function, expected prototype:\nvoid wxAboutDialogInfo::SetCopyright(const wxString & copyright)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString copyright(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetCopyright(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCopyright(copyright);

		return 0;
	}

	// void wxAboutDialogInfo::SetDescription(const wxString & desc)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetDescription(const wxString & desc) function, expected prototype:\nvoid wxAboutDialogInfo::SetDescription(const wxString & desc)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString desc(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetDescription(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDescription(desc);

		return 0;
	}

	// void wxAboutDialogInfo::SetDevelopers(const wxArrayString & developers)
	static int _bind_SetDevelopers(lua_State *L) {
		if (!_lg_typecheck_SetDevelopers(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetDevelopers(const wxArrayString & developers) function, expected prototype:\nvoid wxAboutDialogInfo::SetDevelopers(const wxArrayString & developers)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* developers_ptr=(Luna< wxArrayString >::check(L,2));
		if( !developers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg developers in wxAboutDialogInfo::SetDevelopers function");
		}
		const wxArrayString & developers=*developers_ptr;

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetDevelopers(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDevelopers(developers);

		return 0;
	}

	// void wxAboutDialogInfo::SetDocWriters(const wxArrayString & docwriters)
	static int _bind_SetDocWriters(lua_State *L) {
		if (!_lg_typecheck_SetDocWriters(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetDocWriters(const wxArrayString & docwriters) function, expected prototype:\nvoid wxAboutDialogInfo::SetDocWriters(const wxArrayString & docwriters)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* docwriters_ptr=(Luna< wxArrayString >::check(L,2));
		if( !docwriters_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg docwriters in wxAboutDialogInfo::SetDocWriters function");
		}
		const wxArrayString & docwriters=*docwriters_ptr;

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetDocWriters(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocWriters(docwriters);

		return 0;
	}

	// void wxAboutDialogInfo::SetIcon(const wxIcon & icon)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetIcon(const wxIcon & icon) function, expected prototype:\nvoid wxAboutDialogInfo::SetIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxAboutDialogInfo::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetIcon(const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIcon(icon);

		return 0;
	}

	// void wxAboutDialogInfo::SetLicence(const wxString & licence)
	static int _bind_SetLicence(lua_State *L) {
		if (!_lg_typecheck_SetLicence(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetLicence(const wxString & licence) function, expected prototype:\nvoid wxAboutDialogInfo::SetLicence(const wxString & licence)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString licence(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetLicence(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLicence(licence);

		return 0;
	}

	// void wxAboutDialogInfo::SetLicense(const wxString & licence)
	static int _bind_SetLicense(lua_State *L) {
		if (!_lg_typecheck_SetLicense(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetLicense(const wxString & licence) function, expected prototype:\nvoid wxAboutDialogInfo::SetLicense(const wxString & licence)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString licence(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetLicense(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLicense(licence);

		return 0;
	}

	// void wxAboutDialogInfo::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetName(const wxString & name) function, expected prototype:\nvoid wxAboutDialogInfo::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxAboutDialogInfo::SetTranslators(const wxArrayString & translators)
	static int _bind_SetTranslators(lua_State *L) {
		if (!_lg_typecheck_SetTranslators(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetTranslators(const wxArrayString & translators) function, expected prototype:\nvoid wxAboutDialogInfo::SetTranslators(const wxArrayString & translators)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* translators_ptr=(Luna< wxArrayString >::check(L,2));
		if( !translators_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg translators in wxAboutDialogInfo::SetTranslators function");
		}
		const wxArrayString & translators=*translators_ptr;

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetTranslators(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTranslators(translators);

		return 0;
	}

	// void wxAboutDialogInfo::SetVersion(const wxString & version, const wxString & longVersion = wxString ())
	static int _bind_SetVersion(lua_State *L) {
		if (!_lg_typecheck_SetVersion(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetVersion(const wxString & version, const wxString & longVersion = wxString ()) function, expected prototype:\nvoid wxAboutDialogInfo::SetVersion(const wxString & version, const wxString & longVersion = wxString ())\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString version(lua_tostring(L,2),lua_objlen(L,2));
		wxString longVersion(lua_tostring(L,3),lua_objlen(L,3));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetVersion(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVersion(version, longVersion);

		return 0;
	}

	// void wxAboutDialogInfo::SetWebSite(const wxString & url, const wxString & desc = wxEmptyString)
	static int _bind_SetWebSite(lua_State *L) {
		if (!_lg_typecheck_SetWebSite(L)) {
			luaL_error(L, "luna typecheck failed in void wxAboutDialogInfo::SetWebSite(const wxString & url, const wxString & desc = wxEmptyString) function, expected prototype:\nvoid wxAboutDialogInfo::SetWebSite(const wxString & url, const wxString & desc = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString url(lua_tostring(L,2),lua_objlen(L,2));
		wxString desc(lua_tostring(L,3),lua_objlen(L,3));

		wxAboutDialogInfo* self=(Luna< wxAboutDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAboutDialogInfo::SetWebSite(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxAboutDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWebSite(url, desc);

		return 0;
	}


	// Operator binds:

};

wxAboutDialogInfo* LunaTraits< wxAboutDialogInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAboutDialogInfo::_bind_ctor(L);
}

void LunaTraits< wxAboutDialogInfo >::_bind_dtor(wxAboutDialogInfo* obj) {
	delete obj;
}

const char LunaTraits< wxAboutDialogInfo >::className[] = "wxAboutDialogInfo";
const char LunaTraits< wxAboutDialogInfo >::fullName[] = "wxAboutDialogInfo";
const char LunaTraits< wxAboutDialogInfo >::moduleName[] = "wx";
const char* LunaTraits< wxAboutDialogInfo >::parents[] = {0};
const int LunaTraits< wxAboutDialogInfo >::hash = 34636380;
const int LunaTraits< wxAboutDialogInfo >::uniqueIDs[] = {34636380,0};

luna_RegType LunaTraits< wxAboutDialogInfo >::methods[] = {
	{"AddArtist", &luna_wrapper_wxAboutDialogInfo::_bind_AddArtist},
	{"AddDeveloper", &luna_wrapper_wxAboutDialogInfo::_bind_AddDeveloper},
	{"AddDocWriter", &luna_wrapper_wxAboutDialogInfo::_bind_AddDocWriter},
	{"AddTranslator", &luna_wrapper_wxAboutDialogInfo::_bind_AddTranslator},
	{"GetName", &luna_wrapper_wxAboutDialogInfo::_bind_GetName},
	{"HasDescription", &luna_wrapper_wxAboutDialogInfo::_bind_HasDescription},
	{"GetDescription", &luna_wrapper_wxAboutDialogInfo::_bind_GetDescription},
	{"HasCopyright", &luna_wrapper_wxAboutDialogInfo::_bind_HasCopyright},
	{"GetCopyright", &luna_wrapper_wxAboutDialogInfo::_bind_GetCopyright},
	{"SetArtists", &luna_wrapper_wxAboutDialogInfo::_bind_SetArtists},
	{"SetCopyright", &luna_wrapper_wxAboutDialogInfo::_bind_SetCopyright},
	{"SetDescription", &luna_wrapper_wxAboutDialogInfo::_bind_SetDescription},
	{"SetDevelopers", &luna_wrapper_wxAboutDialogInfo::_bind_SetDevelopers},
	{"SetDocWriters", &luna_wrapper_wxAboutDialogInfo::_bind_SetDocWriters},
	{"SetIcon", &luna_wrapper_wxAboutDialogInfo::_bind_SetIcon},
	{"SetLicence", &luna_wrapper_wxAboutDialogInfo::_bind_SetLicence},
	{"SetLicense", &luna_wrapper_wxAboutDialogInfo::_bind_SetLicense},
	{"SetName", &luna_wrapper_wxAboutDialogInfo::_bind_SetName},
	{"SetTranslators", &luna_wrapper_wxAboutDialogInfo::_bind_SetTranslators},
	{"SetVersion", &luna_wrapper_wxAboutDialogInfo::_bind_SetVersion},
	{"SetWebSite", &luna_wrapper_wxAboutDialogInfo::_bind_SetWebSite},
	{"dynCast", &luna_wrapper_wxAboutDialogInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAboutDialogInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAboutDialogInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAboutDialogInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxAboutDialogInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAboutDialogInfo >::enumValues[] = {
	{0,0}
};


