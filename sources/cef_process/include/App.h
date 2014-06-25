#ifndef _CEF_APP_H_
#define _CEF_APP_H_

#include <cef_app.h>

#include <vector>
#include <sstream>

#define DEBUG_MSG(msg) { std::ostringstream os; os << msg; MessageBox(NULL,os.str().c_str(),"DEBUG",MB_OK); }
#define ERROR_MSG(msg) { std::ostringstream os; os << msg; MessageBox(NULL,os.str().c_str(),"ERROR",MB_OK); }

#define CHECK(val,msg) if(!(val)) { ERROR_MSG(msg); return; }
#define CHECK_RET(val,ret,msg) if(!(val)) { ERROR_MSG(msg); return ret; }

namespace cef
{
    typedef std::vector<CefString> KeyList;

    class App : public CefApp, public CefRenderProcessHandler
    {

    public:
        App() {};
        virtual ~App() {};

        virtual CefRefPtr<CefRenderProcessHandler> GetRenderProcessHandler() { 
            return this; 
        }

        // Methods from RenderProcessHandler:
        virtual void OnContextCreated(
            CefRefPtr<CefBrowser> browser,
            CefRefPtr<CefFrame> frame,
            CefRefPtr<CefV8Context> context);

        virtual void OnContextReleased( 
            CefRefPtr< CefBrowser > browser, 
            CefRefPtr< CefFrame > frame, 
            CefRefPtr< CefV8Context > context );

        virtual bool OnProcessMessageReceived(
            CefRefPtr<CefBrowser> browser,
            CefProcessId source_process,
            CefRefPtr<CefProcessMessage> message);

        virtual void OnWebKitInitialized();

        IMPLEMENT_REFCOUNTING(App);

    protected:
        CefRefPtr<CefV8Context> _context;
    };
}

#endif
