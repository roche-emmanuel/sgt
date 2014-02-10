local Class = require("classBuilder"){name="ReflectionManager",bases="base.Object"};

function Class:initialize()
	self._config = {}
	self._config.wrapper_default_constructor = true
end

function Class:setConfig(cfg)
	for k,v in pairs(cfg) do
		self._config[k] = v
	end
end

function Class:getConfig()
	return self._config
end

function Class:setDefaultModuleName(modname)
	self:checkNonEmptyString(modname,"Invalid default module name argument.");
	self._defaultModuleName = modname
end

function Class:getDefaultModuleName()
	self:check(self._defaultModuleName,"Invalid default module name.");
	return self._defaultModuleName
end

function Class:setLuaOpenName(oname)
	self._luaOpenName = oname
end

function Class:getLuaOpenName(loc)
	return self._luaOpenName or self:getDefaultModuleName()
end

function Class:getDestFolder()
	self:check(self._destFolder,"Invalid dest folder.")
	return self._destFolder
end

function Class:setDestFolder(folder)
	self._destFolder = folder
end


function Class:setDataMap(dmap)
	self._datamap = dmap;
end

function Class:getClasses()
	return self._datamap:getAllClasses(true)
end

function Class:getNamespaces()
	return self._datamap:getAllNamespaces()
end

function Class:getRootNamespace()
	return self._datamap:getGlobalNamespace()
end

function Class:getEnums()
	return self._datamap:getAllEnums()
end

function Class:getDefines()
	return self._datamap:getDefines()
end

function Class:getCodeAddition(loc)
	return self._datamap:getCodeAddition(loc)
end

function Class:writeHeader(filename,buf)
	local writer = require("io.BufferWriter")()
	
	local def = "_".. filename:gsub("^([^%.]+)%.h","%1"):gsub("%A","_"):gsub("_+","_"):upper().."_H_"
	writer:writeSubLine("#ifndef ${1}",def)
	writer:writeSubLine("#define ${1}",def)
	writer:newLine()
	writer:writeLine("#include <plug_common.h>")
	writer:newLine()
	
	-- write the buffer content:
	writer:appendBuffer(buf)
	
	writer:newLine()
	writer:writeLine("#endif")
	writer:newLine()
	
	self:writeFile("include/luna/" .. filename,writer) 
end

function Class:writeSource(filename,buf)
	local writer = require("io.BufferWriter")()
	
	writer:writeLine("#include <plug_common.h>")
	writer:newLine()
		
	-- write the buffer content:
	writer:appendBuffer(buf)
	
	writer:newLine()
	
	self:writeFile("src/luna/" .. filename,writer) 
end

function Class:writeDefaultFile(filename,buf)
	local writer = require("io.BufferWriter")()
			
	-- write the buffer content:
	writer:appendBuffer(buf)
		
	self:writeFile(filename,writer) 
end

function Class:writeFile(filename,buf)
	buf:setTargetFolder(self:getDestFolder())
	buf:writeFile(filename) 
end

return Class()