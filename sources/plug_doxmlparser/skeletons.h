#ifndef _doxmlparser_SKELETONS_H_
#define _doxmlparser_SKELETONS_H_

class IChildNode {
};

class IChildNodeIterator {
};

class IClass: public ICompound {
};

class ICompound {
};

class ICompoundIterator {
};

class IDCOP: public IMember {
};

class IDefine: public IMember {
};

class IDoc {
};

class IDocAnchor: public IDoc {
};

class IDocCodeLine: public IDoc {
};

class IDocCopy: public IDoc {
};

class IDocDotFile: public IDoc {
};

class IDocEMail: public IDoc {
};

class IDocEntry: public IDoc {
};

class IDocFormula: public IDoc {
};

class IDocHighlight: public IDoc {
};

class IDocHRuler: public IDoc {
};

class IDocImage: public IDoc {
};

class IDocIndexEntry: public IDoc {
};

class IDocInternal: public IDoc {
};

class IDocItemizedList: public IDoc {
};

class IDocIterator {
};

class IDocLineBreak: public IDoc {
};

class IDocLink: public IDoc {
};

class IDocListItem: public IDoc {
};

class IDocMarkup: public IDoc {
};

class IDocMarkupModifier: public IDoc {
};

class IDocOrderedList: public IDoc {
};

class IDocPara: public IDoc {
};

class IDocParameter: public IDoc {
};

class IDocParameterItem: public IDoc {
};

class IDocParameterList: public IDoc {
};

class IDocProgramListing: public IDoc {
};

class IDocRef: public IDoc {
};

class IDocRoot: public IDoc {
};

class IDocRow: public IDoc {
};

class IDocSection: public IDoc {
};

class IDocSimpleSect: public IDoc {
};

class IDocSymbol: public IDoc {
};

class IDocTable: public IDoc {
};

class IDocText: public IDocMarkup {
};

class IDocTitle: public IDoc {
};

class IDocTocItem: public IDoc {
};

class IDocTocList: public IDoc {
};

class IDocULink: public IDoc {
};

class IDocVariableList: public IDoc {
};

class IDocVariableListEntry: public IDoc {
};

class IDocVerbatim: public IDoc {
};

class IDoxygen {
};

class IEdgeLabel {
};

class IEdgeLabelIterator {
};

class IEnum: public IMember {
};

class IEnumValue: public IMember {
};

class IException: public ICompound {
};

class IFile: public ICompound {
};

class IFriend: public IMember {
};

class IFunction: public IMember {
};

class IGraph {
};

class IGroup: public ICompound {
};

class IInclude {
};

class IIncludeIterator {
};

class IInterface: public ICompound {
};

class ILinkedText {
};

class ILinkedTextIterator {
};

class ILT_Ref: public ILinkedText {
};

class ILT_Text: public ILinkedText {
};

class IMember {
};

class IMemberIterator {
};

class IMemberReference {
};

class IMemberReferenceIterator {
};

class INamespace: public ICompound {
};

class INode {
};

class INodeIterator {
};

class IPage: public ICompound {
};

class IParam {
};

class IParamIterator {
};

class IProperty: public IMember {
};

class IPrototype: public IMember {
};

class IRelatedCompound {
};

class IRelatedCompoundIterator {
};

class ISection {
};

class ISectionIterator {
};

class ISignal: public IMember {
};

class ISlot: public IMember {
};

class IString {
};

class IStruct: public ICompound {
};

class ITypedef: public IMember {
};

class IUnion: public ICompound {
};

class IUserDefined: public ISection {
};

class IVariable: public IMember {
};


#endif
