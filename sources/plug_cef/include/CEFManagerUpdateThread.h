#ifndef _CEF_MANAGER_UPDATE_THREAD_H_
#define _CEF_MANAGER_UPDATE_THREAD_H_

namespace cef
{
	class CEFManager;

	class CEFManagerUpdateThread : public OpenThreads::Thread
	{
	public:
		CEFManagerUpdateThread();
		virtual ~CEFManagerUpdateThread();
		
		virtual void run();

		void setManager(CEFManager* manager);

	protected:
		volatile bool _done;
		CEFManager* _manager;
	};
}

#endif
