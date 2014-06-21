#include "plug_common.h"
#include "CEFManager.h"

#include <cef_app.h>

namespace cef
{
// CEF Render to texture implementation taken from:
// http://www.ogre3d.org/forums/viewtopic.php?f=11&t=79079


CEFManager::Traits::Traits() : _processPath("cef_process.exe"), _messageLoop(false)
{
}

CEFManager::Traits::Traits(const CEFManager::Traits& rhs)
{
    *this = rhs;
}

CEFManager::Traits& CEFManager::Traits::operator=(const CEFManager::Traits& rhs)
{
    _processPath = rhs._processPath;
    _messageLoop = rhs._messageLoop;
    return *this;
}

std::string CEFManager::Traits::processPath() const
{
    return _processPath;
}

bool CEFManager::Traits::messageLoop() const
{
    return _messageLoop;
}

CEFManager::Traits &CEFManager::Traits::processPath(const std::string& path)
{
    _processPath = path;
    return *this;
}

CEFManager::Traits &CEFManager::Traits::messageLoop(bool enabled)
{
    _messageLoop = enabled;
    return *this;
}

CEFManager::CEFManager( const CEFManager::Traits& traits ) : _updateThread(NULL), _initialized(false)
{
    logDEBUG("Initializing CEFManager.");
    _traits = traits;
}

CEFManager::~CEFManager( void )
{
    // logDEBUG("Deleting CEFManager.");
    // ensure the update thread is stopped:
    stopThread();
}

void CEFManager::Initialize()
{
#if 1
    sgtLock lock(_viewMutex);

    // Perform initialization of the CEF engine.
    CefSettings settings;

    // checkout detailed settings options http://magpcss.org/ceforum/apidocs/projects/%28default%29/_cef_settings_t.html
    // nearly all the settings can be set via args too.
    settings.multi_threaded_message_loop = false; //traits.messageLoop();
    CefString(&settings.browser_subprocess_path).FromASCII(_traits.processPath().c_str()); //;"cef_process.exe"); //
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
    logDEBUG("Calling CefInitialize...")
    CHECK(CefInitialize(args, settings, NULL, NULL),"Cannot initialize CEF.");
    logDEBUG("Done calling CefInitialize.")
    _initialized = true;
#endif
}

void CEFManager::Shutdown()
{
    sgtLock lock(_viewMutex);

    // first we destroy all the browsers:
    for(ViewList::iterator it = _views.begin(); it != _views.end(); ++it) {
        CEFViewBase* view = it->get();
        view->ReleaseBrowser();
        while(view->isBrowserReady()) {
            logDEBUG("Waiting for CEFViewBase Browser to be released...");
            Sleep(30); // wait 50 ms.
        }
    }

    // Remove all the views:
    _views.clear();    

    _initialized = false;
    CefShutdown();
    logDEBUG("Unloaded CEF system.");
}


void CEFManager::startThread()
{   
    if(!_updateThread)
        _updateThread = new CEFManagerUpdateThread();

    _updateThread->setManager(this);

    while(!_initialized) {
        logDEBUG("Waiting for CEFManager to be initialized...");
        Sleep(50); // wait 50 ms.
    }
}

void CEFManager::stopThread()
{
    if(_updateThread)
        _updateThread->setManager(NULL);
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
    CEFViewBase* view = NULL;

    {
        sgtLock lock(_viewMutex);

        // logDEBUG("Adding view to CEF system.");
        view = DoCreateView(traits);
        CHECK_RET(view,NULL,"Invalid view created.")
        _views.push_back(view);
    }

    // Now wait for the Browser to become ready:
    while(!view->isBrowserReady()) {
        logDEBUG("Waiting for CEFViewBase Browser to become ready...");
        Sleep(50); // wait 50 ms.
    }

    // logDEBUG("View added to CEF system. Ptr="<<(const void*)view);
    return view;
}

void CEFManager::DestroyView(CEFViewBase* view)
{
    sgtLock lock(_viewMutex);
    
    CHECK(view,"Invalid CEFViewBase object.");

    view->ReleaseBrowser();
    while(view->isBrowserReady()) {
        logDEBUG("Waiting for CEFViewBase Browser to be released...");
        Sleep(50); // wait 50 ms.
    }

    CHECK(view,"Invalid view object.")  
    for(ViewList::iterator it = _views.begin(); it != _views.end(); ++it) {
        if(it->get() == view) {
            _views.erase(it);
            return;
        }
    }
}

}
