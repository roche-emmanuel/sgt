local Class = require("classBuilder"){name="ImageReferenceTable",bases="base.Object"};

--   Registers the package with <NaturalDocs::SourceDB>.
--
function Class:register()
	self:no_impl()
end

--   Loads the data from <ImageReferenceTable.nd>.  Returns whether it was successful.
--
function Class:load()
	self:no_impl()
end

--   Saves the data to <ImageReferenceTable.nd>.
--
function Class:save()
	self:no_impl()
end

--   Adds a new image reference.
--
function Class:addReference(file, referenceText)
	self:no_impl()
end

--   Called for each definition deleted by <NaturalDocs::SourceDB>.  This is called *after* the definition has been deleted from
--   the database, so don't expect to be able to read it.
--
function Class:onDeletedDefinition(referenceString, file, wasLastDefinition)
	self:no_impl()
end

--   Returns the image file the reference resolves to, or undef if none.
--
--   Parameters:
--
--       sourceFile - The source <FileName> the reference appears in.
--       text - The reference text.
--
function Class:getReferenceTarget(sourceFile, text)
	self:no_impl()
end

--   Determines the best target for the passed <ImageReferenceString> and sets it on the
--   <NaturalDocs::ImageReferenceTable::Reference> object.  Returns the new target <FileName>.  Does *not* add any source
--   files to the bulid list.
--
function Class:setReferenceTarget(referenceString)
	self:no_impl()
end

return Class()
