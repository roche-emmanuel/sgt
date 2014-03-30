#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAppTraits.h>

class luna_wrapper_wxAppTraits {
public:
	typedef Luna< wxAppTraits > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxAppTraits,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89440075) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAppTraits*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAppTraits* rhs =(Luna< wxAppTraits >::check(L,2));
		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
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

		wxAppTraits* self= (wxAppTraits*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAppTraits >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89440075) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAppTraits >::check(L,1));
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

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAppTraits");
		
		return luna_dynamicCast(L,converters,"wxAppTraits",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateConfig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateEventLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateFontMapper(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateLogTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateMessageOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDesktopEnvironment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStandardPaths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolkitVersion(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasStderr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsUsingUniversalWidgets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowAssertDialog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateTimerImpl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BeforeChildWaitLoop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AfterChildWaitLoop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoMessageFromThreadWait(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanUseStderr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WriteToStderr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateConfig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStandardPaths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxConfigBase * wxAppTraits::CreateConfig()
	static int _bind_CreateConfig(lua_State *L) {
		if (!_lg_typecheck_CreateConfig(L)) {
			luaL_error(L, "luna typecheck failed in wxConfigBase * wxAppTraits::CreateConfig() function, expected prototype:\nwxConfigBase * wxAppTraits::CreateConfig()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConfigBase * wxAppTraits::CreateConfig(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConfigBase * lret = self->CreateConfig();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// wxEventLoopBase * wxAppTraits::CreateEventLoop()
	static int _bind_CreateEventLoop(lua_State *L) {
		if (!_lg_typecheck_CreateEventLoop(L)) {
			luaL_error(L, "luna typecheck failed in wxEventLoopBase * wxAppTraits::CreateEventLoop() function, expected prototype:\nwxEventLoopBase * wxAppTraits::CreateEventLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventLoopBase * wxAppTraits::CreateEventLoop(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventLoopBase * lret = self->CreateEventLoop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEventLoopBase >::push(L,lret,false);

		return 1;
	}

	// wxFontMapper * wxAppTraits::CreateFontMapper()
	static int _bind_CreateFontMapper(lua_State *L) {
		if (!_lg_typecheck_CreateFontMapper(L)) {
			luaL_error(L, "luna typecheck failed in wxFontMapper * wxAppTraits::CreateFontMapper() function, expected prototype:\nwxFontMapper * wxAppTraits::CreateFontMapper()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontMapper * wxAppTraits::CreateFontMapper(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontMapper * lret = self->CreateFontMapper();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontMapper >::push(L,lret,false);

		return 1;
	}

	// wxLog * wxAppTraits::CreateLogTarget()
	static int _bind_CreateLogTarget(lua_State *L) {
		if (!_lg_typecheck_CreateLogTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxLog * wxAppTraits::CreateLogTarget() function, expected prototype:\nwxLog * wxAppTraits::CreateLogTarget()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLog * wxAppTraits::CreateLogTarget(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLog * lret = self->CreateLogTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLog >::push(L,lret,false);

		return 1;
	}

	// wxMessageOutput * wxAppTraits::CreateMessageOutput()
	static int _bind_CreateMessageOutput(lua_State *L) {
		if (!_lg_typecheck_CreateMessageOutput(L)) {
			luaL_error(L, "luna typecheck failed in wxMessageOutput * wxAppTraits::CreateMessageOutput() function, expected prototype:\nwxMessageOutput * wxAppTraits::CreateMessageOutput()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMessageOutput * wxAppTraits::CreateMessageOutput(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMessageOutput * lret = self->CreateMessageOutput();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMessageOutput >::push(L,lret,false);

		return 1;
	}

	// wxRendererNative * wxAppTraits::CreateRenderer()
	static int _bind_CreateRenderer(lua_State *L) {
		if (!_lg_typecheck_CreateRenderer(L)) {
			luaL_error(L, "luna typecheck failed in wxRendererNative * wxAppTraits::CreateRenderer() function, expected prototype:\nwxRendererNative * wxAppTraits::CreateRenderer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRendererNative * wxAppTraits::CreateRenderer(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRendererNative * lret = self->CreateRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererNative >::push(L,lret,false);

		return 1;
	}

	// wxString wxAppTraits::GetDesktopEnvironment() const
	static int _bind_GetDesktopEnvironment(lua_State *L) {
		if (!_lg_typecheck_GetDesktopEnvironment(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAppTraits::GetDesktopEnvironment() const function, expected prototype:\nwxString wxAppTraits::GetDesktopEnvironment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAppTraits::GetDesktopEnvironment() const. Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDesktopEnvironment();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxStandardPaths & wxAppTraits::GetStandardPaths()
	static int _bind_GetStandardPaths(lua_State *L) {
		if (!_lg_typecheck_GetStandardPaths(L)) {
			luaL_error(L, "luna typecheck failed in wxStandardPaths & wxAppTraits::GetStandardPaths() function, expected prototype:\nwxStandardPaths & wxAppTraits::GetStandardPaths()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStandardPaths & wxAppTraits::GetStandardPaths(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxStandardPaths* lret = &self->GetStandardPaths();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStandardPaths >::push(L,lret,false);

		return 1;
	}

	// wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const
	static int _bind_GetToolkitVersion(lua_State *L) {
		if (!_lg_typecheck_GetToolkitVersion(L)) {
			luaL_error(L, "luna typecheck failed in wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const function, expected prototype:\nwxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int* major=luatop>1 ? (int*)Luna< void >::check(L,2) : (int*)NULL;
		int* minor=luatop>2 ? (int*)Luna< void >::check(L,3) : (int*)NULL;

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPortId wxAppTraits::GetToolkitVersion(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPortId lret = self->GetToolkitVersion(major, minor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAppTraits::HasStderr()
	static int _bind_HasStderr(lua_State *L) {
		if (!_lg_typecheck_HasStderr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::HasStderr() function, expected prototype:\nbool wxAppTraits::HasStderr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppTraits::HasStderr(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasStderr();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppTraits::IsUsingUniversalWidgets() const
	static int _bind_IsUsingUniversalWidgets(lua_State *L) {
		if (!_lg_typecheck_IsUsingUniversalWidgets(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::IsUsingUniversalWidgets() const function, expected prototype:\nbool wxAppTraits::IsUsingUniversalWidgets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppTraits::IsUsingUniversalWidgets() const. Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsUsingUniversalWidgets();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppTraits::ShowAssertDialog(const wxString & msg)
	static int _bind_ShowAssertDialog(lua_State *L) {
		if (!_lg_typecheck_ShowAssertDialog(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::ShowAssertDialog(const wxString & msg) function, expected prototype:\nbool wxAppTraits::ShowAssertDialog(const wxString & msg)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString msg(lua_tostring(L,2),lua_objlen(L,2));

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppTraits::ShowAssertDialog(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShowAssertDialog(msg);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTimerImpl * wxAppTraits::CreateTimerImpl(wxTimer * arg1)
	static int _bind_CreateTimerImpl(lua_State *L) {
		if (!_lg_typecheck_CreateTimerImpl(L)) {
			luaL_error(L, "luna typecheck failed in wxTimerImpl * wxAppTraits::CreateTimerImpl(wxTimer * arg1) function, expected prototype:\nwxTimerImpl * wxAppTraits::CreateTimerImpl(wxTimer * arg1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTimer* _arg1=(Luna< wxObject >::checkSubType< wxTimer >(L,2));

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTimerImpl * wxAppTraits::CreateTimerImpl(wxTimer *). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTimerImpl * lret = self->CreateTimerImpl(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimerImpl >::push(L,lret,false);

		return 1;
	}

	// void * wxAppTraits::BeforeChildWaitLoop()
	static int _bind_BeforeChildWaitLoop(lua_State *L) {
		if (!_lg_typecheck_BeforeChildWaitLoop(L)) {
			luaL_error(L, "luna typecheck failed in void * wxAppTraits::BeforeChildWaitLoop() function, expected prototype:\nvoid * wxAppTraits::BeforeChildWaitLoop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxAppTraits::BeforeChildWaitLoop(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->BeforeChildWaitLoop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxAppTraits::AfterChildWaitLoop(void * arg1)
	static int _bind_AfterChildWaitLoop(lua_State *L) {
		if (!_lg_typecheck_AfterChildWaitLoop(L)) {
			luaL_error(L, "luna typecheck failed in void wxAppTraits::AfterChildWaitLoop(void * arg1) function, expected prototype:\nvoid wxAppTraits::AfterChildWaitLoop(void * arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* _arg1=(Luna< void >::check(L,2));

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAppTraits::AfterChildWaitLoop(void *). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AfterChildWaitLoop(_arg1);

		return 0;
	}

	// bool wxAppTraits::DoMessageFromThreadWait()
	static int _bind_DoMessageFromThreadWait(lua_State *L) {
		if (!_lg_typecheck_DoMessageFromThreadWait(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::DoMessageFromThreadWait() function, expected prototype:\nbool wxAppTraits::DoMessageFromThreadWait()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppTraits::DoMessageFromThreadWait(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DoMessageFromThreadWait();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppTraits::CanUseStderr()
	static int _bind_CanUseStderr(lua_State *L) {
		if (!_lg_typecheck_CanUseStderr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::CanUseStderr() function, expected prototype:\nbool wxAppTraits::CanUseStderr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppTraits::CanUseStderr(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanUseStderr();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAppTraits::WriteToStderr(const wxString & arg1)
	static int _bind_WriteToStderr(lua_State *L) {
		if (!_lg_typecheck_WriteToStderr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAppTraits::WriteToStderr(const wxString & arg1) function, expected prototype:\nbool wxAppTraits::WriteToStderr(const wxString & arg1)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString _arg1(lua_tostring(L,2),lua_objlen(L,2));

		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAppTraits::WriteToStderr(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WriteToStderr(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConfigBase * wxAppTraits::base_CreateConfig()
	static int _bind_base_CreateConfig(lua_State *L) {
		if (!_lg_typecheck_base_CreateConfig(L)) {
			luaL_error(L, "luna typecheck failed in wxConfigBase * wxAppTraits::base_CreateConfig() function, expected prototype:\nwxConfigBase * wxAppTraits::base_CreateConfig()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxConfigBase * wxAppTraits::base_CreateConfig(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxConfigBase * lret = self->wxAppTraits::CreateConfig();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConfigBase >::push(L,lret,false);

		return 1;
	}

	// wxStandardPaths & wxAppTraits::base_GetStandardPaths()
	static int _bind_base_GetStandardPaths(lua_State *L) {
		if (!_lg_typecheck_base_GetStandardPaths(L)) {
			luaL_error(L, "luna typecheck failed in wxStandardPaths & wxAppTraits::base_GetStandardPaths() function, expected prototype:\nwxStandardPaths & wxAppTraits::base_GetStandardPaths()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAppTraits* self=(Luna< wxAppTraits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStandardPaths & wxAppTraits::base_GetStandardPaths(). Got : '%s'\n%s",typeid(Luna< wxAppTraits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxStandardPaths* lret = &self->wxAppTraits::GetStandardPaths();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStandardPaths >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAppTraits* LunaTraits< wxAppTraits >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEventLoopBase * wxAppTraits::CreateEventLoop()
	// wxFontMapper * wxAppTraits::CreateFontMapper()
	// wxLog * wxAppTraits::CreateLogTarget()
	// wxMessageOutput * wxAppTraits::CreateMessageOutput()
	// wxRendererNative * wxAppTraits::CreateRenderer()
	// wxString wxAppTraits::GetDesktopEnvironment() const
	// wxPortId wxAppTraits::GetToolkitVersion(int * major = NULL, int * minor = NULL) const
	// bool wxAppTraits::HasStderr()
	// bool wxAppTraits::IsUsingUniversalWidgets() const
	// bool wxAppTraits::ShowAssertDialog(const wxString & msg)
	// wxTimerImpl * wxAppTraits::CreateTimerImpl(wxTimer * arg1)
	// void * wxAppTraits::BeforeChildWaitLoop()
	// void wxAppTraits::AfterChildWaitLoop(void * arg1)
	// bool wxAppTraits::DoMessageFromThreadWait()
	// WXDWORD wxAppTraits::WaitForThread(WXHANDLE arg1, int arg2)
	// bool wxAppTraits::CanUseStderr()
	// bool wxAppTraits::WriteToStderr(const wxString & arg1)
}

void LunaTraits< wxAppTraits >::_bind_dtor(wxAppTraits* obj) {
	delete obj;
}

const char LunaTraits< wxAppTraits >::className[] = "wxAppTraits";
const char LunaTraits< wxAppTraits >::fullName[] = "wxAppTraits";
const char LunaTraits< wxAppTraits >::moduleName[] = "wx";
const char* LunaTraits< wxAppTraits >::parents[] = {0};
const int LunaTraits< wxAppTraits >::hash = 89440075;
const int LunaTraits< wxAppTraits >::uniqueIDs[] = {89440075,0};

luna_RegType LunaTraits< wxAppTraits >::methods[] = {
	{"CreateConfig", &luna_wrapper_wxAppTraits::_bind_CreateConfig},
	{"CreateEventLoop", &luna_wrapper_wxAppTraits::_bind_CreateEventLoop},
	{"CreateFontMapper", &luna_wrapper_wxAppTraits::_bind_CreateFontMapper},
	{"CreateLogTarget", &luna_wrapper_wxAppTraits::_bind_CreateLogTarget},
	{"CreateMessageOutput", &luna_wrapper_wxAppTraits::_bind_CreateMessageOutput},
	{"CreateRenderer", &luna_wrapper_wxAppTraits::_bind_CreateRenderer},
	{"GetDesktopEnvironment", &luna_wrapper_wxAppTraits::_bind_GetDesktopEnvironment},
	{"GetStandardPaths", &luna_wrapper_wxAppTraits::_bind_GetStandardPaths},
	{"GetToolkitVersion", &luna_wrapper_wxAppTraits::_bind_GetToolkitVersion},
	{"HasStderr", &luna_wrapper_wxAppTraits::_bind_HasStderr},
	{"IsUsingUniversalWidgets", &luna_wrapper_wxAppTraits::_bind_IsUsingUniversalWidgets},
	{"ShowAssertDialog", &luna_wrapper_wxAppTraits::_bind_ShowAssertDialog},
	{"CreateTimerImpl", &luna_wrapper_wxAppTraits::_bind_CreateTimerImpl},
	{"BeforeChildWaitLoop", &luna_wrapper_wxAppTraits::_bind_BeforeChildWaitLoop},
	{"AfterChildWaitLoop", &luna_wrapper_wxAppTraits::_bind_AfterChildWaitLoop},
	{"DoMessageFromThreadWait", &luna_wrapper_wxAppTraits::_bind_DoMessageFromThreadWait},
	{"CanUseStderr", &luna_wrapper_wxAppTraits::_bind_CanUseStderr},
	{"WriteToStderr", &luna_wrapper_wxAppTraits::_bind_WriteToStderr},
	{"base_CreateConfig", &luna_wrapper_wxAppTraits::_bind_base_CreateConfig},
	{"base_GetStandardPaths", &luna_wrapper_wxAppTraits::_bind_base_GetStandardPaths},
	{"dynCast", &luna_wrapper_wxAppTraits::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAppTraits::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAppTraits::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAppTraits::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAppTraits::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAppTraits >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAppTraits >::enumValues[] = {
	{0,0}
};


