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

void CEFViewBase::PostMessage(CefRefPtr<CefProcessMessage> message)
{
  // when we receive a message to send, we simply forward this message to the renderer process:
  CHECK(isBrowserReady(),"Cannot send message when browser is not ready.");
  _browser->SendProcessMessage(PID_RENDERER,message);
}

int CEFViewBase::CollectMessages(MessageList* list)
{
  sgtLock lock(_messageMutex);

  if(_messages.empty())
    return 0;

  int num = _messages.size();

  // Inject the new messages in the provided list:
  list->insert(list->end(),_messages.begin(),_messages.end());

  // remove the messages from the internal list:
  _messages.clear();

  // ensure that all messages are valid:
  // for(MessageList::iterator it = list->begin(); it!=list->end(); ++it) {
  //   CHECK_RET((*it)->IsValid(),0,"Found invalid message in MessageList.");
  //   logDEBUG("List contains valid process message with name: '" << (*it)->GetName().ToString()<<"'");
  // }

  return num;
}

CefRefPtr<CefProcessMessage> CEFViewBase::GetPendingMessage()
{
  sgtLock lock(_messageMutex);

  if(_messages.empty())
    return NULL;

  CefRefPtr<CefProcessMessage> result = _messages.front();
  _messages.erase(_messages.begin());

  return result;
}

bool CEFViewBase::OnProcessMessageReceived( CefRefPtr< CefBrowser > browser, CefProcessId source_process, CefRefPtr< CefProcessMessage > message )
{
  // first check the message is valid:
  if(!message->IsValid()) {
    logERROR("Received invalid ProcessMessage in browser process.");
    return false;
  }

  // DEBUG_MSG("Received ProcessMessage '"<< message->GetName().ToString() <<"' in browser process.");
  logDEBUG("Received ProcessMessage '"<< message->GetName().ToString() <<"' in browser process.");

  // accodrding to docs: http://magpcss.org/ceforum/apidocs3/projects/(default)/CefClient.html#OnProcessMessageReceived(CefRefPtr<CefBrowser>,CefProcessId,CefRefPtr<CefProcessMessage>)
  // we should not keep a reference or attempt to access the message outside of the callback, so we have to make a copy of it:
  // logDEBUG("making copy of process message.");
  CefRefPtr<CefProcessMessage> copy = message->Copy();

  // check that the newly create message is valid:
  CHECK_RET(copy->IsValid(),false,"Invalid message copy.");

  // logDEBUG("locking message mutex");
  sgtLock lock(_messageMutex);

  // push the message on the internal list:
  // logDEBUG("pushing message on stack.");
  _messages.push_back(copy);

  // logDEBUG("Done handling process message.");
  // Notify that the message was handled properly:
  return true;
}

void CEFViewBase::Reload(bool nocache)
{
  CHECK(isBrowserReady(),"Browser is not ready.");

  if(nocache) {
    _browser->ReloadIgnoreCache();
  }
  else {
    _browser->Reload();
  }

}

}
