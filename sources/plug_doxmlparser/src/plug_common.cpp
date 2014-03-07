
#include "plug_common.h"

IClass* toClass(ICompound* comp) {
	return dynamic_cast<IClass*>(comp);
}

IFile* toFile(ICompound* comp) {
	return dynamic_cast<IFile*>(comp);
}

IEnum* toEnum(IMember* comp) {
	return dynamic_cast<IEnum*>(comp);
}

INamespace* toNamespace(ICompound* comp) {
	return dynamic_cast<INamespace*>(comp);
}

ILT_Text* toLinkText(ILinkedText* ilt) {
	return dynamic_cast<ILT_Text*>(ilt);
}

ILT_Ref* toLinkRef(ILinkedText* ilt) {
	return dynamic_cast<ILT_Ref*>(ilt);
}

IDocText* toDocText(IDoc* doc) {
	return dynamic_cast<IDocText*>(doc);
}

IDocPara* toDocPara(IDoc* doc) {
	return dynamic_cast<IDocPara*>(doc);
}
