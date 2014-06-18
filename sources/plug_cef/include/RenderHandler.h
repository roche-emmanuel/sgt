#ifndef _CEF_RENDER_HANDLER_H_
#define _CEF_RENDER_HANDLER_H_

#include <cef_render_handler.h>
#include "RenderTarget.h"

namespace cef
{
	/**
	This class is a minimal implementation of a CefClient, to provide a Render Handler to the CEF engine
	so that paint event can be retrieved for a given browser object.
	*/
	class RenderHandler : public CefRenderHandler
	{
	public:
		RenderHandler();
		~RenderHandler();

		void OnPaint(CefRefPtr<CefBrowser> browser, PaintElementType type, const RectList &dirtyRects, const void *buffer, int width, int height);

		bool GetViewRect(CefRefPtr<CefBrowser> browser, CefRect &rect);

		void SetRenderTarget(RenderTarget* target);
		
	protected:
		CefRefPtr<RenderTarget> _renderTarget;

	IMPLEMENT_REFCOUNTING(RenderHandler);
	};
}

#endif
