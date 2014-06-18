#ifndef _CEF_VIEW_BASE_H_
#define _CEF_VIEW_BASE_H_

#include "BrowserClient.h"
#include "RenderTarget.h"
#include <cef_base.h>

namespace cef
{
  /**
  This class is used as a base class for all "Views" based on a CEF browser object.
  It is responsible for encapsulating/controlling the browser inputs and javascript commands
  as well as rendering. 
  */
class CEFViewBase : public CefBase
{
  public:

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

  protected:
    void CreateBrowser(const Traits& traits, RenderTarget* tgt);
    
    int _width;
    int _height;

    CefRefPtr<CefBrowser> _browser;
    CefRefPtr<BrowserClient> _browserClient;
    CefRefPtr<RenderTarget> _renderTarget;

  IMPLEMENT_REFCOUNTING(CEFViewBase);    
  };
}

#endif
