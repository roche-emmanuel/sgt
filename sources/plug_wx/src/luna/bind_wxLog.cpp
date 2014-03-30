#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLog.h>

class luna_wrapper_wxLog {
public:
	typedef Luna< wxLog > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxLog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLog*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* rhs =(Luna< wxLog >::check(L,2));
		wxLog* self=(Luna< wxLog >::check(L,1));
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

		wxLog* self= (wxLog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLog >::check(L,1));
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

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLog");
		
		return luna_dynamicCast(L,converters,"wxLog",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddTraceMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearTraceMasks(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTraceMasks(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAllowedTraceMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveTraceMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DontCreateOnDemand(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetActiveTarget(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetActiveTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,13550494)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetThreadActiveTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,13550494)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FlushActive(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Resume(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Suspend(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLogLevel(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLevelEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetComponentLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLogLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableLogging(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRepetitionCounting(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRepetitionCounting(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTimestamp(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTimestamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableTimestamp(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVerbose(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetVerbose(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LogRecord(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,82105951) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void wxLog::AddTraceMask(const wxString & mask)
	static int _bind_AddTraceMask(lua_State *L) {
		if (!_lg_typecheck_AddTraceMask(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::AddTraceMask(const wxString & mask) function, expected prototype:\nstatic void wxLog::AddTraceMask(const wxString & mask)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mask(lua_tostring(L,1),lua_objlen(L,1));

		wxLog::AddTraceMask(mask);

		return 0;
	}

	// static void wxLog::ClearTraceMasks()
	static int _bind_ClearTraceMasks(lua_State *L) {
		if (!_lg_typecheck_ClearTraceMasks(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::ClearTraceMasks() function, expected prototype:\nstatic void wxLog::ClearTraceMasks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog::ClearTraceMasks();

		return 0;
	}

	// static const wxArrayString & wxLog::GetTraceMasks()
	static int _bind_GetTraceMasks(lua_State *L) {
		if (!_lg_typecheck_GetTraceMasks(L)) {
			luaL_error(L, "luna typecheck failed in static const wxArrayString & wxLog::GetTraceMasks() function, expected prototype:\nstatic const wxArrayString & wxLog::GetTraceMasks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const wxArrayString* lret = &wxLog::GetTraceMasks();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// static bool wxLog::IsAllowedTraceMask(const wxString & mask)
	static int _bind_IsAllowedTraceMask(lua_State *L) {
		if (!_lg_typecheck_IsAllowedTraceMask(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxLog::IsAllowedTraceMask(const wxString & mask) function, expected prototype:\nstatic bool wxLog::IsAllowedTraceMask(const wxString & mask)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mask(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxLog::IsAllowedTraceMask(mask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxLog::RemoveTraceMask(const wxString & mask)
	static int _bind_RemoveTraceMask(lua_State *L) {
		if (!_lg_typecheck_RemoveTraceMask(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::RemoveTraceMask(const wxString & mask) function, expected prototype:\nstatic void wxLog::RemoveTraceMask(const wxString & mask)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mask(lua_tostring(L,1),lua_objlen(L,1));

		wxLog::RemoveTraceMask(mask);

		return 0;
	}

	// static void wxLog::DontCreateOnDemand()
	static int _bind_DontCreateOnDemand(lua_State *L) {
		if (!_lg_typecheck_DontCreateOnDemand(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::DontCreateOnDemand() function, expected prototype:\nstatic void wxLog::DontCreateOnDemand()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog::DontCreateOnDemand();

		return 0;
	}

	// static wxLog * wxLog::GetActiveTarget()
	static int _bind_GetActiveTarget(lua_State *L) {
		if (!_lg_typecheck_GetActiveTarget(L)) {
			luaL_error(L, "luna typecheck failed in static wxLog * wxLog::GetActiveTarget() function, expected prototype:\nstatic wxLog * wxLog::GetActiveTarget()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog * lret = wxLog::GetActiveTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLog >::push(L,lret,false);

		return 1;
	}

	// static wxLog * wxLog::SetActiveTarget(wxLog * logtarget)
	static int _bind_SetActiveTarget(lua_State *L) {
		if (!_lg_typecheck_SetActiveTarget(L)) {
			luaL_error(L, "luna typecheck failed in static wxLog * wxLog::SetActiveTarget(wxLog * logtarget) function, expected prototype:\nstatic wxLog * wxLog::SetActiveTarget(wxLog * logtarget)\nClass arguments details:\narg 1 ID = 13550494\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* logtarget=(Luna< wxLog >::check(L,1));

		wxLog * lret = wxLog::SetActiveTarget(logtarget);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLog >::push(L,lret,false);

		return 1;
	}

	// static wxLog * wxLog::SetThreadActiveTarget(wxLog * logger)
	static int _bind_SetThreadActiveTarget(lua_State *L) {
		if (!_lg_typecheck_SetThreadActiveTarget(L)) {
			luaL_error(L, "luna typecheck failed in static wxLog * wxLog::SetThreadActiveTarget(wxLog * logger) function, expected prototype:\nstatic wxLog * wxLog::SetThreadActiveTarget(wxLog * logger)\nClass arguments details:\narg 1 ID = 13550494\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* logger=(Luna< wxLog >::check(L,1));

		wxLog * lret = wxLog::SetThreadActiveTarget(logger);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLog >::push(L,lret,false);

		return 1;
	}

	// static void wxLog::FlushActive()
	static int _bind_FlushActive(lua_State *L) {
		if (!_lg_typecheck_FlushActive(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::FlushActive() function, expected prototype:\nstatic void wxLog::FlushActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog::FlushActive();

		return 0;
	}

	// static void wxLog::Resume()
	static int _bind_Resume(lua_State *L) {
		if (!_lg_typecheck_Resume(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::Resume() function, expected prototype:\nstatic void wxLog::Resume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog::Resume();

		return 0;
	}

	// static void wxLog::Suspend()
	static int _bind_Suspend(lua_State *L) {
		if (!_lg_typecheck_Suspend(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::Suspend() function, expected prototype:\nstatic void wxLog::Suspend()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog::Suspend();

		return 0;
	}

	// static unsigned long wxLog::GetLogLevel()
	static int _bind_GetLogLevel(lua_State *L) {
		if (!_lg_typecheck_GetLogLevel(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned long wxLog::GetLogLevel() function, expected prototype:\nstatic unsigned long wxLog::GetLogLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned long lret = wxLog::GetLogLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool wxLog::IsLevelEnabled(unsigned long level, wxString component)
	static int _bind_IsLevelEnabled(lua_State *L) {
		if (!_lg_typecheck_IsLevelEnabled(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxLog::IsLevelEnabled(unsigned long level, wxString component) function, expected prototype:\nstatic bool wxLog::IsLevelEnabled(unsigned long level, wxString component)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long level=(unsigned long)lua_tonumber(L,1);
		wxString component(lua_tostring(L,2),lua_objlen(L,2));

		bool lret = wxLog::IsLevelEnabled(level, component);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxLog::SetComponentLevel(const wxString & component, unsigned long level)
	static int _bind_SetComponentLevel(lua_State *L) {
		if (!_lg_typecheck_SetComponentLevel(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::SetComponentLevel(const wxString & component, unsigned long level) function, expected prototype:\nstatic void wxLog::SetComponentLevel(const wxString & component, unsigned long level)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString component(lua_tostring(L,1),lua_objlen(L,1));
		unsigned long level=(unsigned long)lua_tonumber(L,2);

		wxLog::SetComponentLevel(component, level);

		return 0;
	}

	// static void wxLog::SetLogLevel(unsigned long logLevel)
	static int _bind_SetLogLevel(lua_State *L) {
		if (!_lg_typecheck_SetLogLevel(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::SetLogLevel(unsigned long logLevel) function, expected prototype:\nstatic void wxLog::SetLogLevel(unsigned long logLevel)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long logLevel=(unsigned long)lua_tonumber(L,1);

		wxLog::SetLogLevel(logLevel);

		return 0;
	}

	// static bool wxLog::EnableLogging(bool enable = true)
	static int _bind_EnableLogging(lua_State *L) {
		if (!_lg_typecheck_EnableLogging(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxLog::EnableLogging(bool enable = true) function, expected prototype:\nstatic bool wxLog::EnableLogging(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		bool lret = wxLog::EnableLogging(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxLog::IsEnabled()
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxLog::IsEnabled() function, expected prototype:\nstatic bool wxLog::IsEnabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxLog::IsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxLog::GetRepetitionCounting()
	static int _bind_GetRepetitionCounting(lua_State *L) {
		if (!_lg_typecheck_GetRepetitionCounting(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxLog::GetRepetitionCounting() function, expected prototype:\nstatic bool wxLog::GetRepetitionCounting()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxLog::GetRepetitionCounting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxLog::SetRepetitionCounting(bool repetCounting = true)
	static int _bind_SetRepetitionCounting(lua_State *L) {
		if (!_lg_typecheck_SetRepetitionCounting(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::SetRepetitionCounting(bool repetCounting = true) function, expected prototype:\nstatic void wxLog::SetRepetitionCounting(bool repetCounting = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool repetCounting=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		wxLog::SetRepetitionCounting(repetCounting);

		return 0;
	}

	// static const wxString & wxLog::GetTimestamp()
	static int _bind_GetTimestamp(lua_State *L) {
		if (!_lg_typecheck_GetTimestamp(L)) {
			luaL_error(L, "luna typecheck failed in static const wxString & wxLog::GetTimestamp() function, expected prototype:\nstatic const wxString & wxLog::GetTimestamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const wxString & lret = wxLog::GetTimestamp();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static void wxLog::SetTimestamp(const wxString & format)
	static int _bind_SetTimestamp(lua_State *L) {
		if (!_lg_typecheck_SetTimestamp(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::SetTimestamp(const wxString & format) function, expected prototype:\nstatic void wxLog::SetTimestamp(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString format(lua_tostring(L,1),lua_objlen(L,1));

		wxLog::SetTimestamp(format);

		return 0;
	}

	// static void wxLog::DisableTimestamp()
	static int _bind_DisableTimestamp(lua_State *L) {
		if (!_lg_typecheck_DisableTimestamp(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::DisableTimestamp() function, expected prototype:\nstatic void wxLog::DisableTimestamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog::DisableTimestamp();

		return 0;
	}

	// static bool wxLog::GetVerbose()
	static int _bind_GetVerbose(lua_State *L) {
		if (!_lg_typecheck_GetVerbose(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxLog::GetVerbose() function, expected prototype:\nstatic bool wxLog::GetVerbose()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxLog::GetVerbose();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxLog::SetVerbose(bool verbose = true)
	static int _bind_SetVerbose(lua_State *L) {
		if (!_lg_typecheck_SetVerbose(L)) {
			luaL_error(L, "luna typecheck failed in static void wxLog::SetVerbose(bool verbose = true) function, expected prototype:\nstatic void wxLog::SetVerbose(bool verbose = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool verbose=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		wxLog::SetVerbose(verbose);

		return 0;
	}

	// void wxLog::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLog::Flush() function, expected prototype:\nvoid wxLog::Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLog::Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Flush();

		return 0;
	}

	// void wxLog::LogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	static int _bind_LogRecord(lua_State *L) {
		if (!_lg_typecheck_LogRecord(L)) {
			luaL_error(L, "luna typecheck failed in void wxLog::LogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info) function, expected prototype:\nvoid wxLog::LogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 82105951\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long level=(unsigned long)lua_tonumber(L,2);
		wxString msg(lua_tostring(L,3),lua_objlen(L,3));
		const wxLogRecordInfo* info_ptr=(Luna< wxLogRecordInfo >::check(L,4));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxLog::LogRecord function");
		}
		const wxLogRecordInfo & info=*info_ptr;

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLog::LogRecord(unsigned long, const wxString &, const wxLogRecordInfo &). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogRecord(level, msg, info);

		return 0;
	}

	// void wxLog::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLog::base_Flush() function, expected prototype:\nvoid wxLog::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLog::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLog::Flush();

		return 0;
	}


	// Operator binds:

};

wxLog* LunaTraits< wxLog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLog >::_bind_dtor(wxLog* obj) {
	delete obj;
}

const char LunaTraits< wxLog >::className[] = "wxLog";
const char LunaTraits< wxLog >::fullName[] = "wxLog";
const char LunaTraits< wxLog >::moduleName[] = "wx";
const char* LunaTraits< wxLog >::parents[] = {0};
const int LunaTraits< wxLog >::hash = 13550494;
const int LunaTraits< wxLog >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLog >::methods[] = {
	{"AddTraceMask", &luna_wrapper_wxLog::_bind_AddTraceMask},
	{"ClearTraceMasks", &luna_wrapper_wxLog::_bind_ClearTraceMasks},
	{"GetTraceMasks", &luna_wrapper_wxLog::_bind_GetTraceMasks},
	{"IsAllowedTraceMask", &luna_wrapper_wxLog::_bind_IsAllowedTraceMask},
	{"RemoveTraceMask", &luna_wrapper_wxLog::_bind_RemoveTraceMask},
	{"DontCreateOnDemand", &luna_wrapper_wxLog::_bind_DontCreateOnDemand},
	{"GetActiveTarget", &luna_wrapper_wxLog::_bind_GetActiveTarget},
	{"SetActiveTarget", &luna_wrapper_wxLog::_bind_SetActiveTarget},
	{"SetThreadActiveTarget", &luna_wrapper_wxLog::_bind_SetThreadActiveTarget},
	{"FlushActive", &luna_wrapper_wxLog::_bind_FlushActive},
	{"Resume", &luna_wrapper_wxLog::_bind_Resume},
	{"Suspend", &luna_wrapper_wxLog::_bind_Suspend},
	{"GetLogLevel", &luna_wrapper_wxLog::_bind_GetLogLevel},
	{"IsLevelEnabled", &luna_wrapper_wxLog::_bind_IsLevelEnabled},
	{"SetComponentLevel", &luna_wrapper_wxLog::_bind_SetComponentLevel},
	{"SetLogLevel", &luna_wrapper_wxLog::_bind_SetLogLevel},
	{"EnableLogging", &luna_wrapper_wxLog::_bind_EnableLogging},
	{"IsEnabled", &luna_wrapper_wxLog::_bind_IsEnabled},
	{"GetRepetitionCounting", &luna_wrapper_wxLog::_bind_GetRepetitionCounting},
	{"SetRepetitionCounting", &luna_wrapper_wxLog::_bind_SetRepetitionCounting},
	{"GetTimestamp", &luna_wrapper_wxLog::_bind_GetTimestamp},
	{"SetTimestamp", &luna_wrapper_wxLog::_bind_SetTimestamp},
	{"DisableTimestamp", &luna_wrapper_wxLog::_bind_DisableTimestamp},
	{"GetVerbose", &luna_wrapper_wxLog::_bind_GetVerbose},
	{"SetVerbose", &luna_wrapper_wxLog::_bind_SetVerbose},
	{"Flush", &luna_wrapper_wxLog::_bind_Flush},
	{"LogRecord", &luna_wrapper_wxLog::_bind_LogRecord},
	{"base_Flush", &luna_wrapper_wxLog::_bind_base_Flush},
	{"dynCast", &luna_wrapper_wxLog::_bind_dynCast},
	{"__eq", &luna_wrapper_wxLog::_bind___eq},
	{"fromVoid", &luna_wrapper_wxLog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLog >::enumValues[] = {
	{0,0}
};


