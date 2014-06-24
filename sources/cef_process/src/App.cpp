#include "App.h"
#include "PostMessageHandler.h"

namespace cef
{

void App::OnContextCreated(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {
    if(browser->GetMainFrame() != frame) {
        return;
    }

    CHECK(!_context.get(),"Main context was already created.");
    _context = context;        

    // once the context is create, we should assign the global cef object to it:
    // Retrieve the context's window object.
    CefRefPtr<CefV8Value> window = context->GetGlobal();
    
    // Now create a new "cef" object:
    CefRefPtr<CefV8Value> cef = CefV8Value::CreateObject(NULL);

    // Assign this new object to the window:
    window->SetValue("cef", cef, V8_PROPERTY_ATTRIBUTE_NONE);

    // Next we need to add the handler to post new messages from javascript:
    CefRefPtr<CefV8Handler> handler = new PostMessageHandler(browser);

    // Create the "myfunc" function.
    CefRefPtr<CefV8Value> func = CefV8Value::CreateFunction("postMessage", handler);

    // Add the "postMessage" function to the "cef" object.
    cef->SetValue("postMessage", func, V8_PROPERTY_ATTRIBUTE_NONE);

}

void App::OnContextReleased(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {

    if(browser->GetMainFrame() != frame) {
        return;
    }

    CHECK(_context.get(),"Main context was not created before release.");
    _context = NULL;
}

bool App::OnProcessMessageReceived(CefRefPtr<CefBrowser> browser, CefProcessId source_process,CefRefPtr<CefProcessMessage> message)
{
    // Check if we received the message from the browser process:
    if(source_process!=PID_BROWSER) {
        ERROR_MSG("Received ProcessMessage from process " << source_process);
        return false;
    }

    // Once we received this message, we need to convert it into arguments for a call of the message handling
    // method in javascript.

    return true;
}

}
