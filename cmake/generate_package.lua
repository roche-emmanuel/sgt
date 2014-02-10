
--package.cpath = package.cpath ..";".. vbssim_path .. "scripts/?.dll;"

local lfs = require "lfs"
print("Generating Lua package for ".. project .. "...")

local conv = {}

function conv:formatPath(path)
	return path:gsub("\\","/"):gsub("/$","")
end

function conv:isFolder(filename)
	local file=self:formatPath(filename)	
	local res = lfs.attributes(file,"mode")	
	return res=="directory"
end

function conv:traverse(options,sub_path)
	self:check(options.func,"Invalid function in dir traversal.")
	
	local path = self:formatPath(options.path) .. "/" .. (sub_path or "") 
	
	for file in lfs.dir(path) do
        if file ~= "." and file ~= ".." then
            local fullpath = path..file

			if ( not options.pattern or fullpath:find(options.pattern)) 
				 and (not options.type or options.type==self:getType(fullpath)) then
				options.func{path=options.path,
					 sub_path=sub_path or "",
					 file=file,
					 fullpath=fullpath,
					 userdata=options.userdata}
			end
					            
            if self:isFolder(fullpath) and options.recursive then
                self:traverse(options,(sub_path or "").. file .. "/")
            end
        end
    end	
end

function conv:check(cond,msg)
	if not cond then error(msg) end
end

function conv:info(...)
	print(...)
end

-- We need to provide:
-- options.src_folder
-- options.dest_folder
-- options.package
function conv:init(options)
	local src_folders = {}
	self._data = {}
	self._modules = {};
	
	self:append("#include <lunaCommon.h>\n")
	self:append("#include <lua/ModuleProvider.h>\n\n")
	
	-- add the default source folders:
	table.insert(src_folders,options.src_folder)
	local dest_folder = options.dest_folder or options.src_folder .. "/../src/" 
	self._bindingFile = dest_folder .. (options.dest_file or "bindings") .. ".cpp"
	
	self._packageName = options.package;

	-- handle regular lua files:
	local func = function(data)
		local modName = data.sub_path .. data.file
		modName = modName:sub(1,-5):gsub("/",".")
		
		--self:info("Found module: ", modName, " in file: ",data.fullpath)
		self:processFile(data.fullpath, modName)
	end
	
	for v, folder in pairs(src_folders) do
		self:info("Traversing folder: ", folder)
		conv:traverse{path=folder,func=func,pattern="%.lua$",recursive=true}
	end

	-- handle font files:
	local func = function(data)
		local modName = data.sub_path .. data.file
		modName = modName:sub(1,-5):gsub("/",".")
		
		self:processAsset(data.fullpath, modName)
		-- self:info("Found font: ", modName, " in file: ",data.fullpath)
	end
	
	for v, folder in pairs(src_folders) do
		self:info("Traversing folder: ", folder)
		conv:traverse{path=folder,func=func,pattern="%.ttf$",recursive=true}
	end
	
	-- handle image files:
	local func = function(data)
		local modName = data.sub_path .. data.file
		modName = modName:sub(1,-5):gsub("/",".")
		
		self:processAsset(data.fullpath, modName)
		-- self:info("Found image: ", modName, " in file: ",data.fullpath)
	end
	
	for v, folder in pairs(src_folders) do
		self:info("Traversing folder: ", folder)
		conv:traverse{path=folder,func=func,pattern="%.png$",recursive=true}
	end

	-- handle shader files:
	local func = function(data)
		local modName = data.sub_path .. data.file
		modName = modName:sub(1,-6):gsub("/",".")
		
		self:processAsset(data.fullpath, modName, true)
		-- self:info("Found image: ", modName, " in file: ",data.fullpath)
	end
	
	for v, folder in pairs(src_folders) do
		self:info("Traversing folder: ", folder)
		conv:traverse{path=folder,func=func,pattern="%.hlsl$",recursive=true}
	end

	-- handle binaries files:
	local func = function(data)
		local modName = data.sub_path .. data.file
		modName = modName:sub(1,-5):gsub("/",".")
		
		self:processAsset(data.fullpath, modName)
		-- self:info("Found image: ", modName, " in file: ",data.fullpath)
	end
	
	for v, folder in pairs(src_folders) do
		self:info("Traversing folder: ", folder)
		conv:traverse{path=folder,func=func,pattern="%.dll$",recursive=true}
	end
	
	self:writeBindings()	
end

function conv:append(str)
	table.insert(self._data,str)
end

function conv:process(data,name)
	self:append("\n")

	local index = 1
	local size = #data
	
	self:append(("static const unsigned char buf_%s[]={\n"):format(name:gsub("[%.%-:]","_")))
	for i=1,size do	
		local c= data:sub(i,i)
		self:append(string.format( '%3d,', string.byte(c) ))

		if math.fmod(i,20)==0 then
			self:append("\n")
		end
    end
	
	self:append("\n};\n")
	table.insert(self._modules,name)
end

function conv:processAsset(file,aName,text)
	self:info("Processing asset: ", aName)
	local f = io.open(file,text and "r" or "rb")
	local data = f:read("*a")
	f:close()
	
	self:process(data,"asset:"..aName)
end

function conv:processFile(file,modName,compiled)
	-- self:info("Processing module: ", modName, " in file: ",file)
	self:info("Processing module: ", modName)
	
	local data = nil
	
	if compiled then
		-- just read the content of the file:
		local f = io.open(file,"rb")
		data = f:read("*a")
		f:close()
	else
		local func, msg = loadfile(file)
		self:check(func,"Invalid loadfile result: ".. (msg or ""))
		
		data = string.dump(func)
	end
	
	self:process(data,modName)
end

function conv:writeBindings()
	local filename = self._bindingFile
	self:info("Writing binding file: ",self._bindingFile)
	
	local file = io.open(filename,"w")
	
	file:write(table.concat(self._data))
	
	file:write("\n")
	-- now register a module loader:
	local str1 = [[class Loader_${1} {
public:
	Loader_${1}() {
		logDEBUG3("Now loading all modules for package '${1}'");

]]
		
	local str2 = [[
	}
	
	~Loader_${1}() {
		logDEBUG3("Unloading module loader for package '${1}'");
	}
};
	
static Loader_${1} loader_object;

	]];
	
	file:write((str1:gsub("%${1}",self._packageName.."_"..dest_file)))
	for _,v in ipairs(self._modules) do
		local name = "buf_" .. v:gsub("[%.%-:]","_")
		file:write('\t\tsgtModuleProvider::registerModule("'.. v ..'",std::string((const char*)'.. name ..',sizeof('..name..')));\n')
	end
	file:write((str2:gsub("%${1}",self._packageName.."_"..dest_file)))
	
	file:close()
end

conv:init{package=project,src_folder=src_path,dest_folder=dest_path,dest_file=dest_file}

print("Package generation done.")

