#ifndef THREADINGMODEL_H_
#define THREADINGMODEL_H_

#include <lunaCommon.h>

namespace sgt {

/** template class providing no multithreaded support at all.*/
template <class Host, class MutexPolicy = sgtMutex>
class SingleThreaded
{
public:
	/// \struct Lock
	/// Dummy Lock class
	struct Lock
	{
		Lock() {}
		explicit Lock(const SingleThreaded&) {}
		explicit Lock(const SingleThreaded*) {}
	};

	typedef Host VolatileType;
};


/** Template class implementing the object level lock concept.*/
template < class Host, class MutexPolicy = sgtMutex >
class ObjectLevelLockable
{
	mutable MutexPolicy _mtx;

public:
	ObjectLevelLockable() : _mtx() {}

	ObjectLevelLockable(const ObjectLevelLockable&) : _mtx() {}

	~ObjectLevelLockable() {}

	class Lock;
	friend class Lock;

	///  \struct Lock
	///  Lock class to lock on object level
	class Lock
	{
	public:

		/// Lock object
		explicit Lock(const ObjectLevelLockable& host) : _host(host)
		{
			int res = _host._mtx.lock();
			CHECK(res==0,"Cannot lock ObjectLevelLockable, res="<<res);
		}

		/// Lock object
		explicit Lock(const ObjectLevelLockable* host) : _host(*host)
		{
			int res = _host._mtx.lock();
			CHECK(res==0,"Cannot lock ObjectLevelLockable, res="<<res);
		}

		/// Unlock object
		~Lock()
		{
			int res = _host._mtx.unlock();
			CHECK(res==0,"Cannot unlock ObjectLevelLockable, res="<<res);
		}

	private:
		/// private by design of the object level threading
		Lock();
		Lock(const Lock&);
		Lock& operator=(const Lock&);
		const ObjectLevelLockable& _host;
	};

	typedef volatile Host VolatileType;
};

/** Template class implementing the class level lock concept.*/
template <class Host, class MutexPolicy = sgtMutex >
class ClassLevelLockable
{
	struct Initializer
	{
		bool _init;
		MutexPolicy _mtx;

		Initializer() : _init(false), _mtx()
		{
			_init = true;
		}

		~Initializer()
		{
			CHECK(_init,"ClassLevelLocable not initialized.");
		}
	};

	static Initializer _initializer;

public:

	class Lock;
	friend class Lock;

	///  \struct Lock
	///  Lock class to lock on class level
	class Lock
	{
	public:

		/// Lock class
		Lock()
		{
			THROW_IF(!_initializer._init,"ClassLevelLocable not initialized.");
			_initializer._mtx.lock();
			trINFO_V("Lock","Created ClassLevel lock");
		}

		/// Lock class
		explicit Lock(const ClassLevelLockable&)
		{
			THROW_IF(!_initializer._init,"ClassLevelLocable not initialized.");
			_initializer._mtx.lock();
			trINFO_V("Lock","Created ClassLevel lock");
		}

		/// Lock class
		explicit Lock(const ClassLevelLockable*)
		{
			THROW_IF(!_initializer._init,"ClassLevelLocable not initialized.");
			_initializer._mtx.lock();
			trINFO_V("Lock","Created ClassLevel lock");
		}

		/// Unlock class
		~Lock()
		{
			THROW_IF(!_initializer._init,"ClassLevelLocable not initialized.");
			_initializer._mtx.unlock();
			trINFO_V("Lock","Destroyed ClassLevel lock");
		}

	private:
		Lock(const Lock&);
		Lock& operator=(const Lock&);
	};

	typedef volatile Host VolatileType;
};

template < class Host, class MutexPolicy >
typename ClassLevelLockable< Host, MutexPolicy >::Initializer
ClassLevelLockable< Host, MutexPolicy >::_initializer;

} /* namespace sgt */

#endif /* THREADINGMODEL_H_ */
