
log:info("Removing GL_ value prefix...")
local keys = {}
for k,v in pairs(opengl) do
	if type(v)=="number" and k:sub(1,3)=="GL_" then
		--log:info("Found value: ",k)
		table.insert(keys,k:sub(4))
	end
end

for _,k in ipairs(keys) do
	if opengl[k] then
		log:warn("Overriding OpenGL value at key=",k)
	end
	opengl[k]=opengl["GL_"..k]
	opengl["GL_"..k]=nil
end

log:info("Removing gl function prefix...")
local keys = {}
for k,v in pairs(opengl) do
	if type(v)=="function" and k:sub(1,2)=="gl" then
		--log:info("Found value: ",k)
		table.insert(keys,k:sub(3))
	end
end

for _,k in ipairs(keys) do
	if opengl[k] then
		log:warn("Overriding OpenGL function at key=",k)
	end
	local fname = k:sub(1,1):lower() .. k:sub(2)
	opengl[fname]=opengl["gl"..k]
	opengl["gl"..k]=nil
end
