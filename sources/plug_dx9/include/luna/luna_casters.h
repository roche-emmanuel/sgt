#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<D3DADAPTER_IDENTIFIER9,dstType> {
	static inline dstType* cast(D3DADAPTER_IDENTIFIER9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DCAPS9,dstType> {
	static inline dstType* cast(D3DCAPS9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DCLIPSTATUS9,dstType> {
	static inline dstType* cast(D3DCLIPSTATUS9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DCOLORVALUE,dstType> {
	static inline dstType* cast(D3DCOLORVALUE* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DDEVICE_CREATION_PARAMETERS,dstType> {
	static inline dstType* cast(D3DDEVICE_CREATION_PARAMETERS* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DDISPLAYMODE,dstType> {
	static inline dstType* cast(D3DDISPLAYMODE* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DLIGHT9,dstType> {
	static inline dstType* cast(D3DLIGHT9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DLOCKED_RECT,dstType> {
	static inline dstType* cast(D3DLOCKED_RECT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DMATERIAL9,dstType> {
	static inline dstType* cast(D3DMATERIAL9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DMATRIX,dstType> {
	static inline dstType* cast(D3DMATRIX* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DPRESENT_PARAMETERS,dstType> {
	static inline dstType* cast(D3DPRESENT_PARAMETERS* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DPSHADERCAPS2_0,dstType> {
	static inline dstType* cast(D3DPSHADERCAPS2_0* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DRASTER_STATUS,dstType> {
	static inline dstType* cast(D3DRASTER_STATUS* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DRECT,dstType> {
	static inline dstType* cast(D3DRECT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DRECTPATCH_INFO,dstType> {
	static inline dstType* cast(D3DRECTPATCH_INFO* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DSURFACE_DESC,dstType> {
	static inline dstType* cast(D3DSURFACE_DESC* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DTRIPATCH_INFO,dstType> {
	static inline dstType* cast(D3DTRIPATCH_INFO* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DVECTOR,dstType> {
	static inline dstType* cast(D3DVECTOR* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DVERTEXBUFFER_DESC,dstType> {
	static inline dstType* cast(D3DVERTEXBUFFER_DESC* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DVERTEXELEMENT9,dstType> {
	static inline dstType* cast(D3DVERTEXELEMENT9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DVIEWPORT9,dstType> {
	static inline dstType* cast(D3DVIEWPORT9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<D3DVSHADERCAPS2_0,dstType> {
	static inline dstType* cast(D3DVSHADERCAPS2_0* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GUID,dstType> {
	static inline dstType* cast(GUID* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<HMONITOR,dstType> {
	static inline dstType* cast(HMONITOR* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<HWND,dstType> {
	static inline dstType* cast(HWND* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ID3DXBuffer,dstType> {
	static inline dstType* cast(ID3DXBuffer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ID3DXConstantTable,dstType> {
	static inline dstType* cast(ID3DXConstantTable* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ID3DXFont,dstType> {
	static inline dstType* cast(ID3DXFont* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ID3DXSprite,dstType> {
	static inline dstType* cast(ID3DXSprite* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3D9,dstType> {
	static inline dstType* cast(IDirect3D9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DBaseTexture9,dstType> {
	static inline dstType* cast(IDirect3DBaseTexture9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DCubeTexture9,dstType> {
	static inline dstType* cast(IDirect3DCubeTexture9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DDevice9,dstType> {
	static inline dstType* cast(IDirect3DDevice9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DIndexBuffer9,dstType> {
	static inline dstType* cast(IDirect3DIndexBuffer9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DPixelShader9,dstType> {
	static inline dstType* cast(IDirect3DPixelShader9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DQuery9,dstType> {
	static inline dstType* cast(IDirect3DQuery9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DResource9,dstType> {
	static inline dstType* cast(IDirect3DResource9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DStateBlock9,dstType> {
	static inline dstType* cast(IDirect3DStateBlock9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DSurface9,dstType> {
	static inline dstType* cast(IDirect3DSurface9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DSwapChain9,dstType> {
	static inline dstType* cast(IDirect3DSwapChain9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DTexture9,dstType> {
	static inline dstType* cast(IDirect3DTexture9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DVertexBuffer9,dstType> {
	static inline dstType* cast(IDirect3DVertexBuffer9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DVertexDeclaration9,dstType> {
	static inline dstType* cast(IDirect3DVertexDeclaration9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DVertexShader9,dstType> {
	static inline dstType* cast(IDirect3DVertexShader9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DVolume9,dstType> {
	static inline dstType* cast(IDirect3DVolume9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IDirect3DVolumeTexture9,dstType> {
	static inline dstType* cast(IDirect3DVolumeTexture9* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<IUnknown,dstType> {
	static inline dstType* cast(IUnknown* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<POINT,dstType> {
	static inline dstType* cast(POINT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<RECT,dstType> {
	static inline dstType* cast(RECT* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

