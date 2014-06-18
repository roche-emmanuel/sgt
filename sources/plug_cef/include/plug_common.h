#ifndef PLUG_COMMON_
#define PLUG_COMMON_

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

// Insert your includes here.
#include <cef_base.h>
#include "CEFViewBase.h"

// Insert your using namespace commands here.
using namespace cef;

#include "plug_extensions.h"

#include <luna/luna.h>
#include <luna/luna_types.h>


// Insert your specific caster definition here.
// example: 
/*
LUNA_DEFINE_DIRECT_CAST(MyNamespace::MyNonPolymorphicBaseClass)
*/

// Insert any specific value getter/setter here.
// - use "arg" as a valid pointer on the class.
// - use "L" as lua state
// - use "index" as current stack index
// examples:
/*
LUNA_BEGIN_SETTER(MyClass)
	std::string lret_str = arg->asString();
	lua_pushlstring(L,lret_str.data(),lret_str.size());
LUNA_END_SETTER(MyClass)

LUNA_BEGIN_GETTER(MyClass)
	std::string str = lua_tostring(L,index);
	return MyClass(str);
LUNA_END_GETTER(MyClass)
*/

// container specialization for CefBase
template <>
struct luna_container<CefBase> {
	typedef CefRefPtr<CefBase> container_type;
	
	static inline CefBase* get(const container_type& cont) {
		return cont.get();
	};

	static inline void set(container_type& cont, CefBase* ptr) {
		cont = ptr;
	};
	
	static inline void release(container_type& cont) {
			cont = NULL;		
	};
};

#endif