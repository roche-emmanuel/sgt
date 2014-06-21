local Class = require("classBuilder"){name="ViewTextureObject",bases="dx.TextureObject"};

local rs = require "dx.RenderState"

function Class:new(options)
	-- this is just a workaround to avoid invalid configuration for the underlying TextureObject class.
	-- but we really do not use this dynamic feature.
	options.dynamic = true
end

function Class:initialize(options)
	-- This kind of TextureObject will receive the dx9 cef manager and the target view as argument, 
	-- it will the handle initialization/uninitialization/application of the DX texture.
	self:check(options and options.manager,"Invalid CEFManager argument.")
	self:check(options and options.view,"Invalid CEFView argument.")
	self._manager = options.manager
	self._view = options.view
end

function Class:doInvalidate()
	-- request invalidation of the CEFView:
	if(self._view:IsInitialized()) then
		self._view:Uninitialize()
	end
end

function Class:doCreate(device)
	if not self._view:IsInitialized() then
		self._view:Initialize()
	end
	return true
end

function Class:doApply(slot,cbi)
	self:check(self._view:IsInitialized(),"CEF View not initialized.")
	local tex = self._manager:GetOutputTexture(self._view)
	cbi:SetTexture(slot,tex:asBaseTexture())
	rs.textures[slot] = nil
end

return Class
