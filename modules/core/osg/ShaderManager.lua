local Class = require("classBuilder"){name="ShaderManager",bases="base.Object"};

--- This class is used to maintain the access to a list of shader/programs
function Class:initialize(options)
	self._programs = require("std.Map")()
end

function Class:getProgram(name)
	return self._programs:get(name)
end

function Class:setProgram(name,prog)
	return self._programs:set(name,prog)
end

function Class:loadProgram(options)
	local prog
	local name = options.name or options[1]
	
	if name then
		prog = self:getProgram(name)
	end
	
	if prog then
		return prog
	end
	
	local version = options.version or 120
	
	-- create a new program
	prog = osg.Program()
	
	local file = options.file or fs:getShaderPath(name)..".glsl"
	local f = io.open(file,"r")
	local src = f:read("*a")
	f:close()
	
	local vstr = "#version ".. version .. "\n"
	
	if src:find("#ifdef%s+_VERTEX_") then
		self:info("Adding vertex shader from file ",file)
		local sh = osg.Shader(osg.Shader.VERTEX);
		sh:setShaderSource(vstr.. "#define _VERTEX_\n" .. src);
		prog:addShader(sh)
	end
	
	if src:find("#ifdef%s+_FRAGMENT_") then
		self:info("Adding vertex shader from file ",file)
		local sh = osg.Shader(osg.Shader.FRAGMENT);
		sh:setShaderSource(vstr.. "#define _FRAGMENT_\n" .. src);
		prog:addShader(sh)
	end

	if name then
		self:setProgram(name,prog)
	end
	
	return prog
end

return Class() -- return instance of the class.
