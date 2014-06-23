#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <cef_base.h>
#include <cef_values.h>
#include <cef_process_message.h>
#include <CEFViewBase.h>
#include <CEFManager.h>
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

// Class: CefBinaryValue
template<>
class LunaTraits< CefBinaryValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CefBinaryValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(CefBinaryValue* obj);
	typedef CefBase parent_t;
	typedef CefBinaryValue base_t;
	static luna_ConverterType converters[];
};

// Class: CefDictionaryValue
template<>
class LunaTraits< CefDictionaryValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CefDictionaryValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(CefDictionaryValue* obj);
	typedef CefBase parent_t;
	typedef CefDictionaryValue base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< CefString >
template<>
class LunaTraits< std::vector< CefString > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< CefString >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< CefString >* obj);
	typedef std::vector< CefString > parent_t;
	typedef std::vector< CefString > base_t;
	static luna_ConverterType converters[];
};

// Class: CefListValue
template<>
class LunaTraits< CefListValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CefListValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(CefListValue* obj);
	typedef CefBase parent_t;
	typedef CefListValue base_t;
	static luna_ConverterType converters[];
};

// Class: CefProcessMessage
template<>
class LunaTraits< CefProcessMessage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static CefProcessMessage* _bind_ctor(lua_State *L);
	static void _bind_dtor(CefProcessMessage* obj);
	typedef CefBase parent_t;
	typedef CefProcessMessage base_t;
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

// Class: cef::CEFManager::Traits
template<>
class LunaTraits< cef::CEFManager::Traits > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static cef::CEFManager::Traits* _bind_ctor(lua_State *L);
	static void _bind_dtor(cef::CEFManager::Traits* obj);
	typedef cef::CEFManager::Traits parent_t;
	typedef cef::CEFManager::Traits base_t;
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

// Referenced external: IDirect3DTexture9
template<>
class LunaTraits< IDirect3DTexture9 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDirect3DTexture9* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDirect3DTexture9* obj);
	typedef IDirect3DTexture9 parent_t;
	typedef IDirect3DTexture9 base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 50549361 > {
public:
	typedef CefBase type;
	
};

template<>
class LunaType< 39311454 > {
public:
	typedef CefDictionaryValue::KeyList type;
	
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
class LunaType< 49043676 > {
public:
	typedef cef::CEFManager::Traits type;
	
};

template<>
class LunaType< 64498953 > {
public:
	typedef std::vector< CefString > type;
	
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

template<>
class LunaType< 49931509 > {
public:
	typedef IDirect3DTexture9 type;
	
};


#endif

