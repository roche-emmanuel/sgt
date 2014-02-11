local Class = require("classBuilder"){name="ClassHierarchy",bases="base.Object"};

--   Loads the class hierarchy from disk.
--
function Class:load()
	self:no_impl()
end

--   Saves the class hierarchy to disk.
--
function Class:save()
	self:no_impl()
end

--   Purges the hierarchy of files that no longer have Natural Docs content.
--
function Class:purge()
	self:no_impl()
end

--   Called by <NaturalDocs::SymbolTable> whenever a class hierarchy reference's intepretation changes, meaning it switched
--   from one symbol to another.
--
--       reference - The <ReferenceString> whose current interpretation changed.
--
function Class:onInterpretationChange(reference)
	self:no_impl()
end

--   Called by <NaturalDocs::SymbolTable> whenever a class hierarchy reference's target symbol changes, but the reference
--   still resolves to the same symbol.
--
--   Parameters:
--
--       reference - The <ReferenceString> that was affected by the change.
--
function Class:onTargetSymbolChange(reference)
	self:no_impl()
end

--   Adds a class to the hierarchy.
--
--   Parameters:
--
--       file - The <FileName> the class was defined in.
--       class - The class <SymbolString>.
--       languageName - The name of the language this applies to.
--
--   Note:
--
--       The file parameter must be defined when using this function externally.  It may be undef for internal use only.
--
function Class:addClass(file, class, languageName)
	self:no_impl()
end

--   Adds a class-parent relationship to the hierarchy.  The classes will be created if they don't already exist.
--
--   Parameters:
--
--       file - The <FileName> the reference was defined in.
--       class - The class <SymbolString>.
--       symbol - The parent class <SymbolString>.
--       scope - The package <SymbolString> that the reference appeared in.
--       using - An arrayref of package <SymbolStrings> that the reference has access to via "using" statements.
--       resolvingFlags - Any <Resolving Flags> to be used when resolving the reference.
--
--   Alternate Parameters:
--
--       file - The <FileName> the reference was defined in.
--       class - The class <SymbolString>.
--       reference - The parent <ReferenceString>.
--
function Class:addParentReference(file, class, symbol, scope, using, resolvingFlags)
	self:no_impl()
end

--   Watches a file for changes, which can then be applied by <AnalyzeChanges()>.  Definitions are not deleted via a DeleteClass()
--   function.  Instead, a file is watched for changes, reparsed, and then a comparison is made to look for definitions that
--   disappeared and any other relevant changes.
--
--   Parameters:
--
--       file - The <FileName> to watch.
--
function Class:watchFileForChanges(file)
	self:no_impl()
end

--   Checks the watched file for any changes that occured since the last time is was parsed, and updates the hierarchy as
--   necessary.  Also sends any files that are affected to <NaturalDocs::Project->RebuildFile()>.
--
function Class:analyzeChanges()
	self:no_impl()
end

--   Returns a <SymbolString> array of the passed class' parents, or an empty array if none.  Note that not all of them may be
--   defined.
--
function Class:parentsOf(class)
	self:no_impl()
end

--   Returns a <SymbolString> array of the passed class' children, or an empty array if none.  Note that not all of them may be
--   defined.
--
function Class:childrenOf(class)
	self:no_impl()
end

--   Deletes a file and everything defined in it.
--
--   Parameters:
--
--       file - The <FileName>.
--
function Class:deleteFile(file)
	self:no_impl()
end

--   Deletes a class definition from a file.  Will also delete any parent references from this class and file.  Will rebuild any file
--   affected unless <dontRebuildFiles> is set.
--
--   Parameters:
--
--       file - The <FileName> that defines the class.
--       class - The class <SymbolString>.
--
function Class:deleteClass(file, class)
	self:no_impl()
end

--   Deletes a class' parent reference and returns whether it resulted in the loss of a parent class.  Will rebuild any file affected
--   unless <dontRebuildFiles> is set.
--
--   Parameters:
--
--       file - The <FileName> that defines the reference.
--       class - The class <SymbolString>.
--       reference - The parent <ReferenceString>.
--
--   Returns:
--
--       If the class lost a parent as a result of this, it will return its <SymbolString>.  It will return undef otherwise.
--
function Class:deleteParentReference(file, class, reference)
	self:no_impl()
end

--   Returns the <REFERENCE_CH_CLASS> <ReferenceString> of the passed class <SymbolString>.
--
function Class:classReferenceOf(class, languageName)
	self:no_impl()
end

--   Calls <NaturalDocs::Project->RebuildFile()> for every file defining the passed class, its parents, and/or its children.
--   Returns without doing anything if <dontRebuildFiles> is set.
--
--   Parameters:
--
--       class - The class <SymbolString>.
--       rebuildParents - Whether to rebuild the class' parents.
--       rebuildSelf - Whether to rebuild the class.
--       rebuildChildren - Whether to rebuild the class' children.
--
function Class:rebuildFilesFor(class, rebuildParents, rebuildSelf, rebuildChildren)
	self:no_impl()
end


return Class()
