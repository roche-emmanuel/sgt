#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_dx9(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"dx9");
	Luna< D3DADAPTER_IDENTIFIER9 >::Register(L);
	Luna< D3DCAPS9 >::Register(L);
	Luna< D3DCLIPSTATUS9 >::Register(L);
	Luna< D3DCOLORVALUE >::Register(L);
	Luna< D3DDEVICE_CREATION_PARAMETERS >::Register(L);
	Luna< D3DDISPLAYMODE >::Register(L);
	Luna< D3DLIGHT9 >::Register(L);
	Luna< D3DLOCKED_RECT >::Register(L);
	Luna< D3DMATERIAL9 >::Register(L);
	Luna< D3DMATRIX >::Register(L);
	Luna< D3DPRESENT_PARAMETERS >::Register(L);
	Luna< D3DPSHADERCAPS2_0 >::Register(L);
	Luna< D3DRASTER_STATUS >::Register(L);
	Luna< D3DRECT >::Register(L);
	Luna< D3DRECTPATCH_INFO >::Register(L);
	Luna< D3DSURFACE_DESC >::Register(L);
	Luna< D3DTRIPATCH_INFO >::Register(L);
	Luna< D3DVECTOR >::Register(L);
	Luna< D3DVERTEXBUFFER_DESC >::Register(L);
	Luna< D3DVERTEXELEMENT9 >::Register(L);
	Luna< D3DVIEWPORT9 >::Register(L);
	Luna< D3DVSHADERCAPS2_0 >::Register(L);
	Luna< GUID >::Register(L);
	Luna< HMONITOR >::Register(L);
	Luna< ID3DXBuffer >::Register(L);
	Luna< ID3DXConstantTable >::Register(L);
	Luna< ID3DXFont >::Register(L);
	Luna< ID3DXSprite >::Register(L);
	Luna< IDirect3D9 >::Register(L);
	Luna< IDirect3DBaseTexture9 >::Register(L);
	Luna< IDirect3DCubeTexture9 >::Register(L);
	Luna< IDirect3DDevice9 >::Register(L);
	Luna< IDirect3DIndexBuffer9 >::Register(L);
	Luna< IDirect3DPixelShader9 >::Register(L);
	Luna< IDirect3DQuery9 >::Register(L);
	Luna< IDirect3DResource9 >::Register(L);
	Luna< IDirect3DStateBlock9 >::Register(L);
	Luna< IDirect3DSurface9 >::Register(L);
	Luna< IDirect3DSwapChain9 >::Register(L);
	Luna< IDirect3DTexture9 >::Register(L);
	Luna< IDirect3DVertexBuffer9 >::Register(L);
	Luna< IDirect3DVertexDeclaration9 >::Register(L);
	Luna< IDirect3DVertexShader9 >::Register(L);
	Luna< IDirect3DVolume9 >::Register(L);
	Luna< IDirect3DVolumeTexture9 >::Register(L);
	Luna< IUnknown >::Register(L);
	Luna< POINT >::Register(L);
	Luna< RECT >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"dx9");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"dx9");

	luna_pushModule(L,"dx9");
	return 1;
}

#ifdef __cplusplus
}
#endif

