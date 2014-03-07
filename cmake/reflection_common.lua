
-- When calling this script externally the caller should provide the following arguments:
-- flavor [optional, default = "win32" ] : Use to specify which flavor of the lua modules should be loaded.
-- sgt_path : the root path of the singularity repository, this is needed to retrieve the modules.
-- vbssim_path : the folder where the VBSSim project is located.
-- project : the current project name.

flavor = flavor or "win32"
dest_path = root_project_path .. "sources/plug_" .. project .. "/"
