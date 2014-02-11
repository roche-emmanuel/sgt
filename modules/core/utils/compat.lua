--[[
Class: utils.compat

Compatibility module with lua 5.2 
]]

--[=[
--[[
Function: table.pack

pack an argument list into a table.

Parameters:
	... - Any arguments
  
Returns:
	A table with field n set to the length
]]
function table.pack(...)
]=]
if not table.pack then
    function table.pack (...)
        return {n=select('#',...); ...}
    end
end


--[=[
--[[
Function: package.searchpath

rawequaleturn the full path where a Lua module name would be matched.

Parameters:
	mod - Module name
	path - list of paths to look in, in the same form as package.path or package.cpath
  
Returns:
	The full path matching this module name.
]]
function package.searchpath(mod,path)
]=]
if not package.searchpath then
    local sep = package.config:sub(1,1)
    function package.searchpath (mod,path)
        mod = mod:gsub('%.',sep)
        for m in path:gmatch('[^;]+') do
            local nm = m:gsub('?',mod)
            local f = io.open(nm,'r')
            if f then f:close(); return nm end
        end
    end
end
