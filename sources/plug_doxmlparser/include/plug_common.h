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
#pragma warning( disable: 4150 )

#include <lua.hpp>
#include <iostream> 
#include <vector>
#include <string>

#include "doxmlintf.h"

#include <luna/luna.h>
#include <luna/luna_types.h>

IClass* toClass(ICompound* comp);
IFile* toFile(ICompound* comp);
IEnum* toEnum(IMember* comp);
INamespace* toNamespace(ICompound* comp);
ILT_Text* toLinkText(ILinkedText* ilt);
ILT_Ref* toLinkRef(ILinkedText* ilt);
IDocText* toDocText(IDoc* doc);
IDocPara* toDocPara(IDoc* doc);

#endif
