#ifndef _DX9_TEXTURE_UPDATE_THREAD_H_
#define _DX9_TEXTURE_UPDATE_THREAD_H_

namespace cef
{
	class DX9RenderTarget;

	class DX9TextureUpdateThread : public OpenThreads::Thread
	{
	public:
		DX9TextureUpdateThread();
		virtual ~DX9TextureUpdateThread();
		
		virtual void run();

		/** This method is used to assign a render target to this thread and thus
		start the Texture update operation. When a NULL parameter is provided, then
		the thread is stopped if running.*/
		void setRenderTarget(DX9RenderTarget* tgt);

	protected:
		volatile bool _done;
		DX9RenderTarget* _renderTarget;
	};
}

#endif
