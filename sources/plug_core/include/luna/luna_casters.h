#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<__int64,dstType> {
	static inline dstType* cast(__int64* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<__uint64,dstType> {
	static inline dstType* cast(__uint64* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<HWND,dstType> {
	static inline dstType* cast(HWND* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<uintptr_t,dstType> {
	static inline dstType* cast(uintptr_t* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<void,dstType> {
	static inline dstType* cast(void* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::date_duration,dstType> {
	static inline dstType* cast(boost::gregorian::date_duration* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::date_period,dstType> {
	static inline dstType* cast(boost::gregorian::date_period* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::date,dstType> {
	static inline dstType* cast(boost::gregorian::date* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::day_iterator,dstType> {
	static inline dstType* cast(boost::gregorian::day_iterator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::week_iterator,dstType> {
	static inline dstType* cast(boost::gregorian::week_iterator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::month_iterator,dstType> {
	static inline dstType* cast(boost::gregorian::month_iterator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::gregorian::year_iterator,dstType> {
	static inline dstType* cast(boost::gregorian::year_iterator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::time_duration,dstType> {
	static inline dstType* cast(boost::posix_time::time_duration* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::hours,dstType> {
	static inline dstType* cast(boost::posix_time::hours* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::minutes,dstType> {
	static inline dstType* cast(boost::posix_time::minutes* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::seconds,dstType> {
	static inline dstType* cast(boost::posix_time::seconds* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::milliseconds,dstType> {
	static inline dstType* cast(boost::posix_time::milliseconds* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::microseconds,dstType> {
	static inline dstType* cast(boost::posix_time::microseconds* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::ptime,dstType> {
	static inline dstType* cast(boost::posix_time::ptime* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<boost::posix_time::time_period,dstType> {
	static inline dstType* cast(boost::posix_time::time_period* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::Mutex,dstType> {
	static inline dstType* cast(OpenThreads::Mutex* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::DeleteHandler,dstType> {
	static inline dstType* cast(osg::DeleteHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Observer,dstType> {
	static inline dstType* cast(osg::Observer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::UserDataContainer,dstType> {
	static inline dstType* cast(osg::UserDataContainer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::CopyOp,dstType> {
	static inline dstType* cast(osg::CopyOp* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<sgt::ModuleManager,dstType> {
	static inline dstType* cast(sgt::ModuleManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< sgt::LogSink > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< sgt::LogSink > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< int, int >,dstType> {
	static inline dstType* cast(std::map< int, int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, int >,dstType> {
	static inline dstType* cast(std::map< std::string, int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< std::string >,dstType> {
	static inline dstType* cast(std::set< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::istream,dstType> {
	static inline dstType* cast(std::istream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::ostream,dstType> {
	static inline dstType* cast(std::ostream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::ScopedLock< OpenThreads::Mutex >,dstType> {
	static inline dstType* cast(OpenThreads::ScopedLock< OpenThreads::Mutex >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

