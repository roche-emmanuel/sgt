

print("Generating binary image for ".. libFile .. "...")

-- read the file:
local f = io.open(libFile,"rb")
if not f then error("Cannot open file: "..libFile) end

local data = f:read("*a")
f:close()

local content = {}

local append = function(str)
	table.insert(content,str)
end

-- Write all the content:
append(("extern const unsigned char buf_%s[]={\n"):format(libName))

local index = 1
local size = #data

for i=1,size do	
	local c= data:sub(i,i)
	append(string.format( '%3d,', string.byte(c) ))

	if math.fmod(i,20)==0 then
		append("\n")
	end
end
	
append("\n};\n")

append(("extern const unsigned long long len_%s=%d;\n"):format(libName,size))

-- open the destination file for writing:
local f = io.open(destFile,"w")
if not f then
	error("ERROR: cannot open file ".. destFile.." for writing.")
end
f:write(table.concat(content))
f:write("\n")
f:close()

print("Image generation done.")
