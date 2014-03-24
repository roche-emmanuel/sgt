local Class = require("classBuilder"){name="Profiler",bases="base.Object"};

local osg = require "osg"
local Section = require "debugging.Section"
-- local tm = require "base.TimeManager"

function Class:initialize()
	local Map = require "std.Map"
	local Vector = require "std.Vector"
	
	self._timer = osg.Timer.instance()
	self._sections = {} --Map();
	self._sectionStack = Vector()
	self._enabled = config.profiler_enabled
	
	self:info("Profiler is ", self._enabled and "ON" or "OFF")
	
	--self._timer = osg.Timer.instance()
end

function Class:begin()
	self._beginTick = self._timer:tick()
	-- self._beginTick = tm:tick()
end

function Class:finish()
	self._totalTime = self._timer:delta_s(self._beginTick,self._timer:tick());
	-- self._totalTime =tm:delta_s(self._beginTick);
end

function Class:start(sname)
	if not self._enabled then return end
	
	local section = self._sections[sname];
	if not section then
		section = Section();
		section:setName(sname)		
		self._sections[sname] = section;
		local parent = self:getCurrentSection()
		section:setParent(parent)
	end
	
	section:start()
	self:pushSection(section)
end

function Class:stop()
	if not self._enabled then return end
	
	local section = self:getCurrentSection()
	
	section:stop();
	self:popSection()
end

function Class:switch(sname)
	if not self._enabled then return end
	
	self:stop()
	self:start(sname)
end

function Class:pushSection(section)
	self._sectionStack:push_back(section)
end

function Class:getCurrentSection()
	return self._sectionStack:back()
end

function Class:popSection()
	self._sectionStack:pop_back()
end

function Class:setEnabled(enabled)
	self._enabled = enable;
end

function Class:getReport()
	local result = {}
	
	table.insert(result,"Date: ".. os.date() .."\n")
	
	if self._totalTime then
		table.insert(result,("Total execution time: %f s\n"):format(self._totalTime));
	end
	
	for _,section in pairs(self._sections) do
		if section:getParent()==nil then
			section:writeReport(result,0,self._totalTime)
		end
	end
	
	local str = table.concat(result)
	
	return str
end

function Class:writeReport(filename)
	if not self._enabled then return end
	
	local str = self:getReport()
	
	filename = filename or "profile.log"
	local f = io.open(filename,"w")
	f:write(str);
	f:close()
end

return Class() -- return instance of the class.
