#ifndef _CEF_MANAGER_H_
#define _CEF_MANAGER_H_

#include <cef_base.h>
#include <CEFViewBase.h>
#include <CEFManagerUpdateThread.h>

namespace cef
{
    class CEFManager : public CefBase
    {
    public:
        class Traits {
        public:
            /**
             * Creates a new set of traits.
             */
            Traits();

            Traits(const Traits& rhs);
            Traits& operator=(const Traits& rhs);

            /**
             * Returns the sub process path for this session.
             */
            std::string processPath() const;
            bool messageLoop() const;

            /**
                Set the sub process path for this session.
             */
            Traits &processPath(const std::string& path);
            Traits &messageLoop(bool enabled);

        private:
            std::string _processPath;
            bool _messageLoop;
        };

    protected:
        typedef std::vector< CefRefPtr<CEFViewBase> > ViewList;

    public:
        CEFManager( const CEFManager::Traits& traits );
        virtual ~CEFManager( void );


        CEFViewBase* CreateView(const CEFViewBase::Traits& traits);
        void DestroyView(CEFViewBase* view);

        void startThread();
        void stopThread();
        
        // called by the update thread when used:
        void Initialize();
        void Shutdown();
        void Update();

        inline bool IsInitialized() { return _initialized; }
        
    protected:
        virtual CEFViewBase* DoCreateView(const CEFViewBase::Traits& traits) = 0;

        volatile bool _initialized;
        ViewList _views;
        sgtMutex _viewMutex;
        Traits _traits;
        CEFManagerUpdateThread* _updateThread;

        IMPLEMENT_REFCOUNTING(CEFManager); 
    };
}

#endif
