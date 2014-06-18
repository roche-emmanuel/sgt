#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include <osg/Timer>

/** LUNA_CLASS_EXTENSION */
ID3DXBuffer* compileShaderFromFile(IDirect3DDevice9* device, const std::string& filename, const std::string& func, const std::string& profile);

/** LUNA_CLASS_EXTENSION */
ID3DXBuffer* compileShaderFromMemory(IDirect3DDevice9* device, const std::string& src, const std::string& func, const std::string& profile);

/** LUNA_CLASS_EXTENSION */
IDirect3DVertexShader9* createVertexShader(IDirect3DDevice9* device, ID3DXBuffer* code);

/** LUNA_CLASS_EXTENSION */
IDirect3DPixelShader9* createPixelShader(IDirect3DDevice9* device, ID3DXBuffer* code);

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexDeclaration9* createVec3Declaration(IDirect3DDevice9* device) {
	D3DVERTEXELEMENT9 decl[] = {
		{0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
		D3DDECL_END()
	};
	
	IDirect3DVertexDeclaration9* vertexDecl = NULL;

	HRESULT result = device->CreateVertexDeclaration(decl, &vertexDecl);
	CHECK_RESULT_RET(result,NULL,"Cannot create Vertex declaration.");
	
	return vertexDecl;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexDeclaration9* createVec4Declaration(IDirect3DDevice9* device) {
	D3DVERTEXELEMENT9 decl[] = {
		{0, 0, D3DDECLTYPE_FLOAT4, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
		D3DDECL_END()
	};
	
	IDirect3DVertexDeclaration9* vertexDecl = NULL;

	HRESULT result = device->CreateVertexDeclaration(decl, &vertexDecl);
	CHECK_RESULT_RET(result,NULL,"Cannot create Vertex declaration.");
	
	return vertexDecl;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexBuffer9* createVertexBuffer(IDirect3DDevice9* device, const osg::Vec3Array& vertices) {
	IDirect3DVertexBuffer9* vbuffer = NULL;

	unsigned int nbytes = sizeof(osg::Vec3f)*vertices.size();
	
	HRESULT result = device->CreateVertexBuffer(nbytes,D3DUSAGE_WRITEONLY,0,D3DPOOL_DEFAULT,&vbuffer,NULL);
	CHECK_RESULT_RET(result,NULL,"Cannot create vertex buffer");
	
	osg::Vec3f *ptr = NULL;

	trDEBUG2_V("Mesh","Copying " << nbytes << " bytes in vertex buffer.");
	vbuffer->Lock(0, 0, (void**)&ptr, 0);	
	//std::copy(_vertices_3D.begin(),_vertices_3D.end(),ptr);
	memcpy((void*)ptr, &vertices[0], nbytes);
	vbuffer->Unlock();
		
	return vbuffer;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DVertexBuffer9* createVertexBuffer(IDirect3DDevice9* device, const osg::Vec4Array& vertices) {
	IDirect3DVertexBuffer9* vbuffer = NULL;

	unsigned int nbytes = sizeof(osg::Vec4f)*vertices.size();
	
	HRESULT result = device->CreateVertexBuffer(nbytes,D3DUSAGE_WRITEONLY,0,D3DPOOL_DEFAULT,&vbuffer,NULL);
	CHECK_RESULT_RET(result,NULL,"Cannot create vertex buffer");
	
	osg::Vec4f *ptr = NULL;

	trDEBUG2_V("Mesh","Copying " << nbytes << " bytes in vertex buffer.");
	vbuffer->Lock(0, 0, (void**)&ptr, 0);	
	//std::copy(_vertices_3D.begin(),_vertices_3D.end(),ptr);
	memcpy((void*)ptr, &vertices[0], nbytes);
	vbuffer->Unlock();
		
	return vbuffer;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DTexture9* createTextureFromFile(IDirect3DDevice9* device, const std::string& filename)
{
	IDirect3DTexture9* tex = NULL;
	HRESULT result = D3DXCreateTextureFromFile(device, filename.c_str(), &tex); //,"Cannot read texture file "<<path);
	CHECK_RESULT_RET(result,NULL,"Could not create texture from file "<<filename)

	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DTexture9* createTextureFromMemory(IDirect3DDevice9* device, const std::string& image)
{
	IDirect3DTexture9* tex = NULL;
	HRESULT result = D3DXCreateTextureFromFileInMemory(device,image.data(),image.size(),&tex);
	CHECK_RESULT_RET(result,NULL,"Could not create texture from memory data. size="<<image.size())

	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DTexture9* createTexture(IDirect3DDevice9* device, unsigned int width, unsigned int height, D3DFORMAT fmt = D3DFMT_A8R8G8B8, int usage = D3DUSAGE_RENDERTARGET, D3DPOOL pool = D3DPOOL_DEFAULT )
{
	IDirect3DTexture9* tex = NULL;

	HRESULT result = device->CreateTexture(width, height, 1, usage, fmt, pool, &tex, NULL);
	CHECK_RESULT_RET(result,NULL,"Error while calling CreateTexture()");

	return tex;
}

/** LUNA_CLASS_EXTENSION */
IDirect3DTexture9* createNoiseTexture(IDirect3DDevice9* device, unsigned int width, unsigned int height, D3DFORMAT fmt = D3DFMT_A8R8G8B8, int usage = D3DUSAGE_DYNAMIC, D3DPOOL pool = D3DPOOL_DEFAULT );

/** LUNA_CLASS_EXTENSION */
inline IDirect3DSurface9* createDepthSurface(IDirect3DDevice9* device, unsigned int width, unsigned int height, D3DFORMAT fmt = D3DFMT_D24S8)
{
	IDirect3DSurface9* tex = NULL;
	HRESULT result = device->CreateDepthStencilSurface(width, height, fmt,
													   D3DMULTISAMPLE_NONE, 0, FALSE, &tex, NULL);
	CHECK_RESULT_RET(result,NULL,"Error while calling CreateDepthStencilSurface()");

	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline void updateTexture(IDirect3DDevice9* device, IDirect3DTexture9* src, IDirect3DTexture9* dest)
{
	CHECK(src,"Invalid source texture")
	CHECK(dest,"Invalid dest texture");
	
	// osg::Timer_t startTick = osg::Timer::instance()->tick();
	HRESULT result = device->UpdateTexture(src,dest);
	// double elapsed = osg::Timer::instance()->delta_s(startTick,osg::Timer::instance()->tick());
	
	CHECK_RESULT(result,"Error while calling UpdateTexture()");
	// logINFO("Texture updated in " << elapsed*1000 << " ms");
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DSurface9* getSurface(IDirect3DTexture9* texture, unsigned int level = 0)
{
	IDirect3DSurface9* surface = NULL;
	HRESULT result = texture->GetSurfaceLevel(level,&surface);
	CHECK_RESULT_RET(result,NULL,"Cannot retrieve surface from texture");

	return surface;
}

/** LUNA_CLASS_EXTENSION */
inline IDirect3DBaseTexture9* asBaseTexture(IDirect3DTexture9* tex) {
	return tex;
}

/** LUNA_CLASS_EXTENSION */
inline ID3DXFont* createFont(IDirect3DDevice9* device, int width, int height, bool bold, bool italic, const std::string& faceName)
{
	ID3DXFont* font = NULL;
	HRESULT result = D3DXCreateFont(device, height, width, bold ? FW_BOLD : FW_NORMAL, 1, italic ? TRUE : FALSE, DEFAULT_CHARSET,
		OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, faceName.c_str(), &font );

	CHECK_RESULT_RET(result,NULL,"Cannot create DirectX Font object.");

	return font;
};

/** LUNA_CLASS_EXTENSION */
inline ID3DXSprite* createSprite(IDirect3DDevice9* device)
{

	ID3DXSprite* sprite = NULL;
	HRESULT result = D3DXCreateSprite(device,&sprite);
	CHECK_RESULT_RET(result,NULL,"Cannot create DirectX sprite object.");

	return sprite;
};

/** LUNA_CLASS_EXTENSION */
inline void drawText(ID3DXFont* font, const std::string& text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)
{
	RECT rr;
	rr.left = rect.x();
	rr.top = rect.y();
	rr.right = rect.z();
	rr.bottom = rect.w();

	D3DCOLOR col =  D3DCOLOR_ARGB((int)(color.w()*255.0f), (int)(color.x()*255.0f), (int)(color.y()*255.0f), (int)(color.z()*255.0f));
	HRESULT result = font->DrawText(NULL, text.c_str(), text.length(), &rr, flags, col);
	
	CHECK_RESULT(result,"Error in DrawText()");
}

/** LUNA_CLASS_EXTENSION */
inline void drawTextSprite(ID3DXFont* font, ID3DXSprite* sprite, const std::string& text, osg::Vec4f rect, osg::Vec4f color, unsigned int flags)
{
	RECT rr;
	rr.left = rect.x();
	rr.top = rect.y();
	rr.right = rect.z();
	rr.bottom = rect.w();

	sprite->Begin(D3DXSPRITE_ALPHABLEND|D3DXSPRITE_DO_NOT_ADDREF_TEXTURE); //D3DXSPRITE_DONOTSAVESTATE

	D3DCOLOR col =  D3DCOLOR_ARGB((int)(color.w()*255.0f), (int)(color.x()*255.0f), (int)(color.y()*255.0f), (int)(color.z()*255.0f));
	HRESULT result = font->DrawText(NULL, text.c_str(), text.length(), &rr, flags, col);
	
	sprite->End();

	CHECK_RESULT(result,"Error in DrawTextSprite()");
}

/** LUNA_CLASS_EXTENSION */
inline void setDefaultState(IDirect3DDevice9* d3dd)
{
	// Set D3D device properties to their default state
	// This is to ensure things are in a predictable state when coming from engine rendering code
	const float zerof = 0.0f;
	const float onef = 1.0f;
	#define ZEROf	*((DWORD*) (&zerof))
	#define ONEf	*((DWORD*) (&onef))

	d3dd->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
	d3dd->SetRenderState(D3DRS_FILLMODE, D3DFILL_SOLID);
	d3dd->SetRenderState(D3DRS_SHADEMODE, D3DSHADE_GOURAUD);
	d3dd->SetRenderState(D3DRS_ZWRITEENABLE, TRUE);
	d3dd->SetRenderState(D3DRS_ALPHATESTENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_LASTPIXEL, TRUE);
	d3dd->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_ONE);
	d3dd->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_ZERO);
	d3dd->SetRenderState(D3DRS_CULLMODE, D3DCULL_CCW);
	d3dd->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
	d3dd->SetRenderState(D3DRS_ALPHAREF, 0);
	d3dd->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_ALWAYS);
	d3dd->SetRenderState(D3DRS_ALPHABLENDENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_FOGENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_SPECULARENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_FOGCOLOR, 0);
	d3dd->SetRenderState(D3DRS_FOGTABLEMODE, D3DFOG_NONE);
	d3dd->SetRenderState(D3DRS_FOGSTART, ZEROf);
	d3dd->SetRenderState(D3DRS_FOGEND, ONEf);
	d3dd->SetRenderState(D3DRS_FOGDENSITY, ONEf);
	d3dd->SetRenderState(D3DRS_RANGEFOGENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_STENCILENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_STENCILFAIL, D3DSTENCILOP_KEEP);
	d3dd->SetRenderState(D3DRS_STENCILZFAIL, D3DSTENCILOP_KEEP);
	d3dd->SetRenderState(D3DRS_STENCILPASS, D3DSTENCILOP_KEEP);
	d3dd->SetRenderState(D3DRS_STENCILFUNC, D3DCMP_ALWAYS);
	d3dd->SetRenderState(D3DRS_STENCILREF, 0);
	d3dd->SetRenderState(D3DRS_STENCILMASK, 0xffffffff);
	d3dd->SetRenderState(D3DRS_STENCILWRITEMASK, 0xffffffff);
	d3dd->SetRenderState(D3DRS_TEXTUREFACTOR, 0xffffffff);
	d3dd->SetRenderState(D3DRS_WRAP0, 0);
	d3dd->SetRenderState(D3DRS_WRAP1, 0);
	d3dd->SetRenderState(D3DRS_WRAP2, 0);
	d3dd->SetRenderState(D3DRS_WRAP3, 0);
	d3dd->SetRenderState(D3DRS_WRAP4, 0);
	d3dd->SetRenderState(D3DRS_WRAP5, 0);
	d3dd->SetRenderState(D3DRS_WRAP6, 0);
	d3dd->SetRenderState(D3DRS_WRAP7, 0);
	d3dd->SetRenderState(D3DRS_CLIPPING, TRUE);
	d3dd->SetRenderState(D3DRS_AMBIENT, 0);
	d3dd->SetRenderState(D3DRS_LIGHTING, TRUE);
	d3dd->SetRenderState(D3DRS_FOGVERTEXMODE, D3DFOG_NONE);
	d3dd->SetRenderState(D3DRS_COLORVERTEX, TRUE);
	d3dd->SetRenderState(D3DRS_LOCALVIEWER, TRUE);
	d3dd->SetRenderState(D3DRS_NORMALIZENORMALS, FALSE);
	d3dd->SetRenderState(D3DRS_DIFFUSEMATERIALSOURCE, D3DMCS_COLOR1);
	d3dd->SetRenderState(D3DRS_SPECULARMATERIALSOURCE, D3DMCS_COLOR2);
	d3dd->SetRenderState(D3DRS_AMBIENTMATERIALSOURCE, D3DMCS_MATERIAL);
	d3dd->SetRenderState(D3DRS_EMISSIVEMATERIALSOURCE, D3DMCS_MATERIAL);
	d3dd->SetRenderState(D3DRS_CLIPPLANEENABLE, 0);
	d3dd->SetRenderState(D3DRS_POINTSIZE_MIN, ONEf);
	d3dd->SetRenderState(D3DRS_POINTSPRITEENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_MULTISAMPLEANTIALIAS, TRUE);
	d3dd->SetRenderState(D3DRS_MULTISAMPLEMASK, 0xffffffff);
	d3dd->SetRenderState(D3DRS_PATCHEDGESTYLE, D3DPATCHEDGE_DISCRETE);
	d3dd->SetRenderState(D3DRS_POINTSIZE_MAX, ONEf);
	d3dd->SetRenderState(D3DRS_COLORWRITEENABLE, 0x0000000f);
	d3dd->SetRenderState(D3DRS_BLENDOP, D3DBLENDOP_ADD);
	d3dd->SetRenderState(D3DRS_POSITIONDEGREE, D3DDEGREE_CUBIC);
	d3dd->SetRenderState(D3DRS_NORMALDEGREE, D3DDEGREE_LINEAR);
	d3dd->SetRenderState(D3DRS_SCISSORTESTENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_SLOPESCALEDEPTHBIAS, 0);
	d3dd->SetRenderState(D3DRS_MINTESSELLATIONLEVEL, ONEf);
	d3dd->SetRenderState(D3DRS_MAXTESSELLATIONLEVEL, ONEf);
	d3dd->SetRenderState(D3DRS_ADAPTIVETESS_X, ZEROf);
	d3dd->SetRenderState(D3DRS_ADAPTIVETESS_Y, ZEROf);
	d3dd->SetRenderState(D3DRS_ADAPTIVETESS_Z, ONEf);
	d3dd->SetRenderState(D3DRS_ADAPTIVETESS_W, ZEROf);
	d3dd->SetRenderState(D3DRS_ENABLEADAPTIVETESSELLATION, FALSE);
	d3dd->SetRenderState(D3DRS_TWOSIDEDSTENCILMODE, FALSE);
	d3dd->SetRenderState(D3DRS_CCW_STENCILFAIL, D3DSTENCILOP_KEEP);
	d3dd->SetRenderState(D3DRS_CCW_STENCILZFAIL, D3DSTENCILOP_KEEP);
	d3dd->SetRenderState(D3DRS_CCW_STENCILPASS, D3DSTENCILOP_KEEP);
	d3dd->SetRenderState(D3DRS_CCW_STENCILFUNC, D3DCMP_ALWAYS);
	d3dd->SetRenderState(D3DRS_COLORWRITEENABLE1, 0x0000000f);
	d3dd->SetRenderState(D3DRS_COLORWRITEENABLE2, 0x0000000f);
	d3dd->SetRenderState(D3DRS_COLORWRITEENABLE3, 0x0000000f);
	d3dd->SetRenderState(D3DRS_BLENDFACTOR, 0xffffffff);
	d3dd->SetRenderState(D3DRS_SRGBWRITEENABLE, 0);
	d3dd->SetRenderState(D3DRS_DEPTHBIAS, 0);
	d3dd->SetRenderState(D3DRS_WRAP8, 0);
	d3dd->SetRenderState(D3DRS_WRAP9, 0);
	d3dd->SetRenderState(D3DRS_WRAP10, 0);
	d3dd->SetRenderState(D3DRS_WRAP11, 0);
	d3dd->SetRenderState(D3DRS_WRAP12, 0);
	d3dd->SetRenderState(D3DRS_WRAP13, 0);
	d3dd->SetRenderState(D3DRS_WRAP14, 0);
	d3dd->SetRenderState(D3DRS_WRAP15, 0);
	d3dd->SetRenderState(D3DRS_SEPARATEALPHABLENDENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_SRCBLENDALPHA, D3DBLEND_ONE);
	d3dd->SetRenderState(D3DRS_DESTBLENDALPHA, D3DBLEND_ZERO);
	d3dd->SetRenderState(D3DRS_BLENDOPALPHA, D3DBLENDOP_ADD);
	d3dd->SetRenderState(D3DRS_DITHERENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_VERTEXBLEND, D3DVBF_DISABLE);
	d3dd->SetRenderState(D3DRS_POINTSIZE, ONEf);
	d3dd->SetRenderState(D3DRS_POINTSCALEENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_POINTSCALE_A, ONEf);
	d3dd->SetRenderState(D3DRS_POINTSCALE_B, ZEROf);
	d3dd->SetRenderState(D3DRS_POINTSCALE_C, ZEROf);
	d3dd->SetRenderState(D3DRS_INDEXEDVERTEXBLENDENABLE, FALSE);
	d3dd->SetRenderState(D3DRS_TWEENFACTOR, ZEROf);
	d3dd->SetRenderState(D3DRS_ANTIALIASEDLINEENABLE, FALSE);

	for(int i=0;i<8;i++) {
		d3dd->SetSamplerState(i, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
		d3dd->SetSamplerState(i, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
		d3dd->SetSamplerState(i, D3DSAMP_MIPFILTER, D3DTEXF_NONE);
		d3dd->SetSamplerState(i, D3DSAMP_MIPMAPLODBIAS, 0);
		d3dd->SetSamplerState(i, D3DSAMP_MAXMIPLEVEL, 0);			
		d3dd->SetSamplerState(i, D3DSAMP_MAXANISOTROPY, 1);
		d3dd->SetSamplerState(i, D3DSAMP_SRGBTEXTURE, 0);			
		d3dd->SetSamplerState(i, D3DSAMP_ELEMENTINDEX, 0);
		d3dd->SetSamplerState(i, D3DSAMP_DMAPOFFSET, 0);			
		d3dd->SetSamplerState(i, D3DSAMP_ADDRESSU, D3DTADDRESS_WRAP);
		d3dd->SetSamplerState(i, D3DSAMP_ADDRESSV, D3DTADDRESS_WRAP);
		d3dd->SetSamplerState(i, D3DSAMP_ADDRESSW, D3DTADDRESS_WRAP);

		d3dd->SetTexture(i, NULL);
	}

#undef ZEROf
#undef ONEf
}


enum UniformTarget {
	TARGET_FRAGMENT = 1,
	TARGET_VERTEX = 2,
	TARGET_BOTH = 3
};

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, bool val, int target) {
	int bval = val ? 1 : 0;
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantB(reg,&bval,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantB(reg,&bval,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, float val, int target) {
	osg::Vec4f vec(val,val,val,val);
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,vec._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,vec._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Vec4f val, int target) {
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,val._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,val._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Vec4d val, int target) {
	osg::Vec4f vec = osg::Vec4f(val.x(),val.y(),val.z(),val.w());
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,vec._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,vec._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Vec2f val, int target) {
	osg::Vec4f vec = osg::Vec4f(val.x(),val.y(),0.0,0.0);
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,vec._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,vec._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Vec2d val, int target) {
	osg::Vec4f vec = osg::Vec4f(val.x(),val.y(),0.0,0.0);
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,vec._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,vec._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Vec3f val, int target) {
	osg::Vec4f vec = osg::Vec4f(val.x(),val.y(),val.z(),0.0);
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,vec._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,vec._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Vec3d val, int target) {
	osg::Vec4f vec = osg::Vec4f(val.x(),val.y(),val.z(),0.0);
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,vec._v,1);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,vec._v,1);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Matrixf val, int target) {
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,val.ptr(),4);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,val.ptr(),4);
	}
}

/** LUNA_CLASS_EXTENSION */
inline void setUniform(IDirect3DDevice9* cbi, unsigned int reg, osg::Matrixd val, int target) {
	osg::Matrixf mat(val.ptr());
	
	if (target & TARGET_VERTEX) {
		cbi->SetVertexShaderConstantF(reg,mat.ptr(),4);
	}
	if (target & TARGET_FRAGMENT) {
		cbi->SetPixelShaderConstantF(reg,mat.ptr(),4);
	}
}

#endif
