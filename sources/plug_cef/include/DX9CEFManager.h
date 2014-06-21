#ifndef _DX9_CEF_MANAGER_H_
#define _DX9_CEF_MANAGER_H_

#include <CEFManager.h>
#include <ComPtr.h>

namespace cef
{
    class DX9CEFManager : public CEFManager
    {

    public:
        DX9CEFManager(const CEFManager::Traits& traits, IDirect3DDevice9* device);
        virtual ~DX9CEFManager();

        IDirect3DTexture9* GetOutputTexture(CEFViewBase* view);
        
    protected:
        virtual CEFViewBase* DoCreateView(const CEFViewBase::Traits& traits);

        ComPtr<IDirect3DDevice9> _device;
    };
}

#endif
