#include "plug_common.h"
#include "DX9RenderTarget.h"

namespace cef
{

DX9RenderTarget::DX9RenderTarget(IDirect3DDevice9* device, int width, int height): 
	RenderTarget(width,height), _device(device), _updateNeeded(false) {
  logDEBUG("Creating new DX9RenderTarget.");
  THROW_IF(!device,"Invalid DX9 device.");
}

DX9RenderTarget::~DX9RenderTarget() {
  logDEBUG("Deleting DX9RenderTarget.");
  Uninitialize();
}

void DX9RenderTarget::PaintRects(const CefRenderHandler::RectList &dirtyRects, const void *buffer)
{
	CHECK(IsInitialized(),"Cannot PaintRects on non initialized textures.");
	CHECK(!dirtyRects.empty(),"No rect to paint.")

	sgtLock lock(_textureMutex);

	// Here we need to copy the data on the mem texture:
  for (CefRenderHandler::RectList::const_iterator it = dirtyRects.begin(); it!= dirtyRects.end(); ++it) {
    const CefRect& rect = *it;

		D3DLOCKED_RECT locked;
		RECT dxrect;
		dxrect.left = rect.x;
		dxrect.top = rect.y;
		dxrect.right = rect.x+rect.width;
		dxrect.bottom = rect.y+rect.height;

		int row_span = _width*4;
  	
  	// Lock the target rectangle:
		CHECK_RESULT(_memTexture->LockRect(0,&locked,&dxrect,D3DLOCK_NOSYSLOCK),"Could not lock texture data");
		
		CHECK(locked.Pitch==row_span,"Invalid Pitch value, expected: "<< row_span<<", got: "<<locked.Pitch);

		unsigned char* line = ((unsigned char*)buffer) + rect.y * row_span + rect.x * 4;
		unsigned char* dest = (unsigned char *)locked.pBits;
		
		int height = rect.height;
		int width4 = rect.width*4;

		// osg::Timer_t startTick2 = osg::Timer::instance()->tick();

		for(int row=0; row<height; ++row) {
			memcpy(dest,line,width4);
			dest += row_span;	
			line += row_span;
		}

		// double elapsed2 = osg::Timer::instance()->delta_s(startTick2,osg::Timer::instance()->tick());
		// logINFO("Copied in " << elapsed2*1000 << " ms");

		CHECK_RESULT(_memTexture->UnlockRect(0),"Could not unlock surface data");
  }

  _updateNeeded = true;
}

void DX9RenderTarget::Initialize()
{
	// Ensure the texture are uninitialized:
	Uninitialize();

	// First we create the memory texture:
	// We could also use the format D3DFMT_A8B8G8R8 instead of D3DFMT_A8R8G8B8
	HRESULT result = _device->CreateTexture(_width, _height, 1, 0, D3DFMT_A8B8G8R8, D3DPOOL_SYSTEMMEM, _memTexture.AddressOf(), NULL);
	CHECK_RESULT(result,"Error while calling CreateTexture() for memory texture.");
	
	// Now create the GPU texture:
	result = _device->CreateTexture(_width, _height, 1, D3DUSAGE_RENDERTARGET, D3DFMT_A8B8G8R8, D3DPOOL_DEFAULT, _gpuTexture.AddressOf(), NULL);
	CHECK_RESULT(result,"Error while calling CreateTexture() for gpu texture.");

	// We may now start the update thread:
	_updateThread.setRenderTarget(this);
}

void DX9RenderTarget::Uninitialize()
{
	// Ensure the update thread is stopped:
	_updateThread.setRenderTarget(NULL);

	// Release the surface:
	_memTexture.SafeRelease();
	_gpuTexture.SafeRelease();
}

bool DX9RenderTarget::IsInitialized()
{
	// Check if the surfaces are valid:
	return _gpuTexture.Get()!=NULL; // If this one is valid, then the memTexture must also be valid too since it was created first.
}

void DX9RenderTarget::Update()
{
	sgtLock lock(_textureMutex);
	CHECK(_updateNeeded,"Should not be updating if update is not needed.");

	// perform the udpate operation:
	HRESULT result = _device->UpdateTexture(_memTexture.Get(),_gpuTexture.Get());	
	CHECK_RESULT(result,"Error while calling UpdateTexture()");
	
	// Mark the update as done:
	_updateNeeded = false;
}

}
