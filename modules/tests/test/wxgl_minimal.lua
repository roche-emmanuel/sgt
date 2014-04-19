log:notice "Starting GL Minimal test."


local Class = createClass{"GLMinimalTest","gui.wx.GLTestApp"}

function Class:initialize()
  self:debug("App initialized.")
end

local app = Class{}

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "GL Minimal test done."
