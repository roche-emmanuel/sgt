#include "plug_common.h"
#include "CEFManagerUpdateThread.h"
#include "CEFManager.h"


namespace cef
{

CEFManagerUpdateThread::CEFManagerUpdateThread(): _manager(NULL), _done(false) {
  logDEBUG("Creating new CEFManagerUpdateThread.");
}

CEFManagerUpdateThread::~CEFManagerUpdateThread() {
  logDEBUG("Deleting CEFManagerUpdateThread.");
}

void CEFManagerUpdateThread::setManager(CEFManager* manager)
{
	if(isRunning()) {
		_done = true;
		logDEBUG("Waiting for CEFManagerUpdateThread to stop...");
		join();
		logDEBUG("CEFManagerUpdateThread stopped properly.");	
	}
	
	CHECK(!isRunning(),"Cannot change CEFManager when thread is running.");
	
	_manager = manager;

	if(!_manager)
		return;
	
	// The render target object is valid, so we start the update thread:		
	logDEBUG("Starting CEFManagerUpdateThread...");
	_done = false; // reset the state for a new start.	
	start();
}

void CEFManagerUpdateThread::run()
{
	logDEBUG("Entering CEFManagerUpdate thread");
	
	// first perform initialization:
	_manager->Initialize();
	logDEBUG("CEFManager init done.");

	while (!_done)
	{
		// test cancel just in case:
		// testCancel(); // we do not use this to avoid killing thread the hard way.
		
		CHECK(_manager,"Invalid render target");
		
		_manager->Update();

		// We just sleep for a few milliseconds:
		microSleep(10000);
	}
	
	logDEBUG("Shutting down CEFManager.")
	_manager->Shutdown();

  logDEBUG("Finished CEFManagerUpdate thread.");
}

}
