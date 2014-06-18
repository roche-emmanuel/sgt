#ifndef _CEF_DX9_RENDER_TARGET_H_
#define _CEF_DX9_RENDER_TARGET_H_

#include <RenderTarget.h>

namespace cef
{
	class DX9RenderTarget : public RenderTarget
	{
	public:
		DX9RenderTarget(int width, int height);
		virtual ~DX9RenderTarget();

		/** Main method used to draw some content on a target texture. This must be re-implemented. LUNA_IGNORED. */
		virtual void PaintRects(const CefRenderHandler::RectList &dirtyRects, const void *buffer);

		virtual void Initialize();
		virtual void Uninitialize();
		virtual bool IsInitialized();
	};
}

#endif
