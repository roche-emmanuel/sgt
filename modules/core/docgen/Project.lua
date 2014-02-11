local Class = require("classBuilder"){name="Project",bases="base.Object"};

function Class:initialize(options)

end


--   Loads the project file from disk and compares it against the files in the input directory.  Project is loaded from
--   <FileInfo.nd>.  New and changed files will be added to <FilesToParse()>, and if they have content,
--   <FilesToBuild()>.
--
--   Will call <NaturalDocs::Languages->OnMostUsedLanguageKnown()> if <MostUsedLanguage()> changes.
--
--   Returns:
--
--       Returns whether the project was changed in any way.
--
function Class:loadSourceFileInfo()
	self:no_impl()
end

--   Saves the source file info to disk.  Everything is saved in <FileInfo.nd>.
--
function Class:saveSourceFileInfo()
	self:no_impl()
end

--   Loads the config file info from disk.
--
function Class:loadConfigFileInfo()
	self:no_impl()
end

--   Saves the config file info to disk.  You *must* save all other config files first, such as <Menu.txt> and <Topics.txt>.
--
function Class:saveConfigFileInfo()
	self:no_impl()
end

--   Loads the image file info from disk.
--
function Class:loadImageFileInfo()
	self:no_impl()
end

--   Saves the image file info to disk.
--
function Class:saveImageFileInfo()
	self:no_impl()
end

--   If the project uses the old file names used prior to 1.14, it converts them to the new file names.
--
function Class:migrateOldFiles()
	self:no_impl()
end

--   Returns the full path to the passed main configuration file.  Pass the file name only.
--
function Class:mainConfigFile(file)
	self:no_impl()
end

--   Returns the <FileStatus> of the passed main configuration file.  Pass the file name only.
--
function Class:mainConfigFileStatus(file)
	self:no_impl()
end

--   Returns the full path to the passed user configuration file.  Pass the file name only.
--
function Class:userConfigFile(file)
	self:no_impl()
end


--   Returns the <FileStatus> of the passed user configuration file.  Pass the file name only.
--
function Class:userConfigFileStatus(file)
	self:no_impl()
end


--   Returns the full path to the passed data file.  Pass the file name only.
--
function Class:dataFile(file)
	self:no_impl()
end

-- Returns an existence hashref of the <FileNames> to parse.  This is not a copy of the data, so don't change it.
function Class:filesToParse()
	return self._filesToParse;
end

-- Returns an existence hashref of the <FileNames> to build.  This is not a copy of the data, so don't change it.
function Class:filesToBuild()
	return self._filesToBuild;
end

-- Returns an existence hashref of the <FileNames> that had content last time, but now either don't anymore or were deleted.
-- This is not a copy of the data, so don't change it.
function Class:filesToPurge()
	return self._filesToPurge;
end

--   Adds the file to the list of files to build.  This function will automatically filter out files that don't have Natural Docs content and
--   files that are part of <FilesToPurge()>.  If this gets called on a file and that file later gets Natural Docs content, it will be added.
--
--   Parameters:
--
--       file - The <FileName> to build or rebuild.
--
function Class:rebuildFile(file)
	self:no_impl()
end


--   Adds all supported files to the list of files to parse.  This does not necessarily mean these files are going to be rebuilt.
--
function Class:reparseEverything()
	self:no_impl()
end


--   Adds all supported files to the list of files to build.  This does not necessarily mean these files are going to be reparsed.
--
function Class:rebuildEverything()
	self:no_impl()
end

-- Returns an existence hashref of the <FileNames> that have Natural Docs content but are not part of <FilesToBuild()>.  This is
-- not a copy of the data so don't change it.
function Class:unbuiltFilesWithContent()
	return self._unbuiltFilesWithContent;
end


-- Returns and existence hashref of the <FileNames> that have Natural Docs content.
function Class:filesWithContent()
    self:no_impl()
end


--   Returns whether the <FileName> contains Natural Docs content.
--
function Class:hasContent(file)
	self:no_impl()
end


--   Sets whether the <FileName> has Natural Docs content or not.
--
function Class:setHasContent(file, hasContent)
	self:no_impl()
end


--   Returns the <FileStatus> of the passed <FileName>.
--
function Class:statusOf(file)
	self:no_impl()
end


--   Returns the default menu title of the <FileName>.  If one isn't specified, it returns the <FileName>.
--
function Class:defaultMenuTitleOf(file)
	self:no_impl()
end


--   Sets the <FileName's> default menu title.
--
function Class:setDefaultMenuTitle(file, menuTitle)
	self:no_impl()
end


--   Returns the name of the most used language in the source trees.  Does not include text files.
--
function Class:mostUsedLanguage()
	return self._mostUsedLanguage;
end

--   Returns whether the passed image file exists.
--
function Class:imageFileExists(file)
	self:no_impl()
end


--   Returns the dimensions of the passed image file as the array ( width, height ).  Returns them both as undef if it cannot be
--   determined.
--
function Class:imageFileDimensions(file)
	self:no_impl()
end


--   Returns the properly capitalized version of the passed image <FileName>.  Image file paths are treated as case insensitive
--   regardless of whether the underlying operating system is or not, so we have to make sure the final version matches the
--   capitalization of the actual file.
--
function Class:imageFileCapitalization(file)
	self:no_impl()
end


--   Adds a reference to the passed image <FileName>.
--
function Class:addImageFileReference(imageFile)
	self:no_impl()
end


--   Deletes a reference from the passed image <FileName>.
--
function Class:deleteImageFileReference(imageFile)
	self:no_impl()
end


--   Returns an existence hashref of image <FileNames> that need to be updated.  *Do not change.*
--
function Class:imageFilesToUpdate()
	return self._imageFilesToUpdate;
end


--   Returns an existence hashref of image <FileNames> that need to be updated.  *Do not change.*
--
function Class:imageFilesToPurge()
	return self._imageFilesToPurge;
end


--   Gets all the supported files in the passed directory and its subdirectories and puts them into <supportedFiles>.  The only
--   attribute that will be set is <NaturalDocs::Project::SourceFile->LastModified()>.  Also sets <mostUsedLanguage>.
--
function Class:getAllSupportedFiles()
	self:no_impl()
end


--   Attempts to determine the dimensions of the passed image and apply them to their object in <imageFiles>.  Will set them to
--   undef if they can't be determined.
--
function Class:determineImageDimensions(imageFile)
	self:no_impl()
end
           
return Class()
