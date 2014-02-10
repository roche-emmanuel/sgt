
local oo = require "loop.base"
local Vector = require "std.Vector"
local dbg = require "debugger"
local Scope = require "reflection.Scope"

local IScopeStack = oo.class{}

-- Define the class name
IScopeStack.CLASS_NAME = "reflection.IScopeStack"

function IScopeStack:__init(obj)
    obj = oo.rawnew(self,obj or {})
    dbg:assertNil(obj._scopeStack,"Object already contains a '_scopeStack' field")
    obj._scopeStack = Vector()
    return obj
end

--- push a given scope on the stack.
-- Function used to define the current target scope during the generation process.
-- @param scope New current target scope should not be nil.
function IScopeStack:pushScope(scope)
    self._scopeStack:push_back(scope)
end

--- pop the current scope from the stack
-- Function used to remove the current target scope from the stack.
function IScopeStack:popScope()
    return self._scopeStack:pop_back()
end

-- Get current class.
-- Function used to retrieve the current target class during the generation process.
-- @return The current target class or nil if there is no current class.
function IScopeStack:getCurrentScope()
    return self._scopeStack:back()
end

return IScopeStack
