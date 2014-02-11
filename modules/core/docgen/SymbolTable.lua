local Class = require("classBuilder"){name="SymbolTable",bases="base.Object"};

--   Loads all data files from disk.
--
function Class:load()
	self:no_impl()
end

--   Loads <SymbolTable.nd> from disk.
--
function Class:loadSymbolTable()
	self:no_impl()
end

--   Loads <IndexInfo.nd> from disk.
--
function Class:loadIndexInfo()
	self:no_impl()
end

--   Purges the symbol table of all symbols and references from files that no longer have Natural Docs content.
--
function Class:purge()
	self:no_impl()
end

--   Saves all data files to disk.
--
function Class:save()
	self:no_impl()
end

--   Saves <SymbolTable.nd> to disk.
--
function Class:saveSymbolTable()
	self:no_impl()
end

--   Saves <IndexInfo.nd> to disk.
--
function Class:saveIndexInfo()
	self:no_impl()
end

--   Adds a symbol definition to the table, if it doesn't already exist.  If the definition changes or otherwise requires the files that
--   reference it to be updated, the function will call <NaturalDocs::Project->RebuildFile()> to make sure that they are.
--
--   Parameters:
--
--       symbol  - The <SymbolString>.
--       file        - The <FileName> where it's defined.
--       type      - The symbol's <TopicType>.
--       prototype - The symbol's prototype, if applicable.
--       summary - The symbol's summary, if applicable.
--
function Class:addSymbol(symbol, file, type, prototype, summary)
	self:no_impl()
end

--   Adds a reference to the table, if it doesn't already exist.
--
--   Parameters:
--
--       type        - The <ReferenceType>.
--       symbol    - The reference <SymbolString>.
--       scope      - The scope <SymbolString> it appears in.
--       using       - An arrayref of scope <SymbolStrings> accessible to the reference via "using" statements, or undef if none.
--       file          - The <FileName> where the reference appears.  This is not required unless the type is <REFERENCE_TEXT>.
--       resolvingFlags - The <Resolving Flags> of the reference.  They will be ignored if the type is <REFERENCE_TEXT>.
--
--   Alternate Parameters:
--
--       referenceString - The <ReferenceString> to add.
--       file - The <FileName> where the reference appears.  This is not required unless the type is <REFERENCE_TEXT>.
--
function Class:addReference(type, symbol, scope, using, file, resolvingFlags)
	self:no_impl()
end

--   Tracks a file to see if any symbols or references were changed or deleted in ways that would require other files to be rebuilt.
--   Assumes that after this function call, the entire file will be parsed again, and thus every symbol and reference will go through
--   <AddSymbol()> and <AddReference()>.  Afterwards, call <AnalyzeChanges()> to handle any differences.
--
--   Parameters:
--
--       file - The <FileName> to watch.
--
function Class:watchFileForChanges(file)
	self:no_impl()
end

--   Handles any changes found when reparsing a file using <WatchFileForChanges()>.
--
function Class:analyzeChanges()
	self:no_impl()
end

--   Deletes a reference from the table.
--
--   Be careful with this function, as deleting a reference means there are no more of them in the file at all.  The tables do not
--   keep track of how many times references appear in a file.  In these cases you should instead call <WatchFileForChanges()>,
--   reparse the file, thus readding all the references, and call <AnalyzeChanges()>.
--
--   <REFERENCE_TEXT> references should *always* be managed with <WatchFileForChanges()> and <AnalyzeChanges()>.
--   This function should only be used externally for other types of references.
--
--   Parameters:
--
--       referenceString - The <ReferenceString>.
--       file - The <FileName> where the reference is.  This is not required unless the type is <REFERENCE_TEXT>.
--
function Class:deleteReference(referenceString, file)
	self:no_impl()
end

--   When called, it makes sure all indexes are listed as changed by <IndexChanged()>, regardless of whether they actually did
--   or not.
--
--   This can be called at any time.
--
function Class:rebuildAllIndexes()
	self:no_impl()
end

--   Purges unnecessary information from the symbol table after it is fully resolved.  This will reduce the memory footprint for the
--   build stage.  After calling this function, you can only call the <Information Functions> and <Save()>.
--
function Class:purgeResolvingInfo()
	self:no_impl()
end

--   Clears all generated indexes.
--
function Class:purgeIndexes()
	self:no_impl()
end

--   Returns what the passed reference information resolve to, if anything.  Note that this only works if the reference had
--   been previously added to the table via <AddReference()> with the exact same parameters.
--
--   Parameters:
--
--       type     - The <ReferenceType>.
--       symbol - The reference <SymbolString>.
--       scope   - The scope <SymbolString> the reference appears in, or undef if none.
--       using    - An arrayref of scope <SymbolStrings> available to the reference via using statements.
--       file       - The source <FileName> the reference appears in, or undef if none.
--       resolvingFlags - The <Resolving Flags> of the reference.  Ignored if the type is <REFERENCE_TEXT>.
--
--   Alternate Parameters:
--
--       referenceString - The <ReferenceString> to resolve.
--       file - The source <FileName> the reference appears in, or undef if none.
--
--   Returns:
--
--       A <NaturalDocs::SymbolTable::ReferenceTarget> object, or undef if the reference doesn't resolve to anything.
--
function Class:references(type, symbol, scope, using, file, resolvingFlags)
	self:no_impl()
end

--   Returns information on the passed <SymbolString>, if it exists.  Note that the symbol must be fully resolved.
--
--   Parameters:
--
--       symbol - The <SymbolString>.
--       file - The source <FileName> the reference appears in, or undef if none.
--
--   Returns:
--
--       A <NaturalDocs::SymbolTable::ReferenceTarget> object, or undef if the symbol isn't defined.
--
function Class:lookup(symbol, file)
	self:no_impl()
end

--   Returns a symbol index.
--
--   Indexes are generated on demand, but they are stored so subsequent calls for the same index will be fast.  Call
--   <PurgeIndexes()> to clear the generated indexes.
--
--   Parameters:
--
--       type  - The <TopicType> of symbol to limit the index to, or undef for none.
--
--   Returns:
--
--       An arrayref of sections.  The first represents all the symbols, the second the numbers, and the rest A through Z.
--       Each section is a sorted arrayref of <NaturalDocs::SymbolTable::IndexElement> objects.  If a section has no content,
--       it will be undef.
--
function Class:index(type)
	self:no_impl()
end

--   Determines which indexes out of a list actually have content.
--
--   Parameters:
--
--       types  - An existence hashref of the <TopicTypes> to check for indexes.
--
--   Returns:
--
--       An existence hashref of all the specified indexes that have content.  Will return an empty hashref if none.
--
function Class:hasIndexes(types)
	self:no_impl()
end

--   Returns whether the specified index has changed.
--
--   Parameters:
--
--       type  - The <TopicType> to limit the index to.
--
function Class:indexChanged(type)
	self:no_impl()
end

--   Returns an arrayref of whether each section of the specified index has content.  The first entry will be for symbols, the second
--   for numbers, and the rest A-Z.  Do not change the arrayref.
--
function Class:indexSectionsWithContent(type)
	self:no_impl()
end


--   Called whenever a change happens to a symbol that would cause an index to be regenerated.
--
--   Parameters:
--
--       type - The <TopicType> of the symbol that caused the change.
--
function Class:onIndexChange(type)
	self:no_impl()
end

--   Called whenever the current interpretation of a reference changes, meaning it switched from one symbol to another.
--
--   Parameters:
--
--       referenceString - The <ReferenceString> whose current interpretation changed.
--
function Class:onInterpretationChange(referenceString)
	self:no_impl()
end

--   Called whenever the symbol that serves as the interpretation of a reference changes, but the reference still resolves to
--   the same symbol.  This would happen if the type, prototype, summary, or which file serves as global definition of the symbol
--   changes.
--
--   Parameters:
--
--       referenceString - The <ReferenceString> whose interpretation's symbol changed.
--
function Class:onTargetSymbolChange(referenceString)
	self:no_impl()
end

--   Removes a symbol definition from the table.  It will call <OnInterpretationChange()> for all references that have it as their
--   current interpretation.
--
--   External code should not attempt to delete symbols using this function.  Instead it should call <WatchFileFoChanges()>,
--   reparse the file, and call <AnalyzeChanges()>.
--
--   Parameters:
--
--       symbol - The <SymbolString>.
--       file       - The <FileName> where the definition is.
--
function Class:deleteSymbol(symbol, file)
	self:no_impl()
end

--   Generates the list of interpretations for the passed reference.  Also creates potential symbols as necessary.
--
--   Parameters:
--
--       referenceString - The <ReferenceString> to generate the interpretations of.
--
function Class:generateInterpretations(referenceString)
	self:no_impl()
end

--   Generates the list of relative interpretations for the passed reference and packages.  Also creates potential symbols as
--   necessary.
--
--   This function will _not_ create global interpretations.  It _will_ create a local interpretations (symbol + all packages) unless
--   you set dontUseFull.
--
--   Parameters:
--
--       referenceString - The <ReferenceString> to generate interpretations for.
--       symbol - The <SymbolString> to generate interpretations of.
--       singulars - A reference to an array of singular <SymbolStrings> to also generate interpretations of.  Set to an empty array
--                       if none.
--       package - The package <SymbolString> to use.  May be undef.
--       score - The starting score to apply.
--       dontUseFull - Whether to not generate an interpretation including the full package identifier.  If set, generated interpretations
--                           will start one level down.
--
--   Returns:
--
--       The next unused score.  This is basically the passed score minus the number of interpretations created.
--
function Class:generateRelativeInterpretations(referenceString, symbol, singulars, package, score, dontUseFull)
	self:no_impl()
end

--   Generates singular interpretations of a <SymbolString> if it can be interpreted as a plural.  Not all of them will be valid singular
--   forms, but that doesn't matter since it's incredibly unlikely an invalid form would exist as a symbol.  What matters is that the
--   legimate singular is present on the list.
--
--   Parameters:
--
--       symbol - The <SymbolString>.
--
--   Returns:
--
--       An array of potential singular interpretations as <SymbolStrings>, in no particular order.  If the symbol can't be interpreted
--       as a plural, returns an empty array.
--
function Class:singularInterpretationsOf(symbol)
	self:no_impl()
end

--   Adds an interpretation to an existing reference.  Creates potential symbols as necessary.
--
--   Parameters:
--
--       referenceString - The <ReferenceString> to add the interpretation to.
--       symbol - The <SymbolString> the reference can be interpreted as.
--       score - The score of the interpretation.
--
function Class:addInterpretation(referenceString, symbol, score)
	self:no_impl()
end

--   Interprets the passed reference, matching it to the defined symbol with the highest score.  If the symbol is already
--   interpreted, it will reinterpret it.  If there are no matches, it will make it an undefined reference.
--
--   Parameters:
--
--       referenceString - The <ReferenceString> to interpret.
--
function Class:interpretReference(referenceString)
	self:no_impl()
end

--   Generates a symbol index.
--
--   Parameters:
--
--       type  - The <TopicType> to limit the index to.
--
--   Returns:
--
--       An arrayref of sections.  The first represents all the symbols, the second the numbers, and the rest A through Z.
--       Each section is a sorted arrayref of <NaturalDocs::SymbolTable::IndexElement> objects.  If a section has no content,
--       it will be undef.
--
function Class:makeIndex(type)
	self:no_impl()
end

--   Splits a <SymbolString> into its symbol and package portions for indexing.
--
--   Parameters:
--
--       symbol - The <SymbolString>.
--       type - Its <TopicType>.
--
--   Returns:
--
--       The array ( symbol, package ), which are both <SymbolStrings>.  If the symbol is global, package will be undef.
--
function Class:splitSymbolForIndex(symbol, type)
	self:no_impl()
end

return Class()
