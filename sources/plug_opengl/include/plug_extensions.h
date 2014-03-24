#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include <GL/glew.h>

/** LUNA_RENAME glewGetErrorString */
const char* glewGetErrorStringStr (int error) {
	return (const char*)glewGetErrorString(error);
}

/** LUNA_RENAME glewGetString */
const char* glewGetStringStr (int name) {
	return (const char*)glewGetString(name);
}

void glewSetExperimental(int enabled) {
	glewExperimental = enabled;
}


#endif
