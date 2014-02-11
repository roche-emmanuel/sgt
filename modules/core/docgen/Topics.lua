local Class = require("classBuilder"){name="Topics",bases="base.Object"};


--   Loads both the master and the project version of <Topics.txt>.
function Class:load()
	self:no_impl()
end

--   Loads a particular version of <Topics.txt>.
--
--   Parameters:
--
--       isMain - Whether the file is the main file or not.
--
function Class:loadFile(isMain)
	self:no_impl()
end

--   Saves the main and user versions of <Topics.txt>.
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

--   Returns information about a topic keyword.
--
--   Parameters:
--
--       keyword - The keyword, which may be plural.
--
--   Returns:
--
--       The array ( topicType, info, isPlural ), or an empty array if the keyword doesn't exist.
--
--       topicType - The <TopicType> of the keyword.
--       info - The <NaturalDocs::Topics::Type> of its type.
--       isPlural - Whether the keyword was plural or not.
--
function Class:keywordInfo(keyword)
	self:no_impl()
end

--   Returns information about a topic name.
--
--   Parameters:
--
--      name - The topic type name, which can be plural and/or alphanumeric only.
--
--   Returns:
--
--       The array ( topicType, info ), or an empty array if the name doesn't exist.  Note that unlike <KeywordInfo()>, this
--       does *not* tell you whether the name is plural or not.
--
--       topicType - The <TopicType> of the name.
--       info - The <NaturalDocs::Topics::Type> of the type.
--
function Class:nameInfo(name)
	self:no_impl()
end

--   Returns information about a <TopicType>.
--
--   Parameters:
--
--      type - The <TopicType>.
--
--   Returns:
--
--       The <NaturalDocs::Topics::Type> of the type, or undef if it didn't exist.
--
function Class:typeInfo(type)
	self:no_impl()
end

--   Returns the name of the passed <TopicType>, or undef if it doesn't exist.
--
--   Parameters:
--
--       topicType - The <TopicType>.
--       plural - Whether to return the plural instead of the singular.
--       alphanumericOnly - Whether to strips everything but alphanumeric characters out.  Case isn't modified.
--
--   Returns:
--
--       The topic type name, according to what was specified in the parameters, or undef if it doesn't exist.
--
function Class:nameOfType(topicType, plural, alphanumericOnly)
	self:no_impl()
end

--   Returns a <TopicType> for the passed topic name.
--
--   Parameters:
--
--       topicName - The name of the topic, which can be plural and/or alphanumeric only.
--
--   Returns:
--
--       The <TopicType>.  It does not specify whether the name was plural or not.
--
function Class:typeFromName(topicName)
	self:no_impl()
end

--   Returns whether the passed <TopicType> is defined.
--
function Class:isValidType(type)
	self:no_impl()
end

--   Returns a <TopicType> for the passed legacy topic type integer.  <TopicTypes> were changed from integer constants to
--   strings in 1.3.
--
function Class:typeFromLegacy(legacyInt)
	self:no_impl()
end

--   Returns an array of all possible indexable <TopicTypes>.
--
function Class:allIndexableTypes()
	self:no_impl()
end

--   Returns a <TopicType> for the passed topic name.  It does not check to see if it exists already.
--
--   Parameters:
--
function Class:makeTopicType(topicName)
	self:no_impl()
end


return Class()
