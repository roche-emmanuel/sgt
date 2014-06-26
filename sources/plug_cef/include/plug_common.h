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

#include <lunaCommon.h>

// Insert your includes here.
#include <d3d9.h>
#include <d3dx9.h>
#include <DxErr.h>

#include <cef_task.h>
#include <cef_base.h>
#include <cef_browser.h>
#include "CEFViewBase.h"

// Insert your using namespace commands here.
using namespace cef;

#include "plug_extensions.h"

#include <luna/luna.h>
#include <luna/luna_types.h>

#define REQUIRE_UI_THREAD()   CHECK(CefCurrentlyOn(TID_UI),"We are not currently on UI Thread");
#define REQUIRE_IO_THREAD()   CHECK(CefCurrentlyOn(TID_IO),"We are not currently on IO Thread");
#define REQUIRE_FILE_THREAD() CHECK(CefCurrentlyOn(TID_FILE),"We are not currently on FILE Thread");

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

LUNA_BEGIN_SETTER(CefString)
	std::string lret_str = arg->ToString();
	lua_pushlstring(L,lret_str.data(),lret_str.size());
LUNA_END_SETTER(CefString)

LUNA_BEGIN_GETTER(CefString)
	std::string str(lua_tostring(L,index),lua_objlen(L,index));
	CefString cefstr;
	cefstr.FromString(str);
	return cefstr;
LUNA_END_GETTER(CefString)


// container specialization for CefBase

#define REGISTER_CONTAINER(tname) template <> \
struct luna_container<tname> { \
	typedef CefRefPtr<tname> container_type; \
	 \
	static inline tname* get(const container_type& cont) { \
		return cont.get(); \
	}; \
 \
	static inline void set(container_type& cont, tname* ptr) { \
		cont = ptr; \
	}; \
	 \
	static inline void release(container_type& cont) { \
		cont = NULL; \
	}; \
};

REGISTER_CONTAINER(CefBase);
REGISTER_CONTAINER(CefProcessMessage);
REGISTER_CONTAINER(CefBinaryValue);
REGISTER_CONTAINER(CefListValue);
REGISTER_CONTAINER(CefDictionaryValue);

#endif
