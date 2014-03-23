#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <GraphicsWindowWX.h>

// Class: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::GraphicsWindow
template<>
class LunaTraits< osgViewer::GraphicsWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::GraphicsWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::GraphicsWindow* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::GraphicsWindow base_t;
	static luna_ConverterType converters[];
};

// Class: GraphicsWindowWX
template<>
class LunaTraits< GraphicsWindowWX > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GraphicsWindowWX* _bind_ctor(lua_State *L);
	static void _bind_dtor(GraphicsWindowWX* obj);
	typedef osg::Referenced parent_t;
	typedef GraphicsWindowWX base_t;
	static luna_ConverterType converters[];
};

// Class: wxGLCanvas
template<>
class LunaTraits< wxGLCanvas > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGLCanvas* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGLCanvas* obj);
	typedef wxObject parent_t;
	typedef wxGLCanvas base_t;
	static luna_ConverterType converters[];
};

// Class: wxGLContext
template<>
class LunaTraits< wxGLContext > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGLContext* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGLContext* obj);
	typedef wxObject parent_t;
	typedef wxGLContext base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindow
template<>
class LunaTraits< wxWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindow* obj);
	typedef wxObject parent_t;
	typedef wxWindow base_t;
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

// Referenced external: wxObject
template<>
class LunaTraits< wxObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxObject* obj);
	typedef wxObject parent_t;
	typedef wxObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 52022100 > {
public:
	typedef wxGLCanvas type;
	
};

template<>
class LunaType< 13437527 > {
public:
	typedef wxGLContext type;
	
};

template<>
class LunaType< 92430048 > {
public:
	typedef wxWindow type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 56813631 > {
public:
	typedef wxObject type;
	
};


#endif

