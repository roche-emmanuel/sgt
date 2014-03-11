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

#define _WX_EVENTS_DEFINITION_
#define _WX_ENUMS_DEFINITION_
#define _WX_DEFINES_DEFINITION_

#include "wx_headers.h"
#include "sgtApp.h"
#include "wx_extensions.h"
#include <wx/ribbon/art.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ctrlsub.h>

#include "lunaCommon.h"

#include <luna/luna.h>
#include <luna/luna_types.h>

#include "lua/LuaObject.h"

template <typename dstType>
struct luna_caster<wxKeyboardState,dstType> {
	static inline dstType* cast(wxKeyboardState* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayString,dstType> {
	static inline dstType* cast(wxArrayString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttr,dstType> {
	static inline dstType* cast(wxTextAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

LUNA_DEFINE_DIRECT_CAST(wxItemContainer);

#ifdef WIN32
LUNA_BEGIN_GETTER(HWND)
	// Retrieve the result from the stack:
	return *(Luna< HWND >::check(L,index));
LUNA_END_GETTER(HWND)

LUNA_BEGIN_GETTER(HWND*)
	// Retrieve the result from the stack:
	return Luna< HWND >::check(L,index);
LUNA_END_GETTER(HWND*)
#endif

namespace sgt {

inline void pushValue(lua_State* L, const wxString& arg) {
	std::string str = arg.ToStdString();
	lua_pushlstring(L,str.data(),str.size());
}

inline void pushValue(lua_State* L, const wxRect& arg) {
	sgt::pushValue<wxRect>(L,(wxRect*)(&arg));
}

#ifdef WIN32
inline void pushValue(lua_State* L, struct HWND__ * arg) {
	Luna< void >::push(L,(void*)arg,false);
}
#endif

};

#endif
