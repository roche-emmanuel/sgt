#!/bin/sgt

log:notice "Executing minimal test..."

local assert = require "utils.assert"

log:debug "Loading python module..."

local osg = require "osg"
local timer = osg.Timer.instance()
local starttick = timer:tick()

local res2 = 0

for i=1,10000 do
	local res = 0
	for j=1,1000 do
		res = res + j*j
	end
	res2 = res2+res
end

local elapsed = timer:delta_s(starttick,timer:tick())

log:debug("Computation done in ", elapsed," seconds, res2 is ", res2)

-- python_home="W:/Cloud/Projects/sgt/software/python27"
python_home=root_path.."/python27"

require("python")
assert.notNil(python,"Invalid python module result.")

python.execute("import string")
local pg = python.globals()

log:debug("pg.string=",tostring(pg.string))

local res = pg.string.lower("Hello World!")
log:debug("Lower result='",res,"'")

local bt = python.builtins()

local re = python.import("re")
-- local pattern = re.compile("^Hel(lo) world!")
-- local match = pattern.match("Hello world!")
local match = re.match("^Hel(lo) world!","Hello world!")
local res = match.group()
local res2 = match.group(python.int(1))
-- local res2 = match.group(bt.int(1))
--local sys = python.import("sys")
--sys.print("Hello manu!");

log:debug("Matched group 0 = ",res)
log:debug("Matched group 1 = ",res2)
log:debug("Match pos = ",match.pos)


-- Nox execute the timing file:
python.execute("execfile('".. root_path.."/python27/modules/numpy_timing.py')")

log:info "Cleaning up"
collectgarbage('collect')
	
log:notice "Python minimal test done."
