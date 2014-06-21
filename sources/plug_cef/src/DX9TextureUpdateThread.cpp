#include "plug_common.h"
#include "DX9TextureUpdateThread.h"
#include "DX9RenderTarget.h"


namespace cef
{

DX9TextureUpdateThread::DX9TextureUpdateThread(): _renderTarget(NULL), _done(false) {
  logDEBUG("Creating new DX9TextureUpdateThread.");
}

DX9TextureUpdateThread::~DX9TextureUpdateThread() {
  logDEBUG("Deleting DX9TextureUpdateThread.");
}

void DX9TextureUpdateThread::setRenderTarget(DX9RenderTarget* tgt)
{
	if(isRunning()) {
		_done = true;
		logDEBUG("Waiting for DX9TextureUpdateThread to stop...");
		join();
		logDEBUG("DX9TextureUpdateThread stopped properly.");	
	}
	
	CHECK(!isRunning(),"Cannot change render target when thread is running.");
	
	_renderTarget = tgt;

	if(!_renderTarget)
		return;
	
	// The render target object is valid, so we start the update thread:		
	logDEBUG("Starting DX9TextureUpdateThread...");
	_done = false; // reset the state for a new start.	
	start();
}

void DX9TextureUpdateThread::run()
{
	logDEBUG("Entering DX9TextureUpdate thread");
	
	while (!_done)
	{
		// test cancel just in case:
		// testCancel(); // we do not use this to avoid killing thread the hard way.
		
		CHECK(_renderTarget,"Invalid render target");
		
		if(_renderTarget->IsUpdateNeeded()) {
			_renderTarget->Update();
		}
		else {
			// We just sleep for a few milliseconds:
			microSleep(10000);
		}
	}
   
   logDEBUG("Finished DX9TextureUpdate thread.");
}

}
