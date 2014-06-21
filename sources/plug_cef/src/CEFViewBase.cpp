#include "plug_common.h"
#include "CEFViewBase.h"

namespace cef
{

CEFViewBase::Traits::Traits() :
    _width(1280), _height(720), _url("http://www.google.fr")
{
}

int CEFViewBase::Traits::width() const
{
    return _width;
}

int CEFViewBase::Traits::height() const
{
    return _height;
}

std::string CEFViewBase::Traits::url() const
{
    return _url;
}

CEFViewBase::Traits &CEFViewBase::Traits::size(int width, int height)
{
    _width = width;
    _height = height;
    return *this;
}

CEFViewBase::Traits &CEFViewBase::Traits::url(const std::string& url)
{
    _url = url;
    return *this;
}

CEFViewBase::CEFViewBase(const Traits& traits) {
  logDEBUG("Creating new CEFViewBase.");	

  _width = traits.width();
  _height = traits.height();

  // We prepare the renderhandler:
	_renderHandler = new RenderHandler();
}

CEFViewBase::~CEFViewBase() {
    logDEBUG("Deleting CEFViewBase.");
    Uninitialize();
}

CefRefPtr<CefRenderHandler> CEFViewBase::GetRenderHandler() {
    return _renderHandler.get();
}


void CEFViewBase::InitializeBrowser(const Traits& traits, RenderTarget* tgt) {
  
  logDEBUG("Assigning render target...");

  CHECK(tgt,"Invalid render target.");
  _renderTarget = tgt;
  _renderHandler->SetRenderTarget(tgt);

  std::string url = traits.url();

  // Create the browser window:
  CefWindowInfo window_info;
  CefBrowserSettings browserSettings;

  browserSettings.file_access_from_file_urls = STATE_ENABLED;
  browserSettings.universal_access_from_file_urls = STATE_ENABLED;

  // in linux set a gtk widget, in windows a hwnd. If not available set NULL - may cause some render errors, in context-menu and plugins.
  window_info.SetAsWindowless(NULL,true); // true for transparent.

  logDEBUG("Creating Browser with url=" << url);
  CefBrowserHost::CreateBrowser(window_info, this, url, browserSettings, NULL);
  logDEBUG("Browser creation request made.");

  // inject user-input by calling:
  // browser->GetHost()->SendKeyEvent(...);
  // browser->GetHost()->SendMouseMoveEvent(...);
  // browser->GetHost()->SendMouseClickEvent(...);
  // browser->GetHost()->SendMouseWheelEvent(...);  
}

void CEFViewBase::Initialize()
{
  CHECK(_renderTarget.get(),"Invalid render target.");
  logDEBUG("Initializing ViewBase.")
  _renderTarget->Initialize();
}

void CEFViewBase::Uninitialize()
{
  CHECK(_renderTarget.get(),"Invalid render target.");
  logDEBUG("Uninitializing ViewBase.")
  _renderTarget->Uninitialize();
}

bool CEFViewBase::IsInitialized() {
  CHECK_RET(_renderTarget.get(),false,"Invalid render target.");
  return _renderTarget->IsInitialized();
}

void CEFViewBase::OnAfterCreated(CefRefPtr<CefBrowser> browser)
{
  // Must be executed on the UI thread.
  REQUIRE_UI_THREAD();

  CHECK(browser.get(),"Invalid browser object");
  logDEBUG("Got CefBrowser object in OnAfterCreated()");
  _browser = browser;
}

void CEFViewBase::OnBeforeClose(CefRefPtr<CefBrowser> browser)
{
  // Must be executed on the UI thread.
  REQUIRE_UI_THREAD();

  //CHECK(_browser == browser,"The CefBrowser parameter doesn't match."); // Note that the browser received here will not match apparently!
  logDEBUG("Releasing CefBrowser object in OnBeforeClose()");
  _browser = NULL;
}

void CEFViewBase::ReleaseBrowser() 
{
  if(_browser.get()) {
    _browser->GetHost()->CloseBrowser(false);
  }
}

}
