#ifndef _ORK_COMMON_H_
#define _ORK_COMMON_H_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( ORK_LIBRARY )
#    define ORK_API   __declspec(dllexport)
#  else
#    define ORK_API   __declspec(dllimport)
#  endif
#else
#  define ORK_API
#endif

#pragma warning( disable: 4251 )
#pragma warning( disable: 4244 )

// prevent inclusion of windef here:
#include "lunaCommon.h"

#include <assert.h>
#include <cassert>

#ifdef assert
#undef assert
#endif

#define assert(e) ASSERT(e)

typedef boost::uint8_t uint8_t;
typedef boost::int8_t int8_t;
typedef boost::uint16_t uint16_t;
typedef boost::int16_t int16_t;
typedef boost::uint32_t uint32_t;
typedef boost::int32_t int32_t;
typedef boost::uint64_t uint64_t;
typedef boost::int64_t int64_t;

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif

#ifdef near
#undef near
#endif

#ifdef far
#undef far
#endif

#endif
