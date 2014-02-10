
#ifndef SGT_KERNEL_H_
#define SGT_KERNEL_H_

#include <string>
#include <lua.hpp>

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( SGTCORE_LIBRARY_STATIC )
    #    define SGTCORE_EXPORT
    #  elif defined( SGTCORE_LIBRARY )
    #    define SGTCORE_EXPORT   __declspec(dllexport)
    #  else
    #    define SGTCORE_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define SGTCORE_EXPORT
#endif

// common includes:
struct lua_Any;
int SGTCORE_EXPORT loadModuleFromMemory(const std::string& mname, const std::string& entryname, lua_State* L);

/** LUNA_IGNORED */
int SGTCORE_EXPORT loadModuleFromMemory(void* data, const std::string& mname, const std::string& ename, lua_State* L);

int SGTCORE_EXPORT loadModuleFromMemory(const std::string& data, const std::string& mname, const std::string& entryname, lua_State* L);


// extern "C" {
// SGTCORE_EXPORT void RegisterGetMapGeomFnc(void* funcPtr);
// }

#endif
