#include <plug_common.h>

#include <plug_extensions.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum D3DPRIMITIVETYPE

	lua_pushnumber(L,::D3DPT_POINTLIST); lua_setfield(L,-2,"D3DPT_POINTLIST");
	lua_pushnumber(L,::D3DPT_LINELIST); lua_setfield(L,-2,"D3DPT_LINELIST");
	lua_pushnumber(L,::D3DPT_LINESTRIP); lua_setfield(L,-2,"D3DPT_LINESTRIP");
	lua_pushnumber(L,::D3DPT_TRIANGLELIST); lua_setfield(L,-2,"D3DPT_TRIANGLELIST");
	lua_pushnumber(L,::D3DPT_TRIANGLESTRIP); lua_setfield(L,-2,"D3DPT_TRIANGLESTRIP");
	lua_pushnumber(L,::D3DPT_TRIANGLEFAN); lua_setfield(L,-2,"D3DPT_TRIANGLEFAN");
	lua_pushnumber(L,::D3DPT_FORCE_DWORD); lua_setfield(L,-2,"D3DPT_FORCE_DWORD");

	lua_setfield(L,-2,"D3DPRIMITIVETYPE");

	lua_pushnumber(L,::D3DPT_POINTLIST); lua_setfield(L,-2,"D3DPT_POINTLIST");
	lua_pushnumber(L,::D3DPT_LINELIST); lua_setfield(L,-2,"D3DPT_LINELIST");
	lua_pushnumber(L,::D3DPT_LINESTRIP); lua_setfield(L,-2,"D3DPT_LINESTRIP");
	lua_pushnumber(L,::D3DPT_TRIANGLELIST); lua_setfield(L,-2,"D3DPT_TRIANGLELIST");
	lua_pushnumber(L,::D3DPT_TRIANGLESTRIP); lua_setfield(L,-2,"D3DPT_TRIANGLESTRIP");
	lua_pushnumber(L,::D3DPT_TRIANGLEFAN); lua_setfield(L,-2,"D3DPT_TRIANGLEFAN");
	lua_pushnumber(L,::D3DPT_FORCE_DWORD); lua_setfield(L,-2,"D3DPT_FORCE_DWORD");


	lua_newtable(L); // enum D3DRENDERSTATETYPE

	lua_pushnumber(L,::D3DRS_ZENABLE); lua_setfield(L,-2,"D3DRS_ZENABLE");
	lua_pushnumber(L,::D3DRS_FILLMODE); lua_setfield(L,-2,"D3DRS_FILLMODE");
	lua_pushnumber(L,::D3DRS_SHADEMODE); lua_setfield(L,-2,"D3DRS_SHADEMODE");
	lua_pushnumber(L,::D3DRS_ZWRITEENABLE); lua_setfield(L,-2,"D3DRS_ZWRITEENABLE");
	lua_pushnumber(L,::D3DRS_ALPHATESTENABLE); lua_setfield(L,-2,"D3DRS_ALPHATESTENABLE");
	lua_pushnumber(L,::D3DRS_LASTPIXEL); lua_setfield(L,-2,"D3DRS_LASTPIXEL");
	lua_pushnumber(L,::D3DRS_SRCBLEND); lua_setfield(L,-2,"D3DRS_SRCBLEND");
	lua_pushnumber(L,::D3DRS_DESTBLEND); lua_setfield(L,-2,"D3DRS_DESTBLEND");
	lua_pushnumber(L,::D3DRS_CULLMODE); lua_setfield(L,-2,"D3DRS_CULLMODE");
	lua_pushnumber(L,::D3DRS_ZFUNC); lua_setfield(L,-2,"D3DRS_ZFUNC");
	lua_pushnumber(L,::D3DRS_ALPHAREF); lua_setfield(L,-2,"D3DRS_ALPHAREF");
	lua_pushnumber(L,::D3DRS_ALPHAFUNC); lua_setfield(L,-2,"D3DRS_ALPHAFUNC");
	lua_pushnumber(L,::D3DRS_DITHERENABLE); lua_setfield(L,-2,"D3DRS_DITHERENABLE");
	lua_pushnumber(L,::D3DRS_ALPHABLENDENABLE); lua_setfield(L,-2,"D3DRS_ALPHABLENDENABLE");
	lua_pushnumber(L,::D3DRS_FOGENABLE); lua_setfield(L,-2,"D3DRS_FOGENABLE");
	lua_pushnumber(L,::D3DRS_SPECULARENABLE); lua_setfield(L,-2,"D3DRS_SPECULARENABLE");
	lua_pushnumber(L,::D3DRS_FOGCOLOR); lua_setfield(L,-2,"D3DRS_FOGCOLOR");
	lua_pushnumber(L,::D3DRS_FOGTABLEMODE); lua_setfield(L,-2,"D3DRS_FOGTABLEMODE");
	lua_pushnumber(L,::D3DRS_FOGSTART); lua_setfield(L,-2,"D3DRS_FOGSTART");
	lua_pushnumber(L,::D3DRS_FOGEND); lua_setfield(L,-2,"D3DRS_FOGEND");
	lua_pushnumber(L,::D3DRS_FOGDENSITY); lua_setfield(L,-2,"D3DRS_FOGDENSITY");
	lua_pushnumber(L,::D3DRS_RANGEFOGENABLE); lua_setfield(L,-2,"D3DRS_RANGEFOGENABLE");
	lua_pushnumber(L,::D3DRS_STENCILENABLE); lua_setfield(L,-2,"D3DRS_STENCILENABLE");
	lua_pushnumber(L,::D3DRS_STENCILFAIL); lua_setfield(L,-2,"D3DRS_STENCILFAIL");
	lua_pushnumber(L,::D3DRS_STENCILZFAIL); lua_setfield(L,-2,"D3DRS_STENCILZFAIL");
	lua_pushnumber(L,::D3DRS_STENCILPASS); lua_setfield(L,-2,"D3DRS_STENCILPASS");
	lua_pushnumber(L,::D3DRS_STENCILFUNC); lua_setfield(L,-2,"D3DRS_STENCILFUNC");
	lua_pushnumber(L,::D3DRS_STENCILREF); lua_setfield(L,-2,"D3DRS_STENCILREF");
	lua_pushnumber(L,::D3DRS_STENCILMASK); lua_setfield(L,-2,"D3DRS_STENCILMASK");
	lua_pushnumber(L,::D3DRS_STENCILWRITEMASK); lua_setfield(L,-2,"D3DRS_STENCILWRITEMASK");
	lua_pushnumber(L,::D3DRS_TEXTUREFACTOR); lua_setfield(L,-2,"D3DRS_TEXTUREFACTOR");
	lua_pushnumber(L,::D3DRS_WRAP0); lua_setfield(L,-2,"D3DRS_WRAP0");
	lua_pushnumber(L,::D3DRS_WRAP1); lua_setfield(L,-2,"D3DRS_WRAP1");
	lua_pushnumber(L,::D3DRS_WRAP2); lua_setfield(L,-2,"D3DRS_WRAP2");
	lua_pushnumber(L,::D3DRS_WRAP3); lua_setfield(L,-2,"D3DRS_WRAP3");
	lua_pushnumber(L,::D3DRS_WRAP4); lua_setfield(L,-2,"D3DRS_WRAP4");
	lua_pushnumber(L,::D3DRS_WRAP5); lua_setfield(L,-2,"D3DRS_WRAP5");
	lua_pushnumber(L,::D3DRS_WRAP6); lua_setfield(L,-2,"D3DRS_WRAP6");
	lua_pushnumber(L,::D3DRS_WRAP7); lua_setfield(L,-2,"D3DRS_WRAP7");
	lua_pushnumber(L,::D3DRS_CLIPPING); lua_setfield(L,-2,"D3DRS_CLIPPING");
	lua_pushnumber(L,::D3DRS_LIGHTING); lua_setfield(L,-2,"D3DRS_LIGHTING");
	lua_pushnumber(L,::D3DRS_AMBIENT); lua_setfield(L,-2,"D3DRS_AMBIENT");
	lua_pushnumber(L,::D3DRS_FOGVERTEXMODE); lua_setfield(L,-2,"D3DRS_FOGVERTEXMODE");
	lua_pushnumber(L,::D3DRS_COLORVERTEX); lua_setfield(L,-2,"D3DRS_COLORVERTEX");
	lua_pushnumber(L,::D3DRS_LOCALVIEWER); lua_setfield(L,-2,"D3DRS_LOCALVIEWER");
	lua_pushnumber(L,::D3DRS_NORMALIZENORMALS); lua_setfield(L,-2,"D3DRS_NORMALIZENORMALS");
	lua_pushnumber(L,::D3DRS_DIFFUSEMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_DIFFUSEMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_SPECULARMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_SPECULARMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_AMBIENTMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_AMBIENTMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_EMISSIVEMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_EMISSIVEMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_VERTEXBLEND); lua_setfield(L,-2,"D3DRS_VERTEXBLEND");
	lua_pushnumber(L,::D3DRS_CLIPPLANEENABLE); lua_setfield(L,-2,"D3DRS_CLIPPLANEENABLE");
	lua_pushnumber(L,::D3DRS_POINTSIZE); lua_setfield(L,-2,"D3DRS_POINTSIZE");
	lua_pushnumber(L,::D3DRS_POINTSIZE_MIN); lua_setfield(L,-2,"D3DRS_POINTSIZE_MIN");
	lua_pushnumber(L,::D3DRS_POINTSPRITEENABLE); lua_setfield(L,-2,"D3DRS_POINTSPRITEENABLE");
	lua_pushnumber(L,::D3DRS_POINTSCALEENABLE); lua_setfield(L,-2,"D3DRS_POINTSCALEENABLE");
	lua_pushnumber(L,::D3DRS_POINTSCALE_A); lua_setfield(L,-2,"D3DRS_POINTSCALE_A");
	lua_pushnumber(L,::D3DRS_POINTSCALE_B); lua_setfield(L,-2,"D3DRS_POINTSCALE_B");
	lua_pushnumber(L,::D3DRS_POINTSCALE_C); lua_setfield(L,-2,"D3DRS_POINTSCALE_C");
	lua_pushnumber(L,::D3DRS_MULTISAMPLEANTIALIAS); lua_setfield(L,-2,"D3DRS_MULTISAMPLEANTIALIAS");
	lua_pushnumber(L,::D3DRS_MULTISAMPLEMASK); lua_setfield(L,-2,"D3DRS_MULTISAMPLEMASK");
	lua_pushnumber(L,::D3DRS_PATCHEDGESTYLE); lua_setfield(L,-2,"D3DRS_PATCHEDGESTYLE");
	lua_pushnumber(L,::D3DRS_DEBUGMONITORTOKEN); lua_setfield(L,-2,"D3DRS_DEBUGMONITORTOKEN");
	lua_pushnumber(L,::D3DRS_POINTSIZE_MAX); lua_setfield(L,-2,"D3DRS_POINTSIZE_MAX");
	lua_pushnumber(L,::D3DRS_INDEXEDVERTEXBLENDENABLE); lua_setfield(L,-2,"D3DRS_INDEXEDVERTEXBLENDENABLE");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE");
	lua_pushnumber(L,::D3DRS_TWEENFACTOR); lua_setfield(L,-2,"D3DRS_TWEENFACTOR");
	lua_pushnumber(L,::D3DRS_BLENDOP); lua_setfield(L,-2,"D3DRS_BLENDOP");
	lua_pushnumber(L,::D3DRS_POSITIONDEGREE); lua_setfield(L,-2,"D3DRS_POSITIONDEGREE");
	lua_pushnumber(L,::D3DRS_NORMALDEGREE); lua_setfield(L,-2,"D3DRS_NORMALDEGREE");
	lua_pushnumber(L,::D3DRS_SCISSORTESTENABLE); lua_setfield(L,-2,"D3DRS_SCISSORTESTENABLE");
	lua_pushnumber(L,::D3DRS_SLOPESCALEDEPTHBIAS); lua_setfield(L,-2,"D3DRS_SLOPESCALEDEPTHBIAS");
	lua_pushnumber(L,::D3DRS_ANTIALIASEDLINEENABLE); lua_setfield(L,-2,"D3DRS_ANTIALIASEDLINEENABLE");
	lua_pushnumber(L,::D3DRS_MINTESSELLATIONLEVEL); lua_setfield(L,-2,"D3DRS_MINTESSELLATIONLEVEL");
	lua_pushnumber(L,::D3DRS_MAXTESSELLATIONLEVEL); lua_setfield(L,-2,"D3DRS_MAXTESSELLATIONLEVEL");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_X); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_X");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_Y); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_Y");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_Z); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_Z");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_W); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_W");
	lua_pushnumber(L,::D3DRS_ENABLEADAPTIVETESSELLATION); lua_setfield(L,-2,"D3DRS_ENABLEADAPTIVETESSELLATION");
	lua_pushnumber(L,::D3DRS_TWOSIDEDSTENCILMODE); lua_setfield(L,-2,"D3DRS_TWOSIDEDSTENCILMODE");
	lua_pushnumber(L,::D3DRS_CCW_STENCILFAIL); lua_setfield(L,-2,"D3DRS_CCW_STENCILFAIL");
	lua_pushnumber(L,::D3DRS_CCW_STENCILZFAIL); lua_setfield(L,-2,"D3DRS_CCW_STENCILZFAIL");
	lua_pushnumber(L,::D3DRS_CCW_STENCILPASS); lua_setfield(L,-2,"D3DRS_CCW_STENCILPASS");
	lua_pushnumber(L,::D3DRS_CCW_STENCILFUNC); lua_setfield(L,-2,"D3DRS_CCW_STENCILFUNC");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE1); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE1");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE2); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE2");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE3); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE3");
	lua_pushnumber(L,::D3DRS_BLENDFACTOR); lua_setfield(L,-2,"D3DRS_BLENDFACTOR");
	lua_pushnumber(L,::D3DRS_SRGBWRITEENABLE); lua_setfield(L,-2,"D3DRS_SRGBWRITEENABLE");
	lua_pushnumber(L,::D3DRS_DEPTHBIAS); lua_setfield(L,-2,"D3DRS_DEPTHBIAS");
	lua_pushnumber(L,::D3DRS_WRAP8); lua_setfield(L,-2,"D3DRS_WRAP8");
	lua_pushnumber(L,::D3DRS_WRAP9); lua_setfield(L,-2,"D3DRS_WRAP9");
	lua_pushnumber(L,::D3DRS_WRAP10); lua_setfield(L,-2,"D3DRS_WRAP10");
	lua_pushnumber(L,::D3DRS_WRAP11); lua_setfield(L,-2,"D3DRS_WRAP11");
	lua_pushnumber(L,::D3DRS_WRAP12); lua_setfield(L,-2,"D3DRS_WRAP12");
	lua_pushnumber(L,::D3DRS_WRAP13); lua_setfield(L,-2,"D3DRS_WRAP13");
	lua_pushnumber(L,::D3DRS_WRAP14); lua_setfield(L,-2,"D3DRS_WRAP14");
	lua_pushnumber(L,::D3DRS_WRAP15); lua_setfield(L,-2,"D3DRS_WRAP15");
	lua_pushnumber(L,::D3DRS_SEPARATEALPHABLENDENABLE); lua_setfield(L,-2,"D3DRS_SEPARATEALPHABLENDENABLE");
	lua_pushnumber(L,::D3DRS_SRCBLENDALPHA); lua_setfield(L,-2,"D3DRS_SRCBLENDALPHA");
	lua_pushnumber(L,::D3DRS_DESTBLENDALPHA); lua_setfield(L,-2,"D3DRS_DESTBLENDALPHA");
	lua_pushnumber(L,::D3DRS_BLENDOPALPHA); lua_setfield(L,-2,"D3DRS_BLENDOPALPHA");
	lua_pushnumber(L,::D3DRS_FORCE_DWORD); lua_setfield(L,-2,"D3DRS_FORCE_DWORD");

	lua_setfield(L,-2,"D3DRENDERSTATETYPE");

	lua_pushnumber(L,::D3DRS_ZENABLE); lua_setfield(L,-2,"D3DRS_ZENABLE");
	lua_pushnumber(L,::D3DRS_FILLMODE); lua_setfield(L,-2,"D3DRS_FILLMODE");
	lua_pushnumber(L,::D3DRS_SHADEMODE); lua_setfield(L,-2,"D3DRS_SHADEMODE");
	lua_pushnumber(L,::D3DRS_ZWRITEENABLE); lua_setfield(L,-2,"D3DRS_ZWRITEENABLE");
	lua_pushnumber(L,::D3DRS_ALPHATESTENABLE); lua_setfield(L,-2,"D3DRS_ALPHATESTENABLE");
	lua_pushnumber(L,::D3DRS_LASTPIXEL); lua_setfield(L,-2,"D3DRS_LASTPIXEL");
	lua_pushnumber(L,::D3DRS_SRCBLEND); lua_setfield(L,-2,"D3DRS_SRCBLEND");
	lua_pushnumber(L,::D3DRS_DESTBLEND); lua_setfield(L,-2,"D3DRS_DESTBLEND");
	lua_pushnumber(L,::D3DRS_CULLMODE); lua_setfield(L,-2,"D3DRS_CULLMODE");
	lua_pushnumber(L,::D3DRS_ZFUNC); lua_setfield(L,-2,"D3DRS_ZFUNC");
	lua_pushnumber(L,::D3DRS_ALPHAREF); lua_setfield(L,-2,"D3DRS_ALPHAREF");
	lua_pushnumber(L,::D3DRS_ALPHAFUNC); lua_setfield(L,-2,"D3DRS_ALPHAFUNC");
	lua_pushnumber(L,::D3DRS_DITHERENABLE); lua_setfield(L,-2,"D3DRS_DITHERENABLE");
	lua_pushnumber(L,::D3DRS_ALPHABLENDENABLE); lua_setfield(L,-2,"D3DRS_ALPHABLENDENABLE");
	lua_pushnumber(L,::D3DRS_FOGENABLE); lua_setfield(L,-2,"D3DRS_FOGENABLE");
	lua_pushnumber(L,::D3DRS_SPECULARENABLE); lua_setfield(L,-2,"D3DRS_SPECULARENABLE");
	lua_pushnumber(L,::D3DRS_FOGCOLOR); lua_setfield(L,-2,"D3DRS_FOGCOLOR");
	lua_pushnumber(L,::D3DRS_FOGTABLEMODE); lua_setfield(L,-2,"D3DRS_FOGTABLEMODE");
	lua_pushnumber(L,::D3DRS_FOGSTART); lua_setfield(L,-2,"D3DRS_FOGSTART");
	lua_pushnumber(L,::D3DRS_FOGEND); lua_setfield(L,-2,"D3DRS_FOGEND");
	lua_pushnumber(L,::D3DRS_FOGDENSITY); lua_setfield(L,-2,"D3DRS_FOGDENSITY");
	lua_pushnumber(L,::D3DRS_RANGEFOGENABLE); lua_setfield(L,-2,"D3DRS_RANGEFOGENABLE");
	lua_pushnumber(L,::D3DRS_STENCILENABLE); lua_setfield(L,-2,"D3DRS_STENCILENABLE");
	lua_pushnumber(L,::D3DRS_STENCILFAIL); lua_setfield(L,-2,"D3DRS_STENCILFAIL");
	lua_pushnumber(L,::D3DRS_STENCILZFAIL); lua_setfield(L,-2,"D3DRS_STENCILZFAIL");
	lua_pushnumber(L,::D3DRS_STENCILPASS); lua_setfield(L,-2,"D3DRS_STENCILPASS");
	lua_pushnumber(L,::D3DRS_STENCILFUNC); lua_setfield(L,-2,"D3DRS_STENCILFUNC");
	lua_pushnumber(L,::D3DRS_STENCILREF); lua_setfield(L,-2,"D3DRS_STENCILREF");
	lua_pushnumber(L,::D3DRS_STENCILMASK); lua_setfield(L,-2,"D3DRS_STENCILMASK");
	lua_pushnumber(L,::D3DRS_STENCILWRITEMASK); lua_setfield(L,-2,"D3DRS_STENCILWRITEMASK");
	lua_pushnumber(L,::D3DRS_TEXTUREFACTOR); lua_setfield(L,-2,"D3DRS_TEXTUREFACTOR");
	lua_pushnumber(L,::D3DRS_WRAP0); lua_setfield(L,-2,"D3DRS_WRAP0");
	lua_pushnumber(L,::D3DRS_WRAP1); lua_setfield(L,-2,"D3DRS_WRAP1");
	lua_pushnumber(L,::D3DRS_WRAP2); lua_setfield(L,-2,"D3DRS_WRAP2");
	lua_pushnumber(L,::D3DRS_WRAP3); lua_setfield(L,-2,"D3DRS_WRAP3");
	lua_pushnumber(L,::D3DRS_WRAP4); lua_setfield(L,-2,"D3DRS_WRAP4");
	lua_pushnumber(L,::D3DRS_WRAP5); lua_setfield(L,-2,"D3DRS_WRAP5");
	lua_pushnumber(L,::D3DRS_WRAP6); lua_setfield(L,-2,"D3DRS_WRAP6");
	lua_pushnumber(L,::D3DRS_WRAP7); lua_setfield(L,-2,"D3DRS_WRAP7");
	lua_pushnumber(L,::D3DRS_CLIPPING); lua_setfield(L,-2,"D3DRS_CLIPPING");
	lua_pushnumber(L,::D3DRS_LIGHTING); lua_setfield(L,-2,"D3DRS_LIGHTING");
	lua_pushnumber(L,::D3DRS_AMBIENT); lua_setfield(L,-2,"D3DRS_AMBIENT");
	lua_pushnumber(L,::D3DRS_FOGVERTEXMODE); lua_setfield(L,-2,"D3DRS_FOGVERTEXMODE");
	lua_pushnumber(L,::D3DRS_COLORVERTEX); lua_setfield(L,-2,"D3DRS_COLORVERTEX");
	lua_pushnumber(L,::D3DRS_LOCALVIEWER); lua_setfield(L,-2,"D3DRS_LOCALVIEWER");
	lua_pushnumber(L,::D3DRS_NORMALIZENORMALS); lua_setfield(L,-2,"D3DRS_NORMALIZENORMALS");
	lua_pushnumber(L,::D3DRS_DIFFUSEMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_DIFFUSEMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_SPECULARMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_SPECULARMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_AMBIENTMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_AMBIENTMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_EMISSIVEMATERIALSOURCE); lua_setfield(L,-2,"D3DRS_EMISSIVEMATERIALSOURCE");
	lua_pushnumber(L,::D3DRS_VERTEXBLEND); lua_setfield(L,-2,"D3DRS_VERTEXBLEND");
	lua_pushnumber(L,::D3DRS_CLIPPLANEENABLE); lua_setfield(L,-2,"D3DRS_CLIPPLANEENABLE");
	lua_pushnumber(L,::D3DRS_POINTSIZE); lua_setfield(L,-2,"D3DRS_POINTSIZE");
	lua_pushnumber(L,::D3DRS_POINTSIZE_MIN); lua_setfield(L,-2,"D3DRS_POINTSIZE_MIN");
	lua_pushnumber(L,::D3DRS_POINTSPRITEENABLE); lua_setfield(L,-2,"D3DRS_POINTSPRITEENABLE");
	lua_pushnumber(L,::D3DRS_POINTSCALEENABLE); lua_setfield(L,-2,"D3DRS_POINTSCALEENABLE");
	lua_pushnumber(L,::D3DRS_POINTSCALE_A); lua_setfield(L,-2,"D3DRS_POINTSCALE_A");
	lua_pushnumber(L,::D3DRS_POINTSCALE_B); lua_setfield(L,-2,"D3DRS_POINTSCALE_B");
	lua_pushnumber(L,::D3DRS_POINTSCALE_C); lua_setfield(L,-2,"D3DRS_POINTSCALE_C");
	lua_pushnumber(L,::D3DRS_MULTISAMPLEANTIALIAS); lua_setfield(L,-2,"D3DRS_MULTISAMPLEANTIALIAS");
	lua_pushnumber(L,::D3DRS_MULTISAMPLEMASK); lua_setfield(L,-2,"D3DRS_MULTISAMPLEMASK");
	lua_pushnumber(L,::D3DRS_PATCHEDGESTYLE); lua_setfield(L,-2,"D3DRS_PATCHEDGESTYLE");
	lua_pushnumber(L,::D3DRS_DEBUGMONITORTOKEN); lua_setfield(L,-2,"D3DRS_DEBUGMONITORTOKEN");
	lua_pushnumber(L,::D3DRS_POINTSIZE_MAX); lua_setfield(L,-2,"D3DRS_POINTSIZE_MAX");
	lua_pushnumber(L,::D3DRS_INDEXEDVERTEXBLENDENABLE); lua_setfield(L,-2,"D3DRS_INDEXEDVERTEXBLENDENABLE");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE");
	lua_pushnumber(L,::D3DRS_TWEENFACTOR); lua_setfield(L,-2,"D3DRS_TWEENFACTOR");
	lua_pushnumber(L,::D3DRS_BLENDOP); lua_setfield(L,-2,"D3DRS_BLENDOP");
	lua_pushnumber(L,::D3DRS_POSITIONDEGREE); lua_setfield(L,-2,"D3DRS_POSITIONDEGREE");
	lua_pushnumber(L,::D3DRS_NORMALDEGREE); lua_setfield(L,-2,"D3DRS_NORMALDEGREE");
	lua_pushnumber(L,::D3DRS_SCISSORTESTENABLE); lua_setfield(L,-2,"D3DRS_SCISSORTESTENABLE");
	lua_pushnumber(L,::D3DRS_SLOPESCALEDEPTHBIAS); lua_setfield(L,-2,"D3DRS_SLOPESCALEDEPTHBIAS");
	lua_pushnumber(L,::D3DRS_ANTIALIASEDLINEENABLE); lua_setfield(L,-2,"D3DRS_ANTIALIASEDLINEENABLE");
	lua_pushnumber(L,::D3DRS_MINTESSELLATIONLEVEL); lua_setfield(L,-2,"D3DRS_MINTESSELLATIONLEVEL");
	lua_pushnumber(L,::D3DRS_MAXTESSELLATIONLEVEL); lua_setfield(L,-2,"D3DRS_MAXTESSELLATIONLEVEL");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_X); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_X");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_Y); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_Y");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_Z); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_Z");
	lua_pushnumber(L,::D3DRS_ADAPTIVETESS_W); lua_setfield(L,-2,"D3DRS_ADAPTIVETESS_W");
	lua_pushnumber(L,::D3DRS_ENABLEADAPTIVETESSELLATION); lua_setfield(L,-2,"D3DRS_ENABLEADAPTIVETESSELLATION");
	lua_pushnumber(L,::D3DRS_TWOSIDEDSTENCILMODE); lua_setfield(L,-2,"D3DRS_TWOSIDEDSTENCILMODE");
	lua_pushnumber(L,::D3DRS_CCW_STENCILFAIL); lua_setfield(L,-2,"D3DRS_CCW_STENCILFAIL");
	lua_pushnumber(L,::D3DRS_CCW_STENCILZFAIL); lua_setfield(L,-2,"D3DRS_CCW_STENCILZFAIL");
	lua_pushnumber(L,::D3DRS_CCW_STENCILPASS); lua_setfield(L,-2,"D3DRS_CCW_STENCILPASS");
	lua_pushnumber(L,::D3DRS_CCW_STENCILFUNC); lua_setfield(L,-2,"D3DRS_CCW_STENCILFUNC");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE1); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE1");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE2); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE2");
	lua_pushnumber(L,::D3DRS_COLORWRITEENABLE3); lua_setfield(L,-2,"D3DRS_COLORWRITEENABLE3");
	lua_pushnumber(L,::D3DRS_BLENDFACTOR); lua_setfield(L,-2,"D3DRS_BLENDFACTOR");
	lua_pushnumber(L,::D3DRS_SRGBWRITEENABLE); lua_setfield(L,-2,"D3DRS_SRGBWRITEENABLE");
	lua_pushnumber(L,::D3DRS_DEPTHBIAS); lua_setfield(L,-2,"D3DRS_DEPTHBIAS");
	lua_pushnumber(L,::D3DRS_WRAP8); lua_setfield(L,-2,"D3DRS_WRAP8");
	lua_pushnumber(L,::D3DRS_WRAP9); lua_setfield(L,-2,"D3DRS_WRAP9");
	lua_pushnumber(L,::D3DRS_WRAP10); lua_setfield(L,-2,"D3DRS_WRAP10");
	lua_pushnumber(L,::D3DRS_WRAP11); lua_setfield(L,-2,"D3DRS_WRAP11");
	lua_pushnumber(L,::D3DRS_WRAP12); lua_setfield(L,-2,"D3DRS_WRAP12");
	lua_pushnumber(L,::D3DRS_WRAP13); lua_setfield(L,-2,"D3DRS_WRAP13");
	lua_pushnumber(L,::D3DRS_WRAP14); lua_setfield(L,-2,"D3DRS_WRAP14");
	lua_pushnumber(L,::D3DRS_WRAP15); lua_setfield(L,-2,"D3DRS_WRAP15");
	lua_pushnumber(L,::D3DRS_SEPARATEALPHABLENDENABLE); lua_setfield(L,-2,"D3DRS_SEPARATEALPHABLENDENABLE");
	lua_pushnumber(L,::D3DRS_SRCBLENDALPHA); lua_setfield(L,-2,"D3DRS_SRCBLENDALPHA");
	lua_pushnumber(L,::D3DRS_DESTBLENDALPHA); lua_setfield(L,-2,"D3DRS_DESTBLENDALPHA");
	lua_pushnumber(L,::D3DRS_BLENDOPALPHA); lua_setfield(L,-2,"D3DRS_BLENDOPALPHA");
	lua_pushnumber(L,::D3DRS_FORCE_DWORD); lua_setfield(L,-2,"D3DRS_FORCE_DWORD");


	lua_newtable(L); // enum D3DSAMPLERSTATETYPE

	lua_pushnumber(L,::D3DSAMP_ADDRESSU); lua_setfield(L,-2,"D3DSAMP_ADDRESSU");
	lua_pushnumber(L,::D3DSAMP_ADDRESSV); lua_setfield(L,-2,"D3DSAMP_ADDRESSV");
	lua_pushnumber(L,::D3DSAMP_ADDRESSW); lua_setfield(L,-2,"D3DSAMP_ADDRESSW");
	lua_pushnumber(L,::D3DSAMP_BORDERCOLOR); lua_setfield(L,-2,"D3DSAMP_BORDERCOLOR");
	lua_pushnumber(L,::D3DSAMP_MAGFILTER); lua_setfield(L,-2,"D3DSAMP_MAGFILTER");
	lua_pushnumber(L,::D3DSAMP_MINFILTER); lua_setfield(L,-2,"D3DSAMP_MINFILTER");
	lua_pushnumber(L,::D3DSAMP_MIPFILTER); lua_setfield(L,-2,"D3DSAMP_MIPFILTER");
	lua_pushnumber(L,::D3DSAMP_MIPMAPLODBIAS); lua_setfield(L,-2,"D3DSAMP_MIPMAPLODBIAS");
	lua_pushnumber(L,::D3DSAMP_MAXMIPLEVEL); lua_setfield(L,-2,"D3DSAMP_MAXMIPLEVEL");
	lua_pushnumber(L,::D3DSAMP_MAXANISOTROPY); lua_setfield(L,-2,"D3DSAMP_MAXANISOTROPY");
	lua_pushnumber(L,::D3DSAMP_SRGBTEXTURE); lua_setfield(L,-2,"D3DSAMP_SRGBTEXTURE");
	lua_pushnumber(L,::D3DSAMP_ELEMENTINDEX); lua_setfield(L,-2,"D3DSAMP_ELEMENTINDEX");
	lua_pushnumber(L,::D3DSAMP_DMAPOFFSET); lua_setfield(L,-2,"D3DSAMP_DMAPOFFSET");
	lua_pushnumber(L,::D3DSAMP_FORCE_DWORD); lua_setfield(L,-2,"D3DSAMP_FORCE_DWORD");

	lua_setfield(L,-2,"D3DSAMPLERSTATETYPE");

	lua_pushnumber(L,::D3DSAMP_ADDRESSU); lua_setfield(L,-2,"D3DSAMP_ADDRESSU");
	lua_pushnumber(L,::D3DSAMP_ADDRESSV); lua_setfield(L,-2,"D3DSAMP_ADDRESSV");
	lua_pushnumber(L,::D3DSAMP_ADDRESSW); lua_setfield(L,-2,"D3DSAMP_ADDRESSW");
	lua_pushnumber(L,::D3DSAMP_BORDERCOLOR); lua_setfield(L,-2,"D3DSAMP_BORDERCOLOR");
	lua_pushnumber(L,::D3DSAMP_MAGFILTER); lua_setfield(L,-2,"D3DSAMP_MAGFILTER");
	lua_pushnumber(L,::D3DSAMP_MINFILTER); lua_setfield(L,-2,"D3DSAMP_MINFILTER");
	lua_pushnumber(L,::D3DSAMP_MIPFILTER); lua_setfield(L,-2,"D3DSAMP_MIPFILTER");
	lua_pushnumber(L,::D3DSAMP_MIPMAPLODBIAS); lua_setfield(L,-2,"D3DSAMP_MIPMAPLODBIAS");
	lua_pushnumber(L,::D3DSAMP_MAXMIPLEVEL); lua_setfield(L,-2,"D3DSAMP_MAXMIPLEVEL");
	lua_pushnumber(L,::D3DSAMP_MAXANISOTROPY); lua_setfield(L,-2,"D3DSAMP_MAXANISOTROPY");
	lua_pushnumber(L,::D3DSAMP_SRGBTEXTURE); lua_setfield(L,-2,"D3DSAMP_SRGBTEXTURE");
	lua_pushnumber(L,::D3DSAMP_ELEMENTINDEX); lua_setfield(L,-2,"D3DSAMP_ELEMENTINDEX");
	lua_pushnumber(L,::D3DSAMP_DMAPOFFSET); lua_setfield(L,-2,"D3DSAMP_DMAPOFFSET");
	lua_pushnumber(L,::D3DSAMP_FORCE_DWORD); lua_setfield(L,-2,"D3DSAMP_FORCE_DWORD");


	lua_newtable(L); // enum D3DFORMAT

	lua_pushnumber(L,::D3DFMT_UNKNOWN); lua_setfield(L,-2,"D3DFMT_UNKNOWN");
	lua_pushnumber(L,::D3DFMT_R8G8B8); lua_setfield(L,-2,"D3DFMT_R8G8B8");
	lua_pushnumber(L,::D3DFMT_A8R8G8B8); lua_setfield(L,-2,"D3DFMT_A8R8G8B8");
	lua_pushnumber(L,::D3DFMT_X8R8G8B8); lua_setfield(L,-2,"D3DFMT_X8R8G8B8");
	lua_pushnumber(L,::D3DFMT_R5G6B5); lua_setfield(L,-2,"D3DFMT_R5G6B5");
	lua_pushnumber(L,::D3DFMT_X1R5G5B5); lua_setfield(L,-2,"D3DFMT_X1R5G5B5");
	lua_pushnumber(L,::D3DFMT_A1R5G5B5); lua_setfield(L,-2,"D3DFMT_A1R5G5B5");
	lua_pushnumber(L,::D3DFMT_A4R4G4B4); lua_setfield(L,-2,"D3DFMT_A4R4G4B4");
	lua_pushnumber(L,::D3DFMT_R3G3B2); lua_setfield(L,-2,"D3DFMT_R3G3B2");
	lua_pushnumber(L,::D3DFMT_A8); lua_setfield(L,-2,"D3DFMT_A8");
	lua_pushnumber(L,::D3DFMT_A8R3G3B2); lua_setfield(L,-2,"D3DFMT_A8R3G3B2");
	lua_pushnumber(L,::D3DFMT_X4R4G4B4); lua_setfield(L,-2,"D3DFMT_X4R4G4B4");
	lua_pushnumber(L,::D3DFMT_A2B10G10R10); lua_setfield(L,-2,"D3DFMT_A2B10G10R10");
	lua_pushnumber(L,::D3DFMT_A8B8G8R8); lua_setfield(L,-2,"D3DFMT_A8B8G8R8");
	lua_pushnumber(L,::D3DFMT_X8B8G8R8); lua_setfield(L,-2,"D3DFMT_X8B8G8R8");
	lua_pushnumber(L,::D3DFMT_G16R16); lua_setfield(L,-2,"D3DFMT_G16R16");
	lua_pushnumber(L,::D3DFMT_A2R10G10B10); lua_setfield(L,-2,"D3DFMT_A2R10G10B10");
	lua_pushnumber(L,::D3DFMT_A16B16G16R16); lua_setfield(L,-2,"D3DFMT_A16B16G16R16");
	lua_pushnumber(L,::D3DFMT_A8P8); lua_setfield(L,-2,"D3DFMT_A8P8");
	lua_pushnumber(L,::D3DFMT_P8); lua_setfield(L,-2,"D3DFMT_P8");
	lua_pushnumber(L,::D3DFMT_L8); lua_setfield(L,-2,"D3DFMT_L8");
	lua_pushnumber(L,::D3DFMT_A8L8); lua_setfield(L,-2,"D3DFMT_A8L8");
	lua_pushnumber(L,::D3DFMT_A4L4); lua_setfield(L,-2,"D3DFMT_A4L4");
	lua_pushnumber(L,::D3DFMT_V8U8); lua_setfield(L,-2,"D3DFMT_V8U8");
	lua_pushnumber(L,::D3DFMT_L6V5U5); lua_setfield(L,-2,"D3DFMT_L6V5U5");
	lua_pushnumber(L,::D3DFMT_X8L8V8U8); lua_setfield(L,-2,"D3DFMT_X8L8V8U8");
	lua_pushnumber(L,::D3DFMT_Q8W8V8U8); lua_setfield(L,-2,"D3DFMT_Q8W8V8U8");
	lua_pushnumber(L,::D3DFMT_V16U16); lua_setfield(L,-2,"D3DFMT_V16U16");
	lua_pushnumber(L,::D3DFMT_A2W10V10U10); lua_setfield(L,-2,"D3DFMT_A2W10V10U10");
	lua_pushnumber(L,::D3DFMT_UYVY); lua_setfield(L,-2,"D3DFMT_UYVY");
	lua_pushnumber(L,::D3DFMT_R8G8_B8G8); lua_setfield(L,-2,"D3DFMT_R8G8_B8G8");
	lua_pushnumber(L,::D3DFMT_YUY2); lua_setfield(L,-2,"D3DFMT_YUY2");
	lua_pushnumber(L,::D3DFMT_G8R8_G8B8); lua_setfield(L,-2,"D3DFMT_G8R8_G8B8");
	lua_pushnumber(L,::D3DFMT_DXT1); lua_setfield(L,-2,"D3DFMT_DXT1");
	lua_pushnumber(L,::D3DFMT_DXT2); lua_setfield(L,-2,"D3DFMT_DXT2");
	lua_pushnumber(L,::D3DFMT_DXT3); lua_setfield(L,-2,"D3DFMT_DXT3");
	lua_pushnumber(L,::D3DFMT_DXT4); lua_setfield(L,-2,"D3DFMT_DXT4");
	lua_pushnumber(L,::D3DFMT_DXT5); lua_setfield(L,-2,"D3DFMT_DXT5");
	lua_pushnumber(L,::D3DFMT_D16_LOCKABLE); lua_setfield(L,-2,"D3DFMT_D16_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_D32); lua_setfield(L,-2,"D3DFMT_D32");
	lua_pushnumber(L,::D3DFMT_D15S1); lua_setfield(L,-2,"D3DFMT_D15S1");
	lua_pushnumber(L,::D3DFMT_D24S8); lua_setfield(L,-2,"D3DFMT_D24S8");
	lua_pushnumber(L,::D3DFMT_D24X8); lua_setfield(L,-2,"D3DFMT_D24X8");
	lua_pushnumber(L,::D3DFMT_D24X4S4); lua_setfield(L,-2,"D3DFMT_D24X4S4");
	lua_pushnumber(L,::D3DFMT_D16); lua_setfield(L,-2,"D3DFMT_D16");
	lua_pushnumber(L,::D3DFMT_D32F_LOCKABLE); lua_setfield(L,-2,"D3DFMT_D32F_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_D24FS8); lua_setfield(L,-2,"D3DFMT_D24FS8");
	lua_pushnumber(L,::D3DFMT_D32_LOCKABLE); lua_setfield(L,-2,"D3DFMT_D32_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_S8_LOCKABLE); lua_setfield(L,-2,"D3DFMT_S8_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_L16); lua_setfield(L,-2,"D3DFMT_L16");
	lua_pushnumber(L,::D3DFMT_VERTEXDATA); lua_setfield(L,-2,"D3DFMT_VERTEXDATA");
	lua_pushnumber(L,::D3DFMT_INDEX16); lua_setfield(L,-2,"D3DFMT_INDEX16");
	lua_pushnumber(L,::D3DFMT_INDEX32); lua_setfield(L,-2,"D3DFMT_INDEX32");
	lua_pushnumber(L,::D3DFMT_Q16W16V16U16); lua_setfield(L,-2,"D3DFMT_Q16W16V16U16");
	lua_pushnumber(L,::D3DFMT_MULTI2_ARGB8); lua_setfield(L,-2,"D3DFMT_MULTI2_ARGB8");
	lua_pushnumber(L,::D3DFMT_R16F); lua_setfield(L,-2,"D3DFMT_R16F");
	lua_pushnumber(L,::D3DFMT_G16R16F); lua_setfield(L,-2,"D3DFMT_G16R16F");
	lua_pushnumber(L,::D3DFMT_A16B16G16R16F); lua_setfield(L,-2,"D3DFMT_A16B16G16R16F");
	lua_pushnumber(L,::D3DFMT_R32F); lua_setfield(L,-2,"D3DFMT_R32F");
	lua_pushnumber(L,::D3DFMT_G32R32F); lua_setfield(L,-2,"D3DFMT_G32R32F");
	lua_pushnumber(L,::D3DFMT_A32B32G32R32F); lua_setfield(L,-2,"D3DFMT_A32B32G32R32F");
	lua_pushnumber(L,::D3DFMT_CxV8U8); lua_setfield(L,-2,"D3DFMT_CxV8U8");
	lua_pushnumber(L,::D3DFMT_A1); lua_setfield(L,-2,"D3DFMT_A1");
	lua_pushnumber(L,::D3DFMT_A2B10G10R10_XR_BIAS); lua_setfield(L,-2,"D3DFMT_A2B10G10R10_XR_BIAS");
	lua_pushnumber(L,::D3DFMT_BINARYBUFFER); lua_setfield(L,-2,"D3DFMT_BINARYBUFFER");
	lua_pushnumber(L,::D3DFMT_FORCE_DWORD); lua_setfield(L,-2,"D3DFMT_FORCE_DWORD");

	lua_setfield(L,-2,"D3DFORMAT");

	lua_pushnumber(L,::D3DFMT_UNKNOWN); lua_setfield(L,-2,"D3DFMT_UNKNOWN");
	lua_pushnumber(L,::D3DFMT_R8G8B8); lua_setfield(L,-2,"D3DFMT_R8G8B8");
	lua_pushnumber(L,::D3DFMT_A8R8G8B8); lua_setfield(L,-2,"D3DFMT_A8R8G8B8");
	lua_pushnumber(L,::D3DFMT_X8R8G8B8); lua_setfield(L,-2,"D3DFMT_X8R8G8B8");
	lua_pushnumber(L,::D3DFMT_R5G6B5); lua_setfield(L,-2,"D3DFMT_R5G6B5");
	lua_pushnumber(L,::D3DFMT_X1R5G5B5); lua_setfield(L,-2,"D3DFMT_X1R5G5B5");
	lua_pushnumber(L,::D3DFMT_A1R5G5B5); lua_setfield(L,-2,"D3DFMT_A1R5G5B5");
	lua_pushnumber(L,::D3DFMT_A4R4G4B4); lua_setfield(L,-2,"D3DFMT_A4R4G4B4");
	lua_pushnumber(L,::D3DFMT_R3G3B2); lua_setfield(L,-2,"D3DFMT_R3G3B2");
	lua_pushnumber(L,::D3DFMT_A8); lua_setfield(L,-2,"D3DFMT_A8");
	lua_pushnumber(L,::D3DFMT_A8R3G3B2); lua_setfield(L,-2,"D3DFMT_A8R3G3B2");
	lua_pushnumber(L,::D3DFMT_X4R4G4B4); lua_setfield(L,-2,"D3DFMT_X4R4G4B4");
	lua_pushnumber(L,::D3DFMT_A2B10G10R10); lua_setfield(L,-2,"D3DFMT_A2B10G10R10");
	lua_pushnumber(L,::D3DFMT_A8B8G8R8); lua_setfield(L,-2,"D3DFMT_A8B8G8R8");
	lua_pushnumber(L,::D3DFMT_X8B8G8R8); lua_setfield(L,-2,"D3DFMT_X8B8G8R8");
	lua_pushnumber(L,::D3DFMT_G16R16); lua_setfield(L,-2,"D3DFMT_G16R16");
	lua_pushnumber(L,::D3DFMT_A2R10G10B10); lua_setfield(L,-2,"D3DFMT_A2R10G10B10");
	lua_pushnumber(L,::D3DFMT_A16B16G16R16); lua_setfield(L,-2,"D3DFMT_A16B16G16R16");
	lua_pushnumber(L,::D3DFMT_A8P8); lua_setfield(L,-2,"D3DFMT_A8P8");
	lua_pushnumber(L,::D3DFMT_P8); lua_setfield(L,-2,"D3DFMT_P8");
	lua_pushnumber(L,::D3DFMT_L8); lua_setfield(L,-2,"D3DFMT_L8");
	lua_pushnumber(L,::D3DFMT_A8L8); lua_setfield(L,-2,"D3DFMT_A8L8");
	lua_pushnumber(L,::D3DFMT_A4L4); lua_setfield(L,-2,"D3DFMT_A4L4");
	lua_pushnumber(L,::D3DFMT_V8U8); lua_setfield(L,-2,"D3DFMT_V8U8");
	lua_pushnumber(L,::D3DFMT_L6V5U5); lua_setfield(L,-2,"D3DFMT_L6V5U5");
	lua_pushnumber(L,::D3DFMT_X8L8V8U8); lua_setfield(L,-2,"D3DFMT_X8L8V8U8");
	lua_pushnumber(L,::D3DFMT_Q8W8V8U8); lua_setfield(L,-2,"D3DFMT_Q8W8V8U8");
	lua_pushnumber(L,::D3DFMT_V16U16); lua_setfield(L,-2,"D3DFMT_V16U16");
	lua_pushnumber(L,::D3DFMT_A2W10V10U10); lua_setfield(L,-2,"D3DFMT_A2W10V10U10");
	lua_pushnumber(L,::D3DFMT_UYVY); lua_setfield(L,-2,"D3DFMT_UYVY");
	lua_pushnumber(L,::D3DFMT_R8G8_B8G8); lua_setfield(L,-2,"D3DFMT_R8G8_B8G8");
	lua_pushnumber(L,::D3DFMT_YUY2); lua_setfield(L,-2,"D3DFMT_YUY2");
	lua_pushnumber(L,::D3DFMT_G8R8_G8B8); lua_setfield(L,-2,"D3DFMT_G8R8_G8B8");
	lua_pushnumber(L,::D3DFMT_DXT1); lua_setfield(L,-2,"D3DFMT_DXT1");
	lua_pushnumber(L,::D3DFMT_DXT2); lua_setfield(L,-2,"D3DFMT_DXT2");
	lua_pushnumber(L,::D3DFMT_DXT3); lua_setfield(L,-2,"D3DFMT_DXT3");
	lua_pushnumber(L,::D3DFMT_DXT4); lua_setfield(L,-2,"D3DFMT_DXT4");
	lua_pushnumber(L,::D3DFMT_DXT5); lua_setfield(L,-2,"D3DFMT_DXT5");
	lua_pushnumber(L,::D3DFMT_D16_LOCKABLE); lua_setfield(L,-2,"D3DFMT_D16_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_D32); lua_setfield(L,-2,"D3DFMT_D32");
	lua_pushnumber(L,::D3DFMT_D15S1); lua_setfield(L,-2,"D3DFMT_D15S1");
	lua_pushnumber(L,::D3DFMT_D24S8); lua_setfield(L,-2,"D3DFMT_D24S8");
	lua_pushnumber(L,::D3DFMT_D24X8); lua_setfield(L,-2,"D3DFMT_D24X8");
	lua_pushnumber(L,::D3DFMT_D24X4S4); lua_setfield(L,-2,"D3DFMT_D24X4S4");
	lua_pushnumber(L,::D3DFMT_D16); lua_setfield(L,-2,"D3DFMT_D16");
	lua_pushnumber(L,::D3DFMT_D32F_LOCKABLE); lua_setfield(L,-2,"D3DFMT_D32F_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_D24FS8); lua_setfield(L,-2,"D3DFMT_D24FS8");
	lua_pushnumber(L,::D3DFMT_D32_LOCKABLE); lua_setfield(L,-2,"D3DFMT_D32_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_S8_LOCKABLE); lua_setfield(L,-2,"D3DFMT_S8_LOCKABLE");
	lua_pushnumber(L,::D3DFMT_L16); lua_setfield(L,-2,"D3DFMT_L16");
	lua_pushnumber(L,::D3DFMT_VERTEXDATA); lua_setfield(L,-2,"D3DFMT_VERTEXDATA");
	lua_pushnumber(L,::D3DFMT_INDEX16); lua_setfield(L,-2,"D3DFMT_INDEX16");
	lua_pushnumber(L,::D3DFMT_INDEX32); lua_setfield(L,-2,"D3DFMT_INDEX32");
	lua_pushnumber(L,::D3DFMT_Q16W16V16U16); lua_setfield(L,-2,"D3DFMT_Q16W16V16U16");
	lua_pushnumber(L,::D3DFMT_MULTI2_ARGB8); lua_setfield(L,-2,"D3DFMT_MULTI2_ARGB8");
	lua_pushnumber(L,::D3DFMT_R16F); lua_setfield(L,-2,"D3DFMT_R16F");
	lua_pushnumber(L,::D3DFMT_G16R16F); lua_setfield(L,-2,"D3DFMT_G16R16F");
	lua_pushnumber(L,::D3DFMT_A16B16G16R16F); lua_setfield(L,-2,"D3DFMT_A16B16G16R16F");
	lua_pushnumber(L,::D3DFMT_R32F); lua_setfield(L,-2,"D3DFMT_R32F");
	lua_pushnumber(L,::D3DFMT_G32R32F); lua_setfield(L,-2,"D3DFMT_G32R32F");
	lua_pushnumber(L,::D3DFMT_A32B32G32R32F); lua_setfield(L,-2,"D3DFMT_A32B32G32R32F");
	lua_pushnumber(L,::D3DFMT_CxV8U8); lua_setfield(L,-2,"D3DFMT_CxV8U8");
	lua_pushnumber(L,::D3DFMT_A1); lua_setfield(L,-2,"D3DFMT_A1");
	lua_pushnumber(L,::D3DFMT_A2B10G10R10_XR_BIAS); lua_setfield(L,-2,"D3DFMT_A2B10G10R10_XR_BIAS");
	lua_pushnumber(L,::D3DFMT_BINARYBUFFER); lua_setfield(L,-2,"D3DFMT_BINARYBUFFER");
	lua_pushnumber(L,::D3DFMT_FORCE_DWORD); lua_setfield(L,-2,"D3DFMT_FORCE_DWORD");


	lua_newtable(L); // enum D3DDEVTYPE

	lua_pushnumber(L,::D3DDEVTYPE_HAL); lua_setfield(L,-2,"D3DDEVTYPE_HAL");
	lua_pushnumber(L,::D3DDEVTYPE_REF); lua_setfield(L,-2,"D3DDEVTYPE_REF");
	lua_pushnumber(L,::D3DDEVTYPE_SW); lua_setfield(L,-2,"D3DDEVTYPE_SW");
	lua_pushnumber(L,::D3DDEVTYPE_NULLREF); lua_setfield(L,-2,"D3DDEVTYPE_NULLREF");
	lua_pushnumber(L,::D3DDEVTYPE_FORCE_DWORD); lua_setfield(L,-2,"D3DDEVTYPE_FORCE_DWORD");

	lua_setfield(L,-2,"D3DDEVTYPE");

	lua_pushnumber(L,::D3DDEVTYPE_HAL); lua_setfield(L,-2,"D3DDEVTYPE_HAL");
	lua_pushnumber(L,::D3DDEVTYPE_REF); lua_setfield(L,-2,"D3DDEVTYPE_REF");
	lua_pushnumber(L,::D3DDEVTYPE_SW); lua_setfield(L,-2,"D3DDEVTYPE_SW");
	lua_pushnumber(L,::D3DDEVTYPE_NULLREF); lua_setfield(L,-2,"D3DDEVTYPE_NULLREF");
	lua_pushnumber(L,::D3DDEVTYPE_FORCE_DWORD); lua_setfield(L,-2,"D3DDEVTYPE_FORCE_DWORD");


	lua_newtable(L); // enum D3DRESOURCETYPE

	lua_pushnumber(L,::D3DRTYPE_SURFACE); lua_setfield(L,-2,"D3DRTYPE_SURFACE");
	lua_pushnumber(L,::D3DRTYPE_VOLUME); lua_setfield(L,-2,"D3DRTYPE_VOLUME");
	lua_pushnumber(L,::D3DRTYPE_TEXTURE); lua_setfield(L,-2,"D3DRTYPE_TEXTURE");
	lua_pushnumber(L,::D3DRTYPE_VOLUMETEXTURE); lua_setfield(L,-2,"D3DRTYPE_VOLUMETEXTURE");
	lua_pushnumber(L,::D3DRTYPE_CUBETEXTURE); lua_setfield(L,-2,"D3DRTYPE_CUBETEXTURE");
	lua_pushnumber(L,::D3DRTYPE_VERTEXBUFFER); lua_setfield(L,-2,"D3DRTYPE_VERTEXBUFFER");
	lua_pushnumber(L,::D3DRTYPE_INDEXBUFFER); lua_setfield(L,-2,"D3DRTYPE_INDEXBUFFER");
	lua_pushnumber(L,::D3DRTYPE_FORCE_DWORD); lua_setfield(L,-2,"D3DRTYPE_FORCE_DWORD");

	lua_setfield(L,-2,"D3DRESOURCETYPE");

	lua_pushnumber(L,::D3DRTYPE_SURFACE); lua_setfield(L,-2,"D3DRTYPE_SURFACE");
	lua_pushnumber(L,::D3DRTYPE_VOLUME); lua_setfield(L,-2,"D3DRTYPE_VOLUME");
	lua_pushnumber(L,::D3DRTYPE_TEXTURE); lua_setfield(L,-2,"D3DRTYPE_TEXTURE");
	lua_pushnumber(L,::D3DRTYPE_VOLUMETEXTURE); lua_setfield(L,-2,"D3DRTYPE_VOLUMETEXTURE");
	lua_pushnumber(L,::D3DRTYPE_CUBETEXTURE); lua_setfield(L,-2,"D3DRTYPE_CUBETEXTURE");
	lua_pushnumber(L,::D3DRTYPE_VERTEXBUFFER); lua_setfield(L,-2,"D3DRTYPE_VERTEXBUFFER");
	lua_pushnumber(L,::D3DRTYPE_INDEXBUFFER); lua_setfield(L,-2,"D3DRTYPE_INDEXBUFFER");
	lua_pushnumber(L,::D3DRTYPE_FORCE_DWORD); lua_setfield(L,-2,"D3DRTYPE_FORCE_DWORD");


	lua_newtable(L); // enum D3DMULTISAMPLE_TYPE

	lua_pushnumber(L,::D3DMULTISAMPLE_NONE); lua_setfield(L,-2,"D3DMULTISAMPLE_NONE");
	lua_pushnumber(L,::D3DMULTISAMPLE_NONMASKABLE); lua_setfield(L,-2,"D3DMULTISAMPLE_NONMASKABLE");
	lua_pushnumber(L,::D3DMULTISAMPLE_2_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_2_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_3_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_3_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_4_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_4_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_5_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_5_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_6_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_6_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_7_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_7_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_8_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_8_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_9_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_9_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_10_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_10_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_11_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_11_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_12_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_12_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_13_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_13_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_14_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_14_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_15_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_15_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_16_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_16_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_FORCE_DWORD); lua_setfield(L,-2,"D3DMULTISAMPLE_FORCE_DWORD");

	lua_setfield(L,-2,"D3DMULTISAMPLE_TYPE");

	lua_pushnumber(L,::D3DMULTISAMPLE_NONE); lua_setfield(L,-2,"D3DMULTISAMPLE_NONE");
	lua_pushnumber(L,::D3DMULTISAMPLE_NONMASKABLE); lua_setfield(L,-2,"D3DMULTISAMPLE_NONMASKABLE");
	lua_pushnumber(L,::D3DMULTISAMPLE_2_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_2_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_3_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_3_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_4_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_4_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_5_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_5_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_6_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_6_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_7_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_7_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_8_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_8_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_9_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_9_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_10_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_10_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_11_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_11_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_12_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_12_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_13_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_13_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_14_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_14_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_15_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_15_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_16_SAMPLES); lua_setfield(L,-2,"D3DMULTISAMPLE_16_SAMPLES");
	lua_pushnumber(L,::D3DMULTISAMPLE_FORCE_DWORD); lua_setfield(L,-2,"D3DMULTISAMPLE_FORCE_DWORD");


	lua_newtable(L); // enum D3DSWAPEFFECT

	lua_pushnumber(L,::D3DSWAPEFFECT_DISCARD); lua_setfield(L,-2,"D3DSWAPEFFECT_DISCARD");
	lua_pushnumber(L,::D3DSWAPEFFECT_FLIP); lua_setfield(L,-2,"D3DSWAPEFFECT_FLIP");
	lua_pushnumber(L,::D3DSWAPEFFECT_COPY); lua_setfield(L,-2,"D3DSWAPEFFECT_COPY");
	lua_pushnumber(L,::D3DSWAPEFFECT_OVERLAY); lua_setfield(L,-2,"D3DSWAPEFFECT_OVERLAY");
	lua_pushnumber(L,::D3DSWAPEFFECT_FLIPEX); lua_setfield(L,-2,"D3DSWAPEFFECT_FLIPEX");
	lua_pushnumber(L,::D3DSWAPEFFECT_FORCE_DWORD); lua_setfield(L,-2,"D3DSWAPEFFECT_FORCE_DWORD");

	lua_setfield(L,-2,"D3DSWAPEFFECT");

	lua_pushnumber(L,::D3DSWAPEFFECT_DISCARD); lua_setfield(L,-2,"D3DSWAPEFFECT_DISCARD");
	lua_pushnumber(L,::D3DSWAPEFFECT_FLIP); lua_setfield(L,-2,"D3DSWAPEFFECT_FLIP");
	lua_pushnumber(L,::D3DSWAPEFFECT_COPY); lua_setfield(L,-2,"D3DSWAPEFFECT_COPY");
	lua_pushnumber(L,::D3DSWAPEFFECT_OVERLAY); lua_setfield(L,-2,"D3DSWAPEFFECT_OVERLAY");
	lua_pushnumber(L,::D3DSWAPEFFECT_FLIPEX); lua_setfield(L,-2,"D3DSWAPEFFECT_FLIPEX");
	lua_pushnumber(L,::D3DSWAPEFFECT_FORCE_DWORD); lua_setfield(L,-2,"D3DSWAPEFFECT_FORCE_DWORD");


	lua_newtable(L); // enum D3DBACKBUFFER_TYPE

	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_MONO); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_MONO");
	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_LEFT); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_LEFT");
	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_RIGHT); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_RIGHT");
	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_FORCE_DWORD); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_FORCE_DWORD");

	lua_setfield(L,-2,"D3DBACKBUFFER_TYPE");

	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_MONO); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_MONO");
	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_LEFT); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_LEFT");
	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_RIGHT); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_RIGHT");
	lua_pushnumber(L,::D3DBACKBUFFER_TYPE_FORCE_DWORD); lua_setfield(L,-2,"D3DBACKBUFFER_TYPE_FORCE_DWORD");


	lua_newtable(L); // enum D3DPOOL

	lua_pushnumber(L,::D3DPOOL_DEFAULT); lua_setfield(L,-2,"D3DPOOL_DEFAULT");
	lua_pushnumber(L,::D3DPOOL_MANAGED); lua_setfield(L,-2,"D3DPOOL_MANAGED");
	lua_pushnumber(L,::D3DPOOL_SYSTEMMEM); lua_setfield(L,-2,"D3DPOOL_SYSTEMMEM");
	lua_pushnumber(L,::D3DPOOL_SCRATCH); lua_setfield(L,-2,"D3DPOOL_SCRATCH");
	lua_pushnumber(L,::D3DPOOL_FORCE_DWORD); lua_setfield(L,-2,"D3DPOOL_FORCE_DWORD");

	lua_setfield(L,-2,"D3DPOOL");

	lua_pushnumber(L,::D3DPOOL_DEFAULT); lua_setfield(L,-2,"D3DPOOL_DEFAULT");
	lua_pushnumber(L,::D3DPOOL_MANAGED); lua_setfield(L,-2,"D3DPOOL_MANAGED");
	lua_pushnumber(L,::D3DPOOL_SYSTEMMEM); lua_setfield(L,-2,"D3DPOOL_SYSTEMMEM");
	lua_pushnumber(L,::D3DPOOL_SCRATCH); lua_setfield(L,-2,"D3DPOOL_SCRATCH");
	lua_pushnumber(L,::D3DPOOL_FORCE_DWORD); lua_setfield(L,-2,"D3DPOOL_FORCE_DWORD");


	lua_newtable(L); // enum D3DTEXTUREFILTERTYPE

	lua_pushnumber(L,::D3DTEXF_NONE); lua_setfield(L,-2,"D3DTEXF_NONE");
	lua_pushnumber(L,::D3DTEXF_POINT); lua_setfield(L,-2,"D3DTEXF_POINT");
	lua_pushnumber(L,::D3DTEXF_LINEAR); lua_setfield(L,-2,"D3DTEXF_LINEAR");
	lua_pushnumber(L,::D3DTEXF_ANISOTROPIC); lua_setfield(L,-2,"D3DTEXF_ANISOTROPIC");
	lua_pushnumber(L,::D3DTEXF_PYRAMIDALQUAD); lua_setfield(L,-2,"D3DTEXF_PYRAMIDALQUAD");
	lua_pushnumber(L,::D3DTEXF_GAUSSIANQUAD); lua_setfield(L,-2,"D3DTEXF_GAUSSIANQUAD");
	lua_pushnumber(L,::D3DTEXF_CONVOLUTIONMONO); lua_setfield(L,-2,"D3DTEXF_CONVOLUTIONMONO");
	lua_pushnumber(L,::D3DTEXF_FORCE_DWORD); lua_setfield(L,-2,"D3DTEXF_FORCE_DWORD");

	lua_setfield(L,-2,"D3DTEXTUREFILTERTYPE");

	lua_pushnumber(L,::D3DTEXF_NONE); lua_setfield(L,-2,"D3DTEXF_NONE");
	lua_pushnumber(L,::D3DTEXF_POINT); lua_setfield(L,-2,"D3DTEXF_POINT");
	lua_pushnumber(L,::D3DTEXF_LINEAR); lua_setfield(L,-2,"D3DTEXF_LINEAR");
	lua_pushnumber(L,::D3DTEXF_ANISOTROPIC); lua_setfield(L,-2,"D3DTEXF_ANISOTROPIC");
	lua_pushnumber(L,::D3DTEXF_PYRAMIDALQUAD); lua_setfield(L,-2,"D3DTEXF_PYRAMIDALQUAD");
	lua_pushnumber(L,::D3DTEXF_GAUSSIANQUAD); lua_setfield(L,-2,"D3DTEXF_GAUSSIANQUAD");
	lua_pushnumber(L,::D3DTEXF_CONVOLUTIONMONO); lua_setfield(L,-2,"D3DTEXF_CONVOLUTIONMONO");
	lua_pushnumber(L,::D3DTEXF_FORCE_DWORD); lua_setfield(L,-2,"D3DTEXF_FORCE_DWORD");


	lua_newtable(L); // enum D3DTRANSFORMSTATETYPE

	lua_pushnumber(L,::D3DTS_VIEW); lua_setfield(L,-2,"D3DTS_VIEW");
	lua_pushnumber(L,::D3DTS_PROJECTION); lua_setfield(L,-2,"D3DTS_PROJECTION");
	lua_pushnumber(L,::D3DTS_TEXTURE0); lua_setfield(L,-2,"D3DTS_TEXTURE0");
	lua_pushnumber(L,::D3DTS_TEXTURE1); lua_setfield(L,-2,"D3DTS_TEXTURE1");
	lua_pushnumber(L,::D3DTS_TEXTURE2); lua_setfield(L,-2,"D3DTS_TEXTURE2");
	lua_pushnumber(L,::D3DTS_TEXTURE3); lua_setfield(L,-2,"D3DTS_TEXTURE3");
	lua_pushnumber(L,::D3DTS_TEXTURE4); lua_setfield(L,-2,"D3DTS_TEXTURE4");
	lua_pushnumber(L,::D3DTS_TEXTURE5); lua_setfield(L,-2,"D3DTS_TEXTURE5");
	lua_pushnumber(L,::D3DTS_TEXTURE6); lua_setfield(L,-2,"D3DTS_TEXTURE6");
	lua_pushnumber(L,::D3DTS_TEXTURE7); lua_setfield(L,-2,"D3DTS_TEXTURE7");
	lua_pushnumber(L,::D3DTS_FORCE_DWORD); lua_setfield(L,-2,"D3DTS_FORCE_DWORD");

	lua_setfield(L,-2,"D3DTRANSFORMSTATETYPE");

	lua_pushnumber(L,::D3DTS_VIEW); lua_setfield(L,-2,"D3DTS_VIEW");
	lua_pushnumber(L,::D3DTS_PROJECTION); lua_setfield(L,-2,"D3DTS_PROJECTION");
	lua_pushnumber(L,::D3DTS_TEXTURE0); lua_setfield(L,-2,"D3DTS_TEXTURE0");
	lua_pushnumber(L,::D3DTS_TEXTURE1); lua_setfield(L,-2,"D3DTS_TEXTURE1");
	lua_pushnumber(L,::D3DTS_TEXTURE2); lua_setfield(L,-2,"D3DTS_TEXTURE2");
	lua_pushnumber(L,::D3DTS_TEXTURE3); lua_setfield(L,-2,"D3DTS_TEXTURE3");
	lua_pushnumber(L,::D3DTS_TEXTURE4); lua_setfield(L,-2,"D3DTS_TEXTURE4");
	lua_pushnumber(L,::D3DTS_TEXTURE5); lua_setfield(L,-2,"D3DTS_TEXTURE5");
	lua_pushnumber(L,::D3DTS_TEXTURE6); lua_setfield(L,-2,"D3DTS_TEXTURE6");
	lua_pushnumber(L,::D3DTS_TEXTURE7); lua_setfield(L,-2,"D3DTS_TEXTURE7");
	lua_pushnumber(L,::D3DTS_FORCE_DWORD); lua_setfield(L,-2,"D3DTS_FORCE_DWORD");


	lua_newtable(L); // enum D3DLIGHTTYPE

	lua_pushnumber(L,::D3DLIGHT_POINT); lua_setfield(L,-2,"D3DLIGHT_POINT");
	lua_pushnumber(L,::D3DLIGHT_SPOT); lua_setfield(L,-2,"D3DLIGHT_SPOT");
	lua_pushnumber(L,::D3DLIGHT_DIRECTIONAL); lua_setfield(L,-2,"D3DLIGHT_DIRECTIONAL");
	lua_pushnumber(L,::D3DLIGHT_FORCE_DWORD); lua_setfield(L,-2,"D3DLIGHT_FORCE_DWORD");

	lua_setfield(L,-2,"D3DLIGHTTYPE");

	lua_pushnumber(L,::D3DLIGHT_POINT); lua_setfield(L,-2,"D3DLIGHT_POINT");
	lua_pushnumber(L,::D3DLIGHT_SPOT); lua_setfield(L,-2,"D3DLIGHT_SPOT");
	lua_pushnumber(L,::D3DLIGHT_DIRECTIONAL); lua_setfield(L,-2,"D3DLIGHT_DIRECTIONAL");
	lua_pushnumber(L,::D3DLIGHT_FORCE_DWORD); lua_setfield(L,-2,"D3DLIGHT_FORCE_DWORD");


	lua_newtable(L); // enum D3DSTATEBLOCKTYPE

	lua_pushnumber(L,::D3DSBT_ALL); lua_setfield(L,-2,"D3DSBT_ALL");
	lua_pushnumber(L,::D3DSBT_PIXELSTATE); lua_setfield(L,-2,"D3DSBT_PIXELSTATE");
	lua_pushnumber(L,::D3DSBT_VERTEXSTATE); lua_setfield(L,-2,"D3DSBT_VERTEXSTATE");
	lua_pushnumber(L,::D3DSBT_FORCE_DWORD); lua_setfield(L,-2,"D3DSBT_FORCE_DWORD");

	lua_setfield(L,-2,"D3DSTATEBLOCKTYPE");

	lua_pushnumber(L,::D3DSBT_ALL); lua_setfield(L,-2,"D3DSBT_ALL");
	lua_pushnumber(L,::D3DSBT_PIXELSTATE); lua_setfield(L,-2,"D3DSBT_PIXELSTATE");
	lua_pushnumber(L,::D3DSBT_VERTEXSTATE); lua_setfield(L,-2,"D3DSBT_VERTEXSTATE");
	lua_pushnumber(L,::D3DSBT_FORCE_DWORD); lua_setfield(L,-2,"D3DSBT_FORCE_DWORD");


	lua_newtable(L); // enum D3DTEXTURESTAGESTATETYPE

	lua_pushnumber(L,::D3DTSS_COLOROP); lua_setfield(L,-2,"D3DTSS_COLOROP");
	lua_pushnumber(L,::D3DTSS_COLORARG1); lua_setfield(L,-2,"D3DTSS_COLORARG1");
	lua_pushnumber(L,::D3DTSS_COLORARG2); lua_setfield(L,-2,"D3DTSS_COLORARG2");
	lua_pushnumber(L,::D3DTSS_ALPHAOP); lua_setfield(L,-2,"D3DTSS_ALPHAOP");
	lua_pushnumber(L,::D3DTSS_ALPHAARG1); lua_setfield(L,-2,"D3DTSS_ALPHAARG1");
	lua_pushnumber(L,::D3DTSS_ALPHAARG2); lua_setfield(L,-2,"D3DTSS_ALPHAARG2");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT00); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT00");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT01); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT01");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT10); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT10");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT11); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT11");
	lua_pushnumber(L,::D3DTSS_TEXCOORDINDEX); lua_setfield(L,-2,"D3DTSS_TEXCOORDINDEX");
	lua_pushnumber(L,::D3DTSS_BUMPENVLSCALE); lua_setfield(L,-2,"D3DTSS_BUMPENVLSCALE");
	lua_pushnumber(L,::D3DTSS_BUMPENVLOFFSET); lua_setfield(L,-2,"D3DTSS_BUMPENVLOFFSET");
	lua_pushnumber(L,::D3DTSS_TEXTURETRANSFORMFLAGS); lua_setfield(L,-2,"D3DTSS_TEXTURETRANSFORMFLAGS");
	lua_pushnumber(L,::D3DTSS_COLORARG0); lua_setfield(L,-2,"D3DTSS_COLORARG0");
	lua_pushnumber(L,::D3DTSS_ALPHAARG0); lua_setfield(L,-2,"D3DTSS_ALPHAARG0");
	lua_pushnumber(L,::D3DTSS_RESULTARG); lua_setfield(L,-2,"D3DTSS_RESULTARG");
	lua_pushnumber(L,::D3DTSS_CONSTANT); lua_setfield(L,-2,"D3DTSS_CONSTANT");
	lua_pushnumber(L,::D3DTSS_FORCE_DWORD); lua_setfield(L,-2,"D3DTSS_FORCE_DWORD");

	lua_setfield(L,-2,"D3DTEXTURESTAGESTATETYPE");

	lua_pushnumber(L,::D3DTSS_COLOROP); lua_setfield(L,-2,"D3DTSS_COLOROP");
	lua_pushnumber(L,::D3DTSS_COLORARG1); lua_setfield(L,-2,"D3DTSS_COLORARG1");
	lua_pushnumber(L,::D3DTSS_COLORARG2); lua_setfield(L,-2,"D3DTSS_COLORARG2");
	lua_pushnumber(L,::D3DTSS_ALPHAOP); lua_setfield(L,-2,"D3DTSS_ALPHAOP");
	lua_pushnumber(L,::D3DTSS_ALPHAARG1); lua_setfield(L,-2,"D3DTSS_ALPHAARG1");
	lua_pushnumber(L,::D3DTSS_ALPHAARG2); lua_setfield(L,-2,"D3DTSS_ALPHAARG2");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT00); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT00");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT01); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT01");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT10); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT10");
	lua_pushnumber(L,::D3DTSS_BUMPENVMAT11); lua_setfield(L,-2,"D3DTSS_BUMPENVMAT11");
	lua_pushnumber(L,::D3DTSS_TEXCOORDINDEX); lua_setfield(L,-2,"D3DTSS_TEXCOORDINDEX");
	lua_pushnumber(L,::D3DTSS_BUMPENVLSCALE); lua_setfield(L,-2,"D3DTSS_BUMPENVLSCALE");
	lua_pushnumber(L,::D3DTSS_BUMPENVLOFFSET); lua_setfield(L,-2,"D3DTSS_BUMPENVLOFFSET");
	lua_pushnumber(L,::D3DTSS_TEXTURETRANSFORMFLAGS); lua_setfield(L,-2,"D3DTSS_TEXTURETRANSFORMFLAGS");
	lua_pushnumber(L,::D3DTSS_COLORARG0); lua_setfield(L,-2,"D3DTSS_COLORARG0");
	lua_pushnumber(L,::D3DTSS_ALPHAARG0); lua_setfield(L,-2,"D3DTSS_ALPHAARG0");
	lua_pushnumber(L,::D3DTSS_RESULTARG); lua_setfield(L,-2,"D3DTSS_RESULTARG");
	lua_pushnumber(L,::D3DTSS_CONSTANT); lua_setfield(L,-2,"D3DTSS_CONSTANT");
	lua_pushnumber(L,::D3DTSS_FORCE_DWORD); lua_setfield(L,-2,"D3DTSS_FORCE_DWORD");


	lua_newtable(L); // enum D3DBASISTYPE

	lua_pushnumber(L,::D3DBASIS_BEZIER); lua_setfield(L,-2,"D3DBASIS_BEZIER");
	lua_pushnumber(L,::D3DBASIS_BSPLINE); lua_setfield(L,-2,"D3DBASIS_BSPLINE");
	lua_pushnumber(L,::D3DBASIS_CATMULL_ROM); lua_setfield(L,-2,"D3DBASIS_CATMULL_ROM");
	lua_pushnumber(L,::D3DBASIS_FORCE_DWORD); lua_setfield(L,-2,"D3DBASIS_FORCE_DWORD");

	lua_setfield(L,-2,"D3DBASISTYPE");

	lua_pushnumber(L,::D3DBASIS_BEZIER); lua_setfield(L,-2,"D3DBASIS_BEZIER");
	lua_pushnumber(L,::D3DBASIS_BSPLINE); lua_setfield(L,-2,"D3DBASIS_BSPLINE");
	lua_pushnumber(L,::D3DBASIS_CATMULL_ROM); lua_setfield(L,-2,"D3DBASIS_CATMULL_ROM");
	lua_pushnumber(L,::D3DBASIS_FORCE_DWORD); lua_setfield(L,-2,"D3DBASIS_FORCE_DWORD");


	lua_newtable(L); // enum D3DDEGREETYPE

	lua_pushnumber(L,::D3DDEGREE_LINEAR); lua_setfield(L,-2,"D3DDEGREE_LINEAR");
	lua_pushnumber(L,::D3DDEGREE_QUADRATIC); lua_setfield(L,-2,"D3DDEGREE_QUADRATIC");
	lua_pushnumber(L,::D3DDEGREE_CUBIC); lua_setfield(L,-2,"D3DDEGREE_CUBIC");
	lua_pushnumber(L,::D3DDEGREE_QUINTIC); lua_setfield(L,-2,"D3DDEGREE_QUINTIC");
	lua_pushnumber(L,::D3DDEGREE_FORCE_DWORD); lua_setfield(L,-2,"D3DDEGREE_FORCE_DWORD");

	lua_setfield(L,-2,"D3DDEGREETYPE");

	lua_pushnumber(L,::D3DDEGREE_LINEAR); lua_setfield(L,-2,"D3DDEGREE_LINEAR");
	lua_pushnumber(L,::D3DDEGREE_QUADRATIC); lua_setfield(L,-2,"D3DDEGREE_QUADRATIC");
	lua_pushnumber(L,::D3DDEGREE_CUBIC); lua_setfield(L,-2,"D3DDEGREE_CUBIC");
	lua_pushnumber(L,::D3DDEGREE_QUINTIC); lua_setfield(L,-2,"D3DDEGREE_QUINTIC");
	lua_pushnumber(L,::D3DDEGREE_FORCE_DWORD); lua_setfield(L,-2,"D3DDEGREE_FORCE_DWORD");


	lua_newtable(L); // enum D3DQUERYTYPE

	lua_pushnumber(L,::D3DQUERYTYPE_VCACHE); lua_setfield(L,-2,"D3DQUERYTYPE_VCACHE");
	lua_pushnumber(L,::D3DQUERYTYPE_RESOURCEMANAGER); lua_setfield(L,-2,"D3DQUERYTYPE_RESOURCEMANAGER");
	lua_pushnumber(L,::D3DQUERYTYPE_VERTEXSTATS); lua_setfield(L,-2,"D3DQUERYTYPE_VERTEXSTATS");
	lua_pushnumber(L,::D3DQUERYTYPE_EVENT); lua_setfield(L,-2,"D3DQUERYTYPE_EVENT");
	lua_pushnumber(L,::D3DQUERYTYPE_OCCLUSION); lua_setfield(L,-2,"D3DQUERYTYPE_OCCLUSION");
	lua_pushnumber(L,::D3DQUERYTYPE_TIMESTAMP); lua_setfield(L,-2,"D3DQUERYTYPE_TIMESTAMP");
	lua_pushnumber(L,::D3DQUERYTYPE_TIMESTAMPDISJOINT); lua_setfield(L,-2,"D3DQUERYTYPE_TIMESTAMPDISJOINT");
	lua_pushnumber(L,::D3DQUERYTYPE_TIMESTAMPFREQ); lua_setfield(L,-2,"D3DQUERYTYPE_TIMESTAMPFREQ");
	lua_pushnumber(L,::D3DQUERYTYPE_PIPELINETIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_PIPELINETIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_INTERFACETIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_INTERFACETIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_VERTEXTIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_VERTEXTIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_PIXELTIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_PIXELTIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_BANDWIDTHTIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_BANDWIDTHTIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_CACHEUTILIZATION); lua_setfield(L,-2,"D3DQUERYTYPE_CACHEUTILIZATION");
	lua_pushnumber(L,::D3DQUERYTYPE_MEMORYPRESSURE); lua_setfield(L,-2,"D3DQUERYTYPE_MEMORYPRESSURE");

	lua_setfield(L,-2,"D3DQUERYTYPE");

	lua_pushnumber(L,::D3DQUERYTYPE_VCACHE); lua_setfield(L,-2,"D3DQUERYTYPE_VCACHE");
	lua_pushnumber(L,::D3DQUERYTYPE_RESOURCEMANAGER); lua_setfield(L,-2,"D3DQUERYTYPE_RESOURCEMANAGER");
	lua_pushnumber(L,::D3DQUERYTYPE_VERTEXSTATS); lua_setfield(L,-2,"D3DQUERYTYPE_VERTEXSTATS");
	lua_pushnumber(L,::D3DQUERYTYPE_EVENT); lua_setfield(L,-2,"D3DQUERYTYPE_EVENT");
	lua_pushnumber(L,::D3DQUERYTYPE_OCCLUSION); lua_setfield(L,-2,"D3DQUERYTYPE_OCCLUSION");
	lua_pushnumber(L,::D3DQUERYTYPE_TIMESTAMP); lua_setfield(L,-2,"D3DQUERYTYPE_TIMESTAMP");
	lua_pushnumber(L,::D3DQUERYTYPE_TIMESTAMPDISJOINT); lua_setfield(L,-2,"D3DQUERYTYPE_TIMESTAMPDISJOINT");
	lua_pushnumber(L,::D3DQUERYTYPE_TIMESTAMPFREQ); lua_setfield(L,-2,"D3DQUERYTYPE_TIMESTAMPFREQ");
	lua_pushnumber(L,::D3DQUERYTYPE_PIPELINETIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_PIPELINETIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_INTERFACETIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_INTERFACETIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_VERTEXTIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_VERTEXTIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_PIXELTIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_PIXELTIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_BANDWIDTHTIMINGS); lua_setfield(L,-2,"D3DQUERYTYPE_BANDWIDTHTIMINGS");
	lua_pushnumber(L,::D3DQUERYTYPE_CACHEUTILIZATION); lua_setfield(L,-2,"D3DQUERYTYPE_CACHEUTILIZATION");
	lua_pushnumber(L,::D3DQUERYTYPE_MEMORYPRESSURE); lua_setfield(L,-2,"D3DQUERYTYPE_MEMORYPRESSURE");


	lua_newtable(L); // enum D3DCULL

	lua_pushnumber(L,::D3DCULL_NONE); lua_setfield(L,-2,"D3DCULL_NONE");
	lua_pushnumber(L,::D3DCULL_CW); lua_setfield(L,-2,"D3DCULL_CW");
	lua_pushnumber(L,::D3DCULL_CCW); lua_setfield(L,-2,"D3DCULL_CCW");
	lua_pushnumber(L,::D3DCULL_FORCE_DWORD); lua_setfield(L,-2,"D3DCULL_FORCE_DWORD");

	lua_setfield(L,-2,"D3DCULL");

	lua_pushnumber(L,::D3DCULL_NONE); lua_setfield(L,-2,"D3DCULL_NONE");
	lua_pushnumber(L,::D3DCULL_CW); lua_setfield(L,-2,"D3DCULL_CW");
	lua_pushnumber(L,::D3DCULL_CCW); lua_setfield(L,-2,"D3DCULL_CCW");
	lua_pushnumber(L,::D3DCULL_FORCE_DWORD); lua_setfield(L,-2,"D3DCULL_FORCE_DWORD");


	lua_newtable(L); // enum D3DZBUFFERTYPE

	lua_pushnumber(L,::D3DZB_FALSE); lua_setfield(L,-2,"D3DZB_FALSE");
	lua_pushnumber(L,::D3DZB_TRUE); lua_setfield(L,-2,"D3DZB_TRUE");
	lua_pushnumber(L,::D3DZB_USEW); lua_setfield(L,-2,"D3DZB_USEW");
	lua_pushnumber(L,::D3DZB_FORCE_DWORD); lua_setfield(L,-2,"D3DZB_FORCE_DWORD");

	lua_setfield(L,-2,"D3DZBUFFERTYPE");

	lua_pushnumber(L,::D3DZB_FALSE); lua_setfield(L,-2,"D3DZB_FALSE");
	lua_pushnumber(L,::D3DZB_TRUE); lua_setfield(L,-2,"D3DZB_TRUE");
	lua_pushnumber(L,::D3DZB_USEW); lua_setfield(L,-2,"D3DZB_USEW");
	lua_pushnumber(L,::D3DZB_FORCE_DWORD); lua_setfield(L,-2,"D3DZB_FORCE_DWORD");


	lua_newtable(L); // enum D3DTEXTUREADDRESS

	lua_pushnumber(L,::D3DTADDRESS_WRAP); lua_setfield(L,-2,"D3DTADDRESS_WRAP");
	lua_pushnumber(L,::D3DTADDRESS_MIRROR); lua_setfield(L,-2,"D3DTADDRESS_MIRROR");
	lua_pushnumber(L,::D3DTADDRESS_CLAMP); lua_setfield(L,-2,"D3DTADDRESS_CLAMP");
	lua_pushnumber(L,::D3DTADDRESS_BORDER); lua_setfield(L,-2,"D3DTADDRESS_BORDER");
	lua_pushnumber(L,::D3DTADDRESS_MIRRORONCE); lua_setfield(L,-2,"D3DTADDRESS_MIRRORONCE");
	lua_pushnumber(L,::D3DTADDRESS_FORCE_DWORD); lua_setfield(L,-2,"D3DTADDRESS_FORCE_DWORD");

	lua_setfield(L,-2,"D3DTEXTUREADDRESS");

	lua_pushnumber(L,::D3DTADDRESS_WRAP); lua_setfield(L,-2,"D3DTADDRESS_WRAP");
	lua_pushnumber(L,::D3DTADDRESS_MIRROR); lua_setfield(L,-2,"D3DTADDRESS_MIRROR");
	lua_pushnumber(L,::D3DTADDRESS_CLAMP); lua_setfield(L,-2,"D3DTADDRESS_CLAMP");
	lua_pushnumber(L,::D3DTADDRESS_BORDER); lua_setfield(L,-2,"D3DTADDRESS_BORDER");
	lua_pushnumber(L,::D3DTADDRESS_MIRRORONCE); lua_setfield(L,-2,"D3DTADDRESS_MIRRORONCE");
	lua_pushnumber(L,::D3DTADDRESS_FORCE_DWORD); lua_setfield(L,-2,"D3DTADDRESS_FORCE_DWORD");


	lua_newtable(L); // enum D3DBLEND

	lua_pushnumber(L,::D3DBLEND_ZERO); lua_setfield(L,-2,"D3DBLEND_ZERO");
	lua_pushnumber(L,::D3DBLEND_ONE); lua_setfield(L,-2,"D3DBLEND_ONE");
	lua_pushnumber(L,::D3DBLEND_SRCCOLOR); lua_setfield(L,-2,"D3DBLEND_SRCCOLOR");
	lua_pushnumber(L,::D3DBLEND_INVSRCCOLOR); lua_setfield(L,-2,"D3DBLEND_INVSRCCOLOR");
	lua_pushnumber(L,::D3DBLEND_SRCALPHA); lua_setfield(L,-2,"D3DBLEND_SRCALPHA");
	lua_pushnumber(L,::D3DBLEND_INVSRCALPHA); lua_setfield(L,-2,"D3DBLEND_INVSRCALPHA");
	lua_pushnumber(L,::D3DBLEND_DESTALPHA); lua_setfield(L,-2,"D3DBLEND_DESTALPHA");
	lua_pushnumber(L,::D3DBLEND_INVDESTALPHA); lua_setfield(L,-2,"D3DBLEND_INVDESTALPHA");
	lua_pushnumber(L,::D3DBLEND_DESTCOLOR); lua_setfield(L,-2,"D3DBLEND_DESTCOLOR");
	lua_pushnumber(L,::D3DBLEND_INVDESTCOLOR); lua_setfield(L,-2,"D3DBLEND_INVDESTCOLOR");
	lua_pushnumber(L,::D3DBLEND_SRCALPHASAT); lua_setfield(L,-2,"D3DBLEND_SRCALPHASAT");
	lua_pushnumber(L,::D3DBLEND_BOTHSRCALPHA); lua_setfield(L,-2,"D3DBLEND_BOTHSRCALPHA");
	lua_pushnumber(L,::D3DBLEND_BOTHINVSRCALPHA); lua_setfield(L,-2,"D3DBLEND_BOTHINVSRCALPHA");
	lua_pushnumber(L,::D3DBLEND_BLENDFACTOR); lua_setfield(L,-2,"D3DBLEND_BLENDFACTOR");
	lua_pushnumber(L,::D3DBLEND_INVBLENDFACTOR); lua_setfield(L,-2,"D3DBLEND_INVBLENDFACTOR");
	lua_pushnumber(L,::D3DBLEND_SRCCOLOR2); lua_setfield(L,-2,"D3DBLEND_SRCCOLOR2");
	lua_pushnumber(L,::D3DBLEND_INVSRCCOLOR2); lua_setfield(L,-2,"D3DBLEND_INVSRCCOLOR2");
	lua_pushnumber(L,::D3DBLEND_FORCE_DWORD); lua_setfield(L,-2,"D3DBLEND_FORCE_DWORD");

	lua_setfield(L,-2,"D3DBLEND");

	lua_pushnumber(L,::D3DBLEND_ZERO); lua_setfield(L,-2,"D3DBLEND_ZERO");
	lua_pushnumber(L,::D3DBLEND_ONE); lua_setfield(L,-2,"D3DBLEND_ONE");
	lua_pushnumber(L,::D3DBLEND_SRCCOLOR); lua_setfield(L,-2,"D3DBLEND_SRCCOLOR");
	lua_pushnumber(L,::D3DBLEND_INVSRCCOLOR); lua_setfield(L,-2,"D3DBLEND_INVSRCCOLOR");
	lua_pushnumber(L,::D3DBLEND_SRCALPHA); lua_setfield(L,-2,"D3DBLEND_SRCALPHA");
	lua_pushnumber(L,::D3DBLEND_INVSRCALPHA); lua_setfield(L,-2,"D3DBLEND_INVSRCALPHA");
	lua_pushnumber(L,::D3DBLEND_DESTALPHA); lua_setfield(L,-2,"D3DBLEND_DESTALPHA");
	lua_pushnumber(L,::D3DBLEND_INVDESTALPHA); lua_setfield(L,-2,"D3DBLEND_INVDESTALPHA");
	lua_pushnumber(L,::D3DBLEND_DESTCOLOR); lua_setfield(L,-2,"D3DBLEND_DESTCOLOR");
	lua_pushnumber(L,::D3DBLEND_INVDESTCOLOR); lua_setfield(L,-2,"D3DBLEND_INVDESTCOLOR");
	lua_pushnumber(L,::D3DBLEND_SRCALPHASAT); lua_setfield(L,-2,"D3DBLEND_SRCALPHASAT");
	lua_pushnumber(L,::D3DBLEND_BOTHSRCALPHA); lua_setfield(L,-2,"D3DBLEND_BOTHSRCALPHA");
	lua_pushnumber(L,::D3DBLEND_BOTHINVSRCALPHA); lua_setfield(L,-2,"D3DBLEND_BOTHINVSRCALPHA");
	lua_pushnumber(L,::D3DBLEND_BLENDFACTOR); lua_setfield(L,-2,"D3DBLEND_BLENDFACTOR");
	lua_pushnumber(L,::D3DBLEND_INVBLENDFACTOR); lua_setfield(L,-2,"D3DBLEND_INVBLENDFACTOR");
	lua_pushnumber(L,::D3DBLEND_SRCCOLOR2); lua_setfield(L,-2,"D3DBLEND_SRCCOLOR2");
	lua_pushnumber(L,::D3DBLEND_INVSRCCOLOR2); lua_setfield(L,-2,"D3DBLEND_INVSRCCOLOR2");
	lua_pushnumber(L,::D3DBLEND_FORCE_DWORD); lua_setfield(L,-2,"D3DBLEND_FORCE_DWORD");


	lua_newtable(L); // enum UniformTarget

	lua_pushnumber(L,::TARGET_FRAGMENT); lua_setfield(L,-2,"TARGET_FRAGMENT");
	lua_pushnumber(L,::TARGET_VERTEX); lua_setfield(L,-2,"TARGET_VERTEX");
	lua_pushnumber(L,::TARGET_BOTH); lua_setfield(L,-2,"TARGET_BOTH");

	lua_setfield(L,-2,"UniformTarget");

	lua_pushnumber(L,::TARGET_FRAGMENT); lua_setfield(L,-2,"TARGET_FRAGMENT");
	lua_pushnumber(L,::TARGET_VERTEX); lua_setfield(L,-2,"TARGET_VERTEX");
	lua_pushnumber(L,::TARGET_BOTH); lua_setfield(L,-2,"TARGET_BOTH");


}

#ifdef __cplusplus
}
#endif


