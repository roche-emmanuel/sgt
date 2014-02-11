local Class = require("classBuilder"){name="Languages",bases="base.Object"};

--   Loads both the master and the project version of <Languages.txt>.
--
function Class:load()
	self:no_impl()
end

--   Loads a particular version of <Languages.txt>.
--
--   Parameters:
--
--       isMain - Whether the file is the main file or not.
--       tempExtensions - A hashref where the keys are all-lowercase extensions, and the values are arrayrefs of the all-lowercase
--                                 names of the languages that defined them, earliest first.  It will be changed by this function.
--       tempShebangStrings - A hashref where the keys are all-lowercase shebang strings, and the values are arrayrefs of the
--                                        all-lowercase names of the languages that defined them, earliest first.  It will be changed by this
--                                        function.
--
function Class:loadFile(isMain, tempExtensions, tempShebangStrings)
	self:no_impl()
end

--   Processes an array of language properties from <Languages.txt>.
--
--   Parameters:
--
--       properties - An arrayref of properties where each entry is the three consecutive values ( lineNumber, keyword, value ).
--                         It must start with the Language or Alter Language property.
--       version - The <VersionInt> of the file.
--       tempExtensions - A hashref where the keys are all-lowercase extensions, and the values are arrayrefs of the all-lowercase
--                                 names of the languages that defined them, earliest first.  It will be changed by this function.
--       tempShebangStrings - A hashref where the keys are all-lowercase shebang strings, and the values are arrayrefs of the
--                                        all-lowercase names of the languages that defined them, earliest first.  It will be changed by this
--                                        function.
--
function Class:processProperties(properties, version, tempExtensions, tempShebangStrings)
	self:no_impl()
end

--   Saves the main and user versions of <Languages.txt>.
--
function Class:save()
	self:no_impl()
end

--   Saves a particular version of <Topics.txt>.
--
--   Parameters:
--
--       isMain - Whether the file is the main file or not.
--
function Class:saveFile(isMain)
	self:no_impl()
end

--   Returns the language of the passed source file.
--
--   Parameters:
--
--       sourceFile - The source <FileName> to get the language of.
--
--   Returns:
--
--       A <NaturalDocs::Languages::Base>-derived object for the passed file, or undef if the file is not a recognized language.
--
function Class:languageOf(sourceFile)
	self:no_impl()
end

--   Called when the most used language is known.
--
function Class:onMostUsedLanguageKnown()
	self:no_impl()
end

return Class()
