#include "plug_common.h"
#include "DX9CEFManager.h"
#include "DX9RenderTarget.h"

namespace cef
{

DX9CEFManager::DX9CEFManager(IDirect3DDevice9* device) : _device(device)
{
    THROW_IF(!device,"Invalid DX9 device.");
}

DX9CEFManager::~DX9CEFManager()
{
}

CEFViewBase* DX9CEFManager::DoCreateView(const CEFViewBase::Traits& traits)
{
    // Create a new view:
    CEFViewBase* view = new CEFViewBase(traits);

    // Create a new render target:
    RenderTarget* tgt = new DX9RenderTarget(_device.Get(),traits.width(),traits.height());

    // Initialize the browser with this render target:
    view->InitializeBrowser(traits,tgt);

    return view;
}

IDirect3DTexture9* DX9CEFManager::GetOutputTexture(CEFViewBase* view)
{
	CHECK_RET(view,NULL,"Invalid CEFViewBase object.");
	CHECK_RET(view->IsInitialized(),NULL,"CEFViewBase is not initialized.");

	// retrieve the render target:
	DX9RenderTarget* tgt = dynamic_cast<DX9RenderTarget*>(view->GetRenderTarget());
	CHECK_RET(tgt,NULL,"Invalid DX9RenderTarget object");

	// The render target is supposed to be initialized:
	return tgt->GetGPUTexture();

}

}
