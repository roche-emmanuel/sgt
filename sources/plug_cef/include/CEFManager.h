#ifndef _CEF_MANAGER_H_
#define _CEF_MANAGER_H_

#include <cef_base.h>
#include <CEFViewBase.h>

namespace cef
{
    class CEFManager : public CefBase
    {
    protected:
        typedef std::vector< CefRefPtr<CEFViewBase> > ViewList;

    public:
        CEFManager( void );
        ~CEFManager( void );

        void Update();

        CEFViewBase* CreateView(const CEFViewBase::Traits& traits);
        void DestroyView(CEFViewBase* view);

    protected:
        virtual CEFViewBase* DoCreateView(const CEFViewBase::Traits& traits) = 0;

        ViewList _views;

        IMPLEMENT_REFCOUNTING(CEFManager); 
    };
}

#endif
