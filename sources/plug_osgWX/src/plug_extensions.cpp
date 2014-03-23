#include "plug_extensions.h"

wxGLCanvas* createGLCanvas(wxWindow *parent, wxWindowID id, lua_Table *attribList, lua_State* L) {
	// create an int list from the lua table:
	std::vector<int>  attribs;
	
	// Are already assured there is a table at index 3
	int index = 3;

	/* table is in the stack at index 't' */
	lua_pushnil(L);  /* first key */
	while (lua_next(L, index) != 0) {
		/* uses 'key' (at index -2) and 'value' (at index -1) */
		/*printf("%s - %s\n",
			lua_typename(L, lua_type(L, -2)),
			lua_typename(L, lua_type(L, -1)));
		*/
		int val = lua_tointeger(L,-1);
		logINFO("Adding GLCanvas attrib "<<val)
		attribs.push_back(val);
		/* removes 'value'; keeps 'key' for next iteration */
		lua_pop(L, 1);
	}

	attribs.push_back(0); // ending value.

	// ensure those attribs are valid:
	CHECK_RET(wxGLCanvas::IsDisplaySupported((const int*)&attribs[0]),NULL,"GL Canvas attribute list not supported.");

	// create the canvas:
	wxGLCanvas* canvas = new wxGLCanvas(parent,id,&attribs[0],wxDefaultPosition,wxDefaultSize,wxWANTS_CHARS);

	return canvas;
}
