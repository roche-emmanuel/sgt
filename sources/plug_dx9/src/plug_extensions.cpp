#include "plug_extensions.h"
#include <boost/random/linear_congruential.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/uniform_real.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/generator_iterator.hpp>

typedef boost::minstd_rand base_gen_type;
typedef boost::variate_generator<base_gen_type&, boost::uniform_int<> > variate_gen_type;

IDirect3DTexture9* createNoiseTexture(IDirect3DDevice9* device, unsigned int width, unsigned int height, 
	D3DFORMAT fmt, int usage, D3DPOOL pool)
{
	IDirect3DTexture9* tex = NULL;

	HRESULT result = device->CreateTexture(width, height, 1, usage, fmt, pool, &tex, NULL);
	CHECK_RESULT_RET(result,NULL,"Error while calling CreateTexture()");

	
	base_gen_type generator(45);
	boost::uniform_int<> uni_dist(0,255);
	variate_gen_type uni(generator,uni_dist);

	// Fill the texture with noise values:
	D3DLOCKED_RECT lock;
	unsigned char * pData;
	CHECK_RESULT_RET(tex->LockRect(0,&lock,NULL,0),NULL,"Cannot lock noise texture");

	pData=(unsigned char *)lock.pBits;
	unsigned int num = lock.Pitch * height;

	for(unsigned int i = 0; i < num; ++i) {
		*pData++ = (unsigned char)(uni());
	}
	
	CHECK_RESULT_RET(tex->UnlockRect(0),NULL,"Cannot unlock noise texture");
	
	return tex;
}

ID3DXBuffer* compileShaderFromFile(IDirect3DDevice9* device, const std::string& filename, const std::string& func, const std::string& profile)
{
	CHECK_RET(device,0,"Invalid device");

	ID3DXBuffer* code = NULL; 
	ID3DXBuffer* pErrorMsgs = NULL; 

	HRESULT result = D3DXCompileShaderFromFile(filename.c_str(),    //filepath
		NULL,            //macro's
		NULL,            //includes
		func.c_str(),       //main function 
		profile.c_str(),        //shader profile
		0,               //flags //D3DXSHADER_DEBUG
		&code,           //compiled operations
		&pErrorMsgs,      //errors
		NULL); //constants //
	
	if(pErrorMsgs) {
		trERROR("Shader","Shader compilation errors: " << (char*)pErrorMsgs->GetBufferPointer() << " in file: " << filename);
		SafeRelease(pErrorMsgs);
	}
	
	CHECK_RESULT_RET(result,0,"Invalid shader code in file "<<filename);
	
	return code;
}

ID3DXBuffer* compileShaderFromMemory(IDirect3DDevice9* device, const std::string& src, const std::string& func, const std::string& profile)
{
	CHECK_RET(device,0,"Invalid device");

	ID3DXBuffer* code = NULL; 
	ID3DXBuffer* pErrorMsgs = NULL; 

	HRESULT result = D3DXCompileShader(src.data(),    //filepath
		src.size(), // data len
		NULL,            //macro's
		NULL,            //includes
		func.c_str(),       //main function 
		profile.c_str(),        //shader profile
		0,               //flags //D3DXSHADER_DEBUG
		&code,           //compiled operations
		&pErrorMsgs,      //errors
		NULL); //constants //
	
	if(pErrorMsgs) {
		trERROR("Shader","Shader compilation errors: " << (char*)pErrorMsgs->GetBufferPointer() << " in memory: " << src);
		SafeRelease(pErrorMsgs);
	}
	
	CHECK_RESULT_RET(result,0,"Invalid shader code in memory: "<<src);
	
	return code;
}

IDirect3DVertexShader9* createVertexShader(IDirect3DDevice9* device, ID3DXBuffer* code)
{
	CHECK_RET(device,NULL,"Invalid device");
	CHECK_RET(code,NULL,"Invalid shader code");

	IDirect3DVertexShader9* vertexShader = NULL;

	HRESULT result = device->CreateVertexShader((DWORD*)code->GetBufferPointer(), &vertexShader);
	CHECK_RESULT_RET(result,NULL,"Could not create VertexShader.")
	return vertexShader;
}

IDirect3DPixelShader9* createPixelShader(IDirect3DDevice9* device, ID3DXBuffer* code)
{
	CHECK_RET(device,NULL,"Invalid device");
	CHECK_RET(code,NULL,"Invalid shader code");
	
	IDirect3DPixelShader9* pixelShader = NULL;

	HRESULT result = device->CreatePixelShader((DWORD*)code->GetBufferPointer(), &pixelShader);
	CHECK_RESULT_RET(result,NULL,"Could not create PixelShader.")
	return pixelShader;
}
