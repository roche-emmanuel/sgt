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

// Insert your using namespace commands here.

#include "plug_extensions.h"

#include "ork/core/Object.h"
#include "proland/terrain/Deformation.h"

using namespace proland;

#include <luna/luna.h>
#include <luna/luna_types.h>


// Insert your specific caster definition here.
// example: 
/*
LUNA_DEFINE_DIRECT_CAST(MyNamespace::MyNonPolymorphicBaseClass)
*/

LUNA_DEFINE_DIRECT_CAST(proland::BasicViewHandler::Position)
LUNA_DEFINE_DIRECT_CAST(ork::vec2d)

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

LUNA_BEGIN_GETTER(osg::BoundingBox)
	// Retrieve the result from the stack:
	return *(Luna< osg::BoundingBox >::check(L,index));
LUNA_END_GETTER(osg::BoundingBox)

// container specialization for ork::Object
template <>
struct luna_container<ork::Object> {
	typedef ork::ptr<ork::Object> container_type;
	
	static inline ork::Object* get(const container_type& cont) {
		return cont.get();
	};

	static inline void set(container_type& cont, ork::Object* ptr) {
		cont = ptr;
	};
	
	static inline void release(container_type& cont) {
			cont = NULL;		
	};
};

#endif
