-- Main config file.

local cfg = {}

-- test init files:
--cfg.init_script = "IUP/notepad.wlua"

-- locale selection:
cfg.default_locale = "en"
--cfg.default_locale = "fr"

-- Start the mainframe:
cfg.mainframe_enabled = (flavor~="ds411") and true

-- Enable or disable the unit testing framework:
cfg.tests_enabled = true;

-- Display ribbon bar instead of standard menus.
cfg.mainframe_ribbon_enabled = false

-- Display the standard menus.
cfg.mainframe_menus_enabled = true

-- Master framerate given in Hz.
cfg.master_framerate = 20;

cfg.log_verbose = true
cfg.log_level = "DEBUG0"

-- cfg.osg_log_level = "NOTICE"
cfg.osg_log_level = "INFO"

-- Display advanced stack details on error:
cfg.use_stack_plus = false;

-- Folder where to store temporary data.
cfg.cache_path = "W:/Local/sgtCache"

-- Display the memory used by lua on each cycle:
cfg.monitor_lua_memory = false

-- Enable/disable the internal profiler:
cfg.profiler_enabled = false

-- garbage collector settings
cfg.gc_step_multiplier = 300
cfg.gc_pause = 80

-- the port used for awesomium debugging. Point a web browser o http://127.0.0.1:xxxx when enabled.
-- to disable, set this value to 0 or comment the line
cfg.awesomium_debug_port = 1337

-- specify if the caption of the notbook tabs should be hidden (leaving only the bitmap if available).
cfg.hide_tab_captions = false

return cfg
