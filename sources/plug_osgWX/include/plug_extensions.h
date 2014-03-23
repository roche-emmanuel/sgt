#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

wxGLCanvas* createGLCanvas(wxWindow *parent, wxWindowID id, lua_Table *attribList, lua_State* L);

#endif
