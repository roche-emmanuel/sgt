#ifndef _CEF_VIEW_BASE_H_
#define _CEF_VIEW_BASE_H_

#include "RenderHandler.h"
#include "RenderTarget.h"
#include <cef_client.h>
#include <cef_life_span_handler.h>

namespace cef
{
  /**
  This class is used as a base class for all "Views" based on a CEF browser object.
  It is responsible for encapsulating/controlling the browser inputs and javascript commands
  as well as rendering. 
  */
class CEFViewBase : 
#ifdef __DOXYGEN__
public CefBase // just pretend this is a CefBase object.
#else
public CefClient, public CefLifeSpanHandler, public CefDisplayHandler
#endif
{
  public:

  typedef std::vector< CefRefPtr<CefProcessMessage> > MessageList;

  class Traits {
    public:
        /**
         * Creates a new set of traits.
         */
        Traits();

        /**
         * Returns the desired width.
         */
        int width() const;

        /**
         * Returns the desired height.
         */
        int height() const;

        /**
         * Returns the OpenGL version to use.
         */
        std::string url() const;

        /**
         * Sets the window size.
         *
         * @param width the window width.
         * @param height the window height.
         */
        Traits &size(int width, int height);

        /**
         * Sets the OpenGL context options.
         *
         * @param major the major version to use.
         * @param minor the minor version to use.
         * @param debug true to use a debug context.
         */
        Traits &url(const std::string& url);

    private:
        std::string _url;
        int _width;
        int _height;
    };
      
  public:
    CEFViewBase(const Traits& traits);
    virtual ~CEFViewBase();
    
    virtual bool IsInitialized();
    virtual void Initialize();
    virtual void Uninitialize();

    inline bool isBrowserReady() { return _browser!=NULL; }

    // Reload the current page:
    void Reload(bool nocache = false);

    void PostMessage(CefRefPtr<CefProcessMessage> message);

    // Used to retrieve the list of messages received until the latest
    // call of this function.
    // When receiving a message, it will simply be pushed on the internal message list
    // and left for later processing (maybe in another thread.)
    // This method also return the number of messages that were collected.
    int CollectMessages(MessageList* list);

    bool HasPendingMessage() { return !_messages.empty(); }
    CefRefPtr<CefProcessMessage> GetPendingMessage();

    /** LUNA_IGNORED 
    The following method is called when a process message is received.
    */
    virtual bool OnProcessMessageReceived( CefRefPtr< CefBrowser > browser, CefProcessId source_process, CefRefPtr< CefProcessMessage > message );

    /** LUNA_IGNORED */
    void InitializeBrowser(const Traits& traits, RenderTarget* tgt);

    /** LUNA_IGNORED */
    void ReleaseBrowser();

    /** LUNA_IGNORED */
    inline RenderTarget* GetRenderTarget() { return _renderTarget.get(); }

        
    // methods from CefClient:

    /** LUNA_IGNORED */
    virtual CefRefPtr<CefRenderHandler> GetRenderHandler();

    /** LUNA_IGNORED */
    virtual CefRefPtr<CefDisplayHandler> GetDisplayHandler() {
        return this;
    }

    /** LUNA_IGNORED */
    virtual CefRefPtr<CefLifeSpanHandler> GetLifeSpanHandler() {
        return this;
    }

    // methods from CefLifeSpanHandler:
    /** LUNA_IGNORED*/
    virtual void OnAfterCreated(CefRefPtr<CefBrowser> browser);   
    /** LUNA_IGNORED*/ 
    virtual void OnBeforeClose(CefRefPtr<CefBrowser> browser);

    // methods from CefDisplayHandler:
    /** LUNA_IGNORED*/ 
    virtual bool OnConsoleMessage( CefRefPtr< CefBrowser > browser, const CefString& message, const CefString& source, int line );

  protected:
    int _width;
    int _height;

    MessageList _messages; // The messages received on the Browser process.
    sgtMutex _messageMutex;

    CefRefPtr<CefBrowser> _browser;

    CefRefPtr<RenderHandler> _renderHandler;
    CefRefPtr<RenderTarget> _renderTarget;

  IMPLEMENT_REFCOUNTING(CEFViewBase);    
  };
}

#endif
