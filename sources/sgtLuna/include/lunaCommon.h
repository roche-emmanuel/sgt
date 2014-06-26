#ifndef LUNA_COMMON_
#define LUNA_COMMON_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( SGTLUNA_LIB_STATIC )
    #    define SGTLUNA_EXPORT
    #  elif defined( SGTLUNA_LIB )
    #    define SGTLUNA_EXPORT   __declspec(dllexport)
    #  else
    #    define SGTLUNA_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define SGTLUNA_EXPORT
#endif  

#ifdef WIN32
#include <windows.h>
#endif

// Default includes:
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

#include <lua.hpp>

#define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG

#include <boost/any.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/cstdint.hpp>
#include <boost/type_traits.hpp>
#include <boost/thread.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/chrono.hpp>
#include <boost/foreach.hpp>
#include <boost/tokenizer.hpp>
#include <boost/variant.hpp>

#include <osg/Object>
#include <osg/ref_ptr>
#include <osg/observer_ptr>
#include <osg/Math>
#include <OpenThreads/Mutex>
#include <OpenThreads/ScopedLock>
#include <OpenThreads/Thread>

#ifndef _MSC_VER
typedef boost::int64_t __int64;
#endif

typedef boost::uint64_t __uint64;

typedef OpenThreads::Mutex sgtMutex;

typedef OpenThreads::ScopedLock<sgtMutex> sgtLock;

#define sgtPtr osg::ref_ptr
#define sgtObserver osg::observer_ptr
#define AnyCast boost::any_cast 

#include "base/Exception.h"
#include "sgtLogging.h"

// Helper macros:
#define FOREACH BOOST_FOREACH

#define SCOPELOCK(m) sgtLock lock(m); 

#define REMOVE(cont,item) cont.erase(std::remove(cont.begin(), cont.end(), item), cont.end());

// Removes only if predicate returns true:
#define REMOVE_IF(cont,pred) cont.erase(std::remove_if(cont.begin(), cont.end(), pred), cont.end());

#define DEBUG_MSG(msg) { std::ostringstream os; os << msg; MessageBox(NULL,os.str().c_str(),"DEBUG",MB_OK); }

// Debugging macros:
#define THROW(msg) { std::ostringstream os; os << msg; logERROR("Throwing exception: " << msg); throw sgtException(os.str()); }
#define THROW_IF(cond,msg) if(cond) { std::ostringstream os; os << msg; logERROR("Throwing exception: " << msg); throw sgtException(os.str()); }
#define CHECK_EQ(val,expected,msg) if((val)!=(expected)) { logERROR(msg << " (Expected: " << (expected) << " and got: " << (val) << ")"); return; }
#define CHECK_EQ_RET(val,expected,ret,msg) if((val)!=(expected)) { logERROR(msg << " (Expected: " << (expected) << " and got: " << (val) << ")"); return ret; }

#define CHECK(val,msg) if(!(val)) { logERROR(msg); return; }
#define CHECK_RET(val,ret,msg) if(!(val)) { logERROR(msg); return ret; }

#define THROW_IF_FAILED(cond,msg) if(FAILED(cond)) { std::ostringstream os; os << msg; logERROR("Throwing exception: " << msg); throw sgtException(os.str().c_str()); }

#define CHECK_RESULT(val,msg) { HRESULT hr = (val); if(FAILED(hr)) { logERROR(msg << ", err=" << DXGetErrorString(hr) << ", desc=" << DXGetErrorDescription(hr)); return; } }
#define CHECK_RESULT_RET(val,ret,msg) { HRESULT hr = (val); if(FAILED(hr)) { logERROR(msg << ", err=" << DXGetErrorString(hr) << ", desc=" << DXGetErrorDescription(hr)); return ret; } }

#define DEPRECATED(msg) { logWARN("Deprecated: " << msg); }

#define TRY try
#define CATCH(msg) catch(const std::exception& e) { \
		logERROR("Std exception " << msg << ": " << e.what()); \
	} \
		catch(...) { \
		logERROR("Unknown exception " << msg << "."); \
	}

typedef int (* EnvInit_t)(lua_State* L);

extern "C" {

SGTLUNA_EXPORT void openLanes(lua_State* L);
SGTLUNA_EXPORT void setLuaEnvInitFunction(EnvInit_t func);

}

#endif
