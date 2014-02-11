local Class = require("classBuilder"){name="SourceDB",bases="base.Object"};


--   Registers a <NaturalDocs::SourceDB::Extension>-derived package and returns a unique <ExtensionID> for it.  All extensions
--   must call this before they can be used.
--
--   Registration Order:
--
--       The order in which extensions register is important.  Whenever possible, items are added in the order their extensions
--       registered.  However, items are changed and deleted in the reverse order.  Take advantage of this to minimize
--       churn between extensions that are dependent on each other.
--
--       For example, when symbols are added or deleted they may cause references to be retargeted and thus their files need to
--       be rebuilt.  However, adding or deleting references never causes the symbols' files to be rebuilt.  So it makes sense that
--       symbols should be created before references, and that references should be deleted before symbols.
--
--   Parameters:
--
--       extension - The package or object of the extension.  Must be derived from <NaturalDocs::SourceDB::Extension>.
--       usesDefinitionObjects - Whether the extension uses its own class derived from <NaturalDocs::SourceDB::ItemDefinition>
--                                         or simply tracks each definitions existence.
--
--   Returns:
--
--       An <ExtensionID> unique to the extension.  This should be saved because it's required in functions such as <AddItem()>.
--
function Class:registerExtension(extension, usesDefinitionObjects)
	self:no_impl()
end

--   Loads the data of the source database and all the extensions.  Will call <NaturalDocs::SourceDB::Extension->Load()> for
--   all of them, unless there's a situation where all the source files are going to be reparsed anyway in which case it's not needed.
--
function Class:load()
	self:no_impl()
end

--   Saves the data of the source database and all its extensions.  Will call <NaturalDocs::SourceDB::Extension->Save()> for all
--   of them.
--
function Class:save()
	self:no_impl()
end

--   Removes all data associated with deleted source files.
--
function Class:purgeDeletedSourceFiles()
	self:no_impl()
end

--   Adds the passed item to the database.  This will not work if the item string already exists.  The item added should *not*
--   already have definitions attached.  Only use this to add blank items and then call <AddDefinition()> instead.
--
--   Parameters:
--
--       extension - An <ExtensionID>.
--       itemString - The string serving as the item identifier.
--       item - An object derived from <NaturalDocs::SourceDB::Item>.
--
--   Returns:
--
--       Whether the item was added, that is, whether it was the first time this item was added.
--
function Class:addItem(extension, itemString, item)
	self:no_impl()
end

--   Returns the <NaturalDocs::SourceDB::Item>-derived object for the passed <ExtensionID> and item string, or undef if there
--   is none.
--
function Class:getItem(extension, itemString)
	self:no_impl()
end

--   Deletes the record of the passed <ExtensionID> and item string.  Do *not* delete items that still have definitions.  Use
--   <DeleteDefinition()> first.
--
--   Parameters:
--
--       extension - The <ExtensionID>.
--       itemString - The item's identifying string.
--
--   Returns:
--
--       Whether it was successful, meaning whether an entry existed for it.
--
function Class:deleteItem(extension, itemString)
	self:no_impl()
end


--   Returns whether there is an item defined for the passed <ExtensionID> and item string.
--
function Class:hasItem(extension, itemString)
	self:no_impl()
end

--   Returns a hashref of all the items defined for an extension.  *Do not change the contents.*  The keys are the item strings and
--   the values are <NaturalDocs::SourceDB::Items> or derived classes.
--
function Class:getAllItemsHashRef(extension)
	self:no_impl()
end

--   Adds a definition to an item.  Assumes the item was already created with <AddItem()>.  If there's already a definition for this
--   file in the item, the new definition will be ignored.
--
--   Parameters:
--
--       extension - The <ExtensionID>.
--       itemString - The item string.
--       file - The <FileName> the definition is in.
--       definition - If you're using a custom <NaturalDocs::SourceDB::ItemDefinition> class, you must include an object for it here.
--                       Otherwise this parameter is ignored.
--
--   Returns:
--
--       Whether the definition was added, which is to say, whether this was the first definition for the passed <FileName>.
--
function Class:addDefinition(extension, itemString, file, definition)
	self:no_impl()
end

--   Changes the definition of an item.  This function is only used for extensions that use custom
--   <NaturalDocs::SourceDB::ItemDefinition>-derived classes.
--
--   Parameters:
--
--       extension - The <ExtensionID>.
--       itemString - The item string.
--       file - The <FileName> the definition is in.
--       definition - The definition, which must be an object derived from <NaturalDocs::SourceDB::ItemDefinition>.
--
function Class:changeDefinition(extension, itemString, file, definition)
	self:no_impl()
end

--   If the extension uses custom <NaturalDocs::SourceDB::ItemDefinition> classes, returns it for the passed definition or undef
--   if it doesn't exist.  Otherwise returns whether it exists.
--
function Class:getDefinition(extension, itemString, file)
	self:no_impl()
end

--   Removes the definition for the passed item.  Returns whether it was successful, meaning whether a definition existed for that
--   file.
--
function Class:deleteDefinition(extension, itemString, file)
	self:no_impl()
end

--   Returns whether there are any definitions for this item.
--
function Class:hasDefinitions(extension, itemString)
	self:no_impl()
end

--   Returns whether there is a definition for the passed <FileName>.
--
function Class:hasDefinition(extension, itemString, file)
	self:no_impl()
end

--   Begins watching a file for changes.  Only one file at a time can be watched.
--
--   This should be called before a file is parsed so the file info goes both into the main database and the watched file info.
--   Afterwards you call <AnalyzeWatchedFileChanges()> so item deletions and definition changes can be detected.
--
--   Parameters:
--
--       filename - The <FileName> to watch.
--
function Class:watchFileForChanges(filename)
	self:no_impl()
end

--   Returns whether we're currently watching a file for changes or not.
--
function Class:watchingFileForChanges()
	self:no_impl()
end

--   Analyzes the watched file for changes.  Will delete and change definitions as necessary.
--
function Class:analyzeWatchedFileChanges()
	self:no_impl()
end

return Class()
