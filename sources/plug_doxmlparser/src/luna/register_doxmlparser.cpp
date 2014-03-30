#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_doxmlparser(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"doxmlparser");
	Luna< IChildNode >::Register(L);
	Luna< IChildNodeIterator >::Register(L);
	Luna< ICompound >::Register(L);
	Luna< IClass >::Register(L);
	Luna< ICompoundIterator >::Register(L);
	Luna< IMember >::Register(L);
	Luna< IDCOP >::Register(L);
	Luna< IDefine >::Register(L);
	Luna< IDoc >::Register(L);
	Luna< IDocAnchor >::Register(L);
	Luna< IDocCodeLine >::Register(L);
	Luna< IDocCopy >::Register(L);
	Luna< IDocDotFile >::Register(L);
	Luna< IDocEMail >::Register(L);
	Luna< IDocEntry >::Register(L);
	Luna< IDocFormula >::Register(L);
	Luna< IDocHighlight >::Register(L);
	Luna< IDocHRuler >::Register(L);
	Luna< IDocImage >::Register(L);
	Luna< IDocIndexEntry >::Register(L);
	Luna< IDocInternal >::Register(L);
	Luna< IDocItemizedList >::Register(L);
	Luna< IDocIterator >::Register(L);
	Luna< IDocLineBreak >::Register(L);
	Luna< IDocLink >::Register(L);
	Luna< IDocListItem >::Register(L);
	Luna< IDocMarkup >::Register(L);
	Luna< IDocMarkupModifier >::Register(L);
	Luna< IDocOrderedList >::Register(L);
	Luna< IDocPara >::Register(L);
	Luna< IDocParameter >::Register(L);
	Luna< IDocParameterItem >::Register(L);
	Luna< IDocParameterList >::Register(L);
	Luna< IDocProgramListing >::Register(L);
	Luna< IDocRef >::Register(L);
	Luna< IDocRoot >::Register(L);
	Luna< IDocRow >::Register(L);
	Luna< IDocSection >::Register(L);
	Luna< IDocSimpleSect >::Register(L);
	Luna< IDocSymbol >::Register(L);
	Luna< IDocTable >::Register(L);
	Luna< IDocText >::Register(L);
	Luna< IDocTitle >::Register(L);
	Luna< IDocTocItem >::Register(L);
	Luna< IDocTocList >::Register(L);
	Luna< IDocULink >::Register(L);
	Luna< IDocVariableList >::Register(L);
	Luna< IDocVariableListEntry >::Register(L);
	Luna< IDocVerbatim >::Register(L);
	Luna< IDoxygen >::Register(L);
	Luna< IEdgeLabel >::Register(L);
	Luna< IEdgeLabelIterator >::Register(L);
	Luna< IEnum >::Register(L);
	Luna< IEnumValue >::Register(L);
	Luna< IException >::Register(L);
	Luna< IFile >::Register(L);
	Luna< IFriend >::Register(L);
	Luna< IFunction >::Register(L);
	Luna< IGraph >::Register(L);
	Luna< IGroup >::Register(L);
	Luna< IInclude >::Register(L);
	Luna< IIncludeIterator >::Register(L);
	Luna< IInterface >::Register(L);
	Luna< ILinkedText >::Register(L);
	Luna< ILinkedTextIterator >::Register(L);
	Luna< ILT_Ref >::Register(L);
	Luna< ILT_Text >::Register(L);
	Luna< IMemberIterator >::Register(L);
	Luna< IMemberReference >::Register(L);
	Luna< IMemberReferenceIterator >::Register(L);
	Luna< INamespace >::Register(L);
	Luna< INode >::Register(L);
	Luna< INodeIterator >::Register(L);
	Luna< IPage >::Register(L);
	Luna< IParam >::Register(L);
	Luna< IParamIterator >::Register(L);
	Luna< IProperty >::Register(L);
	Luna< IPrototype >::Register(L);
	Luna< IRelatedCompound >::Register(L);
	Luna< IRelatedCompoundIterator >::Register(L);
	Luna< ISection >::Register(L);
	Luna< ISectionIterator >::Register(L);
	Luna< ISignal >::Register(L);
	Luna< ISlot >::Register(L);
	Luna< IString >::Register(L);
	Luna< IStruct >::Register(L);
	Luna< ITypedef >::Register(L);
	Luna< IUnion >::Register(L);
	Luna< IUserDefined >::Register(L);
	Luna< IVariable >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"doxmlparser");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"doxmlparser");

	luna_pushModule(L,"doxmlparser");
	return 1;
}

#ifdef __cplusplus
}
#endif

