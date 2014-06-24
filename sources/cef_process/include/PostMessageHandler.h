#ifndef _POST_MESSAGE_HANDLER_H_
#define _POST_MESSAGE_HANDLER_H_

#include "App.h"

namespace cef
{
    class PostMessageHandler : public CefV8Handler {
    public:
      PostMessageHandler(CefRefPtr<CefBrowser> browser);

      virtual bool Execute(const CefString& name,
                           CefRefPtr<CefV8Value> object,
                           const CefV8ValueList& arguments,
                           CefRefPtr<CefV8Value>& retval,
                           CefString& exception);

      // Provide the reference counting implementation for this class.
      IMPLEMENT_REFCOUNTING(PostMessageHandler);
    
    protected:
        CefRefPtr<CefBrowser> _browser;
    };
}

#endif
