local Class = require("classBuilder"){name="EntryHolder",bases="base.EventHandler"};

local Vector = require "std.Vector"
local Entry = require "gui.wx.Entry"
local Map = require "std.Map"
local Set = require "std.Set"

function Class:initialize(options)
	self._entries = Vector();
	self._entryGroups = Map()
	
end

function Class:getEntryGroup(grpname)
	local grp = self._entryGroups:get(grpname)
	if not grp then
		grp = Set()
		self._entryGroups:set(grpname,grp)
	end
	return grp
end

function Class:addEntry(entryClass,options,ext)
	self:check(options,"Invalid options table.")
	options.provider = options.provider or self:getDefaultProvider()
	options.intf = self;
	
	if options.parent and type(options.parent)=="string" then
		local parent = self:getEntry(options.parent)
		self:check(parent,"Could not retrieve entry parent with name ",options.parent)
		options.parent = parent
	end
	
	for k,v in pairs(ext or {}) do
		options[k] = v
	end	
	
	local entry = entryClass(options);
	self._entries:push_back(entry);

	-- if there is a grou for that entry then add it:
	if entry:getGroupName() then
		local grp = self:getEntryGroup(entry:getGroupName())
		grp:push_back(entry)
	end	
	
	return entry
end

function Class:getEntry(name)
	for _, entry in self._entries:sequence() do
		if entry:getName() == name then
			return entry;
		end
	end
end

function Class:updateEntries(name)
	self:fireEvent("EntriesUpdating")
    for _,entry in self._entries:sequence() do
        entry:updateDisplay()
    end	
	self:fireEvent("EntriesUpdated")
end

return Class
