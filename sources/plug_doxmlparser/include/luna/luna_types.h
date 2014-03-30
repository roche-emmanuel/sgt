#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <doxmlintf.h>

// Class: IChildNode
template<>
class LunaTraits< IChildNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IChildNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(IChildNode* obj);
	typedef IChildNode parent_t;
	typedef IChildNode base_t;
	static luna_ConverterType converters[];
};

// Class: IChildNodeIterator
template<>
class LunaTraits< IChildNodeIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IChildNodeIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IChildNodeIterator* obj);
	typedef IChildNodeIterator parent_t;
	typedef IChildNodeIterator base_t;
	static luna_ConverterType converters[];
};

// Class: ICompound
template<>
class LunaTraits< ICompound > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ICompound* _bind_ctor(lua_State *L);
	static void _bind_dtor(ICompound* obj);
	typedef ICompound parent_t;
	typedef ICompound base_t;
	static luna_ConverterType converters[];
};

// Class: IClass
template<>
class LunaTraits< IClass > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IClass* _bind_ctor(lua_State *L);
	static void _bind_dtor(IClass* obj);
	typedef ICompound parent_t;
	typedef IClass base_t;
	static luna_ConverterType converters[];
};

// Class: ICompoundIterator
template<>
class LunaTraits< ICompoundIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ICompoundIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(ICompoundIterator* obj);
	typedef ICompoundIterator parent_t;
	typedef ICompoundIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IMember
template<>
class LunaTraits< IMember > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IMember* _bind_ctor(lua_State *L);
	static void _bind_dtor(IMember* obj);
	typedef IMember parent_t;
	typedef IMember base_t;
	static luna_ConverterType converters[];
};

// Class: IDCOP
template<>
class LunaTraits< IDCOP > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDCOP* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDCOP* obj);
	typedef IMember parent_t;
	typedef IDCOP base_t;
	static luna_ConverterType converters[];
};

// Class: IDefine
template<>
class LunaTraits< IDefine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDefine* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDefine* obj);
	typedef IMember parent_t;
	typedef IDefine base_t;
	static luna_ConverterType converters[];
};

// Class: IDoc
template<>
class LunaTraits< IDoc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDoc* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDoc* obj);
	typedef IDoc parent_t;
	typedef IDoc base_t;
	static luna_ConverterType converters[];
};

// Class: IDocAnchor
template<>
class LunaTraits< IDocAnchor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocAnchor* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocAnchor* obj);
	typedef IDoc parent_t;
	typedef IDocAnchor base_t;
	static luna_ConverterType converters[];
};

// Class: IDocCodeLine
template<>
class LunaTraits< IDocCodeLine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocCodeLine* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocCodeLine* obj);
	typedef IDoc parent_t;
	typedef IDocCodeLine base_t;
	static luna_ConverterType converters[];
};

// Class: IDocCopy
template<>
class LunaTraits< IDocCopy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocCopy* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocCopy* obj);
	typedef IDoc parent_t;
	typedef IDocCopy base_t;
	static luna_ConverterType converters[];
};

// Class: IDocDotFile
template<>
class LunaTraits< IDocDotFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocDotFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocDotFile* obj);
	typedef IDoc parent_t;
	typedef IDocDotFile base_t;
	static luna_ConverterType converters[];
};

// Class: IDocEMail
template<>
class LunaTraits< IDocEMail > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocEMail* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocEMail* obj);
	typedef IDoc parent_t;
	typedef IDocEMail base_t;
	static luna_ConverterType converters[];
};

// Class: IDocEntry
template<>
class LunaTraits< IDocEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocEntry* obj);
	typedef IDoc parent_t;
	typedef IDocEntry base_t;
	static luna_ConverterType converters[];
};

// Class: IDocFormula
template<>
class LunaTraits< IDocFormula > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocFormula* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocFormula* obj);
	typedef IDoc parent_t;
	typedef IDocFormula base_t;
	static luna_ConverterType converters[];
};

// Class: IDocHighlight
template<>
class LunaTraits< IDocHighlight > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocHighlight* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocHighlight* obj);
	typedef IDoc parent_t;
	typedef IDocHighlight base_t;
	static luna_ConverterType converters[];
};

// Class: IDocHRuler
template<>
class LunaTraits< IDocHRuler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocHRuler* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocHRuler* obj);
	typedef IDoc parent_t;
	typedef IDocHRuler base_t;
	static luna_ConverterType converters[];
};

// Class: IDocImage
template<>
class LunaTraits< IDocImage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocImage* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocImage* obj);
	typedef IDoc parent_t;
	typedef IDocImage base_t;
	static luna_ConverterType converters[];
};

// Class: IDocIndexEntry
template<>
class LunaTraits< IDocIndexEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocIndexEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocIndexEntry* obj);
	typedef IDoc parent_t;
	typedef IDocIndexEntry base_t;
	static luna_ConverterType converters[];
};

// Class: IDocInternal
template<>
class LunaTraits< IDocInternal > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocInternal* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocInternal* obj);
	typedef IDoc parent_t;
	typedef IDocInternal base_t;
	static luna_ConverterType converters[];
};

// Class: IDocItemizedList
template<>
class LunaTraits< IDocItemizedList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocItemizedList* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocItemizedList* obj);
	typedef IDoc parent_t;
	typedef IDocItemizedList base_t;
	static luna_ConverterType converters[];
};

// Class: IDocIterator
template<>
class LunaTraits< IDocIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocIterator* obj);
	typedef IDocIterator parent_t;
	typedef IDocIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IDocLineBreak
template<>
class LunaTraits< IDocLineBreak > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocLineBreak* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocLineBreak* obj);
	typedef IDoc parent_t;
	typedef IDocLineBreak base_t;
	static luna_ConverterType converters[];
};

// Class: IDocLink
template<>
class LunaTraits< IDocLink > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocLink* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocLink* obj);
	typedef IDoc parent_t;
	typedef IDocLink base_t;
	static luna_ConverterType converters[];
};

// Class: IDocListItem
template<>
class LunaTraits< IDocListItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocListItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocListItem* obj);
	typedef IDoc parent_t;
	typedef IDocListItem base_t;
	static luna_ConverterType converters[];
};

// Class: IDocMarkup
template<>
class LunaTraits< IDocMarkup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocMarkup* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocMarkup* obj);
	typedef IDoc parent_t;
	typedef IDocMarkup base_t;
	static luna_ConverterType converters[];
};

// Class: IDocMarkupModifier
template<>
class LunaTraits< IDocMarkupModifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocMarkupModifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocMarkupModifier* obj);
	typedef IDoc parent_t;
	typedef IDocMarkupModifier base_t;
	static luna_ConverterType converters[];
};

// Class: IDocOrderedList
template<>
class LunaTraits< IDocOrderedList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocOrderedList* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocOrderedList* obj);
	typedef IDoc parent_t;
	typedef IDocOrderedList base_t;
	static luna_ConverterType converters[];
};

// Class: IDocPara
template<>
class LunaTraits< IDocPara > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocPara* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocPara* obj);
	typedef IDoc parent_t;
	typedef IDocPara base_t;
	static luna_ConverterType converters[];
};

// Class: IDocParameter
template<>
class LunaTraits< IDocParameter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocParameter* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocParameter* obj);
	typedef IDoc parent_t;
	typedef IDocParameter base_t;
	static luna_ConverterType converters[];
};

// Class: IDocParameterItem
template<>
class LunaTraits< IDocParameterItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocParameterItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocParameterItem* obj);
	typedef IDoc parent_t;
	typedef IDocParameterItem base_t;
	static luna_ConverterType converters[];
};

// Class: IDocParameterList
template<>
class LunaTraits< IDocParameterList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocParameterList* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocParameterList* obj);
	typedef IDoc parent_t;
	typedef IDocParameterList base_t;
	static luna_ConverterType converters[];
};

// Class: IDocProgramListing
template<>
class LunaTraits< IDocProgramListing > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocProgramListing* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocProgramListing* obj);
	typedef IDoc parent_t;
	typedef IDocProgramListing base_t;
	static luna_ConverterType converters[];
};

// Class: IDocRef
template<>
class LunaTraits< IDocRef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocRef* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocRef* obj);
	typedef IDoc parent_t;
	typedef IDocRef base_t;
	static luna_ConverterType converters[];
};

// Class: IDocRoot
template<>
class LunaTraits< IDocRoot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocRoot* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocRoot* obj);
	typedef IDoc parent_t;
	typedef IDocRoot base_t;
	static luna_ConverterType converters[];
};

// Class: IDocRow
template<>
class LunaTraits< IDocRow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocRow* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocRow* obj);
	typedef IDoc parent_t;
	typedef IDocRow base_t;
	static luna_ConverterType converters[];
};

// Class: IDocSection
template<>
class LunaTraits< IDocSection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocSection* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocSection* obj);
	typedef IDoc parent_t;
	typedef IDocSection base_t;
	static luna_ConverterType converters[];
};

// Class: IDocSimpleSect
template<>
class LunaTraits< IDocSimpleSect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocSimpleSect* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocSimpleSect* obj);
	typedef IDoc parent_t;
	typedef IDocSimpleSect base_t;
	static luna_ConverterType converters[];
};

// Class: IDocSymbol
template<>
class LunaTraits< IDocSymbol > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocSymbol* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocSymbol* obj);
	typedef IDoc parent_t;
	typedef IDocSymbol base_t;
	static luna_ConverterType converters[];
};

// Class: IDocTable
template<>
class LunaTraits< IDocTable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocTable* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocTable* obj);
	typedef IDoc parent_t;
	typedef IDocTable base_t;
	static luna_ConverterType converters[];
};

// Class: IDocText
template<>
class LunaTraits< IDocText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocText* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocText* obj);
	typedef IDoc parent_t;
	typedef IDocText base_t;
	static luna_ConverterType converters[];
};

// Class: IDocTitle
template<>
class LunaTraits< IDocTitle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocTitle* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocTitle* obj);
	typedef IDoc parent_t;
	typedef IDocTitle base_t;
	static luna_ConverterType converters[];
};

// Class: IDocTocItem
template<>
class LunaTraits< IDocTocItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocTocItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocTocItem* obj);
	typedef IDoc parent_t;
	typedef IDocTocItem base_t;
	static luna_ConverterType converters[];
};

// Class: IDocTocList
template<>
class LunaTraits< IDocTocList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocTocList* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocTocList* obj);
	typedef IDoc parent_t;
	typedef IDocTocList base_t;
	static luna_ConverterType converters[];
};

// Class: IDocULink
template<>
class LunaTraits< IDocULink > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocULink* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocULink* obj);
	typedef IDoc parent_t;
	typedef IDocULink base_t;
	static luna_ConverterType converters[];
};

// Class: IDocVariableList
template<>
class LunaTraits< IDocVariableList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocVariableList* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocVariableList* obj);
	typedef IDoc parent_t;
	typedef IDocVariableList base_t;
	static luna_ConverterType converters[];
};

// Class: IDocVariableListEntry
template<>
class LunaTraits< IDocVariableListEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocVariableListEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocVariableListEntry* obj);
	typedef IDoc parent_t;
	typedef IDocVariableListEntry base_t;
	static luna_ConverterType converters[];
};

// Class: IDocVerbatim
template<>
class LunaTraits< IDocVerbatim > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDocVerbatim* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDocVerbatim* obj);
	typedef IDoc parent_t;
	typedef IDocVerbatim base_t;
	static luna_ConverterType converters[];
};

// Class: IDoxygen
template<>
class LunaTraits< IDoxygen > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IDoxygen* _bind_ctor(lua_State *L);
	static void _bind_dtor(IDoxygen* obj);
	typedef IDoxygen parent_t;
	typedef IDoxygen base_t;
	static luna_ConverterType converters[];
};

// Class: IEdgeLabel
template<>
class LunaTraits< IEdgeLabel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IEdgeLabel* _bind_ctor(lua_State *L);
	static void _bind_dtor(IEdgeLabel* obj);
	typedef IEdgeLabel parent_t;
	typedef IEdgeLabel base_t;
	static luna_ConverterType converters[];
};

// Class: IEdgeLabelIterator
template<>
class LunaTraits< IEdgeLabelIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IEdgeLabelIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IEdgeLabelIterator* obj);
	typedef IEdgeLabelIterator parent_t;
	typedef IEdgeLabelIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IEnum
template<>
class LunaTraits< IEnum > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IEnum* _bind_ctor(lua_State *L);
	static void _bind_dtor(IEnum* obj);
	typedef IMember parent_t;
	typedef IEnum base_t;
	static luna_ConverterType converters[];
};

// Class: IEnumValue
template<>
class LunaTraits< IEnumValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IEnumValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(IEnumValue* obj);
	typedef IMember parent_t;
	typedef IEnumValue base_t;
	static luna_ConverterType converters[];
};

// Class: IException
template<>
class LunaTraits< IException > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IException* _bind_ctor(lua_State *L);
	static void _bind_dtor(IException* obj);
	typedef ICompound parent_t;
	typedef IException base_t;
	static luna_ConverterType converters[];
};

// Class: IFile
template<>
class LunaTraits< IFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(IFile* obj);
	typedef ICompound parent_t;
	typedef IFile base_t;
	static luna_ConverterType converters[];
};

// Class: IFriend
template<>
class LunaTraits< IFriend > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IFriend* _bind_ctor(lua_State *L);
	static void _bind_dtor(IFriend* obj);
	typedef IMember parent_t;
	typedef IFriend base_t;
	static luna_ConverterType converters[];
};

// Class: IFunction
template<>
class LunaTraits< IFunction > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IFunction* _bind_ctor(lua_State *L);
	static void _bind_dtor(IFunction* obj);
	typedef IMember parent_t;
	typedef IFunction base_t;
	static luna_ConverterType converters[];
};

// Class: IGraph
template<>
class LunaTraits< IGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(IGraph* obj);
	typedef IGraph parent_t;
	typedef IGraph base_t;
	static luna_ConverterType converters[];
};

// Class: IGroup
template<>
class LunaTraits< IGroup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IGroup* _bind_ctor(lua_State *L);
	static void _bind_dtor(IGroup* obj);
	typedef ICompound parent_t;
	typedef IGroup base_t;
	static luna_ConverterType converters[];
};

// Class: IInclude
template<>
class LunaTraits< IInclude > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IInclude* _bind_ctor(lua_State *L);
	static void _bind_dtor(IInclude* obj);
	typedef IInclude parent_t;
	typedef IInclude base_t;
	static luna_ConverterType converters[];
};

// Class: IIncludeIterator
template<>
class LunaTraits< IIncludeIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IIncludeIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IIncludeIterator* obj);
	typedef IIncludeIterator parent_t;
	typedef IIncludeIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IInterface
template<>
class LunaTraits< IInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(IInterface* obj);
	typedef ICompound parent_t;
	typedef IInterface base_t;
	static luna_ConverterType converters[];
};

// Class: ILinkedText
template<>
class LunaTraits< ILinkedText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ILinkedText* _bind_ctor(lua_State *L);
	static void _bind_dtor(ILinkedText* obj);
	typedef ILinkedText parent_t;
	typedef ILinkedText base_t;
	static luna_ConverterType converters[];
};

// Class: ILinkedTextIterator
template<>
class LunaTraits< ILinkedTextIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ILinkedTextIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(ILinkedTextIterator* obj);
	typedef ILinkedTextIterator parent_t;
	typedef ILinkedTextIterator base_t;
	static luna_ConverterType converters[];
};

// Class: ILT_Ref
template<>
class LunaTraits< ILT_Ref > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ILT_Ref* _bind_ctor(lua_State *L);
	static void _bind_dtor(ILT_Ref* obj);
	typedef ILinkedText parent_t;
	typedef ILT_Ref base_t;
	static luna_ConverterType converters[];
};

// Class: ILT_Text
template<>
class LunaTraits< ILT_Text > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ILT_Text* _bind_ctor(lua_State *L);
	static void _bind_dtor(ILT_Text* obj);
	typedef ILinkedText parent_t;
	typedef ILT_Text base_t;
	static luna_ConverterType converters[];
};

// Class: IMemberIterator
template<>
class LunaTraits< IMemberIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IMemberIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IMemberIterator* obj);
	typedef IMemberIterator parent_t;
	typedef IMemberIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IMemberReference
template<>
class LunaTraits< IMemberReference > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IMemberReference* _bind_ctor(lua_State *L);
	static void _bind_dtor(IMemberReference* obj);
	typedef IMemberReference parent_t;
	typedef IMemberReference base_t;
	static luna_ConverterType converters[];
};

// Class: IMemberReferenceIterator
template<>
class LunaTraits< IMemberReferenceIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IMemberReferenceIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IMemberReferenceIterator* obj);
	typedef IMemberReferenceIterator parent_t;
	typedef IMemberReferenceIterator base_t;
	static luna_ConverterType converters[];
};

// Class: INamespace
template<>
class LunaTraits< INamespace > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static INamespace* _bind_ctor(lua_State *L);
	static void _bind_dtor(INamespace* obj);
	typedef ICompound parent_t;
	typedef INamespace base_t;
	static luna_ConverterType converters[];
};

// Class: INode
template<>
class LunaTraits< INode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static INode* _bind_ctor(lua_State *L);
	static void _bind_dtor(INode* obj);
	typedef INode parent_t;
	typedef INode base_t;
	static luna_ConverterType converters[];
};

// Class: INodeIterator
template<>
class LunaTraits< INodeIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static INodeIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(INodeIterator* obj);
	typedef INodeIterator parent_t;
	typedef INodeIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IPage
template<>
class LunaTraits< IPage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IPage* _bind_ctor(lua_State *L);
	static void _bind_dtor(IPage* obj);
	typedef ICompound parent_t;
	typedef IPage base_t;
	static luna_ConverterType converters[];
};

// Class: IParam
template<>
class LunaTraits< IParam > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IParam* _bind_ctor(lua_State *L);
	static void _bind_dtor(IParam* obj);
	typedef IParam parent_t;
	typedef IParam base_t;
	static luna_ConverterType converters[];
};

// Class: IParamIterator
template<>
class LunaTraits< IParamIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IParamIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IParamIterator* obj);
	typedef IParamIterator parent_t;
	typedef IParamIterator base_t;
	static luna_ConverterType converters[];
};

// Class: IProperty
template<>
class LunaTraits< IProperty > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IProperty* _bind_ctor(lua_State *L);
	static void _bind_dtor(IProperty* obj);
	typedef IMember parent_t;
	typedef IProperty base_t;
	static luna_ConverterType converters[];
};

// Class: IPrototype
template<>
class LunaTraits< IPrototype > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IPrototype* _bind_ctor(lua_State *L);
	static void _bind_dtor(IPrototype* obj);
	typedef IMember parent_t;
	typedef IPrototype base_t;
	static luna_ConverterType converters[];
};

// Class: IRelatedCompound
template<>
class LunaTraits< IRelatedCompound > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IRelatedCompound* _bind_ctor(lua_State *L);
	static void _bind_dtor(IRelatedCompound* obj);
	typedef IRelatedCompound parent_t;
	typedef IRelatedCompound base_t;
	static luna_ConverterType converters[];
};

// Class: IRelatedCompoundIterator
template<>
class LunaTraits< IRelatedCompoundIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IRelatedCompoundIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(IRelatedCompoundIterator* obj);
	typedef IRelatedCompoundIterator parent_t;
	typedef IRelatedCompoundIterator base_t;
	static luna_ConverterType converters[];
};

// Class: ISection
template<>
class LunaTraits< ISection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ISection* _bind_ctor(lua_State *L);
	static void _bind_dtor(ISection* obj);
	typedef ISection parent_t;
	typedef ISection base_t;
	static luna_ConverterType converters[];
};

// Class: ISectionIterator
template<>
class LunaTraits< ISectionIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ISectionIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(ISectionIterator* obj);
	typedef ISectionIterator parent_t;
	typedef ISectionIterator base_t;
	static luna_ConverterType converters[];
};

// Class: ISignal
template<>
class LunaTraits< ISignal > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ISignal* _bind_ctor(lua_State *L);
	static void _bind_dtor(ISignal* obj);
	typedef IMember parent_t;
	typedef ISignal base_t;
	static luna_ConverterType converters[];
};

// Class: ISlot
template<>
class LunaTraits< ISlot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ISlot* _bind_ctor(lua_State *L);
	static void _bind_dtor(ISlot* obj);
	typedef IMember parent_t;
	typedef ISlot base_t;
	static luna_ConverterType converters[];
};

// Class: IString
template<>
class LunaTraits< IString > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IString* _bind_ctor(lua_State *L);
	static void _bind_dtor(IString* obj);
	typedef IString parent_t;
	typedef IString base_t;
	static luna_ConverterType converters[];
};

// Class: IStruct
template<>
class LunaTraits< IStruct > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IStruct* _bind_ctor(lua_State *L);
	static void _bind_dtor(IStruct* obj);
	typedef ICompound parent_t;
	typedef IStruct base_t;
	static luna_ConverterType converters[];
};

// Class: ITypedef
template<>
class LunaTraits< ITypedef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ITypedef* _bind_ctor(lua_State *L);
	static void _bind_dtor(ITypedef* obj);
	typedef IMember parent_t;
	typedef ITypedef base_t;
	static luna_ConverterType converters[];
};

// Class: IUnion
template<>
class LunaTraits< IUnion > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IUnion* _bind_ctor(lua_State *L);
	static void _bind_dtor(IUnion* obj);
	typedef ICompound parent_t;
	typedef IUnion base_t;
	static luna_ConverterType converters[];
};

// Class: IUserDefined
template<>
class LunaTraits< IUserDefined > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IUserDefined* _bind_ctor(lua_State *L);
	static void _bind_dtor(IUserDefined* obj);
	typedef ISection parent_t;
	typedef IUserDefined base_t;
	static luna_ConverterType converters[];
};

// Class: IVariable
template<>
class LunaTraits< IVariable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IVariable* _bind_ctor(lua_State *L);
	static void _bind_dtor(IVariable* obj);
	typedef IMember parent_t;
	typedef IVariable base_t;
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

template<>
class LunaType< 83803782 > {
public:
	typedef IChildNode type;
	
};

template<>
class LunaType< 44189495 > {
public:
	typedef IChildNodeIterator type;
	
};

template<>
class LunaType< 27352831 > {
public:
	typedef ICompound type;
	
};

template<>
class LunaType< 38557418 > {
public:
	typedef ICompoundIterator type;
	
};

template<>
class LunaType< 88829564 > {
public:
	typedef IMember type;
	
};

template<>
class LunaType< 2243631 > {
public:
	typedef IDoc type;
	
};

template<>
class LunaType< 71345922 > {
public:
	typedef IDocIterator type;
	
};

template<>
class LunaType< 63320756 > {
public:
	typedef IDoxygen type;
	
};

template<>
class LunaType< 18272793 > {
public:
	typedef IEdgeLabel type;
	
};

template<>
class LunaType< 32070006 > {
public:
	typedef IEdgeLabelIterator type;
	
};

template<>
class LunaType< 58990855 > {
public:
	typedef IGraph type;
	
};

template<>
class LunaType< 52441879 > {
public:
	typedef IInclude type;
	
};

template<>
class LunaType< 31762769 > {
public:
	typedef IIncludeIterator type;
	
};

template<>
class LunaType< 94836970 > {
public:
	typedef ILinkedText type;
	
};

template<>
class LunaType< 5142425 > {
public:
	typedef ILinkedTextIterator type;
	
};

template<>
class LunaType< 43776686 > {
public:
	typedef IMemberIterator type;
	
};

template<>
class LunaType< 16821774 > {
public:
	typedef IMemberReference type;
	
};

template<>
class LunaType< 12383283 > {
public:
	typedef IMemberReferenceIterator type;
	
};

template<>
class LunaType< 69850603 > {
public:
	typedef INode type;
	
};

template<>
class LunaType< 97822868 > {
public:
	typedef INodeIterator type;
	
};

template<>
class LunaType< 66811974 > {
public:
	typedef IParam type;
	
};

template<>
class LunaType< 14097198 > {
public:
	typedef IParamIterator type;
	
};

template<>
class LunaType< 47694753 > {
public:
	typedef IRelatedCompound type;
	
};

template<>
class LunaType< 65072275 > {
public:
	typedef IRelatedCompoundIterator type;
	
};

template<>
class LunaType< 70042881 > {
public:
	typedef ISection type;
	
};

template<>
class LunaType< 74644830 > {
public:
	typedef ISectionIterator type;
	
};

template<>
class LunaType< 74613221 > {
public:
	typedef IString type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};


#endif

