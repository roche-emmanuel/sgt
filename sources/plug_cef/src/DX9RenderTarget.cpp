#include "plug_common.h"
#include "DX9RenderTarget.h"

namespace cef
{

DX9RenderTarget::DX9RenderTarget(int width, int height): RenderTarget(width,height) {
  logDEBUG("Creating new DX9RenderTarget.");
}

DX9RenderTarget::~DX9RenderTarget() {
  logDEBUG("Deleting DX9RenderTarget.");
}

void DX9RenderTarget::PaintRects(const CefRenderHandler::RectList &dirtyRects, const void *buffer)
{
	logWARN("Implementation missing");
}

void DX9RenderTarget::Initialize()
{
	logWARN("Implementation missing.");
}

void DX9RenderTarget::Uninitialize()
{
	logWARN("Implementation missing.");
}

bool DX9RenderTarget::IsInitialized()
{
	logWARN("Implementation missing.");
	return false;
}

}
