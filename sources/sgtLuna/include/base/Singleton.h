#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <lunaCommon.h>
#include "base/ThreadingModel.h"

namespace sgt {

/** Singleton creator policy.*/
template <typename T>
class SingletonRefCreator {
public:
	typedef sgtPtr<T> singleton_holder_type;
	
public:
	static T* create() {
		return new T();
	};
	static void destroy(T* obj) {
		// do nothing.
	};
};

/** Singleton initializer. */
template <typename T>
class SingletonNoInitializer {
public:
	static void initialize(T& singleton) {
		// do nothing;
	};
	static void uninitialize(T& singleton) {
		// do nothing;
	};
};

/** Singleton getter. */
template <typename ObjectType, typename InstanceType>
class SingletonRefHandler {
public:
	static ObjectType* get(const InstanceType& singleton) {
		// Extract the pointer from the referenced object:
		return (const_cast< sgtPtr<ObjectType>& >(singleton)).get();
	};

	static void set(const InstanceType& singleton, ObjectType* obj) {
		// Extract the pointer from the referenced object:
		sgtPtr<ObjectType>& ptr = (const_cast< sgtPtr<ObjectType>& >(singleton));
		ptr = obj;
	};
};

/** Template used to create referenced singleton objects.
*/
template <typename T,
	template <class> class CreationPolicy = SingletonRefCreator,
	template <class> class InitPolicy = SingletonNoInitializer,
	template <class, class> class HandlerPolicy = SingletonRefHandler,
	template <class, class> class ThreadingModel = ClassLevelLockable,
	typename MutexPolicy = sgtMutex>
class SingletonHolder : public T {
public:
	typedef typename ThreadingModel<typename CreationPolicy<T>::singleton_holder_type,MutexPolicy>::VolatileType InstanceType;
	typedef T ObjectType;
	typedef HandlerPolicy<ObjectType,InstanceType> Handler;

protected:
	/** Default constructor. 
	Protected for singleton pattern.
	*/
	SingletonHolder() {};

	/** Copy constructor intentionally left unimplemented (to respect the singleton pattern).*/
	SingletonHolder(const SingletonHolder&) { THROW_IF(true,"Singleton copy constructor called."); };
	/** Assignment operator intentionally left unimplemented (to respect the singleton pattern).*/
	SingletonHolder& operator=(const SingletonHolder&)  { THROW_IF(true,"Singleton assignment operator called."); };
	
public:
	/** Retrieve the singleton instance of this class. */
	static T& instance() {
		if(!Handler::get(_singleton)) {
			typename ThreadingModel<SingletonHolder,MutexPolicy>::Lock guard;

			if (!Handler::get(_singleton)) {
				ObjectType* obj = CreationPolicy<T>::create();
				Handler::set(_singleton,obj);

				InitPolicy<T>::initialize(*obj);
			}
		}

		return *Handler::get(_singleton);
	}
	
	/** Used to destroy the actual singleton object.*/
	static void destroy() {
		if(Handler::get(_singleton)) {
			typename ThreadingModel<SingletonHolder,MutexPolicy>::Lock guard;

			if (!Handler::get(_singleton)) {
				ObjectType* obj = Handler::get(_singleton);
				// Destroy the singleton:
				InitPolicy<T>::uninitialize(*obj);
				Handler::set(_singleton,NULL);
			}
		}
	}

	/** Check if the instance of this class is already constructed. */
	static bool isInstanciated() {
		return Handler::get(_singleton)!=NULL;
	}
	
private:
	static InstanceType _singleton;
};


template <typename T,
template <class> class CreationPolicy,
template <class> class InitPolicy,
template <class, class> class HandlerPolicy,
template <class, class> class ThreadingModel,
typename MutexPolicy>
typename SingletonHolder<T, CreationPolicy, InitPolicy, HandlerPolicy, ThreadingModel, MutexPolicy>::InstanceType
SingletonHolder<T, CreationPolicy, InitPolicy, HandlerPolicy, ThreadingModel, MutexPolicy>::_singleton;


} /* namespace sgt */

#define DECLARE_SINGLETON(BaseType,SingletonType,ExportConvention) \
class ExportConvention SingletonType { \
protected: \
	SingletonType(); \
	~SingletonType(); \
public: \
	static BaseType& instance(); \
	static void destroy(); \
	static bool isInstanciated(); \
};

//	typedef SingletonHolder<BaseType> SingletonType;
		
//template class ExportConvention SingletonHolder<BaseType>; // force template export
// 

#define IMPLEMENT_SINGLETON(BaseType, SingletonType) \
template class SingletonHolder<BaseType>; \
BaseType& SingletonType::instance() { \
	return SingletonHolder<BaseType>::instance(); \
} \
\
void SingletonType::destroy() { \
	return SingletonHolder<BaseType>::destroy(); \
} \
\
bool SingletonType::isInstanciated() { \
	return SingletonHolder<BaseType>::isInstanciated(); \
}

//template <> SingletonType::InstanceType SingletonType::_singleton;

#endif /* SINGLETON_H_ */
