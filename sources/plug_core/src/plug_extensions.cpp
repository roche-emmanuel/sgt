#include "plug_extensions.h"

#include <stdlib.h>

using namespace sgt;

std::string getLuaID(lua_Any* dum, lua_State* L) {
	const void *ptr = lua_topointer (L, 1);
	if(!ptr)
		return "";
		
	// Convert the pointer to a string:
	std::ostringstream os;
	os << (const void*)ptr;
	return os.str();
}

int ptime_tostring(boost::posix_time::ptime* val, lua_State* L) {
	// convert the value to a string:
	std::string timestr = boost::posix_time::to_iso_extended_string(*val);
	lua_pushstring(L,timestr.c_str());
	return 1;
};

void* fromLightUserdata(lua_Any* dum, lua_State* L) {
	// Check if we have a light userdata:
	CHECK_RET(lua_islightuserdata(L,1)==1,NULL,"Invalid light user data. Type is:"<<lua_typename(L,lua_type(L,1)));
	
	return lua_touserdata(L,1);
};

int toLightUserdata(void* obj, lua_State* L) {
	if(!obj)
		return 0;
		
	lua_pushlightuserdata(L,obj);
	return 1;
};



