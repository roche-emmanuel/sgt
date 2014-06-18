#ifndef _CEF_DX9_RENDER_TARGET_H_
#define _CEF_DX9_RENDER_TARGET_H_

#include <RenderTarget.h>
#include <ComPtr.h>
#include <DX9TextureUpdateThread.h>

namespace cef
{
	class DX9RenderTarget : public RenderTarget
	{
	public:
		DX9RenderTarget(IDirect3DDevice9* device, int width, int height);
		virtual ~DX9RenderTarget();

		/** Main method used to draw some content on a target texture. This must be re-implemented. LUNA_IGNORED. */
		virtual void PaintRects(const CefRenderHandler::RectList &dirtyRects, const void *buffer);

		virtual void Initialize();
		virtual void Uninitialize();
		virtual bool IsInitialized();

		/** check if some rects where painted since the last update. */
		inline bool IsUpdateNeeded() { return _updateNeeded; }

		/** Perform the actual upload of the memtexture onto the GPU texture. */
		void Update();

		inline IDirect3DTexture9* GetGPUTexture() { return _gpuTexture.Get(); }
		
	protected:
		volatile bool _updateNeeded;
		sgtMutex _textureMutex;
		DX9TextureUpdateThread _updateThread;

		ComPtr<IDirect3DDevice9> _device;
		ComPtr<IDirect3DTexture9> _memTexture;
		ComPtr<IDirect3DTexture9> _gpuTexture;
	};
}

#endif
