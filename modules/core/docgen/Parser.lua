local Class = require("classBuilder"){name="Parser",bases="base.Object"};

--   Parses the input file for information.  Will update the information about the file in <NaturalDocs::SymbolTable> and
--   <NaturalDocs::Project>.
--
--   Parameters:
--
--       file - The <FileName> to parse.
--
function Class:parseForInformation(file)
	self:no_impl()
end

--   Parses the input file for building, returning it as a <NaturalDocs::Parser::ParsedTopic> arrayref.
--
--   Note that all new and changed files should be parsed for symbols via <ParseForInformation()> before calling this function on
--   *any* file.  The reason is that <NaturalDocs::SymbolTable> needs to know about all the symbol definitions and references to
--   resolve them properly.
--
--   Parameters:
--
--       file - The <FileName> to parse for building.
--
--   Returns:
--
--       An arrayref of the source file as <NaturalDocs::Parser::ParsedTopic> objects.
--
function Class:parseForBuild(file)
	self:no_impl()
end

--   The function called by <NaturalDocs::Languages::Base>-derived objects when their parsers encounter a comment
--   suitable for documentation.
--
--   Parameters:
--
--       commentLines - An arrayref of the comment's lines.  The language's comment symbols should be converted to spaces,
--                               and there should be no line break characters at the end of each line.  *The original memory will be
--                               changed.*
--       lineNumber - The line number of the first of the comment lines.
--       isJavaDoc - Whether the comment is in JavaDoc format.
--
--   Returns:
--
--       The number of topics created by this comment, or zero if none.
--
function Class:onComment(commentLines, lineNumber, isJavaDoc)
	self:no_impl()
end

--   A function called by <NaturalDocs::Languages::Base>-derived objects when their parsers encounter a class declaration.
--
--   Parameters:
--
--       class - The <SymbolString> of the class encountered.
--
function Class:onClass(class)
	self:no_impl()
end

--   A function called by <NaturalDocs::Languages::Base>-derived objects when their parsers encounter a declaration of
--   inheritance.
--
--   Parameters:
--
--       class - The <SymbolString> of the class we're in.
--       parent - The <SymbolString> of the class it inherits.
--       scope - The package <SymbolString> that the reference appeared in.
--       using - An arrayref of package <SymbolStrings> that the reference has access to via "using" statements.
--       resolvingFlags - Any <Resolving Flags> to be used when resolving the reference.  <RESOLVE_NOPLURAL> is added
--                              automatically since that would never apply to source code.
--
function Class:onClassParent(class, parent, scope, using, resolvingFlags)
	self:no_impl()
end

--   Opens the source file and parses process.  Most of the actual parsing is done in <NaturalDocs::Languages::Base->ParseFile()>
--   and <OnComment()>, though.
--
--   *Do not call externally.*  Rather, call <ParseForInformation()> or <ParseForBuild()>.
--
--   Returns:
--
--       The default menu title of the file.  Will be the <FileName> if nothing better is found.
--
function Class:parse()
	self:no_impl()
end

--   Removes any extraneous formatting and whitespace from the comment.  Eliminates comment boxes, horizontal lines, trailing
--   whitespace from lines, and expands all tab characters.  It keeps leading whitespace, though, since it may be needed for
--   example code, and blank lines, since the original line numbers are needed.
--
--   Parameters:
--
--       commentLines  - An arrayref of the comment lines to clean.  *The original memory will be changed.*  Lines should have the
--                                language's comment symbols replaced by spaces and not have a trailing line break.
--
function Class:cleanComment(commentLines)
	self:no_impl()
end

--   Recalculates the packages for all comment topics using the auto-topics and the scope record.  Call this *before* calling
--   <MergeAutoTopics()>.
--
--   Parameters:
--
--       autoTopics - A reference to the list of automatically generated <NaturalDocs::Parser::ParsedTopics>.
--       scopeRecord - A reference to an array of <NaturalDocs::Languages::Advanced::ScopeChanges>.
--
function Class:repairPackages(autoTopics, scopeRecord)
	self:no_impl()
end

--   Merges the automatically generated topics into the file.  If an auto-topic matches an existing topic, it will have it's prototype
--   and package transferred.  If it doesn't, the auto-topic will be inserted into the list unless
--   <NaturalDocs::Settings->DocumentedOnly()> is set.  If an existing topic doesn't have a title, it's assumed to be a headerless
--   comment and will be merged with the next auto-topic or discarded.
--
--   Parameters:
--
--       language - The <NaturalDocs::Languages::Base>-derived class for the file.
--       autoTopics - A reference to the list of automatically generated topics.
--
function Class:mergeAutoTopics(language, autoTopics)
	self:no_impl()
end

--   After <MergeAutoTopics()> is done, this function removes any remaining headerless topics from the file.  If they don't merge
--   into anything, they're not valid topics.
--
function Class:removeRemainingHeaderlessTopics()
	self:no_impl()
end

--   Creates group topics for files that do not have them.
--
function Class:makeAutoGroups()
	self:no_impl()
end

--   Creates group topics for sections of files that do not have them.  A support function for <MakeAutoGroups()>.
--
--   Parameters:
--
--       startIndex - The index to start at.
--       endIndex - The index to end at.  Not inclusive.
--
--   Returns:
--
--       The number of group topics added.
--
function Class:makeAutoGroupsFor(startIndex, endIndex)
	self:no_impl()
end

--   Adds any class topics to the class hierarchy, since they may not have been called with <OnClass()> if they didn't match up to
--   an auto-topic.
--
function Class:addToClassHierarchy()
	self:no_impl()
end

--   Adds section and class topics to make sure the package is correctly represented in the documentation.  Should be called last in
--   this process.
--
function Class:addPackageDelineators()
	self:no_impl()
end


--   Breaks list topics into individual topics.
--
function Class:breakLists()
	self:no_impl()
end

--   Returns the summary text from the topic body.
--
--   Parameters:
--
--       body - The complete topic body, in <NDMarkup>.
--
--   Returns:
--
--       The topic summary, or undef if none.
--
function Class:getSummaryFromBody(body)
	self:no_impl()
end

--   Returns the summary text from a description list entry.
--
--   Parameters:
--
--       description - The description in <NDMarkup>.  Should be the content between the <dd></dd> tags only.
--
--   Returns:
--
--       The description summary, or undef if none.
--
function Class:getSummaryFromDescriptionList(description)
	self:no_impl()
end


return Class()
