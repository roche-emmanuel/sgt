#ifndef _CEF_BROWSER_CLIENT_H_
#define _CEF_BROWSER_CLIENT_H_

#include <cef_client.h>

#include "RenderHandler.h"
#include "RenderTarget.h"

namespace cef
{
    /**
    This class is a minimal implementation of a CefClient, to provide a Render Handler to the CEF engine
    so that paint event can be retrieved for a given browser object.
    */
    class BrowserClient : public CefClient
    {
    public:
        BrowserClient();
        ~BrowserClient();

    virtual CefRefPtr<CefRenderHandler> GetRenderHandler() {
        return _renderHandler.get();
    }

    void SetRenderTarget(RenderTarget* target);

    protected:
        CefRefPtr<RenderHandler> _renderHandler;

    IMPLEMENT_REFCOUNTING(BrowserClient);
    };
}

#endif
