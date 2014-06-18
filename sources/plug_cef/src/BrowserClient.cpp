#include "plug_common.h"
#include "BrowserClient.h"

namespace cef
{

BrowserClient::BrowserClient() {
    logDEBUG("Creating new BrowserClient.");

    // Here we build a new render handler object that should be assigned in this instance:
    _renderHandler = new RenderHandler();
}

BrowserClient::~BrowserClient() {
    logDEBUG("Deleting BrowserClient.");
}

void BrowserClient::SetRenderTarget(RenderTarget* target) {
	_renderHandler->SetRenderTarget(target);
}


}
