#ifndef _CEF_MANAGER_H_
#define _CEF_MANAGER_H_

#include <cef_base.h>
#include <CEFViewBase.h>
#include <CEFManagerUpdateThread.h>

namespace cef
{
    class CEFManager : public CefBase
    {
    protected:
        typedef std::vector< CefRefPtr<CEFViewBase> > ViewList;

    public:
        CEFManager( void );
        virtual ~CEFManager( void );

        void Update();

        CEFViewBase* CreateView(const CEFViewBase::Traits& traits);
        void DestroyView(CEFViewBase* view);

        void startThread();
        void stopThread();
        
    protected:
        virtual CEFViewBase* DoCreateView(const CEFViewBase::Traits& traits) = 0;

        ViewList _views;
        sgtMutex _viewMutex;
        CEFManagerUpdateThread _updateThread;

        IMPLEMENT_REFCOUNTING(CEFManager); 
    };
}

#endif
