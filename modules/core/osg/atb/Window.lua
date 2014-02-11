local Class = require("classBuilder"){name="ATBWindow",bases="base.Object"};

require "osg"
require "wx"
local atb = require "atb"

function Class:initialize(options)	
	self:check(options and options.name,"Invalid ATB window name")
	self._name = options.name
	self._bar = atb.TwNewBar(self._name);
	self._cbs = require("std.Vector")()
end

function Class:addSeparator(name,def)
	atb.TwAddSeparator(self._bar, name or "", def or "");
end

function Class:addVariable(cb,options)
	self._cbs:push_back(cb)
	cb:setReadOnly(options.readOnly or not options.setValue)
	self._bar:addVariable(options.name, cb, options.def or "");
end

function Class:addBool(options)
	self:check(options,"Invalid options table.")	
	self:addVariable(atb.BoolCallback(options),options)
end

function Class:addInt(options)
	self:check(options,"Invalid options table.")
	self:addVariable(atb.IntCallback(options),options)
end

function Class:addDouble(options)
	self:check(options,"Invalid options table.")
	self:addVariable(atb.DoubleCallback(options),options)
end

function Class:addColor(options)
	self:check(options,"Invalid options table.")
	self:addVariable(atb.ColorCallback(options),options)
end

function Class:addString(options)
	self:check(options,"Invalid options table.")
	self:addVariable(atb.StringCallback(options),options)
end

function Class:addQuat(options)
	self:check(options,"Invalid options table.")
	self:addVariable(atb.QuatCallback(options),options)
end

function Class:addDir(options)
	self:check(options,"Invalid options table.")
	self:addVariable(atb.DirCallback(options),options)
end

function Class:addEnum(options)
	self:check(options,"Invalid options table.")
	local valStr = table.concat(options.values,",")
	self:info("Creating enum '", options.enum or options.name, "' from values: '", valStr,"'");
	local id = atb.TwDefineEnumFromString(options.enum or options.name, valStr);
	local cb = atb.EnumCallback(options)
	cb:setEnumType(id);
	self:addVariable(cb,options)
end

function Class:addButton(options)
	self:check(options,"Invalid options table.")
	local cb = atb.ButtonCallback(options)
	self._cbs:push_back(cb)
	
	self._bar:addButton(options.name, cb, options.def or "");	
end

function Class:getPosition()
	return self._bar:getIntParam2("","position");
end

function Class:getSize()
	return self._bar:getIntParam2("","size");
end

function Class:getRect()
	local pos = self:getPosition();
	local size = self:getSize();
	-- self:info("Pos=",pos,", size=",size)
	
	return wx.wxRect(pos:x(),pos:y(),size:x(),size:y())
end

return Class
