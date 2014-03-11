root_path = root_path:gsub("\\","/")

-- provide all the common default paths:
-- package.cpath = package.cpath..";".. root_path .. "/bin/modules/?.dll;".. root_path .. "/bin/external/?.dll"
package.cpath = package.cpath ..";" .. root_path .. "/modules/?.sgp;"

-- core library should already be loaded from memory at that point (when applicable)
-- thus we only load it if the core namespace is not registered yet:
local core = sgt

if not core then
	require "core"
	core = sgt
elseif not package.loaded["core"] then
	-- manually register the just loaded core module!
	package.loaded["core"] = core;
end

-- core.showMessageBox("Starting main script!","Loading")
local level = sgt.LogManager.INFO
local root_dir = root_path

if not _G.requireLua then
	core.doLog(level,"Updating require function.")
	_G.requireLua = _G.require

	local searchpath = function(mod,path)
        for m in path:gmatch('[^;]+') do
            local nm = m:gsub('?',mod)
            local f = io.open(nm,'r')
            if f then f:close(); return nm end
        end
    end
	
	local binaryPath = function(mod)
		mod = mod:gsub('%.',"/")
		if searchpath(mod,package.path) then
			return; -- return nothing here this is not a binary path.
		end

		return searchpath(mod,package.cpath)
	end

	local loadBinaryModule = function(content,modName)
		-- extract the entrypoint name from the complete library name:
		-- we just retrieve the module name and replace points with underscores:
		local name = modName:gsub("%.","_")
		local entryname = "luaopen_".. name

		-- now we use the core library to access the moduleloader and
		-- ask it to load this module:
		-- core.showMessageBox("Content size for " ..name ..": "..#content,"loading")
		-- core.showMessageBox("Loading binary module " ..name ..": "..#content,"loading")
		local res = nil
		if content then
			res = core.loadModuleFromMemory(content,"lua_".. name,entryname)
		else
			-- the module is available directly in raw memory from the launcher:
			res = core.loadModuleFromMemory(modName..".sgp",entryname)
		end
		
		-- core.showMessageBox("Loaded binary module " ..name ..": "..#content,"loading")
		-- core.showMessageBox("Lua Library " .. name .." loaded!","Loading")

		
		-- if not res and not package.loaded[modName] then
			-- core.doLog(sgt.LogManager.ERROR,"No result when loading module "..modName)		
		-- end
		
		package.loaded[modName] = package.loaded[modName] or res or true
		return package.loaded[modName]
	end
	
	local loadModule = function(content,modName)
		-- core.doLog(level,"Found internal content for module ",modName)
		
		-- load the module content:
		local func, msg = loadstring(content,modName)
		if not func then
			core.doLog(sgt.LogManager.ERROR,"Cannot load content for module ", modName,": ",msg)
			return
		end
		
		-- the function is loaded properly, now call it:
		local res = func()
		-- if not res and not package.loaded[modName] then
			-- core.doLog(sgt.LogManager.ERROR,"No result when loading module "..modName)		
		-- end
		
		package.loaded[modName] = package.loaded[modName] or res or true
		return package.loaded[modName]
	end

	_G.require = function(modName)
		-- core.doLog(level,"Requiring module ",modName)
		-- core.showMessageBox("Requiring module " .. modName,"loading")
		if package.loaded[modName] then
			return package.loaded[modName]
		end
		
		local res;
		
		-- check if we have a binary module with this name:

		local content = sgt.ModuleManager.instance().getModule("asset:binaries." .. modName)
		if content~="" then
			res = loadBinaryModule(content,modName)
		elseif sgt.hasModuleData(modName..".sgp") then
			-- load the module from raw memory:
			res = loadBinaryModule(nil,modName)
		else
			local content = sgt.ModuleManager.instance().getModule(modName)
			if content~="" then
				res = loadModule(content,modName)		
			else
				-- Here we should check what kind of module this is. 
				-- if it is a binary module (thus in a file somewhere) then we should still use the memory loading system
				-- To resolve the dependencies properly.
				-- To achieve this, we can simple read the content of the file and use that as memory image.
				local bpath = binaryPath(modName)
				if bpath then
					-- core.showMessageBox("Loading binary module " .. modName .." from file ".. bpath,"loading")
					-- read the file content:
					local f = io.open(bpath,"rb")
					content = f:read("*a")
					f:close()
					res = loadBinaryModule(content,modName)
					-- core.showMessageBox("binary module " .. modName .." loaded.","loading")
				else
					-- load lua
					res = _G.requireLua(modName)
				end
			end
		
		end
		
		
		-- check if we have extensions for this module:
		--core.doLog(level,"Trying to load extensions:  extensions."..modName)
		local ext = sgt.ModuleManager.instance().getModule("extensions." .. modName)
		if ext ~= "" then
			core.doLog(level,"Loading extensions for module "..modName)
			loadModule(ext,"extensions." .. modName)
		end
			
		-- core.showMessageBox("Done requiring module " .. modName,"loading")	
		return res;
	end

	-- This function can be used to load a lua package easily:
	_G.requirePackage = function(packName,path)
		core.doLog(sgt.LogManager.DEBUG2,"Loading lua package '" .. packName .. "'")

		if not sgt.hasModuleData(packName..".lpak") then
			path = path or (root_path .. "packages/")
		end

		if path then
			-- path or root_dir .. "/bin/packages/"
			local filename = path .. packName .. ".lpak"
			local f = io.open(filename,"rb")
			if not f then 
				core.showMessageBox("ERROR: Could not find package file " .. filename,"loading")
				return
			end
			content = f:read("*a")
			f:close()
			core.doLog(sgt.LogManager.DEBUG2,"Loading lua package from file '" .. filename .. "'")
			core.loadModuleFromMemory(content,"lua_".. packName .. "_package","") -- We do not use the "pak" suffix here 
		else
			-- load directly from memomry image:
			core.doLog(sgt.LogManager.DEBUG2,"Loading lua package '" .. packName .. "'")
			core.loadModuleFromMemory(packName .. ".lpak","")		
		end
		-- or the result will conflict with auto loaded packages (for the externals for instance).
		-- sgt.ModuleProvider.loadPackage(filename)
	end	
end

-- function used to add a search path for lua module:
_G.addLuaPath = function(path)
	core.doLog(sgt.LogManager.DEBUG2,"Adding lua path '" .. path .. "'")
	package.path = package.path .. ";" .. path
end

_G.addModulePath = function(path)
	core.doLog(sgt.LogManager.DEBUG2,"Adding module path '" .. path .. "'")
	package.cpath = package.cpath .. ";" .. path
end

