#include <plug_common.h>

#include <defs.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,D3DCLEAR_TARGET); lua_setfield(L,-2,"D3DCLEAR_TARGET");
	lua_pushnumber(L,D3DCLEAR_ZBUFFER); lua_setfield(L,-2,"D3DCLEAR_ZBUFFER");
	lua_pushnumber(L,D3DCLEAR_STENCIL); lua_setfield(L,-2,"D3DCLEAR_STENCIL");
	lua_pushnumber(L,DT_TOP); lua_setfield(L,-2,"DT_TOP");
	lua_pushnumber(L,DT_LEFT); lua_setfield(L,-2,"DT_LEFT");
	lua_pushnumber(L,DT_CENTER); lua_setfield(L,-2,"DT_CENTER");
	lua_pushnumber(L,DT_RIGHT); lua_setfield(L,-2,"DT_RIGHT");
	lua_pushnumber(L,DT_VCENTER); lua_setfield(L,-2,"DT_VCENTER");
	lua_pushnumber(L,DT_BOTTOM); lua_setfield(L,-2,"DT_BOTTOM");
	lua_pushnumber(L,DT_WORDBREAK); lua_setfield(L,-2,"DT_WORDBREAK");
	lua_pushnumber(L,DT_SINGLELINE); lua_setfield(L,-2,"DT_SINGLELINE");
	lua_pushnumber(L,DT_EXPANDTABS); lua_setfield(L,-2,"DT_EXPANDTABS");
	lua_pushnumber(L,DT_TABSTOP); lua_setfield(L,-2,"DT_TABSTOP");
	lua_pushnumber(L,DT_NOCLIP); lua_setfield(L,-2,"DT_NOCLIP");
	lua_pushnumber(L,DT_EXTERNALLEADING); lua_setfield(L,-2,"DT_EXTERNALLEADING");
	lua_pushnumber(L,DT_CALCRECT); lua_setfield(L,-2,"DT_CALCRECT");
	lua_pushnumber(L,DT_NOPREFIX); lua_setfield(L,-2,"DT_NOPREFIX");
	lua_pushnumber(L,DT_INTERNAL); lua_setfield(L,-2,"DT_INTERNAL");
	lua_pushnumber(L,D3D_OK); lua_setfield(L,-2,"D3D_OK");
	lua_pushnumber(L,D3DUSAGE_RENDERTARGET); lua_setfield(L,-2,"D3DUSAGE_RENDERTARGET");
	lua_pushnumber(L,D3DUSAGE_DEPTHSTENCIL); lua_setfield(L,-2,"D3DUSAGE_DEPTHSTENCIL");
	lua_pushnumber(L,D3DUSAGE_DYNAMIC); lua_setfield(L,-2,"D3DUSAGE_DYNAMIC");
	lua_pushnumber(L,D3DERR_WRONGTEXTUREFORMAT); lua_setfield(L,-2,"D3DERR_WRONGTEXTUREFORMAT");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDCOLOROPERATION); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDCOLOROPERATION");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDCOLORARG); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDCOLORARG");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDALPHAOPERATION); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDALPHAOPERATION");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDALPHAARG); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDALPHAARG");
	lua_pushnumber(L,D3DERR_TOOMANYOPERATIONS); lua_setfield(L,-2,"D3DERR_TOOMANYOPERATIONS");
	lua_pushnumber(L,D3DERR_CONFLICTINGTEXTUREFILTER); lua_setfield(L,-2,"D3DERR_CONFLICTINGTEXTUREFILTER");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDFACTORVALUE); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDFACTORVALUE");
	lua_pushnumber(L,D3DERR_CONFLICTINGRENDERSTATE); lua_setfield(L,-2,"D3DERR_CONFLICTINGRENDERSTATE");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDTEXTUREFILTER); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDTEXTUREFILTER");
	lua_pushnumber(L,D3DERR_CONFLICTINGTEXTUREPALETTE); lua_setfield(L,-2,"D3DERR_CONFLICTINGTEXTUREPALETTE");
	lua_pushnumber(L,D3DERR_DRIVERINTERNALERROR); lua_setfield(L,-2,"D3DERR_DRIVERINTERNALERROR");
	lua_pushnumber(L,D3DERR_NOTFOUND); lua_setfield(L,-2,"D3DERR_NOTFOUND");
	lua_pushnumber(L,D3DERR_MOREDATA); lua_setfield(L,-2,"D3DERR_MOREDATA");
	lua_pushnumber(L,D3DERR_DEVICELOST); lua_setfield(L,-2,"D3DERR_DEVICELOST");
	lua_pushnumber(L,D3DERR_DEVICENOTRESET); lua_setfield(L,-2,"D3DERR_DEVICENOTRESET");
	lua_pushnumber(L,D3DERR_NOTAVAILABLE); lua_setfield(L,-2,"D3DERR_NOTAVAILABLE");
	lua_pushnumber(L,D3DERR_OUTOFVIDEOMEMORY); lua_setfield(L,-2,"D3DERR_OUTOFVIDEOMEMORY");
	lua_pushnumber(L,D3DERR_INVALIDDEVICE); lua_setfield(L,-2,"D3DERR_INVALIDDEVICE");
	lua_pushnumber(L,D3DERR_INVALIDCALL); lua_setfield(L,-2,"D3DERR_INVALIDCALL");
	lua_pushnumber(L,D3DERR_DRIVERINVALIDCALL); lua_setfield(L,-2,"D3DERR_DRIVERINVALIDCALL");
	lua_pushnumber(L,D3DERR_WASSTILLDRAWING); lua_setfield(L,-2,"D3DERR_WASSTILLDRAWING");
	lua_pushnumber(L,D3DOK_NOAUTOGEN); lua_setfield(L,-2,"D3DOK_NOAUTOGEN");
	lua_pushnumber(L,D3DERR_DEVICEREMOVED); lua_setfield(L,-2,"D3DERR_DEVICEREMOVED");
	lua_pushnumber(L,S_NOT_RESIDENT); lua_setfield(L,-2,"S_NOT_RESIDENT");
	lua_pushnumber(L,S_RESIDENT_IN_SHARED_MEMORY); lua_setfield(L,-2,"S_RESIDENT_IN_SHARED_MEMORY");
	lua_pushnumber(L,S_PRESENT_MODE_CHANGED); lua_setfield(L,-2,"S_PRESENT_MODE_CHANGED");
	lua_pushnumber(L,S_PRESENT_OCCLUDED); lua_setfield(L,-2,"S_PRESENT_OCCLUDED");
	lua_pushnumber(L,D3DERR_DEVICEHUNG); lua_setfield(L,-2,"D3DERR_DEVICEHUNG");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDOVERLAY); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDOVERLAY");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDOVERLAYFORMAT); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDOVERLAYFORMAT");
	lua_pushnumber(L,D3DERR_CANNOTPROTECTCONTENT); lua_setfield(L,-2,"D3DERR_CANNOTPROTECTCONTENT");
	lua_pushnumber(L,D3DERR_UNSUPPORTEDCRYPTO); lua_setfield(L,-2,"D3DERR_UNSUPPORTEDCRYPTO");
	lua_pushnumber(L,D3DERR_PRESENT_STATISTICS_DISJOINT); lua_setfield(L,-2,"D3DERR_PRESENT_STATISTICS_DISJOINT");
}

#ifdef __cplusplus
}
#endif

