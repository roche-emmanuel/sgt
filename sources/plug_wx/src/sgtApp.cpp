#include <plug_common.h>
#include <sgtApp.h>

#include <boost/thread.hpp>

wxIMPLEMENT_APP_NO_MAIN(sgtApp);

void entry_point() {
	int num = 0;
	logDEBUG0_V("Executing wxEntry.");
	wxEntry(num,(wxChar**)NULL);
	logDEBUG0_V("Done executing wxEntry.");
}

class AppInstance {
public:
    AppInstance() {
    	if(!wxTheApp) {
            logDEBUG0_V("Starting wxApp.");
            wxDISABLE_DEBUG_SUPPORT();

#if 1
            int num = 0;
			THROW_IF(!wxEntryStart(num,(wxChar**)NULL),"Catastrophic error in wxEntryStart()");
            logDEBUG0_V("wxApp started.");
			// restore the locale:
			setlocale(LC_NUMERIC,"C");			
			wxTheApp->OnInit();
#else
			boost::thread(entry_point);
#endif
        }
    }
    
    ~AppInstance() {
		std::cout << "(cout) Destroying wx module." << std::endl;
        logDEBUG0_V("Destroying wx module.");
    }
};

static AppInstance instance;
