#ifndef _PLUG_COMMON_H_
#define _PLUG_COMMON_H_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( PLUG_LIBRARY_STATIC )
#    define PLUG_EXPORT
#  elif defined( PLUG_LIBRARY )
#    define PLUG_EXPORT   __declspec(dllexport)
#  else
#    define PLUG_EXPORT   __declspec(dllimport)
#  endif
#else
#  define PLUG_EXPORT
#endif

#pragma warning( disable: 4251 )

#include <lua.hpp>
#include <iostream> 

// include the SimCore library:
#include "kernel.h"
#include "log/LogManager.h"
#include "log/FileLogger.h"
#include "log/StdLogger.h"
#include "lua/ModuleProvider.h"
#include "ModuleLoader.h"

using namespace boost;
using namespace sgt;
using namespace osg;

#include <osg/UserDataContainer>
#include <osg/State>

#include "plug_extensions.h"

#include <luna/luna.h>
#include <luna/luna_types.h>

void doLog(int level, const std::string& msg);
void doLogV(int level, const std::string& msg);
void doTrace(int level, const std::string& trace, const std::string& msg);
void doTraceV(int level, const std::string& trace, const std::string& msg);

template <typename dstType>
struct luna_caster<boost::posix_time::time_duration, dstType> {
	static inline dstType* cast(boost::posix_time::time_duration* ptr) {
		return (dstType*)(ptr);
	};
};

#endif
