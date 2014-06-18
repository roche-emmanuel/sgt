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

  // We create the browser client interface:
	_browserClient = new BrowserClient();
}

CEFViewBase::~CEFViewBase() {
    logDEBUG("Deleting CEFViewBase.");
    Uninitialize();
}

void CEFViewBase::InitializeBrowser(const Traits& traits, RenderTarget* tgt) {
  
  logDEBUG("Assigning render target...");

  CHECK(tgt,"Invalid render target.");
  _renderTarget = tgt;
  _browserClient->SetRenderTarget(_renderTarget.get());

  std::string url = traits.url();

  // Create the browser window:
  CefWindowInfo window_info;
  CefBrowserSettings browserSettings;

  browserSettings.file_access_from_file_urls = STATE_ENABLED;
  browserSettings.universal_access_from_file_urls = STATE_ENABLED;

  // in linux set a gtk widget, in windows a hwnd. If not available set NULL - may cause some render errors, in context-menu and plugins.
  window_info.SetAsWindowless(NULL,true); // true for transparent.

  logDEBUG("Creating Browser with url=" << url);
  _browser = CefBrowserHost::CreateBrowserSync(window_info, _browserClient.get(), url, browserSettings, NULL);
  CHECK(_browser.get(),"Invalid browser object.")
  logDEBUG("Browser created.");

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

}
