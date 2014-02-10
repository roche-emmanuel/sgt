-- Simple financial agent that will retrieve some stock info from an
-- online stock provider and display the retrieved info in the log outputs.
-- This agent will call a callback method on a regular basis to perform the data retrieval operation.
local Class = require("classBuilder"){name="SimpleAgent",bases="base.Object"};

--- Perform initialization of the agent:
function Class:initialize(options)
	self:debug("Initialized.")
end

return Class
