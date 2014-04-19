#include <plug_common.h>

#include <wx/aboutdlg.h>
#include <wx/app.h>
#include <wx/base64.h>
#include <wx/persist/bookctrl.h>
#include <wx/choicdlg.h>
#include <wx/colordlg.h>
#include <wx/colour.h>
#include <wx/dde.h>
#include <wx/debug.h>
#include <wx/dirdlg.h>
#include <wx/event.h>
#include <wx/filedlg.h>
#include <wx/filefn.h>
#include <wx/font.h>
#include <wx/fontdlg.h>
#include <wx/gdicmn.h>
#include <wx/image.h>
#include <wx/init.h>
#include <wx/log.h>
#include <wx/math.h>
#include <wx/msgdlg.h>
#include <wx/numdlg.h>
#include <wx/object.h>
#include <wx/richtext/richtextbuffer.h>
#include <wx/stockitem.h>
#include <wx/textdlg.h>
#include <wx/thread.h>
#include <wx/time.h>
#include <wx/tipdlg.h>
#include <wx/persist/toplevel.h>
#include <wx/translation.h>
#include <wx/persist/treebook.h>
#include <wx/utils.h>
#include <wx/window.h>
#include <wx_extensions.h>
#include <wx/wxcrt.h>

// Function checkers:
inline static bool _lg_typecheck_wxAboutBox(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,34636380) ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxHandleFatalExceptions(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>1 ) return false;

	if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxInitialize(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxUninitialize_overload_1(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxUninitialize_overload_2(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxWakeUpIdle(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxYield(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxSafeYield(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>2 ) return false;

	if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxExit(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxBase64Encode_overload_1(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxBase64Encode_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxBase64EncodedSize(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxCreatePersistentObject_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxBookCtrlBase >(L,1)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxCreatePersistentObject_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxTopLevelWindow >(L,1)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxCreatePersistentObject_overload_3(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxTreebook >(L,1)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSingleChoiceIndex_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>10 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,3))) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,4)) ) ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
	if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSingleChoiceIndex_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<4 || luatop>5 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,3))) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,5)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSingleChoiceIndex_overload_3(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<5 || luatop>6 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
	if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,6)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSingleChoice_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>10 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,3))) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,4)) ) ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
	if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSingleChoice_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<4 || luatop>5 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,3))) ) return false;
	if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,5)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSingleChoice_overload_3(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<5 || luatop>6 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( lua_type(L,4)!=LUA_TSTRING ) return false;
	if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
	if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,6)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetSelectedChoices(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<4 || luatop>10 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,47342076) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,4,59507769) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
	if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
	if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	if( luatop>9 && (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetColourFromUser(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFromString_overload_1(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxColour >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFromString_overload_2(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
	if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxFont >(L,2)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxToString_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
	if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxToString_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
	if( (!(Luna< wxObject >::checkSubType< wxFont >(L,1))) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxDDECleanUp(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxDDEInitialize(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxDisableAsserts(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxIsDebuggerRunning(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxSetDefaultAssertHandler(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxTrap(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxDirSelector(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>5 ) return false;

	if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
	if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxNewEventType(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxPostEvent(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxQueueEvent(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFileSelector(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>9 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
	if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
	if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
	if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
	if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetOSDirectory(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxParseCommonDialogsFilter(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxDos2UnixFilename(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxUnix2DosFilename(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxDirExists(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxCopyFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFileExists(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxMatchWild(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxPathOnly(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsWild(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsAbsolutePath(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetCwd(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxSetWorkingDirectory(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxConcatFiles(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxMkdir(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxRmdir(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFindNextFile(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxFindFirstFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetFileKind(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetFontFromUser(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxColourDisplay(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxDisplayDepth(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxSetCursor(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxClientDisplayRect(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
	if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetClientDisplayRect(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetDisplayPPI(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxDisplaySize(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetDisplaySize(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxDisplaySizeMM(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetDisplaySizeMM(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetApp(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxInitAllImageHandlers(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxEntryCleanup(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxSafeShowMessage(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxSysErrorCode(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxFinite(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsNaN(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsSameDouble(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	if( lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsNullDouble(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxMessageBox(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>6 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetNumberFromUser(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<4 || luatop>8 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	if( lua_type(L,4)!=LUA_TNUMBER ) return false;
	if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
	if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
	if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
	if( luatop>7 && !Luna<void>::has_uniqueid(L,8,25723480) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxCreateDynamicObject(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxTextAttrCollectCommonAttributes(lua_State *L) {
	if( lua_gettop(L)!=4 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
	if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,37117058) ) return false;
	if( !Luna<void>::has_uniqueid(L,4,37117058) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetStockLabel(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetTextFromUser(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>7 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetPasswordFromUser(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>7 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
	if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
	if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
	if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsMainThread(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetTimeZone(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetLocalTime(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetLocalTimeMillis(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetUTCTime(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetUTCTimeMillis(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetUTCTimeUSec(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxCreateFileTipProvider(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxShowTip(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98652564)) ) return false;
	if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetTranslation_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetTranslation_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>4 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck__(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxBeginBusyCursor(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>1 ) return false;

	if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxEndBusyCursor(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxIsBusy(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxBell(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxInfoMessageBox(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetEnv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxSetEnv(lua_State *L) {
	if( lua_gettop(L)!=2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxUnsetEnv(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetBatteryState(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetPowerType(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetKeyState(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetMousePosition(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetMouseState(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxEnableTopLevelWindows(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>1 ) return false;

	if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFindWindowAtPoint(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFindWindowByLabel(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFindWindowByName(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFindMenuItemId(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( lua_type(L,3)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxNewId(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxRegisterId(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxLaunchDefaultApplication(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxLaunchDefaultBrowser(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxLoadUserResource(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxStripMenuCodes(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetFreeMemory(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetHomeDir(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetFullHostName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetUserHome(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>1 ) return false;

	if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetOsDescription(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetOsVersion(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>2 ) return false;

	if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsPlatform64Bit(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxIsPlatformLittleEndian(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxExecute_overload_1(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>4 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
	if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
	if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxProcess >(L,3)) ) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,57480074)) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxExecuteEnv >::check(L,4)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxExecute_overload_2(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<2 || luatop>4 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,2))) ) return false;
	if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,57480074)) ) return false;
	if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxExecuteEnv >::check(L,4)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxExecute_overload_3(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<3 || luatop>5 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,2))) ) return false;
	if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
	if( (!(Luna< wxArrayString >::check(L,3))) ) return false;
	if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,57480074)) ) return false;
	if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxExecuteEnv >::check(L,5)) ) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetProcessId(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxShell(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>1 ) return false;

	if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxShutdown(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<0 || luatop>1 ) return false;

	if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxMicroSleep(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxMilliSleep(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxNow(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxSleep(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxUsleep(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TNUMBER ) return false;
	return true;
}

inline static bool _lg_typecheck_wxFindWindowAtPointer(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxGetActiveWindow(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_wxGetTopLevelParent(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_createWxLogHandler(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsEmpty_overload_1(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxIsEmpty_overload_2(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxStrlen(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	return true;
}

inline static bool _lg_typecheck_wxStrlcpy(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_type(L,1)!=LUA_TSTRING ) return false;
	if( lua_type(L,2)!=LUA_TSTRING ) return false;
	if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
	return true;
}


// Function binds:
// void wxAboutBox(const wxAboutDialogInfo & info, wxWindow * parent = NULL)
static int _bind_wxAboutBox(lua_State *L) {
	if (!_lg_typecheck_wxAboutBox(L)) {
		luaL_error(L, "luna typecheck failed in void wxAboutBox(const wxAboutDialogInfo & info, wxWindow * parent = NULL) function, expected prototype:\nvoid wxAboutBox(const wxAboutDialogInfo & info, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 34636380\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const wxAboutDialogInfo* info_ptr=(Luna< wxAboutDialogInfo >::check(L,1));
	if( !info_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg info in wxAboutBox function");
	}
	const wxAboutDialogInfo & info=*info_ptr;
	wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

	::wxAboutBox(info, parent);

	return 0;
}

// bool wxHandleFatalExceptions(bool doIt = true)
static int _bind_wxHandleFatalExceptions(lua_State *L) {
	if (!_lg_typecheck_wxHandleFatalExceptions(L)) {
		luaL_error(L, "luna typecheck failed in bool wxHandleFatalExceptions(bool doIt = true) function, expected prototype:\nbool wxHandleFatalExceptions(bool doIt = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	bool doIt=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

	bool lret = ::wxHandleFatalExceptions(doIt);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxInitialize()
static int _bind_wxInitialize(lua_State *L) {
	if (!_lg_typecheck_wxInitialize(L)) {
		luaL_error(L, "luna typecheck failed in bool wxInitialize() function, expected prototype:\nbool wxInitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxInitialize();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void wxUninitialize()
static int _bind_wxUninitialize_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxUninitialize_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in void wxUninitialize() function, expected prototype:\nvoid wxUninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxUninitialize();

	return 0;
}

// void wxUninitialize()
static int _bind_wxUninitialize_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxUninitialize_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in void wxUninitialize() function, expected prototype:\nvoid wxUninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxUninitialize();

	return 0;
}

// Overload binder for wxUninitialize
static int _bind_wxUninitialize(lua_State *L) {
	if (_lg_typecheck_wxUninitialize_overload_1(L)) return _bind_wxUninitialize_overload_1(L);
	if (_lg_typecheck_wxUninitialize_overload_2(L)) return _bind_wxUninitialize_overload_2(L);

	luaL_error(L, "error in function wxUninitialize, cannot match any of the overloads for function wxUninitialize:\n  wxUninitialize()\n  wxUninitialize()\n");
	return 0;
}

// void wxWakeUpIdle()
static int _bind_wxWakeUpIdle(lua_State *L) {
	if (!_lg_typecheck_wxWakeUpIdle(L)) {
		luaL_error(L, "luna typecheck failed in void wxWakeUpIdle() function, expected prototype:\nvoid wxWakeUpIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxWakeUpIdle();

	return 0;
}

// bool wxYield()
static int _bind_wxYield(lua_State *L) {
	if (!_lg_typecheck_wxYield(L)) {
		luaL_error(L, "luna typecheck failed in bool wxYield() function, expected prototype:\nbool wxYield()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxYield();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxSafeYield(wxWindow * win = NULL, bool onlyIfNeeded = false)
static int _bind_wxSafeYield(lua_State *L) {
	if (!_lg_typecheck_wxSafeYield(L)) {
		luaL_error(L, "luna typecheck failed in bool wxSafeYield(wxWindow * win = NULL, bool onlyIfNeeded = false) function, expected prototype:\nbool wxSafeYield(wxWindow * win = NULL, bool onlyIfNeeded = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxWindow* win=luatop>0 ? (Luna< wxObject >::checkSubType< wxWindow >(L,1)) : (wxWindow*)NULL;
	bool onlyIfNeeded=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

	bool lret = ::wxSafeYield(win, onlyIfNeeded);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void wxExit()
static int _bind_wxExit(lua_State *L) {
	if (!_lg_typecheck_wxExit(L)) {
		luaL_error(L, "luna typecheck failed in void wxExit() function, expected prototype:\nvoid wxExit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxExit();

	return 0;
}

// size_t wxBase64Encode(char * dst, size_t dstLen, const void * src, size_t srcLen)
static int _bind_wxBase64Encode_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxBase64Encode_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in size_t wxBase64Encode(char * dst, size_t dstLen, const void * src, size_t srcLen) function, expected prototype:\nsize_t wxBase64Encode(char * dst, size_t dstLen, const void * src, size_t srcLen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* dst=(char*)Luna< void >::check(L,1);
	size_t dstLen=(size_t)lua_tointeger(L,2);
	const void* src=(Luna< void >::check(L,3));
	size_t srcLen=(size_t)lua_tointeger(L,4);

	size_t lret = ::wxBase64Encode(dst, dstLen, src, srcLen);
	lua_pushnumber(L,lret);

	return 1;
}

// wxString wxBase64Encode(const void * src, size_t srcLen)
static int _bind_wxBase64Encode_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxBase64Encode_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxBase64Encode(const void * src, size_t srcLen) function, expected prototype:\nwxString wxBase64Encode(const void * src, size_t srcLen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const void* src=(Luna< void >::check(L,1));
	size_t srcLen=(size_t)lua_tointeger(L,2);

	wxString lret = ::wxBase64Encode(src, srcLen);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for wxBase64Encode
static int _bind_wxBase64Encode(lua_State *L) {
	if (_lg_typecheck_wxBase64Encode_overload_1(L)) return _bind_wxBase64Encode_overload_1(L);
	if (_lg_typecheck_wxBase64Encode_overload_2(L)) return _bind_wxBase64Encode_overload_2(L);

	luaL_error(L, "error in function wxBase64Encode, cannot match any of the overloads for function wxBase64Encode:\n  wxBase64Encode(char *, size_t, const void *, size_t)\n  wxBase64Encode(const void *, size_t)\n");
	return 0;
}

// size_t wxBase64EncodedSize(size_t len)
static int _bind_wxBase64EncodedSize(lua_State *L) {
	if (!_lg_typecheck_wxBase64EncodedSize(L)) {
		luaL_error(L, "luna typecheck failed in size_t wxBase64EncodedSize(size_t len) function, expected prototype:\nsize_t wxBase64EncodedSize(size_t len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	size_t len=(size_t)lua_tointeger(L,1);

	size_t lret = ::wxBase64EncodedSize(len);
	lua_pushnumber(L,lret);

	return 1;
}

// wxPersistentObject * wxCreatePersistentObject(wxBookCtrlBase * book)
static int _bind_wxCreatePersistentObject_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxCreatePersistentObject_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in wxPersistentObject * wxCreatePersistentObject(wxBookCtrlBase * book) function, expected prototype:\nwxPersistentObject * wxCreatePersistentObject(wxBookCtrlBase * book)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxBookCtrlBase* book=(Luna< wxObject >::checkSubType< wxBookCtrlBase >(L,1));

	wxPersistentObject * lret = ::wxCreatePersistentObject(book);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxPersistentObject >::push(L,lret,false);

	return 1;
}

// wxPersistentObject * wxCreatePersistentObject(wxTopLevelWindow * book)
static int _bind_wxCreatePersistentObject_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxCreatePersistentObject_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in wxPersistentObject * wxCreatePersistentObject(wxTopLevelWindow * book) function, expected prototype:\nwxPersistentObject * wxCreatePersistentObject(wxTopLevelWindow * book)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxTopLevelWindow* book=(Luna< wxObject >::checkSubType< wxTopLevelWindow >(L,1));

	wxPersistentObject * lret = ::wxCreatePersistentObject(book);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxPersistentObject >::push(L,lret,false);

	return 1;
}

// wxPersistentObject * wxCreatePersistentObject(wxTreebook * book)
static int _bind_wxCreatePersistentObject_overload_3(lua_State *L) {
	if (!_lg_typecheck_wxCreatePersistentObject_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in wxPersistentObject * wxCreatePersistentObject(wxTreebook * book) function, expected prototype:\nwxPersistentObject * wxCreatePersistentObject(wxTreebook * book)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxTreebook* book=(Luna< wxObject >::checkSubType< wxTreebook >(L,1));

	wxPersistentObject * lret = ::wxCreatePersistentObject(book);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxPersistentObject >::push(L,lret,false);

	return 1;
}

// Overload binder for wxCreatePersistentObject
static int _bind_wxCreatePersistentObject(lua_State *L) {
	if (_lg_typecheck_wxCreatePersistentObject_overload_1(L)) return _bind_wxCreatePersistentObject_overload_1(L);
	if (_lg_typecheck_wxCreatePersistentObject_overload_2(L)) return _bind_wxCreatePersistentObject_overload_2(L);
	if (_lg_typecheck_wxCreatePersistentObject_overload_3(L)) return _bind_wxCreatePersistentObject_overload_3(L);

	luaL_error(L, "error in function wxCreatePersistentObject, cannot match any of the overloads for function wxCreatePersistentObject:\n  wxCreatePersistentObject(wxBookCtrlBase *)\n  wxCreatePersistentObject(wxTopLevelWindow *)\n  wxCreatePersistentObject(wxTreebook *)\n");
	return 0;
}

// int wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200, int initialSelection = 0)
static int _bind_wxGetSingleChoiceIndex_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxGetSingleChoiceIndex_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in int wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200, int initialSelection = 0) function, expected prototype:\nint wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200, int initialSelection = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 59507769\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	const wxArrayString* aChoices_ptr=(Luna< wxArrayString >::check(L,3));
	if( !aChoices_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aChoices in wxGetSingleChoiceIndex function");
	}
	const wxArrayString & aChoices=*aChoices_ptr;
	wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;
	int x=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
	int y=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
	bool centre=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;
	int width=luatop>7 ? (int)lua_tointeger(L,8) : (int)150;
	int height=luatop>8 ? (int)lua_tointeger(L,9) : (int)200;
	int initialSelection=luatop>9 ? (int)lua_tointeger(L,10) : (int)0;

	int lret = ::wxGetSingleChoiceIndex(message, caption, aChoices, parent, x, y, centre, width, height, initialSelection);
	lua_pushnumber(L,lret);

	return 1;
}

// int wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, const wxArrayString & choices, int initialSelection, wxWindow * parent = NULL)
static int _bind_wxGetSingleChoiceIndex_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxGetSingleChoiceIndex_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in int wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, const wxArrayString & choices, int initialSelection, wxWindow * parent = NULL) function, expected prototype:\nint wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, const wxArrayString & choices, int initialSelection, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 59507769\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,3));
	if( !choices_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg choices in wxGetSingleChoiceIndex function");
	}
	const wxArrayString & choices=*choices_ptr;
	int initialSelection=(int)lua_tointeger(L,4);
	wxWindow* parent=luatop>4 ? (Luna< wxObject >::checkSubType< wxWindow >(L,5)) : (wxWindow*)NULL;

	int lret = ::wxGetSingleChoiceIndex(message, caption, choices, initialSelection, parent);
	lua_pushnumber(L,lret);

	return 1;
}

// int wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, int n, const wxString * choices, int initialSelection, wxWindow * parent = NULL)
static int _bind_wxGetSingleChoiceIndex_overload_3(lua_State *L) {
	if (!_lg_typecheck_wxGetSingleChoiceIndex_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in int wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, int n, const wxString * choices, int initialSelection, wxWindow * parent = NULL) function, expected prototype:\nint wxGetSingleChoiceIndex(const wxString & message, const wxString & caption, int n, const wxString * choices, int initialSelection, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 88196105\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	int n=(int)lua_tointeger(L,3);
	wxString choices(lua_tostring(L,4),lua_objlen(L,4));
	int initialSelection=(int)lua_tointeger(L,5);
	wxWindow* parent=luatop>5 ? (Luna< wxObject >::checkSubType< wxWindow >(L,6)) : (wxWindow*)NULL;

	int lret = ::wxGetSingleChoiceIndex(message, caption, n, &choices, initialSelection, parent);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for wxGetSingleChoiceIndex
static int _bind_wxGetSingleChoiceIndex(lua_State *L) {
	if (_lg_typecheck_wxGetSingleChoiceIndex_overload_1(L)) return _bind_wxGetSingleChoiceIndex_overload_1(L);
	if (_lg_typecheck_wxGetSingleChoiceIndex_overload_2(L)) return _bind_wxGetSingleChoiceIndex_overload_2(L);
	if (_lg_typecheck_wxGetSingleChoiceIndex_overload_3(L)) return _bind_wxGetSingleChoiceIndex_overload_3(L);

	luaL_error(L, "error in function wxGetSingleChoiceIndex, cannot match any of the overloads for function wxGetSingleChoiceIndex:\n  wxGetSingleChoiceIndex(const wxString &, const wxString &, const wxArrayString &, wxWindow *, int, int, bool, int, int, int)\n  wxGetSingleChoiceIndex(const wxString &, const wxString &, const wxArrayString &, int, wxWindow *)\n  wxGetSingleChoiceIndex(const wxString &, const wxString &, int, const wxString *, int, wxWindow *)\n");
	return 0;
}

// wxString wxGetSingleChoice(const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200, int initialSelection = 0)
static int _bind_wxGetSingleChoice_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxGetSingleChoice_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetSingleChoice(const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200, int initialSelection = 0) function, expected prototype:\nwxString wxGetSingleChoice(const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200, int initialSelection = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 59507769\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	const wxArrayString* aChoices_ptr=(Luna< wxArrayString >::check(L,3));
	if( !aChoices_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aChoices in wxGetSingleChoice function");
	}
	const wxArrayString & aChoices=*aChoices_ptr;
	wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;
	int x=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
	int y=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
	bool centre=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;
	int width=luatop>7 ? (int)lua_tointeger(L,8) : (int)150;
	int height=luatop>8 ? (int)lua_tointeger(L,9) : (int)200;
	int initialSelection=luatop>9 ? (int)lua_tointeger(L,10) : (int)0;

	wxString lret = ::wxGetSingleChoice(message, caption, aChoices, parent, x, y, centre, width, height, initialSelection);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetSingleChoice(const wxString & message, const wxString & caption, const wxArrayString & choices, int initialSelection, wxWindow * parent = NULL)
static int _bind_wxGetSingleChoice_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxGetSingleChoice_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetSingleChoice(const wxString & message, const wxString & caption, const wxArrayString & choices, int initialSelection, wxWindow * parent = NULL) function, expected prototype:\nwxString wxGetSingleChoice(const wxString & message, const wxString & caption, const wxArrayString & choices, int initialSelection, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 59507769\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,3));
	if( !choices_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg choices in wxGetSingleChoice function");
	}
	const wxArrayString & choices=*choices_ptr;
	int initialSelection=(int)lua_tointeger(L,4);
	wxWindow* parent=luatop>4 ? (Luna< wxObject >::checkSubType< wxWindow >(L,5)) : (wxWindow*)NULL;

	wxString lret = ::wxGetSingleChoice(message, caption, choices, initialSelection, parent);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetSingleChoice(const wxString & message, const wxString & caption, int n, const wxString * choices, int initialSelection, wxWindow * parent = NULL)
static int _bind_wxGetSingleChoice_overload_3(lua_State *L) {
	if (!_lg_typecheck_wxGetSingleChoice_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetSingleChoice(const wxString & message, const wxString & caption, int n, const wxString * choices, int initialSelection, wxWindow * parent = NULL) function, expected prototype:\nwxString wxGetSingleChoice(const wxString & message, const wxString & caption, int n, const wxString * choices, int initialSelection, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 88196105\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	int n=(int)lua_tointeger(L,3);
	wxString choices(lua_tostring(L,4),lua_objlen(L,4));
	int initialSelection=(int)lua_tointeger(L,5);
	wxWindow* parent=luatop>5 ? (Luna< wxObject >::checkSubType< wxWindow >(L,6)) : (wxWindow*)NULL;

	wxString lret = ::wxGetSingleChoice(message, caption, n, &choices, initialSelection, parent);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for wxGetSingleChoice
static int _bind_wxGetSingleChoice(lua_State *L) {
	if (_lg_typecheck_wxGetSingleChoice_overload_1(L)) return _bind_wxGetSingleChoice_overload_1(L);
	if (_lg_typecheck_wxGetSingleChoice_overload_2(L)) return _bind_wxGetSingleChoice_overload_2(L);
	if (_lg_typecheck_wxGetSingleChoice_overload_3(L)) return _bind_wxGetSingleChoice_overload_3(L);

	luaL_error(L, "error in function wxGetSingleChoice, cannot match any of the overloads for function wxGetSingleChoice:\n  wxGetSingleChoice(const wxString &, const wxString &, const wxArrayString &, wxWindow *, int, int, bool, int, int, int)\n  wxGetSingleChoice(const wxString &, const wxString &, const wxArrayString &, int, wxWindow *)\n  wxGetSingleChoice(const wxString &, const wxString &, int, const wxString *, int, wxWindow *)\n");
	return 0;
}

// int wxGetSelectedChoices(wxArrayInt & selections, const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200)
static int _bind_wxGetSelectedChoices(lua_State *L) {
	if (!_lg_typecheck_wxGetSelectedChoices(L)) {
		luaL_error(L, "luna typecheck failed in int wxGetSelectedChoices(wxArrayInt & selections, const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200) function, expected prototype:\nint wxGetSelectedChoices(wxArrayInt & selections, const wxString & message, const wxString & caption, const wxArrayString & aChoices, wxWindow * parent = NULL, int x = -1, int y = -1, bool centre = true, int width = 150, int height = 200)\nClass arguments details:\narg 1 ID = 47342076\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 59507769\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxArrayInt* selections_ptr=(Luna< wxArrayInt >::check(L,1));
	if( !selections_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg selections in wxGetSelectedChoices function");
	}
	wxArrayInt & selections=*selections_ptr;
	wxString message(lua_tostring(L,2),lua_objlen(L,2));
	wxString caption(lua_tostring(L,3),lua_objlen(L,3));
	const wxArrayString* aChoices_ptr=(Luna< wxArrayString >::check(L,4));
	if( !aChoices_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg aChoices in wxGetSelectedChoices function");
	}
	const wxArrayString & aChoices=*aChoices_ptr;
	wxWindow* parent=luatop>4 ? (Luna< wxObject >::checkSubType< wxWindow >(L,5)) : (wxWindow*)NULL;
	int x=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
	int y=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;
	bool centre=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)true;
	int width=luatop>8 ? (int)lua_tointeger(L,9) : (int)150;
	int height=luatop>9 ? (int)lua_tointeger(L,10) : (int)200;

	int lret = ::wxGetSelectedChoices(selections, message, caption, aChoices, parent, x, y, centre, width, height);
	lua_pushnumber(L,lret);

	return 1;
}

// wxColour wxGetColourFromUser(wxWindow * parent, const wxColour & colInit, const wxString & caption = wxEmptyString, wxColourData * data = NULL)
static int _bind_wxGetColourFromUser(lua_State *L) {
	if (!_lg_typecheck_wxGetColourFromUser(L)) {
		luaL_error(L, "luna typecheck failed in wxColour wxGetColourFromUser(wxWindow * parent, const wxColour & colInit, const wxString & caption = wxEmptyString, wxColourData * data = NULL) function, expected prototype:\nwxColour wxGetColourFromUser(wxWindow * parent, const wxColour & colInit, const wxString & caption = wxEmptyString, wxColourData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
	const wxColour* colInit_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
	if( !colInit_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg colInit in wxGetColourFromUser function");
	}
	const wxColour & colInit=*colInit_ptr;
	wxString caption(lua_tostring(L,3),lua_objlen(L,3));
	wxColourData* data=luatop>3 ? (Luna< wxObject >::checkSubType< wxColourData >(L,4)) : (wxColourData*)NULL;

	wxColour stack_lret = ::wxGetColourFromUser(parent, colInit, caption, data);
	wxColour* lret = new wxColour(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxColour >::push(L,lret,true);

	return 1;
}

// bool wxFromString(const wxString & string, wxColour * colour)
static int _bind_wxFromString_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxFromString_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool wxFromString(const wxString & string, wxColour * colour) function, expected prototype:\nbool wxFromString(const wxString & string, wxColour * colour)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString string(lua_tostring(L,1),lua_objlen(L,1));
	wxColour* colour=(Luna< wxObject >::checkSubType< wxColour >(L,2));

	bool lret = ::wxFromString(string, colour);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxFromString(const wxString & string, wxFont * font)
static int _bind_wxFromString_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxFromString_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool wxFromString(const wxString & string, wxFont * font) function, expected prototype:\nbool wxFromString(const wxString & string, wxFont * font)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString string(lua_tostring(L,1),lua_objlen(L,1));
	wxFont* font=(Luna< wxObject >::checkSubType< wxFont >(L,2));

	bool lret = ::wxFromString(string, font);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for wxFromString
static int _bind_wxFromString(lua_State *L) {
	if (_lg_typecheck_wxFromString_overload_1(L)) return _bind_wxFromString_overload_1(L);
	if (_lg_typecheck_wxFromString_overload_2(L)) return _bind_wxFromString_overload_2(L);

	luaL_error(L, "error in function wxFromString, cannot match any of the overloads for function wxFromString:\n  wxFromString(const wxString &, wxColour *)\n  wxFromString(const wxString &, wxFont *)\n");
	return 0;
}

// wxString wxToString(const wxColour & colour)
static int _bind_wxToString_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxToString_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxToString(const wxColour & colour) function, expected prototype:\nwxString wxToString(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
	if( !colour_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg colour in wxToString function");
	}
	const wxColour & colour=*colour_ptr;

	wxString lret = ::wxToString(colour);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxToString(const wxFont & font)
static int _bind_wxToString_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxToString_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxToString(const wxFont & font) function, expected prototype:\nwxString wxToString(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,1));
	if( !font_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg font in wxToString function");
	}
	const wxFont & font=*font_ptr;

	wxString lret = ::wxToString(font);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for wxToString
static int _bind_wxToString(lua_State *L) {
	if (_lg_typecheck_wxToString_overload_1(L)) return _bind_wxToString_overload_1(L);
	if (_lg_typecheck_wxToString_overload_2(L)) return _bind_wxToString_overload_2(L);

	luaL_error(L, "error in function wxToString, cannot match any of the overloads for function wxToString:\n  wxToString(const wxColour &)\n  wxToString(const wxFont &)\n");
	return 0;
}

// void wxDDECleanUp()
static int _bind_wxDDECleanUp(lua_State *L) {
	if (!_lg_typecheck_wxDDECleanUp(L)) {
		luaL_error(L, "luna typecheck failed in void wxDDECleanUp() function, expected prototype:\nvoid wxDDECleanUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxDDECleanUp();

	return 0;
}

// void wxDDEInitialize()
static int _bind_wxDDEInitialize(lua_State *L) {
	if (!_lg_typecheck_wxDDEInitialize(L)) {
		luaL_error(L, "luna typecheck failed in void wxDDEInitialize() function, expected prototype:\nvoid wxDDEInitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxDDEInitialize();

	return 0;
}

// void wxDisableAsserts()
static int _bind_wxDisableAsserts(lua_State *L) {
	if (!_lg_typecheck_wxDisableAsserts(L)) {
		luaL_error(L, "luna typecheck failed in void wxDisableAsserts() function, expected prototype:\nvoid wxDisableAsserts()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxDisableAsserts();

	return 0;
}

// bool wxIsDebuggerRunning()
static int _bind_wxIsDebuggerRunning(lua_State *L) {
	if (!_lg_typecheck_wxIsDebuggerRunning(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsDebuggerRunning() function, expected prototype:\nbool wxIsDebuggerRunning()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxIsDebuggerRunning();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void wxSetDefaultAssertHandler()
static int _bind_wxSetDefaultAssertHandler(lua_State *L) {
	if (!_lg_typecheck_wxSetDefaultAssertHandler(L)) {
		luaL_error(L, "luna typecheck failed in void wxSetDefaultAssertHandler() function, expected prototype:\nvoid wxSetDefaultAssertHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxSetDefaultAssertHandler();

	return 0;
}

// void wxTrap()
static int _bind_wxTrap(lua_State *L) {
	if (!_lg_typecheck_wxTrap(L)) {
		luaL_error(L, "luna typecheck failed in void wxTrap() function, expected prototype:\nvoid wxTrap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxTrap();

	return 0;
}

// wxString wxDirSelector(const wxString & message = wxDirSelectorPromptStr, const wxString & default_path = wxEmptyString, long style = 0, const wxPoint & pos = wxDefaultPosition, wxWindow * parent = NULL)
static int _bind_wxDirSelector(lua_State *L) {
	if (!_lg_typecheck_wxDirSelector(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxDirSelector(const wxString & message = wxDirSelectorPromptStr, const wxString & default_path = wxEmptyString, long style = 0, const wxPoint & pos = wxDefaultPosition, wxWindow * parent = NULL) function, expected prototype:\nwxString wxDirSelector(const wxString & message = wxDirSelectorPromptStr, const wxString & default_path = wxEmptyString, long style = 0, const wxPoint & pos = wxDefaultPosition, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString default_path(lua_tostring(L,2),lua_objlen(L,2));
	long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;
	const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
	if( luatop>3 && !pos_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDirSelector function");
	}
	const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
	wxWindow* parent=luatop>4 ? (Luna< wxObject >::checkSubType< wxWindow >(L,5)) : (wxWindow*)NULL;

	wxString lret = ::wxDirSelector(message, default_path, style, pos, parent);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// int wxNewEventType()
static int _bind_wxNewEventType(lua_State *L) {
	if (!_lg_typecheck_wxNewEventType(L)) {
		luaL_error(L, "luna typecheck failed in int wxNewEventType() function, expected prototype:\nint wxNewEventType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	int lret = ::wxNewEventType();
	lua_pushnumber(L,lret);

	return 1;
}

// void wxPostEvent(wxEvtHandler * dest, const wxEvent & event)
static int _bind_wxPostEvent(lua_State *L) {
	if (!_lg_typecheck_wxPostEvent(L)) {
		luaL_error(L, "luna typecheck failed in void wxPostEvent(wxEvtHandler * dest, const wxEvent & event) function, expected prototype:\nvoid wxPostEvent(wxEvtHandler * dest, const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxEvtHandler* dest=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
	const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
	if( !event_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg event in wxPostEvent function");
	}
	const wxEvent & event=*event_ptr;

	::wxPostEvent(dest, event);

	return 0;
}

// void wxQueueEvent(wxEvtHandler * dest, wxEvent * event)
static int _bind_wxQueueEvent(lua_State *L) {
	if (!_lg_typecheck_wxQueueEvent(L)) {
		luaL_error(L, "luna typecheck failed in void wxQueueEvent(wxEvtHandler * dest, wxEvent * event) function, expected prototype:\nvoid wxQueueEvent(wxEvtHandler * dest, wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxEvtHandler* dest=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));
	wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

	::wxQueueEvent(dest, event);

	return 0;
}

// wxString wxFileSelector(const wxString & message, const wxString & default_path = wxEmptyString, const wxString & default_filename = wxEmptyString, const wxString & default_extension = wxEmptyString, const wxString & wildcard = ".", int flags = 0, wxWindow * parent = NULL, int x = -1, int y = -1)
static int _bind_wxFileSelector(lua_State *L) {
	if (!_lg_typecheck_wxFileSelector(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxFileSelector(const wxString & message, const wxString & default_path = wxEmptyString, const wxString & default_filename = wxEmptyString, const wxString & default_extension = wxEmptyString, const wxString & wildcard = \".\", int flags = 0, wxWindow * parent = NULL, int x = -1, int y = -1) function, expected prototype:\nwxString wxFileSelector(const wxString & message, const wxString & default_path = wxEmptyString, const wxString & default_filename = wxEmptyString, const wxString & default_extension = wxEmptyString, const wxString & wildcard = \".\", int flags = 0, wxWindow * parent = NULL, int x = -1, int y = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString default_path(lua_tostring(L,2),lua_objlen(L,2));
	wxString default_filename(lua_tostring(L,3),lua_objlen(L,3));
	wxString default_extension(lua_tostring(L,4),lua_objlen(L,4));
	wxString wildcard(lua_tostring(L,5),lua_objlen(L,5));
	int flags=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
	wxWindow* parent=luatop>6 ? (Luna< wxObject >::checkSubType< wxWindow >(L,7)) : (wxWindow*)NULL;
	int x=luatop>7 ? (int)lua_tointeger(L,8) : (int)-1;
	int y=luatop>8 ? (int)lua_tointeger(L,9) : (int)-1;

	wxString lret = ::wxFileSelector(message, default_path, default_filename, default_extension, wildcard, flags, parent, x, y);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetOSDirectory()
static int _bind_wxGetOSDirectory(lua_State *L) {
	if (!_lg_typecheck_wxGetOSDirectory(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetOSDirectory() function, expected prototype:\nwxString wxGetOSDirectory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxGetOSDirectory();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// int wxParseCommonDialogsFilter(const wxString & wildCard, wxArrayString & descriptions, wxArrayString & filters)
static int _bind_wxParseCommonDialogsFilter(lua_State *L) {
	if (!_lg_typecheck_wxParseCommonDialogsFilter(L)) {
		luaL_error(L, "luna typecheck failed in int wxParseCommonDialogsFilter(const wxString & wildCard, wxArrayString & descriptions, wxArrayString & filters) function, expected prototype:\nint wxParseCommonDialogsFilter(const wxString & wildCard, wxArrayString & descriptions, wxArrayString & filters)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\narg 3 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString wildCard(lua_tostring(L,1),lua_objlen(L,1));
	wxArrayString* descriptions_ptr=(Luna< wxArrayString >::check(L,2));
	if( !descriptions_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg descriptions in wxParseCommonDialogsFilter function");
	}
	wxArrayString & descriptions=*descriptions_ptr;
	wxArrayString* filters_ptr=(Luna< wxArrayString >::check(L,3));
	if( !filters_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg filters in wxParseCommonDialogsFilter function");
	}
	wxArrayString & filters=*filters_ptr;

	int lret = ::wxParseCommonDialogsFilter(wildCard, descriptions, filters);
	lua_pushnumber(L,lret);

	return 1;
}

// void wxDos2UnixFilename(wxChar * s)
static int _bind_wxDos2UnixFilename(lua_State *L) {
	if (!_lg_typecheck_wxDos2UnixFilename(L)) {
		luaL_error(L, "luna typecheck failed in void wxDos2UnixFilename(wxChar * s) function, expected prototype:\nvoid wxDos2UnixFilename(wxChar * s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	wxChar * s=(wxChar *)lua_tostring(L,1);

	::wxDos2UnixFilename(s);

	return 0;
}

// void wxUnix2DosFilename(wxChar * s)
static int _bind_wxUnix2DosFilename(lua_State *L) {
	if (!_lg_typecheck_wxUnix2DosFilename(L)) {
		luaL_error(L, "luna typecheck failed in void wxUnix2DosFilename(wxChar * s) function, expected prototype:\nvoid wxUnix2DosFilename(wxChar * s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	wxChar * s=(wxChar *)lua_tostring(L,1);

	::wxUnix2DosFilename(s);

	return 0;
}

// bool wxDirExists(const wxString & dirname)
static int _bind_wxDirExists(lua_State *L) {
	if (!_lg_typecheck_wxDirExists(L)) {
		luaL_error(L, "luna typecheck failed in bool wxDirExists(const wxString & dirname) function, expected prototype:\nbool wxDirExists(const wxString & dirname)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString dirname(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxDirExists(dirname);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxCopyFile(const wxString & file1, const wxString & file2, bool overwrite = true)
static int _bind_wxCopyFile(lua_State *L) {
	if (!_lg_typecheck_wxCopyFile(L)) {
		luaL_error(L, "luna typecheck failed in bool wxCopyFile(const wxString & file1, const wxString & file2, bool overwrite = true) function, expected prototype:\nbool wxCopyFile(const wxString & file1, const wxString & file2, bool overwrite = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString file1(lua_tostring(L,1),lua_objlen(L,1));
	wxString file2(lua_tostring(L,2),lua_objlen(L,2));
	bool overwrite=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

	bool lret = ::wxCopyFile(file1, file2, overwrite);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxFileExists(const wxString & filename)
static int _bind_wxFileExists(lua_State *L) {
	if (!_lg_typecheck_wxFileExists(L)) {
		luaL_error(L, "luna typecheck failed in bool wxFileExists(const wxString & filename) function, expected prototype:\nbool wxFileExists(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString filename(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxFileExists(filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxMatchWild(const wxString & pattern, const wxString & text, bool dot_special)
static int _bind_wxMatchWild(lua_State *L) {
	if (!_lg_typecheck_wxMatchWild(L)) {
		luaL_error(L, "luna typecheck failed in bool wxMatchWild(const wxString & pattern, const wxString & text, bool dot_special) function, expected prototype:\nbool wxMatchWild(const wxString & pattern, const wxString & text, bool dot_special)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString pattern(lua_tostring(L,1),lua_objlen(L,1));
	wxString text(lua_tostring(L,2),lua_objlen(L,2));
	bool dot_special=(bool)(lua_toboolean(L,3)==1);

	bool lret = ::wxMatchWild(pattern, text, dot_special);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// wxString wxPathOnly(const wxString & path)
static int _bind_wxPathOnly(lua_State *L) {
	if (!_lg_typecheck_wxPathOnly(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxPathOnly(const wxString & path) function, expected prototype:\nwxString wxPathOnly(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString path(lua_tostring(L,1),lua_objlen(L,1));

	wxString lret = ::wxPathOnly(path);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool wxIsWild(const wxString & pattern)
static int _bind_wxIsWild(lua_State *L) {
	if (!_lg_typecheck_wxIsWild(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsWild(const wxString & pattern) function, expected prototype:\nbool wxIsWild(const wxString & pattern)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString pattern(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxIsWild(pattern);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxIsAbsolutePath(const wxString & filename)
static int _bind_wxIsAbsolutePath(lua_State *L) {
	if (!_lg_typecheck_wxIsAbsolutePath(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsAbsolutePath(const wxString & filename) function, expected prototype:\nbool wxIsAbsolutePath(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString filename(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxIsAbsolutePath(filename);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// wxString wxGetCwd()
static int _bind_wxGetCwd(lua_State *L) {
	if (!_lg_typecheck_wxGetCwd(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetCwd() function, expected prototype:\nwxString wxGetCwd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxGetCwd();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool wxSetWorkingDirectory(const wxString & dir)
static int _bind_wxSetWorkingDirectory(lua_State *L) {
	if (!_lg_typecheck_wxSetWorkingDirectory(L)) {
		luaL_error(L, "luna typecheck failed in bool wxSetWorkingDirectory(const wxString & dir) function, expected prototype:\nbool wxSetWorkingDirectory(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString dir(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxSetWorkingDirectory(dir);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxConcatFiles(const wxString & file1, const wxString & file2, const wxString & file3)
static int _bind_wxConcatFiles(lua_State *L) {
	if (!_lg_typecheck_wxConcatFiles(L)) {
		luaL_error(L, "luna typecheck failed in bool wxConcatFiles(const wxString & file1, const wxString & file2, const wxString & file3) function, expected prototype:\nbool wxConcatFiles(const wxString & file1, const wxString & file2, const wxString & file3)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString file1(lua_tostring(L,1),lua_objlen(L,1));
	wxString file2(lua_tostring(L,2),lua_objlen(L,2));
	wxString file3(lua_tostring(L,3),lua_objlen(L,3));

	bool lret = ::wxConcatFiles(file1, file2, file3);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxMkdir(const wxString & dir, int perm = ::wxS_DIR_DEFAULT)
static int _bind_wxMkdir(lua_State *L) {
	if (!_lg_typecheck_wxMkdir(L)) {
		luaL_error(L, "luna typecheck failed in bool wxMkdir(const wxString & dir, int perm = ::wxS_DIR_DEFAULT) function, expected prototype:\nbool wxMkdir(const wxString & dir, int perm = ::wxS_DIR_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString dir(lua_tostring(L,1),lua_objlen(L,1));
	int perm=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxS_DIR_DEFAULT;

	bool lret = ::wxMkdir(dir, perm);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxRmdir(const wxString & dir, int flags = 0)
static int _bind_wxRmdir(lua_State *L) {
	if (!_lg_typecheck_wxRmdir(L)) {
		luaL_error(L, "luna typecheck failed in bool wxRmdir(const wxString & dir, int flags = 0) function, expected prototype:\nbool wxRmdir(const wxString & dir, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString dir(lua_tostring(L,1),lua_objlen(L,1));
	int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

	bool lret = ::wxRmdir(dir, flags);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// wxString wxFindNextFile()
static int _bind_wxFindNextFile(lua_State *L) {
	if (!_lg_typecheck_wxFindNextFile(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxFindNextFile() function, expected prototype:\nwxString wxFindNextFile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxFindNextFile();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxFindFirstFile(const wxString & spec, int flags = 0)
static int _bind_wxFindFirstFile(lua_State *L) {
	if (!_lg_typecheck_wxFindFirstFile(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxFindFirstFile(const wxString & spec, int flags = 0) function, expected prototype:\nwxString wxFindFirstFile(const wxString & spec, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString spec(lua_tostring(L,1),lua_objlen(L,1));
	int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

	wxString lret = ::wxFindFirstFile(spec, flags);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxFileKind wxGetFileKind(int fd)
static int _bind_wxGetFileKind(lua_State *L) {
	if (!_lg_typecheck_wxGetFileKind(L)) {
		luaL_error(L, "luna typecheck failed in wxFileKind wxGetFileKind(int fd) function, expected prototype:\nwxFileKind wxGetFileKind(int fd)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int fd=(int)lua_tointeger(L,1);

	wxFileKind lret = ::wxGetFileKind(fd);
	lua_pushnumber(L,lret);

	return 1;
}

// wxFont wxGetFontFromUser(wxWindow * parent, const wxFont & fontInit, const wxString & caption = wxEmptyString)
static int _bind_wxGetFontFromUser(lua_State *L) {
	if (!_lg_typecheck_wxGetFontFromUser(L)) {
		luaL_error(L, "luna typecheck failed in wxFont wxGetFontFromUser(wxWindow * parent, const wxFont & fontInit, const wxString & caption = wxEmptyString) function, expected prototype:\nwxFont wxGetFontFromUser(wxWindow * parent, const wxFont & fontInit, const wxString & caption = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
	const wxFont* fontInit_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
	if( !fontInit_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg fontInit in wxGetFontFromUser function");
	}
	const wxFont & fontInit=*fontInit_ptr;
	wxString caption(lua_tostring(L,3),lua_objlen(L,3));

	wxFont stack_lret = ::wxGetFontFromUser(parent, fontInit, caption);
	wxFont* lret = new wxFont(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxFont >::push(L,lret,true);

	return 1;
}

// bool wxColourDisplay()
static int _bind_wxColourDisplay(lua_State *L) {
	if (!_lg_typecheck_wxColourDisplay(L)) {
		luaL_error(L, "luna typecheck failed in bool wxColourDisplay() function, expected prototype:\nbool wxColourDisplay()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxColourDisplay();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// int wxDisplayDepth()
static int _bind_wxDisplayDepth(lua_State *L) {
	if (!_lg_typecheck_wxDisplayDepth(L)) {
		luaL_error(L, "luna typecheck failed in int wxDisplayDepth() function, expected prototype:\nint wxDisplayDepth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	int lret = ::wxDisplayDepth();
	lua_pushnumber(L,lret);

	return 1;
}

// void wxSetCursor(const wxCursor & cursor)
static int _bind_wxSetCursor(lua_State *L) {
	if (!_lg_typecheck_wxSetCursor(L)) {
		luaL_error(L, "luna typecheck failed in void wxSetCursor(const wxCursor & cursor) function, expected prototype:\nvoid wxSetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,1));
	if( !cursor_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxSetCursor function");
	}
	const wxCursor & cursor=*cursor_ptr;

	::wxSetCursor(cursor);

	return 0;
}

// void wxClientDisplayRect(int * x, int * y, int * width, int * height)
static int _bind_wxClientDisplayRect(lua_State *L) {
	if (!_lg_typecheck_wxClientDisplayRect(L)) {
		luaL_error(L, "luna typecheck failed in void wxClientDisplayRect(int * x, int * y, int * width, int * height) function, expected prototype:\nvoid wxClientDisplayRect(int * x, int * y, int * width, int * height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int* x=(int*)Luna< void >::check(L,1);
	int* y=(int*)Luna< void >::check(L,2);
	int* width=(int*)Luna< void >::check(L,3);
	int* height=(int*)Luna< void >::check(L,4);

	::wxClientDisplayRect(x, y, width, height);

	return 0;
}

// wxRect wxGetClientDisplayRect()
static int _bind_wxGetClientDisplayRect(lua_State *L) {
	if (!_lg_typecheck_wxGetClientDisplayRect(L)) {
		luaL_error(L, "luna typecheck failed in wxRect wxGetClientDisplayRect() function, expected prototype:\nwxRect wxGetClientDisplayRect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxRect stack_lret = ::wxGetClientDisplayRect();
	wxRect* lret = new wxRect(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxRect >::push(L,lret,true);

	return 1;
}

// wxSize wxGetDisplayPPI()
static int _bind_wxGetDisplayPPI(lua_State *L) {
	if (!_lg_typecheck_wxGetDisplayPPI(L)) {
		luaL_error(L, "luna typecheck failed in wxSize wxGetDisplayPPI() function, expected prototype:\nwxSize wxGetDisplayPPI()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxSize stack_lret = ::wxGetDisplayPPI();
	wxSize* lret = new wxSize(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxSize >::push(L,lret,true);

	return 1;
}

// void wxDisplaySize(int * width, int * height)
static int _bind_wxDisplaySize(lua_State *L) {
	if (!_lg_typecheck_wxDisplaySize(L)) {
		luaL_error(L, "luna typecheck failed in void wxDisplaySize(int * width, int * height) function, expected prototype:\nvoid wxDisplaySize(int * width, int * height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int* width=(int*)Luna< void >::check(L,1);
	int* height=(int*)Luna< void >::check(L,2);

	::wxDisplaySize(width, height);

	return 0;
}

// wxSize wxGetDisplaySize()
static int _bind_wxGetDisplaySize(lua_State *L) {
	if (!_lg_typecheck_wxGetDisplaySize(L)) {
		luaL_error(L, "luna typecheck failed in wxSize wxGetDisplaySize() function, expected prototype:\nwxSize wxGetDisplaySize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxSize stack_lret = ::wxGetDisplaySize();
	wxSize* lret = new wxSize(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxSize >::push(L,lret,true);

	return 1;
}

// void wxDisplaySizeMM(int * width, int * height)
static int _bind_wxDisplaySizeMM(lua_State *L) {
	if (!_lg_typecheck_wxDisplaySizeMM(L)) {
		luaL_error(L, "luna typecheck failed in void wxDisplaySizeMM(int * width, int * height) function, expected prototype:\nvoid wxDisplaySizeMM(int * width, int * height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int* width=(int*)Luna< void >::check(L,1);
	int* height=(int*)Luna< void >::check(L,2);

	::wxDisplaySizeMM(width, height);

	return 0;
}

// wxSize wxGetDisplaySizeMM()
static int _bind_wxGetDisplaySizeMM(lua_State *L) {
	if (!_lg_typecheck_wxGetDisplaySizeMM(L)) {
		luaL_error(L, "luna typecheck failed in wxSize wxGetDisplaySizeMM() function, expected prototype:\nwxSize wxGetDisplaySizeMM()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxSize stack_lret = ::wxGetDisplaySizeMM();
	wxSize* lret = new wxSize(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxSize >::push(L,lret,true);

	return 1;
}

// sgtApp & wxGetApp()
static int _bind_wxGetApp(lua_State *L) {
	if (!_lg_typecheck_wxGetApp(L)) {
		luaL_error(L, "luna typecheck failed in sgtApp & wxGetApp() function, expected prototype:\nsgtApp & wxGetApp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	const sgtApp* lret = &::wxGetApp();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< sgtApp >::push(L,lret,false);

	return 1;
}

// void wxInitAllImageHandlers()
static int _bind_wxInitAllImageHandlers(lua_State *L) {
	if (!_lg_typecheck_wxInitAllImageHandlers(L)) {
		luaL_error(L, "luna typecheck failed in void wxInitAllImageHandlers() function, expected prototype:\nvoid wxInitAllImageHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxInitAllImageHandlers();

	return 0;
}

// void wxEntryCleanup()
static int _bind_wxEntryCleanup(lua_State *L) {
	if (!_lg_typecheck_wxEntryCleanup(L)) {
		luaL_error(L, "luna typecheck failed in void wxEntryCleanup() function, expected prototype:\nvoid wxEntryCleanup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxEntryCleanup();

	return 0;
}

// void wxSafeShowMessage(const wxString & title, const wxString & text)
static int _bind_wxSafeShowMessage(lua_State *L) {
	if (!_lg_typecheck_wxSafeShowMessage(L)) {
		luaL_error(L, "luna typecheck failed in void wxSafeShowMessage(const wxString & title, const wxString & text) function, expected prototype:\nvoid wxSafeShowMessage(const wxString & title, const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString title(lua_tostring(L,1),lua_objlen(L,1));
	wxString text(lua_tostring(L,2),lua_objlen(L,2));

	::wxSafeShowMessage(title, text);

	return 0;
}

// unsigned long wxSysErrorCode()
static int _bind_wxSysErrorCode(lua_State *L) {
	if (!_lg_typecheck_wxSysErrorCode(L)) {
		luaL_error(L, "luna typecheck failed in unsigned long wxSysErrorCode() function, expected prototype:\nunsigned long wxSysErrorCode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	unsigned long lret = ::wxSysErrorCode();
	lua_pushnumber(L,lret);

	return 1;
}

// int wxFinite(double x)
static int _bind_wxFinite(lua_State *L) {
	if (!_lg_typecheck_wxFinite(L)) {
		luaL_error(L, "luna typecheck failed in int wxFinite(double x) function, expected prototype:\nint wxFinite(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	int lret = ::wxFinite(x);
	lua_pushnumber(L,lret);

	return 1;
}

// bool wxIsNaN(double x)
static int _bind_wxIsNaN(lua_State *L) {
	if (!_lg_typecheck_wxIsNaN(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsNaN(double x) function, expected prototype:\nbool wxIsNaN(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::wxIsNaN(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxIsSameDouble(double x, double y)
static int _bind_wxIsSameDouble(lua_State *L) {
	if (!_lg_typecheck_wxIsSameDouble(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsSameDouble(double x, double y) function, expected prototype:\nbool wxIsSameDouble(double x, double y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);
	double y=(double)lua_tonumber(L,2);

	bool lret = ::wxIsSameDouble(x, y);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxIsNullDouble(double x)
static int _bind_wxIsNullDouble(lua_State *L) {
	if (!_lg_typecheck_wxIsNullDouble(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsNullDouble(double x) function, expected prototype:\nbool wxIsNullDouble(double x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	double x=(double)lua_tonumber(L,1);

	bool lret = ::wxIsNullDouble(x);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// int wxMessageBox(const wxString & message, const wxString & caption = "Message", int style = wxOK, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord)
static int _bind_wxMessageBox(lua_State *L) {
	if (!_lg_typecheck_wxMessageBox(L)) {
		luaL_error(L, "luna typecheck failed in int wxMessageBox(const wxString & message, const wxString & caption = \"Message\", int style = wxOK, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord) function, expected prototype:\nint wxMessageBox(const wxString & message, const wxString & caption = \"Message\", int style = wxOK, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	int style=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxOK;
	wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;
	int x=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxDefaultCoord;
	int y=luatop>5 ? (int)lua_tointeger(L,6) : (int)::wxDefaultCoord;

	int lret = ::wxMessageBox(message, caption, style, parent, x, y);
	lua_pushnumber(L,lret);

	return 1;
}

// long wxGetNumberFromUser(const wxString & message, const wxString & prompt, const wxString & caption, long value, long min = 0, long max = 100, wxWindow * parent = NULL, const wxPoint & pos = wxDefaultPosition)
static int _bind_wxGetNumberFromUser(lua_State *L) {
	if (!_lg_typecheck_wxGetNumberFromUser(L)) {
		luaL_error(L, "luna typecheck failed in long wxGetNumberFromUser(const wxString & message, const wxString & prompt, const wxString & caption, long value, long min = 0, long max = 100, wxWindow * parent = NULL, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nlong wxGetNumberFromUser(const wxString & message, const wxString & prompt, const wxString & caption, long value, long min = 0, long max = 100, wxWindow * parent = NULL, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 7 ID = 56813631\narg 8 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString prompt(lua_tostring(L,2),lua_objlen(L,2));
	wxString caption(lua_tostring(L,3),lua_objlen(L,3));
	long value=(long)lua_tonumber(L,4);
	long min=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;
	long max=luatop>5 ? (long)lua_tonumber(L,6) : (long)100;
	wxWindow* parent=luatop>6 ? (Luna< wxObject >::checkSubType< wxWindow >(L,7)) : (wxWindow*)NULL;
	const wxPoint* pos_ptr=luatop>7 ? (Luna< wxPoint >::check(L,8)) : NULL;
	if( luatop>7 && !pos_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGetNumberFromUser function");
	}
	const wxPoint & pos=luatop>7 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;

	long lret = ::wxGetNumberFromUser(message, prompt, caption, value, min, max, parent, pos);
	lua_pushnumber(L,lret);

	return 1;
}

// wxObject * wxCreateDynamicObject(const wxString & className)
static int _bind_wxCreateDynamicObject(lua_State *L) {
	if (!_lg_typecheck_wxCreateDynamicObject(L)) {
		luaL_error(L, "luna typecheck failed in wxObject * wxCreateDynamicObject(const wxString & className) function, expected prototype:\nwxObject * wxCreateDynamicObject(const wxString & className)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString className(lua_tostring(L,1),lua_objlen(L,1));

	wxObject * lret = ::wxCreateDynamicObject(className);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxObject >::push(L,lret,false);

	return 1;
}

// void wxTextAttrCollectCommonAttributes(wxTextAttr & currentStyle, const wxTextAttr & attr, wxTextAttr & clashingAttr, wxTextAttr & absentAttr)
static int _bind_wxTextAttrCollectCommonAttributes(lua_State *L) {
	if (!_lg_typecheck_wxTextAttrCollectCommonAttributes(L)) {
		luaL_error(L, "luna typecheck failed in void wxTextAttrCollectCommonAttributes(wxTextAttr & currentStyle, const wxTextAttr & attr, wxTextAttr & clashingAttr, wxTextAttr & absentAttr) function, expected prototype:\nvoid wxTextAttrCollectCommonAttributes(wxTextAttr & currentStyle, const wxTextAttr & attr, wxTextAttr & clashingAttr, wxTextAttr & absentAttr)\nClass arguments details:\narg 1 ID = 37117058\narg 2 ID = 37117058\narg 3 ID = 37117058\narg 4 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
	}

	wxTextAttr* currentStyle_ptr=(Luna< wxTextAttr >::check(L,1));
	if( !currentStyle_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg currentStyle in wxTextAttrCollectCommonAttributes function");
	}
	wxTextAttr & currentStyle=*currentStyle_ptr;
	const wxTextAttr* attr_ptr=(Luna< wxTextAttr >::check(L,2));
	if( !attr_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrCollectCommonAttributes function");
	}
	const wxTextAttr & attr=*attr_ptr;
	wxTextAttr* clashingAttr_ptr=(Luna< wxTextAttr >::check(L,3));
	if( !clashingAttr_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextAttrCollectCommonAttributes function");
	}
	wxTextAttr & clashingAttr=*clashingAttr_ptr;
	wxTextAttr* absentAttr_ptr=(Luna< wxTextAttr >::check(L,4));
	if( !absentAttr_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextAttrCollectCommonAttributes function");
	}
	wxTextAttr & absentAttr=*absentAttr_ptr;

	::wxTextAttrCollectCommonAttributes(currentStyle, attr, clashingAttr, absentAttr);

	return 0;
}

// wxString wxGetStockLabel(int id, long flags = ::wxSTOCK_WITH_MNEMONIC)
static int _bind_wxGetStockLabel(lua_State *L) {
	if (!_lg_typecheck_wxGetStockLabel(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetStockLabel(int id, long flags = ::wxSTOCK_WITH_MNEMONIC) function, expected prototype:\nwxString wxGetStockLabel(int id, long flags = ::wxSTOCK_WITH_MNEMONIC)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	int id=(int)lua_tointeger(L,1);
	long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxSTOCK_WITH_MNEMONIC;

	wxString lret = ::wxGetStockLabel(id, flags);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetTextFromUser(const wxString & message, const wxString & caption = "Input text", const wxString & default_value = wxEmptyString, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord, bool centre = true)
static int _bind_wxGetTextFromUser(lua_State *L) {
	if (!_lg_typecheck_wxGetTextFromUser(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetTextFromUser(const wxString & message, const wxString & caption = \"Input text\", const wxString & default_value = wxEmptyString, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord, bool centre = true) function, expected prototype:\nwxString wxGetTextFromUser(const wxString & message, const wxString & caption = \"Input text\", const wxString & default_value = wxEmptyString, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord, bool centre = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	wxString default_value(lua_tostring(L,3),lua_objlen(L,3));
	wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;
	int x=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxDefaultCoord;
	int y=luatop>5 ? (int)lua_tointeger(L,6) : (int)::wxDefaultCoord;
	bool centre=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;

	wxString lret = ::wxGetTextFromUser(message, caption, default_value, parent, x, y, centre);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetPasswordFromUser(const wxString & message, const wxString & caption = "Input text", const wxString & default_value = wxEmptyString, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord, bool centre = true)
static int _bind_wxGetPasswordFromUser(lua_State *L) {
	if (!_lg_typecheck_wxGetPasswordFromUser(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetPasswordFromUser(const wxString & message, const wxString & caption = \"Input text\", const wxString & default_value = wxEmptyString, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord, bool centre = true) function, expected prototype:\nwxString wxGetPasswordFromUser(const wxString & message, const wxString & caption = \"Input text\", const wxString & default_value = wxEmptyString, wxWindow * parent = NULL, int x = ::wxDefaultCoord, int y = ::wxDefaultCoord, bool centre = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	wxString default_value(lua_tostring(L,3),lua_objlen(L,3));
	wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;
	int x=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxDefaultCoord;
	int y=luatop>5 ? (int)lua_tointeger(L,6) : (int)::wxDefaultCoord;
	bool centre=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;

	wxString lret = ::wxGetPasswordFromUser(message, caption, default_value, parent, x, y, centre);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// bool wxIsMainThread()
static int _bind_wxIsMainThread(lua_State *L) {
	if (!_lg_typecheck_wxIsMainThread(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsMainThread() function, expected prototype:\nbool wxIsMainThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxIsMainThread();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// int wxGetTimeZone()
static int _bind_wxGetTimeZone(lua_State *L) {
	if (!_lg_typecheck_wxGetTimeZone(L)) {
		luaL_error(L, "luna typecheck failed in int wxGetTimeZone() function, expected prototype:\nint wxGetTimeZone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	int lret = ::wxGetTimeZone();
	lua_pushnumber(L,lret);

	return 1;
}

// long wxGetLocalTime()
static int _bind_wxGetLocalTime(lua_State *L) {
	if (!_lg_typecheck_wxGetLocalTime(L)) {
		luaL_error(L, "luna typecheck failed in long wxGetLocalTime() function, expected prototype:\nlong wxGetLocalTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	long lret = ::wxGetLocalTime();
	lua_pushnumber(L,lret);

	return 1;
}

// wxLongLong wxGetLocalTimeMillis()
static int _bind_wxGetLocalTimeMillis(lua_State *L) {
	if (!_lg_typecheck_wxGetLocalTimeMillis(L)) {
		luaL_error(L, "luna typecheck failed in wxLongLong wxGetLocalTimeMillis() function, expected prototype:\nwxLongLong wxGetLocalTimeMillis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxLongLong stack_lret = ::wxGetLocalTimeMillis();
	wxLongLong* lret = new wxLongLong(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxLongLong >::push(L,lret,true);

	return 1;
}

// long wxGetUTCTime()
static int _bind_wxGetUTCTime(lua_State *L) {
	if (!_lg_typecheck_wxGetUTCTime(L)) {
		luaL_error(L, "luna typecheck failed in long wxGetUTCTime() function, expected prototype:\nlong wxGetUTCTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	long lret = ::wxGetUTCTime();
	lua_pushnumber(L,lret);

	return 1;
}

// wxLongLong wxGetUTCTimeMillis()
static int _bind_wxGetUTCTimeMillis(lua_State *L) {
	if (!_lg_typecheck_wxGetUTCTimeMillis(L)) {
		luaL_error(L, "luna typecheck failed in wxLongLong wxGetUTCTimeMillis() function, expected prototype:\nwxLongLong wxGetUTCTimeMillis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxLongLong stack_lret = ::wxGetUTCTimeMillis();
	wxLongLong* lret = new wxLongLong(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxLongLong >::push(L,lret,true);

	return 1;
}

// wxLongLong wxGetUTCTimeUSec()
static int _bind_wxGetUTCTimeUSec(lua_State *L) {
	if (!_lg_typecheck_wxGetUTCTimeUSec(L)) {
		luaL_error(L, "luna typecheck failed in wxLongLong wxGetUTCTimeUSec() function, expected prototype:\nwxLongLong wxGetUTCTimeUSec()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxLongLong stack_lret = ::wxGetUTCTimeUSec();
	wxLongLong* lret = new wxLongLong(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxLongLong >::push(L,lret,true);

	return 1;
}

// wxTipProvider * wxCreateFileTipProvider(const wxString & filename, size_t currentTip)
static int _bind_wxCreateFileTipProvider(lua_State *L) {
	if (!_lg_typecheck_wxCreateFileTipProvider(L)) {
		luaL_error(L, "luna typecheck failed in wxTipProvider * wxCreateFileTipProvider(const wxString & filename, size_t currentTip) function, expected prototype:\nwxTipProvider * wxCreateFileTipProvider(const wxString & filename, size_t currentTip)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString filename(lua_tostring(L,1),lua_objlen(L,1));
	size_t currentTip=(size_t)lua_tointeger(L,2);

	wxTipProvider * lret = ::wxCreateFileTipProvider(filename, currentTip);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxTipProvider >::push(L,lret,false);

	return 1;
}

// bool wxShowTip(wxWindow * parent, wxTipProvider * tipProvider, bool showAtStartup = true)
static int _bind_wxShowTip(lua_State *L) {
	if (!_lg_typecheck_wxShowTip(L)) {
		luaL_error(L, "luna typecheck failed in bool wxShowTip(wxWindow * parent, wxTipProvider * tipProvider, bool showAtStartup = true) function, expected prototype:\nbool wxShowTip(wxWindow * parent, wxTipProvider * tipProvider, bool showAtStartup = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 98652564\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
	wxTipProvider* tipProvider=(Luna< wxTipProvider >::check(L,2));
	bool showAtStartup=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

	bool lret = ::wxShowTip(parent, tipProvider, showAtStartup);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// const wxString & wxGetTranslation(const wxString & string, const wxString & domain = wxEmptyString)
static int _bind_wxGetTranslation_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxGetTranslation_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in const wxString & wxGetTranslation(const wxString & string, const wxString & domain = wxEmptyString) function, expected prototype:\nconst wxString & wxGetTranslation(const wxString & string, const wxString & domain = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString string(lua_tostring(L,1),lua_objlen(L,1));
	wxString domain(lua_tostring(L,2),lua_objlen(L,2));

	const wxString & lret = ::wxGetTranslation(string, domain);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// const wxString & wxGetTranslation(const wxString & string, const wxString & plural, unsigned int n, const wxString & domain = wxEmptyString)
static int _bind_wxGetTranslation_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxGetTranslation_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in const wxString & wxGetTranslation(const wxString & string, const wxString & plural, unsigned int n, const wxString & domain = wxEmptyString) function, expected prototype:\nconst wxString & wxGetTranslation(const wxString & string, const wxString & plural, unsigned int n, const wxString & domain = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString string(lua_tostring(L,1),lua_objlen(L,1));
	wxString plural(lua_tostring(L,2),lua_objlen(L,2));
	unsigned n=(unsigned)lua_tointeger(L,3);
	wxString domain(lua_tostring(L,4),lua_objlen(L,4));

	const wxString & lret = ::wxGetTranslation(string, plural, n, domain);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// Overload binder for wxGetTranslation
static int _bind_wxGetTranslation(lua_State *L) {
	if (_lg_typecheck_wxGetTranslation_overload_1(L)) return _bind_wxGetTranslation_overload_1(L);
	if (_lg_typecheck_wxGetTranslation_overload_2(L)) return _bind_wxGetTranslation_overload_2(L);

	luaL_error(L, "error in function wxGetTranslation, cannot match any of the overloads for function wxGetTranslation:\n  wxGetTranslation(const wxString &, const wxString &)\n  wxGetTranslation(const wxString &, const wxString &, unsigned int, const wxString &)\n");
	return 0;
}

// const wxString & _(const wxString & string)
static int _bind__(lua_State *L) {
	if (!_lg_typecheck__(L)) {
		luaL_error(L, "luna typecheck failed in const wxString & _(const wxString & string) function, expected prototype:\nconst wxString & _(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString string(lua_tostring(L,1),lua_objlen(L,1));

	const wxString & lret = ::_(string);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// void wxBeginBusyCursor(const wxCursor * cursor = wxHOURGLASS_CURSOR)
static int _bind_wxBeginBusyCursor(lua_State *L) {
	if (!_lg_typecheck_wxBeginBusyCursor(L)) {
		luaL_error(L, "luna typecheck failed in void wxBeginBusyCursor(const wxCursor * cursor = wxHOURGLASS_CURSOR) function, expected prototype:\nvoid wxBeginBusyCursor(const wxCursor * cursor = wxHOURGLASS_CURSOR)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	const wxCursor* cursor=luatop>0 ? (Luna< wxObject >::checkSubType< wxCursor >(L,1)) : (const wxCursor*)wxHOURGLASS_CURSOR;

	::wxBeginBusyCursor(cursor);

	return 0;
}

// void wxEndBusyCursor()
static int _bind_wxEndBusyCursor(lua_State *L) {
	if (!_lg_typecheck_wxEndBusyCursor(L)) {
		luaL_error(L, "luna typecheck failed in void wxEndBusyCursor() function, expected prototype:\nvoid wxEndBusyCursor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxEndBusyCursor();

	return 0;
}

// bool wxIsBusy()
static int _bind_wxIsBusy(lua_State *L) {
	if (!_lg_typecheck_wxIsBusy(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsBusy() function, expected prototype:\nbool wxIsBusy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxIsBusy();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void wxBell()
static int _bind_wxBell(lua_State *L) {
	if (!_lg_typecheck_wxBell(L)) {
		luaL_error(L, "luna typecheck failed in void wxBell() function, expected prototype:\nvoid wxBell()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	::wxBell();

	return 0;
}

// void wxInfoMessageBox(wxWindow * parent)
static int _bind_wxInfoMessageBox(lua_State *L) {
	if (!_lg_typecheck_wxInfoMessageBox(L)) {
		luaL_error(L, "luna typecheck failed in void wxInfoMessageBox(wxWindow * parent) function, expected prototype:\nvoid wxInfoMessageBox(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

	::wxInfoMessageBox(parent);

	return 0;
}

// bool wxGetEnv(const wxString & var, wxString * value)
static int _bind_wxGetEnv(lua_State *L) {
	if (!_lg_typecheck_wxGetEnv(L)) {
		luaL_error(L, "luna typecheck failed in bool wxGetEnv(const wxString & var, wxString * value) function, expected prototype:\nbool wxGetEnv(const wxString & var, wxString * value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString var(lua_tostring(L,1),lua_objlen(L,1));
	wxString value(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = ::wxGetEnv(var, &value);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxSetEnv(const wxString & var, const wxString & value)
static int _bind_wxSetEnv(lua_State *L) {
	if (!_lg_typecheck_wxSetEnv(L)) {
		luaL_error(L, "luna typecheck failed in bool wxSetEnv(const wxString & var, const wxString & value) function, expected prototype:\nbool wxSetEnv(const wxString & var, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString var(lua_tostring(L,1),lua_objlen(L,1));
	wxString value(lua_tostring(L,2),lua_objlen(L,2));

	bool lret = ::wxSetEnv(var, value);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxUnsetEnv(const wxString & var)
static int _bind_wxUnsetEnv(lua_State *L) {
	if (!_lg_typecheck_wxUnsetEnv(L)) {
		luaL_error(L, "luna typecheck failed in bool wxUnsetEnv(const wxString & var) function, expected prototype:\nbool wxUnsetEnv(const wxString & var)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString var(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxUnsetEnv(var);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// wxBatteryState wxGetBatteryState()
static int _bind_wxGetBatteryState(lua_State *L) {
	if (!_lg_typecheck_wxGetBatteryState(L)) {
		luaL_error(L, "luna typecheck failed in wxBatteryState wxGetBatteryState() function, expected prototype:\nwxBatteryState wxGetBatteryState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxBatteryState lret = ::wxGetBatteryState();
	lua_pushnumber(L,lret);

	return 1;
}

// wxPowerType wxGetPowerType()
static int _bind_wxGetPowerType(lua_State *L) {
	if (!_lg_typecheck_wxGetPowerType(L)) {
		luaL_error(L, "luna typecheck failed in wxPowerType wxGetPowerType() function, expected prototype:\nwxPowerType wxGetPowerType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxPowerType lret = ::wxGetPowerType();
	lua_pushnumber(L,lret);

	return 1;
}

// bool wxGetKeyState(wxKeyCode key)
static int _bind_wxGetKeyState(lua_State *L) {
	if (!_lg_typecheck_wxGetKeyState(L)) {
		luaL_error(L, "luna typecheck failed in bool wxGetKeyState(wxKeyCode key) function, expected prototype:\nbool wxGetKeyState(wxKeyCode key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	wxKeyCode key=(wxKeyCode)lua_tointeger(L,1);

	bool lret = ::wxGetKeyState(key);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// wxPoint wxGetMousePosition()
static int _bind_wxGetMousePosition(lua_State *L) {
	if (!_lg_typecheck_wxGetMousePosition(L)) {
		luaL_error(L, "luna typecheck failed in wxPoint wxGetMousePosition() function, expected prototype:\nwxPoint wxGetMousePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxPoint stack_lret = ::wxGetMousePosition();
	wxPoint* lret = new wxPoint(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxPoint >::push(L,lret,true);

	return 1;
}

// wxMouseState wxGetMouseState()
static int _bind_wxGetMouseState(lua_State *L) {
	if (!_lg_typecheck_wxGetMouseState(L)) {
		luaL_error(L, "luna typecheck failed in wxMouseState wxGetMouseState() function, expected prototype:\nwxMouseState wxGetMouseState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxMouseState stack_lret = ::wxGetMouseState();
	wxMouseState* lret = new wxMouseState(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxMouseState >::push(L,lret,true);

	return 1;
}

// void wxEnableTopLevelWindows(bool enable = true)
static int _bind_wxEnableTopLevelWindows(lua_State *L) {
	if (!_lg_typecheck_wxEnableTopLevelWindows(L)) {
		luaL_error(L, "luna typecheck failed in void wxEnableTopLevelWindows(bool enable = true) function, expected prototype:\nvoid wxEnableTopLevelWindows(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	bool enable=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

	::wxEnableTopLevelWindows(enable);

	return 0;
}

// wxWindow * wxFindWindowAtPoint(const wxPoint & pt)
static int _bind_wxFindWindowAtPoint(lua_State *L) {
	if (!_lg_typecheck_wxFindWindowAtPoint(L)) {
		luaL_error(L, "luna typecheck failed in wxWindow * wxFindWindowAtPoint(const wxPoint & pt) function, expected prototype:\nwxWindow * wxFindWindowAtPoint(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
	}

	const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,1));
	if( !pt_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pt in wxFindWindowAtPoint function");
	}
	const wxPoint & pt=*pt_ptr;

	wxWindow * lret = ::wxFindWindowAtPoint(pt);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxWindow >::push(L,lret,false);

	return 1;
}

// wxWindow * wxFindWindowByLabel(const wxString & label, wxWindow * parent = NULL)
static int _bind_wxFindWindowByLabel(lua_State *L) {
	if (!_lg_typecheck_wxFindWindowByLabel(L)) {
		luaL_error(L, "luna typecheck failed in wxWindow * wxFindWindowByLabel(const wxString & label, wxWindow * parent = NULL) function, expected prototype:\nwxWindow * wxFindWindowByLabel(const wxString & label, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString label(lua_tostring(L,1),lua_objlen(L,1));
	wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

	wxWindow * lret = ::wxFindWindowByLabel(label, parent);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxWindow >::push(L,lret,false);

	return 1;
}

// wxWindow * wxFindWindowByName(const wxString & name, wxWindow * parent = NULL)
static int _bind_wxFindWindowByName(lua_State *L) {
	if (!_lg_typecheck_wxFindWindowByName(L)) {
		luaL_error(L, "luna typecheck failed in wxWindow * wxFindWindowByName(const wxString & name, wxWindow * parent = NULL) function, expected prototype:\nwxWindow * wxFindWindowByName(const wxString & name, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString name(lua_tostring(L,1),lua_objlen(L,1));
	wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

	wxWindow * lret = ::wxFindWindowByName(name, parent);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxWindow >::push(L,lret,false);

	return 1;
}

// int wxFindMenuItemId(wxFrame * frame, const wxString & menuString, const wxString & itemString)
static int _bind_wxFindMenuItemId(lua_State *L) {
	if (!_lg_typecheck_wxFindMenuItemId(L)) {
		luaL_error(L, "luna typecheck failed in int wxFindMenuItemId(wxFrame * frame, const wxString & menuString, const wxString & itemString) function, expected prototype:\nint wxFindMenuItemId(wxFrame * frame, const wxString & menuString, const wxString & itemString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,1));
	wxString menuString(lua_tostring(L,2),lua_objlen(L,2));
	wxString itemString(lua_tostring(L,3),lua_objlen(L,3));

	int lret = ::wxFindMenuItemId(frame, menuString, itemString);
	lua_pushnumber(L,lret);

	return 1;
}

// long wxNewId()
static int _bind_wxNewId(lua_State *L) {
	if (!_lg_typecheck_wxNewId(L)) {
		luaL_error(L, "luna typecheck failed in long wxNewId() function, expected prototype:\nlong wxNewId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	long lret = ::wxNewId();
	lua_pushnumber(L,lret);

	return 1;
}

// void wxRegisterId(long id)
static int _bind_wxRegisterId(lua_State *L) {
	if (!_lg_typecheck_wxRegisterId(L)) {
		luaL_error(L, "luna typecheck failed in void wxRegisterId(long id) function, expected prototype:\nvoid wxRegisterId(long id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	long id=(long)lua_tonumber(L,1);

	::wxRegisterId(id);

	return 0;
}

// bool wxLaunchDefaultApplication(const wxString & document, int flags = 0)
static int _bind_wxLaunchDefaultApplication(lua_State *L) {
	if (!_lg_typecheck_wxLaunchDefaultApplication(L)) {
		luaL_error(L, "luna typecheck failed in bool wxLaunchDefaultApplication(const wxString & document, int flags = 0) function, expected prototype:\nbool wxLaunchDefaultApplication(const wxString & document, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString document(lua_tostring(L,1),lua_objlen(L,1));
	int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

	bool lret = ::wxLaunchDefaultApplication(document, flags);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxLaunchDefaultBrowser(const wxString & url, int flags = 0)
static int _bind_wxLaunchDefaultBrowser(lua_State *L) {
	if (!_lg_typecheck_wxLaunchDefaultBrowser(L)) {
		luaL_error(L, "luna typecheck failed in bool wxLaunchDefaultBrowser(const wxString & url, int flags = 0) function, expected prototype:\nbool wxLaunchDefaultBrowser(const wxString & url, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString url(lua_tostring(L,1),lua_objlen(L,1));
	int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

	bool lret = ::wxLaunchDefaultBrowser(url, flags);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// wxString wxLoadUserResource(const wxString & resourceName, const wxString & resourceType = "TEXT")
static int _bind_wxLoadUserResource(lua_State *L) {
	if (!_lg_typecheck_wxLoadUserResource(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxLoadUserResource(const wxString & resourceName, const wxString & resourceType = \"TEXT\") function, expected prototype:\nwxString wxLoadUserResource(const wxString & resourceName, const wxString & resourceType = \"TEXT\")\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString resourceName(lua_tostring(L,1),lua_objlen(L,1));
	wxString resourceType(lua_tostring(L,2),lua_objlen(L,2));

	wxString lret = ::wxLoadUserResource(resourceName, resourceType);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxStripMenuCodes(const wxString & str, int flags = ::wxStrip_All)
static int _bind_wxStripMenuCodes(lua_State *L) {
	if (!_lg_typecheck_wxStripMenuCodes(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxStripMenuCodes(const wxString & str, int flags = ::wxStrip_All) function, expected prototype:\nwxString wxStripMenuCodes(const wxString & str, int flags = ::wxStrip_All)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString str(lua_tostring(L,1),lua_objlen(L,1));
	int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxStrip_All;

	wxString lret = ::wxStripMenuCodes(str, flags);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxLongLong wxGetFreeMemory()
static int _bind_wxGetFreeMemory(lua_State *L) {
	if (!_lg_typecheck_wxGetFreeMemory(L)) {
		luaL_error(L, "luna typecheck failed in wxLongLong wxGetFreeMemory() function, expected prototype:\nwxLongLong wxGetFreeMemory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxLongLong stack_lret = ::wxGetFreeMemory();
	wxLongLong* lret = new wxLongLong(stack_lret);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxLongLong >::push(L,lret,true);

	return 1;
}

// wxString wxGetHomeDir()
static int _bind_wxGetHomeDir(lua_State *L) {
	if (!_lg_typecheck_wxGetHomeDir(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetHomeDir() function, expected prototype:\nwxString wxGetHomeDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxGetHomeDir();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetFullHostName()
static int _bind_wxGetFullHostName(lua_State *L) {
	if (!_lg_typecheck_wxGetFullHostName(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetFullHostName() function, expected prototype:\nwxString wxGetFullHostName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxGetFullHostName();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetUserHome(const wxString & user = wxEmptyString)
static int _bind_wxGetUserHome(lua_State *L) {
	if (!_lg_typecheck_wxGetUserHome(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetUserHome(const wxString & user = wxEmptyString) function, expected prototype:\nwxString wxGetUserHome(const wxString & user = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString user(lua_tostring(L,1),lua_objlen(L,1));

	wxString lret = ::wxGetUserHome(user);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxString wxGetOsDescription()
static int _bind_wxGetOsDescription(lua_State *L) {
	if (!_lg_typecheck_wxGetOsDescription(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxGetOsDescription() function, expected prototype:\nwxString wxGetOsDescription()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxGetOsDescription();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// wxOperatingSystemId wxGetOsVersion(int * major = NULL, int * minor = NULL)
static int _bind_wxGetOsVersion(lua_State *L) {
	if (!_lg_typecheck_wxGetOsVersion(L)) {
		luaL_error(L, "luna typecheck failed in wxOperatingSystemId wxGetOsVersion(int * major = NULL, int * minor = NULL) function, expected prototype:\nwxOperatingSystemId wxGetOsVersion(int * major = NULL, int * minor = NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	int* major=luatop>0 ? (int*)Luna< void >::check(L,1) : (int*)NULL;
	int* minor=luatop>1 ? (int*)Luna< void >::check(L,2) : (int*)NULL;

	wxOperatingSystemId lret = ::wxGetOsVersion(major, minor);
	lua_pushnumber(L,lret);

	return 1;
}

// bool wxIsPlatform64Bit()
static int _bind_wxIsPlatform64Bit(lua_State *L) {
	if (!_lg_typecheck_wxIsPlatform64Bit(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsPlatform64Bit() function, expected prototype:\nbool wxIsPlatform64Bit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxIsPlatform64Bit();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxIsPlatformLittleEndian()
static int _bind_wxIsPlatformLittleEndian(lua_State *L) {
	if (!_lg_typecheck_wxIsPlatformLittleEndian(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsPlatformLittleEndian() function, expected prototype:\nbool wxIsPlatformLittleEndian()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	bool lret = ::wxIsPlatformLittleEndian();
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// long wxExecute(const wxString & command, int flags = ::wxEXEC_ASYNC, wxProcess * callback = NULL, const wxExecuteEnv * env = NULL)
static int _bind_wxExecute_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxExecute_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in long wxExecute(const wxString & command, int flags = ::wxEXEC_ASYNC, wxProcess * callback = NULL, const wxExecuteEnv * env = NULL) function, expected prototype:\nlong wxExecute(const wxString & command, int flags = ::wxEXEC_ASYNC, wxProcess * callback = NULL, const wxExecuteEnv * env = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 57480074\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString command(lua_tostring(L,1),lua_objlen(L,1));
	int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxEXEC_ASYNC;
	wxProcess* callback=luatop>2 ? (Luna< wxObject >::checkSubType< wxProcess >(L,3)) : (wxProcess*)NULL;
	const wxExecuteEnv* env=luatop>3 ? (Luna< wxExecuteEnv >::check(L,4)) : (const wxExecuteEnv*)NULL;

	long lret = ::wxExecute(command, flags, callback, env);
	lua_pushnumber(L,lret);

	return 1;
}

// long wxExecute(const wxString & command, wxArrayString & output, int flags = 0, const wxExecuteEnv * env = NULL)
static int _bind_wxExecute_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxExecute_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in long wxExecute(const wxString & command, wxArrayString & output, int flags = 0, const wxExecuteEnv * env = NULL) function, expected prototype:\nlong wxExecute(const wxString & command, wxArrayString & output, int flags = 0, const wxExecuteEnv * env = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\narg 4 ID = 57480074\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString command(lua_tostring(L,1),lua_objlen(L,1));
	wxArrayString* output_ptr=(Luna< wxArrayString >::check(L,2));
	if( !output_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg output in wxExecute function");
	}
	wxArrayString & output=*output_ptr;
	int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
	const wxExecuteEnv* env=luatop>3 ? (Luna< wxExecuteEnv >::check(L,4)) : (const wxExecuteEnv*)NULL;

	long lret = ::wxExecute(command, output, flags, env);
	lua_pushnumber(L,lret);

	return 1;
}

// long wxExecute(const wxString & command, wxArrayString & output, wxArrayString & errors, int flags = 0, const wxExecuteEnv * env = NULL)
static int _bind_wxExecute_overload_3(lua_State *L) {
	if (!_lg_typecheck_wxExecute_overload_3(L)) {
		luaL_error(L, "luna typecheck failed in long wxExecute(const wxString & command, wxArrayString & output, wxArrayString & errors, int flags = 0, const wxExecuteEnv * env = NULL) function, expected prototype:\nlong wxExecute(const wxString & command, wxArrayString & output, wxArrayString & errors, int flags = 0, const wxExecuteEnv * env = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\narg 3 ID = 59507769\narg 5 ID = 57480074\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString command(lua_tostring(L,1),lua_objlen(L,1));
	wxArrayString* output_ptr=(Luna< wxArrayString >::check(L,2));
	if( !output_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg output in wxExecute function");
	}
	wxArrayString & output=*output_ptr;
	wxArrayString* errors_ptr=(Luna< wxArrayString >::check(L,3));
	if( !errors_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg errors in wxExecute function");
	}
	wxArrayString & errors=*errors_ptr;
	int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
	const wxExecuteEnv* env=luatop>4 ? (Luna< wxExecuteEnv >::check(L,5)) : (const wxExecuteEnv*)NULL;

	long lret = ::wxExecute(command, output, errors, flags, env);
	lua_pushnumber(L,lret);

	return 1;
}

// Overload binder for wxExecute
static int _bind_wxExecute(lua_State *L) {
	if (_lg_typecheck_wxExecute_overload_1(L)) return _bind_wxExecute_overload_1(L);
	if (_lg_typecheck_wxExecute_overload_2(L)) return _bind_wxExecute_overload_2(L);
	if (_lg_typecheck_wxExecute_overload_3(L)) return _bind_wxExecute_overload_3(L);

	luaL_error(L, "error in function wxExecute, cannot match any of the overloads for function wxExecute:\n  wxExecute(const wxString &, int, wxProcess *, const wxExecuteEnv *)\n  wxExecute(const wxString &, wxArrayString &, int, const wxExecuteEnv *)\n  wxExecute(const wxString &, wxArrayString &, wxArrayString &, int, const wxExecuteEnv *)\n");
	return 0;
}

// unsigned long wxGetProcessId()
static int _bind_wxGetProcessId(lua_State *L) {
	if (!_lg_typecheck_wxGetProcessId(L)) {
		luaL_error(L, "luna typecheck failed in unsigned long wxGetProcessId() function, expected prototype:\nunsigned long wxGetProcessId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	unsigned long lret = ::wxGetProcessId();
	lua_pushnumber(L,lret);

	return 1;
}

// bool wxShell(const wxString & command = wxEmptyString)
static int _bind_wxShell(lua_State *L) {
	if (!_lg_typecheck_wxShell(L)) {
		luaL_error(L, "luna typecheck failed in bool wxShell(const wxString & command = wxEmptyString) function, expected prototype:\nbool wxShell(const wxString & command = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	wxString command(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxShell(command);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxShutdown(int flags = ::wxSHUTDOWN_POWEROFF)
static int _bind_wxShutdown(lua_State *L) {
	if (!_lg_typecheck_wxShutdown(L)) {
		luaL_error(L, "luna typecheck failed in bool wxShutdown(int flags = ::wxSHUTDOWN_POWEROFF) function, expected prototype:\nbool wxShutdown(int flags = ::wxSHUTDOWN_POWEROFF)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int luatop = lua_gettop(L);

	int flags=luatop>0 ? (int)lua_tointeger(L,1) : (int)::wxSHUTDOWN_POWEROFF;

	bool lret = ::wxShutdown(flags);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// void wxMicroSleep(unsigned long microseconds)
static int _bind_wxMicroSleep(lua_State *L) {
	if (!_lg_typecheck_wxMicroSleep(L)) {
		luaL_error(L, "luna typecheck failed in void wxMicroSleep(unsigned long microseconds) function, expected prototype:\nvoid wxMicroSleep(unsigned long microseconds)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned long microseconds=(unsigned long)lua_tonumber(L,1);

	::wxMicroSleep(microseconds);

	return 0;
}

// void wxMilliSleep(unsigned long milliseconds)
static int _bind_wxMilliSleep(lua_State *L) {
	if (!_lg_typecheck_wxMilliSleep(L)) {
		luaL_error(L, "luna typecheck failed in void wxMilliSleep(unsigned long milliseconds) function, expected prototype:\nvoid wxMilliSleep(unsigned long milliseconds)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned long milliseconds=(unsigned long)lua_tonumber(L,1);

	::wxMilliSleep(milliseconds);

	return 0;
}

// wxString wxNow()
static int _bind_wxNow(lua_State *L) {
	if (!_lg_typecheck_wxNow(L)) {
		luaL_error(L, "luna typecheck failed in wxString wxNow() function, expected prototype:\nwxString wxNow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxString lret = ::wxNow();
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// void wxSleep(int secs)
static int _bind_wxSleep(lua_State *L) {
	if (!_lg_typecheck_wxSleep(L)) {
		luaL_error(L, "luna typecheck failed in void wxSleep(int secs) function, expected prototype:\nvoid wxSleep(int secs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	int secs=(int)lua_tointeger(L,1);

	::wxSleep(secs);

	return 0;
}

// void wxUsleep(unsigned long milliseconds)
static int _bind_wxUsleep(lua_State *L) {
	if (!_lg_typecheck_wxUsleep(L)) {
		luaL_error(L, "luna typecheck failed in void wxUsleep(unsigned long milliseconds) function, expected prototype:\nvoid wxUsleep(unsigned long milliseconds)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	unsigned long milliseconds=(unsigned long)lua_tonumber(L,1);

	::wxUsleep(milliseconds);

	return 0;
}

// wxWindow * wxFindWindowAtPointer(wxPoint & pt)
static int _bind_wxFindWindowAtPointer(lua_State *L) {
	if (!_lg_typecheck_wxFindWindowAtPointer(L)) {
		luaL_error(L, "luna typecheck failed in wxWindow * wxFindWindowAtPointer(wxPoint & pt) function, expected prototype:\nwxWindow * wxFindWindowAtPointer(wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
	}

	wxPoint* pt_ptr=(Luna< wxPoint >::check(L,1));
	if( !pt_ptr ) {
		luaL_error(L, "Dereferencing NULL pointer for arg pt in wxFindWindowAtPointer function");
	}
	wxPoint & pt=*pt_ptr;

	wxWindow * lret = ::wxFindWindowAtPointer(pt);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxWindow >::push(L,lret,false);

	return 1;
}

// wxWindow * wxGetActiveWindow()
static int _bind_wxGetActiveWindow(lua_State *L) {
	if (!_lg_typecheck_wxGetActiveWindow(L)) {
		luaL_error(L, "luna typecheck failed in wxWindow * wxGetActiveWindow() function, expected prototype:\nwxWindow * wxGetActiveWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	wxWindow * lret = ::wxGetActiveWindow();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxWindow >::push(L,lret,false);

	return 1;
}

// wxWindow * wxGetTopLevelParent(wxWindow * window)
static int _bind_wxGetTopLevelParent(lua_State *L) {
	if (!_lg_typecheck_wxGetTopLevelParent(L)) {
		luaL_error(L, "luna typecheck failed in wxWindow * wxGetTopLevelParent(wxWindow * window) function, expected prototype:\nwxWindow * wxGetTopLevelParent(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

	wxWindow * lret = ::wxGetTopLevelParent(window);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< wxWindow >::push(L,lret,false);

	return 1;
}

// sgt::LogManager::LogHandler * createWxLogHandler(wxEvtHandler * handler)
static int _bind_createWxLogHandler(lua_State *L) {
	if (!_lg_typecheck_createWxLogHandler(L)) {
		luaL_error(L, "luna typecheck failed in sgt::LogManager::LogHandler * createWxLogHandler(wxEvtHandler * handler) function, expected prototype:\nsgt::LogManager::LogHandler * createWxLogHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
	}

	wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1));

	sgt::LogManager::LogHandler * lret = ::createWxLogHandler(handler);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< sgt::LogManager::LogHandler >::push(L,lret,false);

	return 1;
}

// bool wxIsEmpty(const char * s)
static int _bind_wxIsEmpty_overload_1(lua_State *L) {
	if (!_lg_typecheck_wxIsEmpty_overload_1(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsEmpty(const char * s) function, expected prototype:\nbool wxIsEmpty(const char * s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	const char * s=(const char *)lua_tostring(L,1);

	bool lret = ::wxIsEmpty(s);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// bool wxIsEmpty(const wxString & s)
static int _bind_wxIsEmpty_overload_2(lua_State *L) {
	if (!_lg_typecheck_wxIsEmpty_overload_2(L)) {
		luaL_error(L, "luna typecheck failed in bool wxIsEmpty(const wxString & s) function, expected prototype:\nbool wxIsEmpty(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString s(lua_tostring(L,1),lua_objlen(L,1));

	bool lret = ::wxIsEmpty(s);
	lua_pushboolean(L,lret?1:0);

	return 1;
}

// Overload binder for wxIsEmpty
static int _bind_wxIsEmpty(lua_State *L) {
	if (_lg_typecheck_wxIsEmpty_overload_1(L)) return _bind_wxIsEmpty_overload_1(L);
	if (_lg_typecheck_wxIsEmpty_overload_2(L)) return _bind_wxIsEmpty_overload_2(L);

	luaL_error(L, "error in function wxIsEmpty, cannot match any of the overloads for function wxIsEmpty:\n  wxIsEmpty(const char *)\n  wxIsEmpty(const wxString &)\n");
	return 0;
}

// size_t wxStrlen(const wxString & s)
static int _bind_wxStrlen(lua_State *L) {
	if (!_lg_typecheck_wxStrlen(L)) {
		luaL_error(L, "luna typecheck failed in size_t wxStrlen(const wxString & s) function, expected prototype:\nsize_t wxStrlen(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
	}

	wxString s(lua_tostring(L,1),lua_objlen(L,1));

	size_t lret = ::wxStrlen(s);
	lua_pushnumber(L,lret);

	return 1;
}

// size_t wxStrlcpy(char * dest, const char * src, size_t n)
static int _bind_wxStrlcpy(lua_State *L) {
	if (!_lg_typecheck_wxStrlcpy(L)) {
		luaL_error(L, "luna typecheck failed in size_t wxStrlcpy(char * dest, const char * src, size_t n) function, expected prototype:\nsize_t wxStrlcpy(char * dest, const char * src, size_t n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}

	char* dest=(char*)Luna< void >::check(L,1);
	const char * src=(const char *)lua_tostring(L,2);
	size_t n=(size_t)lua_tointeger(L,3);

	size_t lret = ::wxStrlcpy(dest, src, n);
	lua_pushnumber(L,lret);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"wx");
	lua_pushcfunction(L, _bind_wxAboutBox); lua_setfield(L,-2,"wxAboutBox");
	lua_pushcfunction(L, _bind_wxHandleFatalExceptions); lua_setfield(L,-2,"wxHandleFatalExceptions");
	lua_pushcfunction(L, _bind_wxInitialize); lua_setfield(L,-2,"wxInitialize");
	lua_pushcfunction(L, _bind_wxUninitialize); lua_setfield(L,-2,"wxUninitialize");
	lua_pushcfunction(L, _bind_wxWakeUpIdle); lua_setfield(L,-2,"wxWakeUpIdle");
	lua_pushcfunction(L, _bind_wxYield); lua_setfield(L,-2,"wxYield");
	lua_pushcfunction(L, _bind_wxSafeYield); lua_setfield(L,-2,"wxSafeYield");
	lua_pushcfunction(L, _bind_wxExit); lua_setfield(L,-2,"wxExit");
	lua_pushcfunction(L, _bind_wxBase64Encode); lua_setfield(L,-2,"wxBase64Encode");
	lua_pushcfunction(L, _bind_wxBase64EncodedSize); lua_setfield(L,-2,"wxBase64EncodedSize");
	lua_pushcfunction(L, _bind_wxCreatePersistentObject); lua_setfield(L,-2,"wxCreatePersistentObject");
	lua_pushcfunction(L, _bind_wxGetSingleChoiceIndex); lua_setfield(L,-2,"wxGetSingleChoiceIndex");
	lua_pushcfunction(L, _bind_wxGetSingleChoice); lua_setfield(L,-2,"wxGetSingleChoice");
	lua_pushcfunction(L, _bind_wxGetSelectedChoices); lua_setfield(L,-2,"wxGetSelectedChoices");
	lua_pushcfunction(L, _bind_wxGetColourFromUser); lua_setfield(L,-2,"wxGetColourFromUser");
	lua_pushcfunction(L, _bind_wxFromString); lua_setfield(L,-2,"wxFromString");
	lua_pushcfunction(L, _bind_wxToString); lua_setfield(L,-2,"wxToString");
	lua_pushcfunction(L, _bind_wxDDECleanUp); lua_setfield(L,-2,"wxDDECleanUp");
	lua_pushcfunction(L, _bind_wxDDEInitialize); lua_setfield(L,-2,"wxDDEInitialize");
	lua_pushcfunction(L, _bind_wxDisableAsserts); lua_setfield(L,-2,"wxDisableAsserts");
	lua_pushcfunction(L, _bind_wxIsDebuggerRunning); lua_setfield(L,-2,"wxIsDebuggerRunning");
	lua_pushcfunction(L, _bind_wxSetDefaultAssertHandler); lua_setfield(L,-2,"wxSetDefaultAssertHandler");
	lua_pushcfunction(L, _bind_wxTrap); lua_setfield(L,-2,"wxTrap");
	lua_pushcfunction(L, _bind_wxDirSelector); lua_setfield(L,-2,"wxDirSelector");
	lua_pushcfunction(L, _bind_wxNewEventType); lua_setfield(L,-2,"wxNewEventType");
	lua_pushcfunction(L, _bind_wxPostEvent); lua_setfield(L,-2,"wxPostEvent");
	lua_pushcfunction(L, _bind_wxQueueEvent); lua_setfield(L,-2,"wxQueueEvent");
	lua_pushcfunction(L, _bind_wxFileSelector); lua_setfield(L,-2,"wxFileSelector");
	lua_pushcfunction(L, _bind_wxGetOSDirectory); lua_setfield(L,-2,"wxGetOSDirectory");
	lua_pushcfunction(L, _bind_wxParseCommonDialogsFilter); lua_setfield(L,-2,"wxParseCommonDialogsFilter");
	lua_pushcfunction(L, _bind_wxDos2UnixFilename); lua_setfield(L,-2,"wxDos2UnixFilename");
	lua_pushcfunction(L, _bind_wxUnix2DosFilename); lua_setfield(L,-2,"wxUnix2DosFilename");
	lua_pushcfunction(L, _bind_wxDirExists); lua_setfield(L,-2,"wxDirExists");
	lua_pushcfunction(L, _bind_wxCopyFile); lua_setfield(L,-2,"wxCopyFile");
	lua_pushcfunction(L, _bind_wxFileExists); lua_setfield(L,-2,"wxFileExists");
	lua_pushcfunction(L, _bind_wxMatchWild); lua_setfield(L,-2,"wxMatchWild");
	lua_pushcfunction(L, _bind_wxPathOnly); lua_setfield(L,-2,"wxPathOnly");
	lua_pushcfunction(L, _bind_wxIsWild); lua_setfield(L,-2,"wxIsWild");
	lua_pushcfunction(L, _bind_wxIsAbsolutePath); lua_setfield(L,-2,"wxIsAbsolutePath");
	lua_pushcfunction(L, _bind_wxGetCwd); lua_setfield(L,-2,"wxGetCwd");
	lua_pushcfunction(L, _bind_wxSetWorkingDirectory); lua_setfield(L,-2,"wxSetWorkingDirectory");
	lua_pushcfunction(L, _bind_wxConcatFiles); lua_setfield(L,-2,"wxConcatFiles");
	lua_pushcfunction(L, _bind_wxMkdir); lua_setfield(L,-2,"wxMkdir");
	lua_pushcfunction(L, _bind_wxRmdir); lua_setfield(L,-2,"wxRmdir");
	lua_pushcfunction(L, _bind_wxFindNextFile); lua_setfield(L,-2,"wxFindNextFile");
	lua_pushcfunction(L, _bind_wxFindFirstFile); lua_setfield(L,-2,"wxFindFirstFile");
	lua_pushcfunction(L, _bind_wxGetFileKind); lua_setfield(L,-2,"wxGetFileKind");
	lua_pushcfunction(L, _bind_wxGetFontFromUser); lua_setfield(L,-2,"wxGetFontFromUser");
	lua_pushcfunction(L, _bind_wxColourDisplay); lua_setfield(L,-2,"wxColourDisplay");
	lua_pushcfunction(L, _bind_wxDisplayDepth); lua_setfield(L,-2,"wxDisplayDepth");
	lua_pushcfunction(L, _bind_wxSetCursor); lua_setfield(L,-2,"wxSetCursor");
	lua_pushcfunction(L, _bind_wxClientDisplayRect); lua_setfield(L,-2,"wxClientDisplayRect");
	lua_pushcfunction(L, _bind_wxGetClientDisplayRect); lua_setfield(L,-2,"wxGetClientDisplayRect");
	lua_pushcfunction(L, _bind_wxGetDisplayPPI); lua_setfield(L,-2,"wxGetDisplayPPI");
	lua_pushcfunction(L, _bind_wxDisplaySize); lua_setfield(L,-2,"wxDisplaySize");
	lua_pushcfunction(L, _bind_wxGetDisplaySize); lua_setfield(L,-2,"wxGetDisplaySize");
	lua_pushcfunction(L, _bind_wxDisplaySizeMM); lua_setfield(L,-2,"wxDisplaySizeMM");
	lua_pushcfunction(L, _bind_wxGetDisplaySizeMM); lua_setfield(L,-2,"wxGetDisplaySizeMM");
	lua_pushcfunction(L, _bind_wxGetApp); lua_setfield(L,-2,"wxGetApp");
	lua_pushcfunction(L, _bind_wxInitAllImageHandlers); lua_setfield(L,-2,"wxInitAllImageHandlers");
	lua_pushcfunction(L, _bind_wxEntryCleanup); lua_setfield(L,-2,"wxEntryCleanup");
	lua_pushcfunction(L, _bind_wxSafeShowMessage); lua_setfield(L,-2,"wxSafeShowMessage");
	lua_pushcfunction(L, _bind_wxSysErrorCode); lua_setfield(L,-2,"wxSysErrorCode");
	lua_pushcfunction(L, _bind_wxFinite); lua_setfield(L,-2,"wxFinite");
	lua_pushcfunction(L, _bind_wxIsNaN); lua_setfield(L,-2,"wxIsNaN");
	lua_pushcfunction(L, _bind_wxIsSameDouble); lua_setfield(L,-2,"wxIsSameDouble");
	lua_pushcfunction(L, _bind_wxIsNullDouble); lua_setfield(L,-2,"wxIsNullDouble");
	lua_pushcfunction(L, _bind_wxMessageBox); lua_setfield(L,-2,"wxMessageBox");
	lua_pushcfunction(L, _bind_wxGetNumberFromUser); lua_setfield(L,-2,"wxGetNumberFromUser");
	lua_pushcfunction(L, _bind_wxCreateDynamicObject); lua_setfield(L,-2,"wxCreateDynamicObject");
	lua_pushcfunction(L, _bind_wxTextAttrCollectCommonAttributes); lua_setfield(L,-2,"wxTextAttrCollectCommonAttributes");
	lua_pushcfunction(L, _bind_wxGetStockLabel); lua_setfield(L,-2,"wxGetStockLabel");
	lua_pushcfunction(L, _bind_wxGetTextFromUser); lua_setfield(L,-2,"wxGetTextFromUser");
	lua_pushcfunction(L, _bind_wxGetPasswordFromUser); lua_setfield(L,-2,"wxGetPasswordFromUser");
	lua_pushcfunction(L, _bind_wxIsMainThread); lua_setfield(L,-2,"wxIsMainThread");
	lua_pushcfunction(L, _bind_wxGetTimeZone); lua_setfield(L,-2,"wxGetTimeZone");
	lua_pushcfunction(L, _bind_wxGetLocalTime); lua_setfield(L,-2,"wxGetLocalTime");
	lua_pushcfunction(L, _bind_wxGetLocalTimeMillis); lua_setfield(L,-2,"wxGetLocalTimeMillis");
	lua_pushcfunction(L, _bind_wxGetUTCTime); lua_setfield(L,-2,"wxGetUTCTime");
	lua_pushcfunction(L, _bind_wxGetUTCTimeMillis); lua_setfield(L,-2,"wxGetUTCTimeMillis");
	lua_pushcfunction(L, _bind_wxGetUTCTimeUSec); lua_setfield(L,-2,"wxGetUTCTimeUSec");
	lua_pushcfunction(L, _bind_wxCreateFileTipProvider); lua_setfield(L,-2,"wxCreateFileTipProvider");
	lua_pushcfunction(L, _bind_wxShowTip); lua_setfield(L,-2,"wxShowTip");
	lua_pushcfunction(L, _bind_wxGetTranslation); lua_setfield(L,-2,"wxGetTranslation");
	lua_pushcfunction(L, _bind__); lua_setfield(L,-2,"_");
	lua_pushcfunction(L, _bind_wxBeginBusyCursor); lua_setfield(L,-2,"wxBeginBusyCursor");
	lua_pushcfunction(L, _bind_wxEndBusyCursor); lua_setfield(L,-2,"wxEndBusyCursor");
	lua_pushcfunction(L, _bind_wxIsBusy); lua_setfield(L,-2,"wxIsBusy");
	lua_pushcfunction(L, _bind_wxBell); lua_setfield(L,-2,"wxBell");
	lua_pushcfunction(L, _bind_wxInfoMessageBox); lua_setfield(L,-2,"wxInfoMessageBox");
	lua_pushcfunction(L, _bind_wxGetEnv); lua_setfield(L,-2,"wxGetEnv");
	lua_pushcfunction(L, _bind_wxSetEnv); lua_setfield(L,-2,"wxSetEnv");
	lua_pushcfunction(L, _bind_wxUnsetEnv); lua_setfield(L,-2,"wxUnsetEnv");
	lua_pushcfunction(L, _bind_wxGetBatteryState); lua_setfield(L,-2,"wxGetBatteryState");
	lua_pushcfunction(L, _bind_wxGetPowerType); lua_setfield(L,-2,"wxGetPowerType");
	lua_pushcfunction(L, _bind_wxGetKeyState); lua_setfield(L,-2,"wxGetKeyState");
	lua_pushcfunction(L, _bind_wxGetMousePosition); lua_setfield(L,-2,"wxGetMousePosition");
	lua_pushcfunction(L, _bind_wxGetMouseState); lua_setfield(L,-2,"wxGetMouseState");
	lua_pushcfunction(L, _bind_wxEnableTopLevelWindows); lua_setfield(L,-2,"wxEnableTopLevelWindows");
	lua_pushcfunction(L, _bind_wxFindWindowAtPoint); lua_setfield(L,-2,"wxFindWindowAtPoint");
	lua_pushcfunction(L, _bind_wxFindWindowByLabel); lua_setfield(L,-2,"wxFindWindowByLabel");
	lua_pushcfunction(L, _bind_wxFindWindowByName); lua_setfield(L,-2,"wxFindWindowByName");
	lua_pushcfunction(L, _bind_wxFindMenuItemId); lua_setfield(L,-2,"wxFindMenuItemId");
	lua_pushcfunction(L, _bind_wxNewId); lua_setfield(L,-2,"wxNewId");
	lua_pushcfunction(L, _bind_wxRegisterId); lua_setfield(L,-2,"wxRegisterId");
	lua_pushcfunction(L, _bind_wxLaunchDefaultApplication); lua_setfield(L,-2,"wxLaunchDefaultApplication");
	lua_pushcfunction(L, _bind_wxLaunchDefaultBrowser); lua_setfield(L,-2,"wxLaunchDefaultBrowser");
	lua_pushcfunction(L, _bind_wxLoadUserResource); lua_setfield(L,-2,"wxLoadUserResource");
	lua_pushcfunction(L, _bind_wxStripMenuCodes); lua_setfield(L,-2,"wxStripMenuCodes");
	lua_pushcfunction(L, _bind_wxGetFreeMemory); lua_setfield(L,-2,"wxGetFreeMemory");
	lua_pushcfunction(L, _bind_wxGetHomeDir); lua_setfield(L,-2,"wxGetHomeDir");
	lua_pushcfunction(L, _bind_wxGetFullHostName); lua_setfield(L,-2,"wxGetFullHostName");
	lua_pushcfunction(L, _bind_wxGetUserHome); lua_setfield(L,-2,"wxGetUserHome");
	lua_pushcfunction(L, _bind_wxGetOsDescription); lua_setfield(L,-2,"wxGetOsDescription");
	lua_pushcfunction(L, _bind_wxGetOsVersion); lua_setfield(L,-2,"wxGetOsVersion");
	lua_pushcfunction(L, _bind_wxIsPlatform64Bit); lua_setfield(L,-2,"wxIsPlatform64Bit");
	lua_pushcfunction(L, _bind_wxIsPlatformLittleEndian); lua_setfield(L,-2,"wxIsPlatformLittleEndian");
	lua_pushcfunction(L, _bind_wxExecute); lua_setfield(L,-2,"wxExecute");
	lua_pushcfunction(L, _bind_wxGetProcessId); lua_setfield(L,-2,"wxGetProcessId");
	lua_pushcfunction(L, _bind_wxShell); lua_setfield(L,-2,"wxShell");
	lua_pushcfunction(L, _bind_wxShutdown); lua_setfield(L,-2,"wxShutdown");
	lua_pushcfunction(L, _bind_wxMicroSleep); lua_setfield(L,-2,"wxMicroSleep");
	lua_pushcfunction(L, _bind_wxMilliSleep); lua_setfield(L,-2,"wxMilliSleep");
	lua_pushcfunction(L, _bind_wxNow); lua_setfield(L,-2,"wxNow");
	lua_pushcfunction(L, _bind_wxSleep); lua_setfield(L,-2,"wxSleep");
	lua_pushcfunction(L, _bind_wxUsleep); lua_setfield(L,-2,"wxUsleep");
	lua_pushcfunction(L, _bind_wxFindWindowAtPointer); lua_setfield(L,-2,"wxFindWindowAtPointer");
	lua_pushcfunction(L, _bind_wxGetActiveWindow); lua_setfield(L,-2,"wxGetActiveWindow");
	lua_pushcfunction(L, _bind_wxGetTopLevelParent); lua_setfield(L,-2,"wxGetTopLevelParent");
	lua_pushcfunction(L, _bind_createWxLogHandler); lua_setfield(L,-2,"createWxLogHandler");
	lua_pushcfunction(L, _bind_wxIsEmpty); lua_setfield(L,-2,"wxIsEmpty");
	lua_pushcfunction(L, _bind_wxStrlen); lua_setfield(L,-2,"wxStrlen");
	lua_pushcfunction(L, _bind_wxStrlcpy); lua_setfield(L,-2,"wxStrlcpy");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif

