#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>




// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: __int64
template<>
class LunaTraits< __int64 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static __int64* _bind_ctor(lua_State *L);
	static void _bind_dtor(__int64* obj);
	typedef __int64 parent_t;
	typedef __int64 base_t;
	static luna_ConverterType converters[];
};

// Referenced external: __uint64
template<>
class LunaTraits< __uint64 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static __uint64* _bind_ctor(lua_State *L);
	static void _bind_dtor(__uint64* obj);
	typedef __uint64 parent_t;
	typedef __uint64 base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 32973728 > {
public:
	typedef __int64 type;
	
};

template<>
class LunaType< 60998621 > {
public:
	typedef __uint64 type;
	
};


#endif

