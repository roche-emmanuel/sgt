#include "plug_common.h"
#include "RenderTarget.h"

namespace cef
{

RenderTarget::RenderTarget(int width, int height): _width(width), _height(height) {
  logDEBUG("Creating new RenderTarget.");
}

RenderTarget::~RenderTarget() {
  logDEBUG("Deleting RenderTarget.");
}

}
