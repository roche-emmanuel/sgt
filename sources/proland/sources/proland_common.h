#ifndef _PROLAND_COMMON_H_
#define _PROLAND_COMMON_H_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( PROLAND_LIBRARY )
#    define PROLAND_API   __declspec(dllexport)
#  else
#    define PROLAND_API   __declspec(dllimport)
#  endif
#else
#  define PROLAND_API
#endif

#pragma warning( disable: 4251 )
#pragma warning( disable: 4244 )

#include "ork_common.h"

#endif
