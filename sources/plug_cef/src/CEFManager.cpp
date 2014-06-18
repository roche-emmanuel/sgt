#include "plug_common.h"
#include "CEFManager.h"

#include <cef_app.h>

namespace cef
{
// CEF Render to texture implementation taken from:
// http://www.ogre3d.org/forums/viewtopic.php?f=11&t=79079

CEFManager::CEFManager( void )
{
    // Perform initialization of the CEF engine.
    CefSettings settings;

    // checkout detailed settings options http://magpcss.org/ceforum/apidocs/projects/%28default%29/_cef_settings_t.html
    // nearly all the settings can be set via args too.
    settings.multi_threaded_message_loop = false;
    CefString(&settings.browser_subprocess_path).FromASCII("cef_process.exe");
    settings.ignore_certificate_errors = 1;
    settings.windowless_rendering_enabled = 1;
    settings.remote_debugging_port = 8080;
    settings.no_sandbox = 1;
    // CefString(&settings.cache_path).FromASCII("");
    // CefString(&settings.log_file).FromASCII("");
    // settings.log_severity = LOGSEVERITY_DEFAULT;
    // CefString(&settings.resources_dir_path).FromASCII("");
    // CefString(&settings.locales_dir_path).FromASCII("");


    HINSTANCE hInst = (HINSTANCE)GetModuleHandle(NULL);
    CefMainArgs args(hInst);

    // CefInitialize creates a sub-proccess and executes the same executeable, as calling CefInitialize, if not set different in settings.browser_subprocess_path
    // if you create an extra program just for the childproccess you only have to call CefExecuteProcess(...) in it.
    CHECK(CefInitialize(args, settings, NULL, NULL),"Cannot initialize CEF.");
}

CEFManager::~CEFManager( void )
{
    // ensure the update thread is stopped:
    stopThread();

    // Remove all the views:
    _views.clear();

    CefShutdown();
    logDEBUG("Unloaded CEF system.");
}

void CEFManager::startThread()
{
    _updateThread.setManager(this);
}

void CEFManager::stopThread()
{
    _updateThread.setManager(NULL);
}

void CEFManager::Update()
{
    sgtLock lock(_viewMutex);

    //Check if some views should be initialized:
    for(ViewList::iterator it = _views.begin(); it != _views.end(); ++it) {
        // logDEBUG("Checking if view is initialized.");

        if(!((*it)->IsInitialized())) {
            logDEBUG("Initializing View...");
            (*it)->Initialize();
            logDEBUG("View initialized.");
        }
        // logDEBUG("View already initialized.");
    }

    // logDEBUG("Calling CEF DoMessageLoopWork..." );
    CefDoMessageLoopWork();
    // logDEBUG("CEF DoMessageLoopWork done." );       
}

CEFViewBase* CEFManager::CreateView(const CEFViewBase::Traits& traits)
{
    sgtLock lock(_viewMutex);

    // logDEBUG("Adding view to CEF system.");
    CEFViewBase* view = DoCreateView(traits);
    CHECK_RET(view,NULL,"Invalid view created.")
    _views.push_back(view);
    // logDEBUG("View added to CEF system. Ptr="<<(const void*)view);
    return view;
}

void CEFManager::DestroyView(CEFViewBase* view)
{
    sgtLock lock(_viewMutex);
    
    CHECK(view,"Invalid view object.")  
    for(ViewList::iterator it = _views.begin(); it != _views.end(); ++it) {
        if(it->get() == view) {
            _views.erase(it);
            return;
        }
    }
}

}
