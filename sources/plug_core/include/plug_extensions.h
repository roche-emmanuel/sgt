#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "base/Container.h"

std::string getLuaID(lua_Any* dum, lua_State* L);

/** LUNA_CLASS_EXTENSION LUNA_RENAME __tostring */
int ptime_tostring(boost::posix_time::ptime* val, lua_State* L);

void setEnv(const std::string& var, const std::string& value);

class BaseClass {
public:	
	BaseClass() {};
	virtual ~BaseClass() {};
};

void* fromLightUserdata(lua_Any* dum, lua_State* L);

int toLightUserdata(void* obj, lua_State* L);

#define PRIMITIVE_ARRAY(type,name) \
inline void* new##name##Array(unsigned type size) { \
	CHECK_RET(size>0,NULL,"Invalid array size.") \
	return (void*)new type[size]; \
} \
inline void delete##name##Array(type* arr) { \
	delete arr; \
	arr = NULL; \
} \
inline type get##name##ArrayAt(type* arr, unsigned int index) { \
	CHECK_RET(arr,type(),"Invalid arr") \
	return arr[index]; \
} \
inline void set##name##ArrayAt(type* arr, unsigned int index, type value) { \
	CHECK(arr,"Invalid arr") \
	arr[index] = value; \
}


PRIMITIVE_ARRAY(int,Int)


#endif
