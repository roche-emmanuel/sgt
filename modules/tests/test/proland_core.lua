#!/bin/sgt

log:notice "Starting OSG Minimal test."

local App = createClass{"ProlandCoreTest","osg.OSGTestApp"}


local app = App{}

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "OSG Minimal test done."
