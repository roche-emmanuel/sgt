#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <cef_base.h>
#include <CEFViewBase.h>
#include <CEFManager.h>
#include <RenderTarget.h>
#include <DX9RenderTarget.h>
#include <DX9CEFManager.h>

// Class: CefBase
template<>
class LunaTraits< CefBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CefBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(CefBase* obj);
	typedef CefBase parent_t;
	typedef CefBase base_t;
	static luna_ConverterType converters[];
};

// Class: CefRefCount
template<>
class LunaTraits< CefRefCount > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CefRefCount* _bind_ctor(lua_State *L);
	static void _bind_dtor(CefRefCount* obj);
	typedef CefRefCount parent_t;
	typedef CefRefCount base_t;
	static luna_ConverterType converters[];
};

// Class: cef::CEFViewBase::Traits
template<>
class LunaTraits< cef::CEFViewBase::Traits > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::CEFViewBase::Traits* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::CEFViewBase::Traits* obj);
	typedef cef::CEFViewBase::Traits parent_t;
	typedef cef::CEFViewBase::Traits base_t;
	static luna_ConverterType converters[];
};

// Class: cef::CEFManager
template<>
class LunaTraits< cef::CEFManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::CEFManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::CEFManager* obj);
	typedef CefBase parent_t;
	typedef cef::CEFManager base_t;
	static luna_ConverterType converters[];
};

// Class: cef::CEFViewBase
template<>
class LunaTraits< cef::CEFViewBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::CEFViewBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::CEFViewBase* obj);
	typedef CefBase parent_t;
	typedef cef::CEFViewBase base_t;
	static luna_ConverterType converters[];
};

// Class: cef::RenderTarget
template<>
class LunaTraits< cef::RenderTarget > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::RenderTarget* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::RenderTarget* obj);
	typedef CefBase parent_t;
	typedef cef::RenderTarget base_t;
	static luna_ConverterType converters[];
};

// Class: cef::DX9RenderTarget
template<>
class LunaTraits< cef::DX9RenderTarget > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::DX9RenderTarget* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::DX9RenderTarget* obj);
	typedef CefBase parent_t;
	typedef cef::DX9RenderTarget base_t;
	static luna_ConverterType converters[];
};

// Class: cef::DX9CEFManager
template<>
class LunaTraits< cef::DX9CEFManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::DX9CEFManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::DX9CEFManager* obj);
	typedef CefBase parent_t;
	typedef cef::DX9CEFManager base_t;
	static luna_ConverterType converters[];
};



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

// Referenced external: IDirect3DDevice9
template<>
class LunaTraits< IDirect3DDevice9 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDirect3DDevice9* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDirect3DDevice9* obj);
	typedef IDirect3DDevice9 parent_t;
	typedef IDirect3DDevice9 base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 50549361 > {
public:
	typedef CefBase type;
	
};

template<>
class LunaType< 44309748 > {
public:
	typedef CefRefCount type;
	
};

template<>
class LunaType< 59758032 > {
public:
	typedef cef::CEFViewBase::Traits type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 44522754 > {
public:
	typedef IDirect3DDevice9 type;
	
};


#endif

