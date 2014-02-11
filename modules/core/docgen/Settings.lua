local Class = require("classBuilder"){name="Settings",bases="base.Object"};

local Set = require "std.Set"

function Class:initialize(options)
	self._inputDirectories = Set()
end

---  Loads and parses all settings from the command line and configuration files.  Will exit if the options are invalid or the syntax
--   reference was requested.
function Class:load()
    self:parseCommandLine();
    self:loadAndComparePreviousSettings();
end
    
--- Saves all settings in configuration files to disk.
function Class:save()
    self:savePreviousSettings();
end

---  Generates names for each of the input and image directories, which can later be retrieved with <InputDirectoryNameOf()>
--   and <ImageDirectoryNameOf()>.
--
--   Parameters:
--
--       inputHints - A hashref of suggested input directory names, where the keys are the directories and the values are the names.
--                        These take precedence over anything generated.  You should include names for directories that are no longer in
--                        the command line.  This parameter may be undef.
--       imageHints - Same as inputHints, only for the image directories.
function Class:generateDirectoryNames(inputHints, imageHints)
	self:no_impl()
end
 
---  Returns an arrayref of input directories.  Do not change.
--
--   This will not return any removed input directories.
function Class:inputDirectories()
	return self._inputDirectories;
end

--   Returns the generated name of the passed input directory.  <GenerateDirectoryNames()> must be called once before this
--   function is available.
--
--   If a name for a removed input directory is available, it will be returned as well.
--
function Class:inputDirectoryNameOf(directory)
	self:no_impl()
end


--   Takes an input file name and returns the array ( inputDirectory, relativePath ).
--
--   If the file cannot be split from an input directory, it will try to do it with the removed input directories.
--
function Class:splitFromInputDirectory(file)
	self:no_impl()
end

--   Returns an arrayref of image directories.  Do not change.
--
--   This will not return any removed image directories.
--
function Class:imageDirectories()
	self:no_impl()
end


--   Returns the generated name of the passed image or input directory.  <GenerateDirectoryNames()> must be called once before
--   this function is available.
--
--   If a name for a removed input or image directory is available, it will be returned as well.
--
function Class:imageDirectoryNameOf(directory)
	self:no_impl()
end


--   Takes an input image file name and returns the array ( imageDirectory, relativePath ).
--
--   If the file cannot be split from an image directory, it will try to do it with the removed image directories.
--
function Class:splitFromImageDirectory(file)
	self:no_impl()
end


--   Returns an arrayref of relative image directories.  Do not change.
--
function Class:relativeImageDirectories()
	self:no_impl()
end

-- Returns an arrayref of input directories to exclude.  Do not change.
function Class:excludedInputDirectories()
	return self._excludedInputDirectories;
end

-- Returns an arrayref of <NaturalDocs::Settings::BuildTarget>s.  Do not change.
function Class:buildTargets()
	return self._buildTargets;
end


--   Returns the output directory of a builder object.
--
--   Parameters:
--
--       object - The builder object, whose class is derived from <NaturalDocs::Builder::Base>.
--
--   Returns:
--
--       The builder directory, or undef if the object wasn't found..
--
function Class:outputDirectoryOf(object)
	self:no_impl()
end


-- Returns an arrayref of the styles associated with the output.
function Class:styles()
	return self._styles;
end

-- Returns the project directory.
function Class:projectDirectory()
	return self._projectDirectory;
end

-- Returns the project data directory.
function Class:projectDataDirectory()
	self:no_impl()
end

-- Returns the main style directory.
function Class:styleDirectory()
	self:no_impl()
end

-- Returns the main JavaScript directory.
function Class:javaScriptDirectory()
	self:no_impl()
end

-- Returns the main configuration directory.
function Class:configDirectory()
	self:no_impl()
end

-- Returns whether undocumented code aspects should be included in the output.
function Class:documentedOnly()
	return self._documentedOnly;
end

-- Returns the number of spaces tabs should be expanded to.
function Class:tabLength()
	return self._tabLength;
end

-- Returns whether auto-grouping is turned off.
function Class:noAutoGroup()
	return self._noAutoGroup;
end

-- Returns whether source files should always use the file name as the title.
function Class:onlyFileTitles()
	return self._onlyFileTitles;
end

-- Returns whether the script should be run in quiet mode or not.
function Class:isQuiet()
	return self._isQuiet;
end

-- Returns whether all data files should be ignored and rebuilt.
function Class:rebuildData()
	return self._rebuildData;
end

-- Returns whether to apply syntax highlighting (start code) sections.
function Class:highlightCode()
	return self._highlightCode;
end

-- Returns whether to apply syntax highlighting to anonymous code sections designated with :, >, or |.
function Class:highlightAnonymous()
	return self._highlightAnonymous;
end


--   Returns Natural Docs' version number as an integer.  Use <TextAppVersion()> to get a printable version.
function Class:appVersion()
	self:no_impl()
end

--   Returns Natural Docs' version number as plain text.
function Class:textAppVersion()
    return '0.1';
end


--   Returns a string of the project's current web address.
function Class:appURL()
	return 'http://nervtech.info.tm:3000';
end

--   Parses and validates the command line.  Will cause the script to exit if the options ask for the syntax reference or
--   are invalid.
--
function Class:parseCommandLine()
	self:no_impl()
end


--   Prints the syntax reference.
--
function Class:printSyntax()
	self:no_impl()
end


--   Prints all the possible output formats that can be specified with -o.  Each one will be placed on its own line.
--
--   Parameters:
--
--       prefix - Characters to prefix each one with, such as for indentation.
--
function Class:printOutputFormats(prefix)
	self:no_impl()
end

--   Loads <PreviousSettings.nd> and compares the values there with those in the command line.  If differences require it,
--   sets <rebuildData> and/or <rebuildOutput>.
--
function Class:loadAndComparePreviousSettings()
	self:no_impl()
end


--   Saves the settings into <PreviousSettings.nd>.
--
function Class:savePreviousSettings()
	self:no_impl()
end
        	
return Class()
