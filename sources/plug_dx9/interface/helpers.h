typedef unsigned long ULONG;
typedef long LONG;
typedef int BOOL;
typedef long HRESULT;
typedef unsigned long DWORD;
typedef unsigned int UINT;
typedef int INT;
typedef void* HANDLE;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef DWORD D3DCOLOR;


// Classes:
struct HMONITOR {
};

struct HWND {
};

struct GUID {
    // unsigned long  Data1;
    // unsigned short Data2;
    // unsigned short Data3;
    // unsigned char  Data4[ 8 ];
};

struct D3DADAPTER_IDENTIFIER9
{
    // char            Driver[MAX_DEVICE_IDENTIFIER_STRING];
    // char            Description[MAX_DEVICE_IDENTIFIER_STRING];
    // char            DeviceName[32];         /* Device name for GDI (ex. \\.\DISPLAY1) */

    // LARGE_INTEGER   DriverVersion;          /* Defined for 32 bit components */

    DWORD           VendorId;
    DWORD           DeviceId;
    DWORD           SubSysId;
    DWORD           Revision;

    GUID            DeviceIdentifier;

    DWORD           WHQLLevel;
};

struct D3DVSHADERCAPS2_0
{
	DWORD Caps;
	INT DynamicFlowControlDepth;
	INT NumTemps;
	INT StaticFlowControlDepth;
};

struct D3DPSHADERCAPS2_0
{
    DWORD Caps;
    INT DynamicFlowControlDepth;
    INT NumTemps;
    INT StaticFlowControlDepth;
    INT NumInstructionSlots;
};

struct D3DCAPS9
{
	D3DCAPS9();
		
    /* Device Info */
    D3DDEVTYPE  DeviceType;
    UINT        AdapterOrdinal;

    /* Caps from DX7 Draw */
    DWORD   Caps;
    DWORD   Caps2;
    DWORD   Caps3;
    DWORD   PresentationIntervals;

    /* Cursor Caps */
    DWORD   CursorCaps;

    /* 3D Device Caps */
    DWORD   DevCaps;

    DWORD   PrimitiveMiscCaps;
    DWORD   RasterCaps;
    DWORD   ZCmpCaps;
    DWORD   SrcBlendCaps;
    DWORD   DestBlendCaps;
    DWORD   AlphaCmpCaps;
    DWORD   ShadeCaps;
    DWORD   TextureCaps;
    DWORD   TextureFilterCaps;          // D3DPTFILTERCAPS for IDirect3DTexture9's
    DWORD   CubeTextureFilterCaps;      // D3DPTFILTERCAPS for IDirect3DCubeTexture9's
    DWORD   VolumeTextureFilterCaps;    // D3DPTFILTERCAPS for IDirect3DVolumeTexture9's
    DWORD   TextureAddressCaps;         // D3DPTADDRESSCAPS for IDirect3DTexture9's
    DWORD   VolumeTextureAddressCaps;   // D3DPTADDRESSCAPS for IDirect3DVolumeTexture9's

    DWORD   LineCaps;                   // D3DLINECAPS

    DWORD   MaxTextureWidth, MaxTextureHeight;
    DWORD   MaxVolumeExtent;

    DWORD   MaxTextureRepeat;
    DWORD   MaxTextureAspectRatio;
    DWORD   MaxAnisotropy;
    float   MaxVertexW;

    float   GuardBandLeft;
    float   GuardBandTop;
    float   GuardBandRight;
    float   GuardBandBottom;

    float   ExtentsAdjust;
    DWORD   StencilCaps;

    DWORD   FVFCaps;
    DWORD   TextureOpCaps;
    DWORD   MaxTextureBlendStages;
    DWORD   MaxSimultaneousTextures;

    DWORD   VertexProcessingCaps;
    DWORD   MaxActiveLights;
    DWORD   MaxUserClipPlanes;
    DWORD   MaxVertexBlendMatrices;
    DWORD   MaxVertexBlendMatrixIndex;

    float   MaxPointSize;

    DWORD   MaxPrimitiveCount;          // max number of primitives per DrawPrimitive call
    DWORD   MaxVertexIndex;
    DWORD   MaxStreams;
    DWORD   MaxStreamStride;            // max stride for SetStreamSource

    DWORD   VertexShaderVersion;
    DWORD   MaxVertexShaderConst;       // number of vertex shader constant registers

    DWORD   PixelShaderVersion;
    float   PixelShader1xMaxValue;      // max value storable in registers of ps.1.x shaders

    // Here are the DX9 specific ones
    DWORD   DevCaps2;

    float   MaxNpatchTessellationLevel;
    DWORD   Reserved5;

    UINT    MasterAdapterOrdinal;       // ordinal of master adaptor for adapter group
    UINT    AdapterOrdinalInGroup;      // ordinal inside the adapter group
    UINT    NumberOfAdaptersInGroup;    // number of adapters in this adapter group (only if master)
    DWORD   DeclTypes;                  // Data types, supported in vertex declarations
    DWORD   NumSimultaneousRTs;         // Will be at least 1
    DWORD   StretchRectFilterCaps;      // Filter caps supported by StretchRect
    D3DVSHADERCAPS2_0 VS20Caps;
    D3DPSHADERCAPS2_0 PS20Caps;
    DWORD   VertexTextureFilterCaps;    // D3DPTFILTERCAPS for IDirect3DTexture9's for texture, used in vertex shaders
    DWORD   MaxVShaderInstructionsExecuted; // maximum number of vertex shader instructions that can be executed
    DWORD   MaxPShaderInstructionsExecuted; // maximum number of pixel shader instructions that can be executed
    DWORD   MaxVertexShader30InstructionSlots; 
    DWORD   MaxPixelShader30InstructionSlots;
};

struct D3DDISPLAYMODE
{
    UINT            Width;
    UINT            Height;
    UINT            RefreshRate;
    D3DFORMAT       Format;
};

struct D3DDEVICE_CREATION_PARAMETERS
{
    UINT            AdapterOrdinal;
    D3DDEVTYPE      DeviceType;
    HWND            hFocusWindow;
    DWORD           BehaviorFlags;
};

struct D3DPRESENT_PARAMETERS
{
    UINT                BackBufferWidth;
    UINT                BackBufferHeight;
    D3DFORMAT           BackBufferFormat;
    UINT                BackBufferCount;

    D3DMULTISAMPLE_TYPE MultiSampleType;
    DWORD               MultiSampleQuality;

    D3DSWAPEFFECT       SwapEffect;
    HWND                hDeviceWindow;
    BOOL                Windowed;
    BOOL                EnableAutoDepthStencil;
    D3DFORMAT           AutoDepthStencilFormat;
    DWORD               Flags;

    /* FullScreen_RefreshRateInHz must be zero for Windowed mode */
    UINT                FullScreen_RefreshRateInHz;
    UINT                PresentationInterval;
};

struct RECT
{
	RECT();
	
    LONG    left;
    LONG    top;
    LONG    right;
    LONG    bottom;
};

struct POINT
{
    LONG  x;
    LONG  y;
};

struct D3DRASTER_STATUS
{
    BOOL            InVBlank;
    UINT            ScanLine;
};

struct D3DMATRIX {
};

struct D3DVIEWPORT9 {
    DWORD       X;
    DWORD       Y;            /* Viewport Top left */
    DWORD       Width;
    DWORD       Height;       /* Viewport Dimensions */
    float       MinZ;         /* Min/max of clip Volume */
    float       MaxZ;
};

struct D3DCOLORVALUE {
    float r;
    float g;
    float b;
    float a;
};

struct D3DMATERIAL9 {
    D3DCOLORVALUE   Diffuse;        /* Diffuse color RGBA */
    D3DCOLORVALUE   Ambient;        /* Ambient color RGB */
    D3DCOLORVALUE   Specular;       /* Specular 'shininess' */
    D3DCOLORVALUE   Emissive;       /* Emissive color RGB */
    float           Power;          /* Sharpness if specular highlight */
};

struct D3DVECTOR {
    float x;
    float y;
    float z;
};

struct D3DLIGHT9 {
    D3DLIGHTTYPE    Type;            /* Type of light source */
    D3DCOLORVALUE   Diffuse;         /* Diffuse color of light */
    D3DCOLORVALUE   Specular;        /* Specular color of light */
    D3DCOLORVALUE   Ambient;         /* Ambient color of light */
    D3DVECTOR       Position;         /* Position in world space */
    D3DVECTOR       Direction;        /* Direction in world space */
    float           Range;            /* Cutoff range */
    float           Falloff;          /* Falloff */
    float           Attenuation0;     /* Constant attenuation */
    float           Attenuation1;     /* Linear attenuation */
    float           Attenuation2;     /* Quadratic attenuation */
    float           Theta;            /* Inner angle of spotlight cone */
    float           Phi;              /* Outer angle of spotlight cone */
};

struct D3DCLIPSTATUS9 {
    DWORD ClipUnion;
    DWORD ClipIntersection;
};

struct D3DVERTEXELEMENT9
{
    WORD    Stream;     // Stream index
    WORD    Offset;     // Offset in the stream in bytes
    BYTE    Type;       // Data type
    BYTE    Method;     // Processing method
    BYTE    Usage;      // Semantics
    BYTE    UsageIndex; // Semantic index
};

struct D3DRECTPATCH_INFO
{
    UINT                StartVertexOffsetWidth;
    UINT                StartVertexOffsetHeight;
    UINT                Width;
    UINT                Height;
    UINT                Stride;
    D3DBASISTYPE        Basis;
    D3DDEGREETYPE       Degree;
};

struct D3DTRIPATCH_INFO
{
    UINT                StartVertexOffset;
    UINT                NumVertices;
    D3DBASISTYPE        Basis;
    D3DDEGREETYPE       Degree;
};

struct D3DSURFACE_DESC
{
	D3DSURFACE_DESC();

    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;

    D3DMULTISAMPLE_TYPE MultiSampleType;
    DWORD               MultiSampleQuality;
    UINT                Width;
    UINT                Height;
};

struct D3DLOCKED_RECT
{
    INT                 Pitch;
    void*               pBits;
};

struct D3DVERTEXBUFFER_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;

    DWORD               FVF;
};

class IUnknown {
public:
	// HRESULT QueryInterface(REFIID riid, void** ppvObj);
	ULONG AddRef(void);
	ULONG Release(void);
	
protected:
	~IUnknown();
};

class IDirect3D9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	
    HRESULT RegisterSoftwareDevice(void* pInitializeFunction);
    UINT GetAdapterCount();
    HRESULT GetAdapterIdentifier(UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER9* pIdentifier);
    UINT GetAdapterModeCount(UINT Adapter, D3DFORMAT Format);
    HRESULT EnumAdapterModes(UINT Adapter, D3DFORMAT Format, UINT Mode, D3DDISPLAYMODE* pMode);
    HRESULT GetAdapterDisplayMode(UINT Adapter, D3DDISPLAYMODE* pMode);
    HRESULT CheckDeviceType(UINT Adapter, D3DDEVTYPE DevType, D3DFORMAT AdapterFormat, D3DFORMAT BackBufferFormat, BOOL bWindowed);
    HRESULT CheckDeviceFormat(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat);
    HRESULT CheckDeviceMultiSampleType(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, BOOL Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, DWORD* pQualityLevels);
    HRESULT CheckDepthStencilMatch(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat);
    HRESULT CheckDeviceFormatConversion(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat);
    HRESULT GetDeviceCaps(UINT Adapter, D3DDEVTYPE DeviceType, D3DCAPS9* pCaps);
    HMONITOR GetAdapterMonitor(UINT Adapter);
    // HRESULT CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters,IDirect3DDevice9** ppReturnedDeviceInterface);
	
protected:
	~IDirect3D9();
};

class IDirect3DDevice9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	
    HRESULT TestCooperativeLevel();
    UINT GetAvailableTextureMem();
    HRESULT EvictManagedResources();
    HRESULT GetDirect3D(IDirect3D9** ppD3D9);
    HRESULT GetDeviceCaps(D3DCAPS9* pCaps);
    HRESULT GetDisplayMode(UINT iSwapChain,D3DDISPLAYMODE* pMode);
    HRESULT GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS *pParameters);
    HRESULT SetCursorProperties(UINT XHotSpot,UINT YHotSpot,IDirect3DSurface9* pCursorBitmap);
    void SetCursorPosition(int X,int Y,DWORD Flags);
    BOOL ShowCursor(BOOL bShow);
    HRESULT CreateAdditionalSwapChain(D3DPRESENT_PARAMETERS* pPresentationParameters,IDirect3DSwapChain9** pSwapChain);
    HRESULT GetSwapChain(UINT iSwapChain,IDirect3DSwapChain9** pSwapChain);
    UINT GetNumberOfSwapChains();
    HRESULT Reset(D3DPRESENT_PARAMETERS* pPresentationParameters);
    // HRESULT Present(const RECT* pSourceRect,const RECT* pDestRect,HWND hDestWindowOverride,const RGNDATA* pDirtyRegion);
    HRESULT GetBackBuffer(UINT iSwapChain,UINT iBackBuffer,D3DBACKBUFFER_TYPE Type,IDirect3DSurface9** ppBackBuffer);
    HRESULT GetRasterStatus(UINT iSwapChain,D3DRASTER_STATUS* pRasterStatus);
    HRESULT SetDialogBoxMode(BOOL bEnableDialogs);
    // void SetGammaRamp(UINT iSwapChain,DWORD Flags,const D3DGAMMARAMP* pRamp);
    // void GetGammaRamp(UINT iSwapChain,D3DGAMMARAMP* pRamp);
    HRESULT CreateTexture(UINT Width,UINT Height,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DTexture9** ppTexture,HANDLE* pSharedHandle);
    HRESULT CreateVolumeTexture(UINT Width,UINT Height,UINT Depth,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DVolumeTexture9** ppVolumeTexture,HANDLE* pSharedHandle);
    HRESULT CreateCubeTexture(UINT EdgeLength,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DCubeTexture9** ppCubeTexture,HANDLE* pSharedHandle);
    HRESULT CreateVertexBuffer(UINT Length,DWORD Usage,DWORD FVF,D3DPOOL Pool,IDirect3DVertexBuffer9** ppVertexBuffer,HANDLE* pSharedHandle);
    HRESULT CreateIndexBuffer(UINT Length,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DIndexBuffer9** ppIndexBuffer,HANDLE* pSharedHandle);
    HRESULT CreateRenderTarget(UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,DWORD MultisampleQuality,BOOL Lockable,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle);
    HRESULT CreateDepthStencilSurface(UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,DWORD MultisampleQuality,BOOL Discard,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle);
    HRESULT UpdateSurface(IDirect3DSurface9* pSourceSurface,const RECT* pSourceRect,IDirect3DSurface9* pDestinationSurface,const POINT* pDestPoint);
    HRESULT UpdateTexture(IDirect3DBaseTexture9* pSourceTexture,IDirect3DBaseTexture9* pDestinationTexture);
    HRESULT GetRenderTargetData(IDirect3DSurface9* pRenderTarget,IDirect3DSurface9* pDestSurface);
    HRESULT GetFrontBufferData(UINT iSwapChain,IDirect3DSurface9* pDestSurface);
    HRESULT StretchRect(IDirect3DSurface9* pSourceSurface,const RECT* pSourceRect,IDirect3DSurface9* pDestSurface,const RECT* pDestRect,D3DTEXTUREFILTERTYPE Filter);
    HRESULT ColorFill(IDirect3DSurface9* pSurface,const RECT* pRect,D3DCOLOR color);
    HRESULT CreateOffscreenPlainSurface(UINT Width,UINT Height,D3DFORMAT Format,D3DPOOL Pool,IDirect3DSurface9** ppSurface,HANDLE* pSharedHandle);
    HRESULT SetRenderTarget(DWORD RenderTargetIndex,IDirect3DSurface9* pRenderTarget);
    HRESULT GetRenderTarget(DWORD RenderTargetIndex,IDirect3DSurface9** ppRenderTarget);
    HRESULT SetDepthStencilSurface(IDirect3DSurface9* pNewZStencil);
    HRESULT GetDepthStencilSurface(IDirect3DSurface9** ppZStencilSurface);
    HRESULT BeginScene();
    HRESULT EndScene();
    HRESULT Clear(DWORD Count,const D3DRECT* pRects,DWORD Flags,D3DCOLOR Color,float Z,DWORD Stencil);
    HRESULT SetTransform(D3DTRANSFORMSTATETYPE State,const D3DMATRIX* pMatrix);
    HRESULT GetTransform(D3DTRANSFORMSTATETYPE State,D3DMATRIX* pMatrix);
    HRESULT MultiplyTransform(D3DTRANSFORMSTATETYPE,const D3DMATRIX*);
    HRESULT SetViewport(const D3DVIEWPORT9* pViewport);
    HRESULT GetViewport(D3DVIEWPORT9* pViewport);
    HRESULT SetMaterial(const D3DMATERIAL9* pMaterial);
    HRESULT GetMaterial(D3DMATERIAL9* pMaterial);
    HRESULT SetLight(DWORD Index,const D3DLIGHT9*);
    HRESULT GetLight(DWORD Index,D3DLIGHT9*);
    HRESULT LightEnable(DWORD Index,BOOL Enable);
    HRESULT GetLightEnable(DWORD Index,BOOL* pEnable);
    HRESULT SetClipPlane(DWORD Index,const float* pPlane);
    HRESULT GetClipPlane(DWORD Index,float* pPlane);
    HRESULT SetRenderState(D3DRENDERSTATETYPE State,DWORD Value);
    HRESULT GetRenderState(D3DRENDERSTATETYPE State,DWORD* pValue);
    HRESULT CreateStateBlock(D3DSTATEBLOCKTYPE Type,IDirect3DStateBlock9** ppSB);
    HRESULT BeginStateBlock();
    HRESULT EndStateBlock(IDirect3DStateBlock9** ppSB);
    HRESULT SetClipStatus(const D3DCLIPSTATUS9* pClipStatus);
    HRESULT GetClipStatus(D3DCLIPSTATUS9* pClipStatus);
    HRESULT GetTexture(DWORD Stage,IDirect3DBaseTexture9** ppTexture);
    HRESULT SetTexture(DWORD Stage,IDirect3DBaseTexture9* pTexture);
    HRESULT GetTextureStageState(DWORD Stage,D3DTEXTURESTAGESTATETYPE Type,DWORD* pValue);
    HRESULT SetTextureStageState(DWORD Stage,D3DTEXTURESTAGESTATETYPE Type,DWORD Value);
    HRESULT GetSamplerState(DWORD Sampler,D3DSAMPLERSTATETYPE Type,DWORD* pValue);
    HRESULT SetSamplerState(DWORD Sampler,D3DSAMPLERSTATETYPE Type,DWORD Value);
    HRESULT ValidateDevice(DWORD* pNumPasses);
    // HRESULT SetPaletteEntries(UINT PaletteNumber,const PALETTEENTRY* pEntries);
    // HRESULT GetPaletteEntries(UINT PaletteNumber,PALETTEENTRY* pEntries);
    HRESULT SetCurrentTexturePalette(UINT PaletteNumber);
    HRESULT GetCurrentTexturePalette(UINT *PaletteNumber);
    HRESULT SetScissorRect(const RECT* pRect);
    HRESULT GetScissorRect(RECT* pRect);
    HRESULT SetSoftwareVertexProcessing(BOOL bSoftware);
    BOOL GetSoftwareVertexProcessing();
    HRESULT SetNPatchMode(float nSegments);
    float GetNPatchMode();
    HRESULT DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType,UINT StartVertex,UINT PrimitiveCount);
    HRESULT DrawIndexedPrimitive(D3DPRIMITIVETYPE,INT BaseVertexIndex,UINT MinVertexIndex,UINT NumVertices,UINT startIndex,UINT primCount);
    HRESULT DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType,UINT PrimitiveCount,const void* pVertexStreamZeroData,UINT VertexStreamZeroStride);
    HRESULT DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType,UINT MinVertexIndex,UINT NumVertices,UINT PrimitiveCount,const void* pIndexData,D3DFORMAT IndexDataFormat,const void* pVertexStreamZeroData,UINT VertexStreamZeroStride);
    HRESULT ProcessVertices(UINT SrcStartIndex,UINT DestIndex,UINT VertexCount,IDirect3DVertexBuffer9* pDestBuffer,IDirect3DVertexDeclaration9* pVertexDecl,DWORD Flags);
    HRESULT CreateVertexDeclaration(const D3DVERTEXELEMENT9* pVertexElements,IDirect3DVertexDeclaration9** ppDecl);
    HRESULT SetVertexDeclaration(IDirect3DVertexDeclaration9* pDecl);
    HRESULT GetVertexDeclaration(IDirect3DVertexDeclaration9** ppDecl);
    HRESULT SetFVF(DWORD FVF);
    HRESULT GetFVF(DWORD* pFVF);
    HRESULT CreateVertexShader(const DWORD* pFunction,IDirect3DVertexShader9** ppShader);
    HRESULT SetVertexShader(IDirect3DVertexShader9* pShader);
    HRESULT GetVertexShader(IDirect3DVertexShader9** ppShader);
    HRESULT SetVertexShaderConstantF(UINT StartRegister,const float* pConstantData,UINT Vector4fCount);
    HRESULT GetVertexShaderConstantF(UINT StartRegister,float* pConstantData,UINT Vector4fCount);
    HRESULT SetVertexShaderConstantI(UINT StartRegister,const int* pConstantData,UINT Vector4iCount);
    HRESULT GetVertexShaderConstantI(UINT StartRegister,int* pConstantData,UINT Vector4iCount);
    HRESULT SetVertexShaderConstantB(UINT StartRegister,const BOOL* pConstantData,UINT  BoolCount);
    HRESULT GetVertexShaderConstantB(UINT StartRegister,BOOL* pConstantData,UINT BoolCount);
    HRESULT SetStreamSource(UINT StreamNumber,IDirect3DVertexBuffer9* pStreamData,UINT OffsetInBytes,UINT Stride);
    HRESULT GetStreamSource(UINT StreamNumber,IDirect3DVertexBuffer9** ppStreamData,UINT* pOffsetInBytes,UINT* pStride);
    HRESULT SetStreamSourceFreq(UINT StreamNumber,UINT Setting);
    HRESULT GetStreamSourceFreq(UINT StreamNumber,UINT* pSetting);
    HRESULT SetIndices(IDirect3DIndexBuffer9* pIndexData);
    HRESULT GetIndices(IDirect3DIndexBuffer9** ppIndexData);
    HRESULT CreatePixelShader(const DWORD* pFunction,IDirect3DPixelShader9** ppShader);
    HRESULT SetPixelShader(IDirect3DPixelShader9* pShader);
    HRESULT GetPixelShader(IDirect3DPixelShader9** ppShader);
    HRESULT SetPixelShaderConstantF(UINT StartRegister,const float* pConstantData,UINT Vector4fCount);
    HRESULT GetPixelShaderConstantF(UINT StartRegister,float* pConstantData,UINT Vector4fCount);
    HRESULT SetPixelShaderConstantI(UINT StartRegister,const int* pConstantData,UINT Vector4iCount);
    HRESULT GetPixelShaderConstantI(UINT StartRegister,int* pConstantData,UINT Vector4iCount);
    HRESULT SetPixelShaderConstantB(UINT StartRegister,const BOOL* pConstantData,UINT  BoolCount);
    HRESULT GetPixelShaderConstantB(UINT StartRegister,BOOL* pConstantData,UINT BoolCount);
    HRESULT DrawRectPatch(UINT Handle,const float* pNumSegs,const D3DRECTPATCH_INFO* pRectPatchInfo);
    HRESULT DrawTriPatch(UINT Handle,const float* pNumSegs,const D3DTRIPATCH_INFO* pTriPatchInfo);
    HRESULT DeletePatch(UINT Handle);
    HRESULT CreateQuery(D3DQUERYTYPE Type,IDirect3DQuery9** ppQuery);
	
protected:
	~IDirect3DDevice9();
};


class IDirect3DStateBlock9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    HRESULT Capture();
    HRESULT Apply();
	
protected:
	~IDirect3DStateBlock9();
};

class IDirect3DVertexDeclaration9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    HRESULT GetDeclaration(D3DVERTEXELEMENT9* pElement,UINT* pNumElements);
	
protected:
	~IDirect3DVertexDeclaration9();
};

class IDirect3DVertexShader9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	HRESULT GetDevice(IDirect3DDevice9** ppDevice);
	HRESULT GetFunction(void*, UINT* pSizeOfData);
protected:
	~IDirect3DVertexShader9();
};

class IDirect3DPixelShader9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	HRESULT GetDevice(IDirect3DDevice9** ppDevice);
	HRESULT GetFunction(void*, UINT* pSizeOfData);
protected:
	~IDirect3DPixelShader9();
};

class IDirect3DResource9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    DWORD SetPriority(DWORD PriorityNew);
    DWORD GetPriority();
    void PreLoad();
    D3DRESOURCETYPE GetType();	
	
protected:
	~IDirect3DResource9();
};

class IDirect3DBaseTexture9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	// from IDirect3DResource9
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    DWORD SetPriority(DWORD PriorityNew);
    DWORD GetPriority();
    void PreLoad();
    D3DRESOURCETYPE GetType();	
	
	
    // HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    // DWORD SetPriority(DWORD PriorityNew);
    // DWORD GetPriority();
    // void PreLoad();
    // D3DRESOURCETYPE GetType();
    DWORD SetLOD(DWORD LODNew);
    DWORD GetLOD();
    DWORD GetLevelCount();
    HRESULT SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType);
    D3DTEXTUREFILTERTYPE GetAutoGenFilterType();
    void GenerateMipSubLevels();
protected:
	~IDirect3DBaseTexture9();
};

class IDirect3DTexture9  {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	// from IDirect3DResource9
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    DWORD SetPriority(DWORD PriorityNew);
    DWORD GetPriority();
    void PreLoad();
    D3DRESOURCETYPE GetType();	
	
	// from IDirect3DBaseTexture9
    // HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    // DWORD SetPriority(DWORD PriorityNew);
    // DWORD GetPriority();
    // void PreLoad();
    // D3DRESOURCETYPE GetType();
    DWORD SetLOD(DWORD LODNew);
    DWORD GetLOD();
    DWORD GetLevelCount();
    HRESULT SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType);
    D3DTEXTUREFILTERTYPE GetAutoGenFilterType();
    void GenerateMipSubLevels();	
	
	HRESULT GetLevelDesc(UINT Level,D3DSURFACE_DESC *pDesc);
    HRESULT GetSurfaceLevel(UINT Level,IDirect3DSurface9** ppSurfaceLevel);
    HRESULT LockRect(UINT Level,D3DLOCKED_RECT* pLockedRect,const RECT* pRect,DWORD Flags);
    HRESULT UnlockRect(UINT Level);
    HRESULT AddDirtyRect(const RECT* pDirtyRect);

protected:
	~IDirect3DTexture9();
};

class IDirect3DVolumeTexture9 {
public:	
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
protected:
	~IDirect3DVolumeTexture9();
};

class IDirect3DCubeTexture9 {
public:	
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
protected:
	~IDirect3DCubeTexture9();
};

class IDirect3DVertexBuffer9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	// from IDirect3DResource9
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    DWORD SetPriority(DWORD PriorityNew);
    DWORD GetPriority();
    void PreLoad();
    D3DRESOURCETYPE GetType();	
	
	HRESULT Lock(UINT OffsetToLock,UINT SizeToLock,void** ppbData,DWORD Flags);
    HRESULT Unlock();
    HRESULT GetDesc(D3DVERTEXBUFFER_DESC *pDesc);
	
protected:
	~IDirect3DVertexBuffer9();
};

class IDirect3DIndexBuffer9 {
protected:
	~IDirect3DIndexBuffer9();
};

class IDirect3DSurface9 {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
	// from IDirect3DResource9
    HRESULT GetDevice(IDirect3DDevice9** ppDevice);
    // HRESULT SetPrivateData(REFGUID refguid,const void* pData,DWORD SizeOfData,DWORD Flags);
    // HRESULT GetPrivateData(REFGUID refguid,void* pData,DWORD* pSizeOfData);
    // HRESULT FreePrivateData(REFGUID refguid);
    DWORD SetPriority(DWORD PriorityNew);
    DWORD GetPriority();
    void PreLoad();
    D3DRESOURCETYPE GetType();	
	
	// HRESULT GetContainer(REFIID riid,void** ppContainer);
    HRESULT GetDesc(D3DSURFACE_DESC *pDesc);
    HRESULT LockRect(D3DLOCKED_RECT* pLockedRect,const RECT* pRect,DWORD Flags);
    HRESULT UnlockRect();
    // HRESULT GetDC(HDC *phdc);
    // HRESULT ReleaseDC(HDC hdc);
	
protected:
	~IDirect3DSurface9();
};

class IDirect3DVolume9 {
protected:
	~IDirect3DVolume9();
};

class IDirect3DSwapChain9 {
protected:
	~IDirect3DSwapChain9();
};

class IDirect3DQuery9 {
protected:
	~IDirect3DQuery9();
};

class ID3DXConstantTable {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
protected:
	~ID3DXConstantTable();
};

class ID3DXBuffer {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
protected:
	~ID3DXBuffer();
};

class ID3DXFont {
public:
	// from IUnknown:
	ULONG AddRef(void);
	ULONG Release(void);
	
protected:
	~ID3DXFont();
};

class ID3DXSprite {
public:
    // from IUnknown:
    ULONG AddRef(void);
    ULONG Release(void);
    
protected:
    ~ID3DXSprite();
};

struct D3DRECT {
	D3DRECT();
    long x1;
    long y1;
    long x2;
    long y2;
};


// Enums:

enum D3DPRIMITIVETYPE {
    D3DPT_POINTLIST             = 1,
    D3DPT_LINELIST              = 2,
    D3DPT_LINESTRIP             = 3,
    D3DPT_TRIANGLELIST          = 4,
    D3DPT_TRIANGLESTRIP         = 5,
    D3DPT_TRIANGLEFAN           = 6,
    D3DPT_FORCE_DWORD           = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DRENDERSTATETYPE {
    D3DRS_ZENABLE                   = 7,    /* D3DZBUFFERTYPE (or TRUE/FALSE for legacy) */
    D3DRS_FILLMODE                  = 8,    /* D3DFILLMODE */
    D3DRS_SHADEMODE                 = 9,    /* D3DSHADEMODE */
    D3DRS_ZWRITEENABLE              = 14,   /* TRUE to enable z writes */
    D3DRS_ALPHATESTENABLE           = 15,   /* TRUE to enable alpha tests */
    D3DRS_LASTPIXEL                 = 16,   /* TRUE for last-pixel on lines */
    D3DRS_SRCBLEND                  = 19,   /* D3DBLEND */
    D3DRS_DESTBLEND                 = 20,   /* D3DBLEND */
    D3DRS_CULLMODE                  = 22,   /* D3DCULL */
    D3DRS_ZFUNC                     = 23,   /* D3DCMPFUNC */
    D3DRS_ALPHAREF                  = 24,   /* D3DFIXED */
    D3DRS_ALPHAFUNC                 = 25,   /* D3DCMPFUNC */
    D3DRS_DITHERENABLE              = 26,   /* TRUE to enable dithering */
    D3DRS_ALPHABLENDENABLE          = 27,   /* TRUE to enable alpha blending */
    D3DRS_FOGENABLE                 = 28,   /* TRUE to enable fog blending */
    D3DRS_SPECULARENABLE            = 29,   /* TRUE to enable specular */
    D3DRS_FOGCOLOR                  = 34,   /* D3DCOLOR */
    D3DRS_FOGTABLEMODE              = 35,   /* D3DFOGMODE */
    D3DRS_FOGSTART                  = 36,   /* Fog start (for both vertex and pixel fog) */
    D3DRS_FOGEND                    = 37,   /* Fog end      */
    D3DRS_FOGDENSITY                = 38,   /* Fog density  */
    D3DRS_RANGEFOGENABLE            = 48,   /* Enables range-based fog */
    D3DRS_STENCILENABLE             = 52,   /* BOOL enable/disable stenciling */
    D3DRS_STENCILFAIL               = 53,   /* D3DSTENCILOP to do if stencil test fails */
    D3DRS_STENCILZFAIL              = 54,   /* D3DSTENCILOP to do if stencil test passes and Z test fails */
    D3DRS_STENCILPASS               = 55,   /* D3DSTENCILOP to do if both stencil and Z tests pass */
    D3DRS_STENCILFUNC               = 56,   /* D3DCMPFUNC fn.  Stencil Test passes if ((ref & mask) stencilfn (stencil & mask)) is true */
    D3DRS_STENCILREF                = 57,   /* Reference value used in stencil test */
    D3DRS_STENCILMASK               = 58,   /* Mask value used in stencil test */
    D3DRS_STENCILWRITEMASK          = 59,   /* Write mask applied to values written to stencil buffer */
    D3DRS_TEXTUREFACTOR             = 60,   /* D3DCOLOR used for multi-texture blend */
    D3DRS_WRAP0                     = 128,  /* wrap for 1st texture coord. set */
    D3DRS_WRAP1                     = 129,  /* wrap for 2nd texture coord. set */
    D3DRS_WRAP2                     = 130,  /* wrap for 3rd texture coord. set */
    D3DRS_WRAP3                     = 131,  /* wrap for 4th texture coord. set */
    D3DRS_WRAP4                     = 132,  /* wrap for 5th texture coord. set */
    D3DRS_WRAP5                     = 133,  /* wrap for 6th texture coord. set */
    D3DRS_WRAP6                     = 134,  /* wrap for 7th texture coord. set */
    D3DRS_WRAP7                     = 135,  /* wrap for 8th texture coord. set */
    D3DRS_CLIPPING                  = 136,
    D3DRS_LIGHTING                  = 137,
    D3DRS_AMBIENT                   = 139,
    D3DRS_FOGVERTEXMODE             = 140,
    D3DRS_COLORVERTEX               = 141,
    D3DRS_LOCALVIEWER               = 142,
    D3DRS_NORMALIZENORMALS          = 143,
    D3DRS_DIFFUSEMATERIALSOURCE     = 145,
    D3DRS_SPECULARMATERIALSOURCE    = 146,
    D3DRS_AMBIENTMATERIALSOURCE     = 147,
    D3DRS_EMISSIVEMATERIALSOURCE    = 148,
    D3DRS_VERTEXBLEND               = 151,
    D3DRS_CLIPPLANEENABLE           = 152,
    D3DRS_POINTSIZE                 = 154,   /* float point size */
    D3DRS_POINTSIZE_MIN             = 155,   /* float point size min threshold */
    D3DRS_POINTSPRITEENABLE         = 156,   /* BOOL point texture coord control */
    D3DRS_POINTSCALEENABLE          = 157,   /* BOOL point size scale enable */
    D3DRS_POINTSCALE_A              = 158,   /* float point attenuation A value */
    D3DRS_POINTSCALE_B              = 159,   /* float point attenuation B value */
    D3DRS_POINTSCALE_C              = 160,   /* float point attenuation C value */
    D3DRS_MULTISAMPLEANTIALIAS      = 161,  // BOOL - set to do FSAA with multisample buffer
    D3DRS_MULTISAMPLEMASK           = 162,  // DWORD - per-sample enable/disable
    D3DRS_PATCHEDGESTYLE            = 163,  // Sets whether patch edges will use float style tessellation
    D3DRS_DEBUGMONITORTOKEN         = 165,  // DEBUG ONLY - token to debug monitor
    D3DRS_POINTSIZE_MAX             = 166,   /* float point size max threshold */
    D3DRS_INDEXEDVERTEXBLENDENABLE  = 167,
    D3DRS_COLORWRITEENABLE          = 168,  // per-channel write enable
    D3DRS_TWEENFACTOR               = 170,   // float tween factor
    D3DRS_BLENDOP                   = 171,   // D3DBLENDOP setting
    D3DRS_POSITIONDEGREE            = 172,   // NPatch position interpolation degree. D3DDEGREE_LINEAR or D3DDEGREE_CUBIC (default)
    D3DRS_NORMALDEGREE              = 173,   // NPatch normal interpolation degree. D3DDEGREE_LINEAR (default) or D3DDEGREE_QUADRATIC
    D3DRS_SCISSORTESTENABLE         = 174,
    D3DRS_SLOPESCALEDEPTHBIAS       = 175,
    D3DRS_ANTIALIASEDLINEENABLE     = 176,
    D3DRS_MINTESSELLATIONLEVEL      = 178,
    D3DRS_MAXTESSELLATIONLEVEL      = 179,
    D3DRS_ADAPTIVETESS_X            = 180,
    D3DRS_ADAPTIVETESS_Y            = 181,
    D3DRS_ADAPTIVETESS_Z            = 182,
    D3DRS_ADAPTIVETESS_W            = 183,
    D3DRS_ENABLEADAPTIVETESSELLATION = 184,
    D3DRS_TWOSIDEDSTENCILMODE       = 185,   /* BOOL enable/disable 2 sided stenciling */
    D3DRS_CCW_STENCILFAIL           = 186,   /* D3DSTENCILOP to do if ccw stencil test fails */
    D3DRS_CCW_STENCILZFAIL          = 187,   /* D3DSTENCILOP to do if ccw stencil test passes and Z test fails */
    D3DRS_CCW_STENCILPASS           = 188,   /* D3DSTENCILOP to do if both ccw stencil and Z tests pass */
    D3DRS_CCW_STENCILFUNC           = 189,   /* D3DCMPFUNC fn.  ccw Stencil Test passes if ((ref & mask) stencilfn (stencil & mask)) is true */
    D3DRS_COLORWRITEENABLE1         = 190,   /* Additional ColorWriteEnables for the devices that support D3DPMISCCAPS_INDEPENDENTWRITEMASKS */
    D3DRS_COLORWRITEENABLE2         = 191,   /* Additional ColorWriteEnables for the devices that support D3DPMISCCAPS_INDEPENDENTWRITEMASKS */
    D3DRS_COLORWRITEENABLE3         = 192,   /* Additional ColorWriteEnables for the devices that support D3DPMISCCAPS_INDEPENDENTWRITEMASKS */
    D3DRS_BLENDFACTOR               = 193,   /* D3DCOLOR used for a constant blend factor during alpha blending for devices that support D3DPBLENDCAPS_BLENDFACTOR */
    D3DRS_SRGBWRITEENABLE           = 194,   /* Enable rendertarget writes to be DE-linearized to SRGB (for formats that expose D3DUSAGE_QUERY_SRGBWRITE) */
    D3DRS_DEPTHBIAS                 = 195,
    D3DRS_WRAP8                     = 198,   /* Additional wrap states for vs_3_0+ attributes with D3DDECLUSAGE_TEXCOORD */
    D3DRS_WRAP9                     = 199,
    D3DRS_WRAP10                    = 200,
    D3DRS_WRAP11                    = 201,
    D3DRS_WRAP12                    = 202,
    D3DRS_WRAP13                    = 203,
    D3DRS_WRAP14                    = 204,
    D3DRS_WRAP15                    = 205,
    D3DRS_SEPARATEALPHABLENDENABLE  = 206,  /* TRUE to enable a separate blending function for the alpha channel */
    D3DRS_SRCBLENDALPHA             = 207,  /* SRC blend factor for the alpha channel when D3DRS_SEPARATEDESTALPHAENABLE is TRUE */
    D3DRS_DESTBLENDALPHA            = 208,  /* DST blend factor for the alpha channel when D3DRS_SEPARATEDESTALPHAENABLE is TRUE */
    D3DRS_BLENDOPALPHA              = 209,  /* Blending operation for the alpha channel when D3DRS_SEPARATEDESTALPHAENABLE is TRUE */


    D3DRS_FORCE_DWORD               = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DSAMPLERSTATETYPE
{
    D3DSAMP_ADDRESSU       = 1,  /* D3DTEXTUREADDRESS for U coordinate */
    D3DSAMP_ADDRESSV       = 2,  /* D3DTEXTUREADDRESS for V coordinate */
    D3DSAMP_ADDRESSW       = 3,  /* D3DTEXTUREADDRESS for W coordinate */
    D3DSAMP_BORDERCOLOR    = 4,  /* D3DCOLOR */
    D3DSAMP_MAGFILTER      = 5,  /* D3DTEXTUREFILTER filter to use for magnification */
    D3DSAMP_MINFILTER      = 6,  /* D3DTEXTUREFILTER filter to use for minification */
    D3DSAMP_MIPFILTER      = 7,  /* D3DTEXTUREFILTER filter to use between mipmaps during minification */
    D3DSAMP_MIPMAPLODBIAS  = 8,  /* float Mipmap LOD bias */
    D3DSAMP_MAXMIPLEVEL    = 9,  /* DWORD 0..(n-1) LOD index of largest map to use (0 == largest) */
    D3DSAMP_MAXANISOTROPY  = 10, /* DWORD maximum anisotropy */
    D3DSAMP_SRGBTEXTURE    = 11, /* Default = 0 (which means Gamma 1.0,
                                   no correction required.) else correct for
                                   Gamma = 2.2 */
    D3DSAMP_ELEMENTINDEX   = 12, /* When multi-element texture is assigned to sampler, this
                                    indicates which element index to use.  Default = 0.  */
    D3DSAMP_DMAPOFFSET     = 13, /* Offset in vertices in the pre-sampled displacement map.
                                    Only valid for D3DDMAPSAMPLER sampler  */
    D3DSAMP_FORCE_DWORD   = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DFORMAT
{
    D3DFMT_UNKNOWN              =  0,

    D3DFMT_R8G8B8               = 20,
    D3DFMT_A8R8G8B8             = 21,
    D3DFMT_X8R8G8B8             = 22,
    D3DFMT_R5G6B5               = 23,
    D3DFMT_X1R5G5B5             = 24,
    D3DFMT_A1R5G5B5             = 25,
    D3DFMT_A4R4G4B4             = 26,
    D3DFMT_R3G3B2               = 27,
    D3DFMT_A8                   = 28,
    D3DFMT_A8R3G3B2             = 29,
    D3DFMT_X4R4G4B4             = 30,
    D3DFMT_A2B10G10R10          = 31,
    D3DFMT_A8B8G8R8             = 32,
    D3DFMT_X8B8G8R8             = 33,
    D3DFMT_G16R16               = 34,
    D3DFMT_A2R10G10B10          = 35,
    D3DFMT_A16B16G16R16         = 36,

    D3DFMT_A8P8                 = 40,
    D3DFMT_P8                   = 41,

    D3DFMT_L8                   = 50,
    D3DFMT_A8L8                 = 51,
    D3DFMT_A4L4                 = 52,

    D3DFMT_V8U8                 = 60,
    D3DFMT_L6V5U5               = 61,
    D3DFMT_X8L8V8U8             = 62,
    D3DFMT_Q8W8V8U8             = 63,
    D3DFMT_V16U16               = 64,
    D3DFMT_A2W10V10U10          = 67,

    D3DFMT_UYVY                 = 0,
    D3DFMT_R8G8_B8G8            = 0,
    D3DFMT_YUY2                 = 0,
    D3DFMT_G8R8_G8B8            = 0,
    D3DFMT_DXT1                 = 0,
    D3DFMT_DXT2                 = 0,
    D3DFMT_DXT3                 = 0,
    D3DFMT_DXT4                 = 0,
    D3DFMT_DXT5                 = 0,

    D3DFMT_D16_LOCKABLE         = 70,
    D3DFMT_D32                  = 71,
    D3DFMT_D15S1                = 73,
    D3DFMT_D24S8                = 75,
    D3DFMT_D24X8                = 77,
    D3DFMT_D24X4S4              = 79,
    D3DFMT_D16                  = 80,

    D3DFMT_D32F_LOCKABLE        = 82,
    D3DFMT_D24FS8               = 83,

    /* Z-Stencil formats valid for CPU access */
    D3DFMT_D32_LOCKABLE         = 84,
    D3DFMT_S8_LOCKABLE          = 85,

    D3DFMT_L16                  = 81,

    D3DFMT_VERTEXDATA           =100,
    D3DFMT_INDEX16              =101,
    D3DFMT_INDEX32              =102,

    D3DFMT_Q16W16V16U16         =110,

    D3DFMT_MULTI2_ARGB8         = 0,

    // Floating point surface formats

    // s10e5 formats (16-bits per channel)
    D3DFMT_R16F                 = 111,
    D3DFMT_G16R16F              = 112,
    D3DFMT_A16B16G16R16F        = 113,

    // IEEE s23e8 formats (32-bits per channel)
    D3DFMT_R32F                 = 114,
    D3DFMT_G32R32F              = 115,
    D3DFMT_A32B32G32R32F        = 116,

    D3DFMT_CxV8U8               = 117,

	/* D3D9Ex only -- */
    // Monochrome 1 bit per pixel format
    D3DFMT_A1                   = 118,

    // 2.8 biased fixed point
    D3DFMT_A2B10G10R10_XR_BIAS  = 119,


    // Binary format indicating that the data has no inherent type
    D3DFMT_BINARYBUFFER         = 199,    
	/* -- D3D9Ex only */

    D3DFMT_FORCE_DWORD          =0x7fffffff
};

enum D3DDEVTYPE
{
    D3DDEVTYPE_HAL         = 1,
    D3DDEVTYPE_REF         = 2,
    D3DDEVTYPE_SW          = 3,

    D3DDEVTYPE_NULLREF     = 4,

    D3DDEVTYPE_FORCE_DWORD  = 0x7fffffff
};

enum D3DRESOURCETYPE {
    D3DRTYPE_SURFACE                =  1,
    D3DRTYPE_VOLUME                 =  2,
    D3DRTYPE_TEXTURE                =  3,
    D3DRTYPE_VOLUMETEXTURE          =  4,
    D3DRTYPE_CUBETEXTURE            =  5,
    D3DRTYPE_VERTEXBUFFER           =  6,
    D3DRTYPE_INDEXBUFFER            =  7,           //if this changes, change _D3DDEVINFO_RESOURCEMANAGER definition


    D3DRTYPE_FORCE_DWORD            = 0x7fffffff
};

enum D3DMULTISAMPLE_TYPE
{
    D3DMULTISAMPLE_NONE            =  0,
    D3DMULTISAMPLE_NONMASKABLE     =  1,
    D3DMULTISAMPLE_2_SAMPLES       =  2,
    D3DMULTISAMPLE_3_SAMPLES       =  3,
    D3DMULTISAMPLE_4_SAMPLES       =  4,
    D3DMULTISAMPLE_5_SAMPLES       =  5,
    D3DMULTISAMPLE_6_SAMPLES       =  6,
    D3DMULTISAMPLE_7_SAMPLES       =  7,
    D3DMULTISAMPLE_8_SAMPLES       =  8,
    D3DMULTISAMPLE_9_SAMPLES       =  9,
    D3DMULTISAMPLE_10_SAMPLES      = 10,
    D3DMULTISAMPLE_11_SAMPLES      = 11,
    D3DMULTISAMPLE_12_SAMPLES      = 12,
    D3DMULTISAMPLE_13_SAMPLES      = 13,
    D3DMULTISAMPLE_14_SAMPLES      = 14,
    D3DMULTISAMPLE_15_SAMPLES      = 15,
    D3DMULTISAMPLE_16_SAMPLES      = 16,

    D3DMULTISAMPLE_FORCE_DWORD     = 0x7fffffff
};

enum D3DSWAPEFFECT
{
    D3DSWAPEFFECT_DISCARD           = 1,
    D3DSWAPEFFECT_FLIP              = 2,
    D3DSWAPEFFECT_COPY              = 3,

    D3DSWAPEFFECT_OVERLAY           = 4,
    D3DSWAPEFFECT_FLIPEX            = 5,

    D3DSWAPEFFECT_FORCE_DWORD       = 0x7fffffff
};

enum D3DBACKBUFFER_TYPE
{
    D3DBACKBUFFER_TYPE_MONO         = 0,
    D3DBACKBUFFER_TYPE_LEFT         = 1,
    D3DBACKBUFFER_TYPE_RIGHT        = 2,

    D3DBACKBUFFER_TYPE_FORCE_DWORD  = 0x7fffffff
};

enum D3DPOOL {
    D3DPOOL_DEFAULT                 = 0,
    D3DPOOL_MANAGED                 = 1,
    D3DPOOL_SYSTEMMEM               = 2,
    D3DPOOL_SCRATCH                 = 3,

    D3DPOOL_FORCE_DWORD             = 0x7fffffff
};

enum D3DTEXTUREFILTERTYPE
{
    D3DTEXF_NONE            = 0,    // filtering disabled (valid for mip filter only)
    D3DTEXF_POINT           = 1,    // nearest
    D3DTEXF_LINEAR          = 2,    // linear interpolation
    D3DTEXF_ANISOTROPIC     = 3,    // anisotropic
    D3DTEXF_PYRAMIDALQUAD   = 6,    // 4-sample tent
    D3DTEXF_GAUSSIANQUAD    = 7,    // 4-sample gaussian
    D3DTEXF_CONVOLUTIONMONO = 8,    // Convolution filter for monochrome textures
    D3DTEXF_FORCE_DWORD     = 0x7fffffff,   // force 32-bit size enum
};

enum D3DTRANSFORMSTATETYPE {
    D3DTS_VIEW          = 2,
    D3DTS_PROJECTION    = 3,
    D3DTS_TEXTURE0      = 16,
    D3DTS_TEXTURE1      = 17,
    D3DTS_TEXTURE2      = 18,
    D3DTS_TEXTURE3      = 19,
    D3DTS_TEXTURE4      = 20,
    D3DTS_TEXTURE5      = 21,
    D3DTS_TEXTURE6      = 22,
    D3DTS_TEXTURE7      = 23,
    D3DTS_FORCE_DWORD     = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DLIGHTTYPE {
    D3DLIGHT_POINT          = 1,
    D3DLIGHT_SPOT           = 2,
    D3DLIGHT_DIRECTIONAL    = 3,
    D3DLIGHT_FORCE_DWORD    = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DSTATEBLOCKTYPE
{
    D3DSBT_ALL           = 1, // capture all state
    D3DSBT_PIXELSTATE    = 2, // capture pixel state
    D3DSBT_VERTEXSTATE   = 3, // capture vertex state
    D3DSBT_FORCE_DWORD   = 0x7fffffff,
};

enum D3DTEXTURESTAGESTATETYPE
{
    D3DTSS_COLOROP        =  1, /* D3DTEXTUREOP - per-stage blending controls for color channels */
    D3DTSS_COLORARG1      =  2, /* D3DTA_* (texture arg) */
    D3DTSS_COLORARG2      =  3, /* D3DTA_* (texture arg) */
    D3DTSS_ALPHAOP        =  4, /* D3DTEXTUREOP - per-stage blending controls for alpha channel */
    D3DTSS_ALPHAARG1      =  5, /* D3DTA_* (texture arg) */
    D3DTSS_ALPHAARG2      =  6, /* D3DTA_* (texture arg) */
    D3DTSS_BUMPENVMAT00   =  7, /* float (bump mapping matrix) */
    D3DTSS_BUMPENVMAT01   =  8, /* float (bump mapping matrix) */
    D3DTSS_BUMPENVMAT10   =  9, /* float (bump mapping matrix) */
    D3DTSS_BUMPENVMAT11   = 10, /* float (bump mapping matrix) */
    D3DTSS_TEXCOORDINDEX  = 11, /* identifies which set of texture coordinates index this texture */
    D3DTSS_BUMPENVLSCALE  = 22, /* float scale for bump map luminance */
    D3DTSS_BUMPENVLOFFSET = 23, /* float offset for bump map luminance */
    D3DTSS_TEXTURETRANSFORMFLAGS = 24, /* D3DTEXTURETRANSFORMFLAGS controls texture transform */
    D3DTSS_COLORARG0      = 26, /* D3DTA_* third arg for triadic ops */
    D3DTSS_ALPHAARG0      = 27, /* D3DTA_* third arg for triadic ops */
    D3DTSS_RESULTARG      = 28, /* D3DTA_* arg for result (CURRENT or TEMP) */
    D3DTSS_CONSTANT       = 32, /* Per-stage constant D3DTA_CONSTANT */

    D3DTSS_FORCE_DWORD   = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DBASISTYPE
{
   D3DBASIS_BEZIER      = 0,
   D3DBASIS_BSPLINE     = 1,
   D3DBASIS_CATMULL_ROM = 2, /* In D3D8 this used to be D3DBASIS_INTERPOLATE */
   D3DBASIS_FORCE_DWORD = 0x7fffffff,
};

enum D3DDEGREETYPE
{
   D3DDEGREE_LINEAR      = 1,
   D3DDEGREE_QUADRATIC   = 2,
   D3DDEGREE_CUBIC       = 3,
   D3DDEGREE_QUINTIC     = 5,
   D3DDEGREE_FORCE_DWORD = 0x7fffffff,
};

enum D3DQUERYTYPE {
    D3DQUERYTYPE_VCACHE                 = 4, /* D3DISSUE_END */
    D3DQUERYTYPE_RESOURCEMANAGER        = 5, /* D3DISSUE_END */
    D3DQUERYTYPE_VERTEXSTATS            = 6, /* D3DISSUE_END */
    D3DQUERYTYPE_EVENT                  = 8, /* D3DISSUE_END */
    D3DQUERYTYPE_OCCLUSION              = 9, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_TIMESTAMP              = 10, /* D3DISSUE_END */
    D3DQUERYTYPE_TIMESTAMPDISJOINT      = 11, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_TIMESTAMPFREQ          = 12, /* D3DISSUE_END */
    D3DQUERYTYPE_PIPELINETIMINGS        = 13, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_INTERFACETIMINGS       = 14, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_VERTEXTIMINGS          = 15, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_PIXELTIMINGS           = 16, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_BANDWIDTHTIMINGS       = 17, /* D3DISSUE_BEGIN, D3DISSUE_END */
    D3DQUERYTYPE_CACHEUTILIZATION       = 18, /* D3DISSUE_BEGIN, D3DISSUE_END */

    D3DQUERYTYPE_MEMORYPRESSURE         = 19, /* D3DISSUE_BEGIN, D3DISSUE_END */
};

enum D3DCULL {
  D3DCULL_NONE          = 1,
  D3DCULL_CW            = 2,
  D3DCULL_CCW           = 3,
  D3DCULL_FORCE_DWORD   = 0x7fffffff 
};

enum D3DZBUFFERTYPE {
  D3DZB_FALSE         = 0,
  D3DZB_TRUE          = 1,
  D3DZB_USEW          = 2,
  D3DZB_FORCE_DWORD   = 0x7fffffff 
};


enum D3DTEXTUREADDRESS {
    D3DTADDRESS_WRAP            = 1,
    D3DTADDRESS_MIRROR          = 2,
    D3DTADDRESS_CLAMP           = 3,
    D3DTADDRESS_BORDER          = 4,
    D3DTADDRESS_MIRRORONCE      = 5,
    D3DTADDRESS_FORCE_DWORD     = 0x7fffffff, /* force 32-bit size enum */
};

enum D3DBLEND {
    D3DBLEND_ZERO               = 1,
    D3DBLEND_ONE                = 2,
    D3DBLEND_SRCCOLOR           = 3,
    D3DBLEND_INVSRCCOLOR        = 4,
    D3DBLEND_SRCALPHA           = 5,
    D3DBLEND_INVSRCALPHA        = 6,
    D3DBLEND_DESTALPHA          = 7,
    D3DBLEND_INVDESTALPHA       = 8,
    D3DBLEND_DESTCOLOR          = 9,
    D3DBLEND_INVDESTCOLOR       = 10,
    D3DBLEND_SRCALPHASAT        = 11,
    D3DBLEND_BOTHSRCALPHA       = 12,
    D3DBLEND_BOTHINVSRCALPHA    = 13,
    D3DBLEND_BLENDFACTOR        = 14, /* Only supported if D3DPBLENDCAPS_BLENDFACTOR is on */
    D3DBLEND_INVBLENDFACTOR     = 15, /* Only supported if D3DPBLENDCAPS_BLENDFACTOR is on */
    D3DBLEND_SRCCOLOR2          = 16,
    D3DBLEND_INVSRCCOLOR2       = 17,
    D3DBLEND_FORCE_DWORD        = 0x7fffffff, /* force 32-bit size enum */
};

