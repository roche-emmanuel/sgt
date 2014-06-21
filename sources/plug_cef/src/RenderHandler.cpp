#include "plug_common.h"
#include "RenderHandler.h"

namespace cef
{

RenderHandler::RenderHandler() {
  logDEBUG("Creating new RenderHandler.");
}

RenderHandler::~RenderHandler() {
  logDEBUG("Deleting RenderHandler.");
}

bool RenderHandler::GetViewRect(CefRefPtr<CefBrowser> browser, CefRect &rect) {
	CHECK_RET(_renderTarget.get(),false,"Invalid render target object.")
	// logDEBUG("Retrieving View rect of size " << _renderTarget->GetWidth()  << "x" << _renderTarget->GetHeight());
	rect = CefRect(0, 0, _renderTarget->GetWidth(), _renderTarget->GetHeight());
	return true;	
}

void RenderHandler::OnPaint(CefRefPtr<CefBrowser> browser, PaintElementType type, const RectList &dirtyRects, const void *buffer, int width, int height) {
	// logDEBUG("Calling OnPaint.");
	CHECK(_renderTarget.get(),"Invalid render target object.")
	CHECK(width==_renderTarget->GetWidth(),"Buffer width doesn't match render target: " << width << "!=" << _renderTarget->GetWidth());
	CHECK(height==_renderTarget->GetHeight(),"Buffer height doesn't match render target: " << height << "!=" << _renderTarget->GetHeight());

	if(dirtyRects.empty()) {
		logWARN("No dirty rect to paint!");
		return;
	}

	// if(!_renderTarget->IsInitialized()) {
	// 	logDEBUG("RenderHandler initializing RenderTarget...");
	// 	_renderTarget->Initialize();
	// 	CHECK(_renderTarget->IsInitialized(),"Could not initialize RenderTarget.");
	// }

	switch(type) {
	case PET_POPUP:
		logWARN("In OnPaint for PET_POPUP with " << dirtyRects.size() << " dirty rects.");
		return;
	case PET_VIEW:
		return _renderTarget->PaintRects(dirtyRects, buffer);
	default:
		THROW("Invalid PaintElementType: " << type);
	}
}

void RenderHandler::SetRenderTarget(RenderTarget* target) {
	CHECK(target,"Invalid RenderTarget object.");
	CHECK(_renderTarget.get()==NULL,"Reassigning render target ?")
	_renderTarget = target;
}

}
