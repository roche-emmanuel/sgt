#ifndef _CEF_RENDER_TARGET_H_
#define _CEF_RENDER_TARGET_H_

#include <cef_base.h>
#include <cef_render_handler.h>

namespace cef
{
	class RenderTarget : public CefBase
	{
	public:
		/** LUNA_IGNORED */
		RenderTarget(int width, int height);
		virtual ~RenderTarget();

		/** Main method used to draw some content on a target texture. This must be re-implemented. LUNA_IGNORED. */
		virtual void PaintRects(const CefRenderHandler::RectList &dirtyRects, const void *buffer) = 0;

		// Retrieve the dimensions of the target:
		virtual int GetWidth() { return _width; }
		virtual int GetHeight() { return _height; }

		virtual void Initialize() = 0;
		virtual void Uninitialize() = 0;
		virtual bool IsInitialized() = 0;
		
	protected:
		// default constructor unavailable.
		RenderTarget();

		int _width;
		int _height;

	IMPLEMENT_REFCOUNTING(RenderTarget);
	};
}

#endif
