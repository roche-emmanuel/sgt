local Class = require("classBuilder"){name="ViewTextureObject",bases="dx.TextureObject"};

-- This is the DX9 Manager
local manager = require "cef.Manager"
local rs = require "dx.RenderState"

function Class:new(options)
	-- this is just a workaround to avoid invalid configuration for the underlying TextureObject class.
	-- but we really do not use this dynamic feature.
	options.dynamic = true
end

function Class:initialize(options)
	-- The base class assumes that the children class will provide the _viewbase members.
end

function Class:doInvalidate()
	-- request invalidation of the CEFView:
	if(self._viewbase:IsInitialized()) then
		self._viewbase:Uninitialize()
	end
end

function Class:doCreate(device)
	if not self._viewbase:IsInitialized() then
		self._viewbase:Initialize()
	end
	return true
end

function Class:doApply(slot,cbi)
	self:check(self._viewbase:IsInitialized(),"CEF View not initialized.")
	local tex = manager:GetOutputTexture(self._viewbase)
	cbi:SetTexture(slot,tex:asBaseTexture())
	rs.textures[slot] = nil
end

return Class
