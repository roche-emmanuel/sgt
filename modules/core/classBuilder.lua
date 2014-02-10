
local builderClass = "base.ClassBuilder"

require("logger"):debug0_v("Generating class builder from class ",builderClass)

local Builder = require(builderClass)

-- Return an instance of the selected builder:
return Builder(); 
