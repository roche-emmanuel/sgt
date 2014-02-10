local Class = require("classBuilder"){name="Section",bases="base.Object"};

local Set = require "std.Set"

function Class:initialize()
	self._timer = osg.Timer.instance()
	--self._totalTime = 0.0;
	self._numCycles = 0;
	self._name = "unnamed"
	self._children = Set()
	self._startTicks = {}
	self._stopTicks = {}
end

function Class:setName(name)
	self._name = name;
end

function Class:getParent()
	return self._parent;
end

function Class:setParent(parent)
	if parent and not self._parent then
		self._parent = parent;	
		parent:addChild(self)
	end
	
	self:check(self._parent==parent,"Trying to change section parent dynamically.");
end

function Class:addChild(section)
	self._children:push_back(section)
end

function Class:start(parent)
	table.insert(self._startTicks, self._timer:tick())
end

function Class:stop()
	table.insert(self._stopTicks, self._timer:tick())
end

function Class:getNumCycles()
	return self._numCycles
end
 
function Class:getTotalTime()
	if not self._totalTime then
		self:check(#self._startTicks==#self._stopTicks,"Mismatch in section num cycles: ".. #self._startTicks .. "!=" .. #self._stopTicks.. " for section ".. self._name)
		self._totalTime = 0.0
		
		for i=1,#self._stopTicks do
			local delta = self._timer:delta_s(self._startTicks[i],self._stopTicks[i])
			self._minTime = math.min(self._minTime or delta,delta);
			self._maxTime = math.max(self._maxTime or delta,delta);
			
			self._totalTime = self._totalTime + delta;	
		end	
	end
	
	return self._totalTime
end

function Class:writeReport(data,indent,totalExec)	
	self._numCycles = #self._stopTicks
	
	local totalTime = self:getTotalTime()
	
	table.insert(data,string.rep("  ",indent))
	table.insert(data,"- ".. self._name .. ": \t\t")
	
	table.insert(data,("count=%d"):format(self._numCycles))
	
	if self._minTime ~= self._maxTime then
		table.insert(data,(", min=%.6f s"):format(self._minTime))
		table.insert(data,(", max=%.6f s"):format(self._maxTime))
	end

	if self._numCycles > 0 then
		table.insert(data,(", total=%.6f s"):format(self._totalTime))	
		table.insert(data,(", mean=%.6f s"):format(self._totalTime/self._numCycles))	
		if totalExec then
			table.insert(data,(", exec=%.2f%%"):format(100.0*self._totalTime/totalExec))	
		end
	end
	
	local parent = self._parent
	if parent and parent:getNumCycles()>0 then
		local pTotalTime = parent:getTotalTime()
		table.insert(data,(", ptp=%.2f%%, pcp=%.2f%%"):format(100.0*self._totalTime/pTotalTime,100.0*self._numCycles/parent:getNumCycles()))	
	end
	table.insert(data,"\n")
	
	local sortfn = function(e1,e2)
		return e1:getTotalTime() > e2:getTotalTime()
	end
	
	self._children:sort(sortfn)
	
	for _,child in self._children:sequence() do
		child:writeReport(data,indent+1,totalExec)
	end
end

return Class
