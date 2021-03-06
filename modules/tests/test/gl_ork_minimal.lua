log:notice "Starting GL Ork Minimal test."


local Class = createClass{"GLOrkMinimalTest","gui.wx.GLTestApp"}

local land = require "land"
local ork = ork

function Class:initialize()
  self:debug("App initialized.")

  self:check(ork,"Invalid ork library.")
  self:getCanvas():makeCurrentContext()
  self:setup()
end

function Class:setup()
  land.initGlew()

  -- creates a mesh whose vertices, made of vec2f, form triangle strips,
  -- and which is stored on GPU and not frequently modified
  
  local m = land.createMeshVec2fUInt(land.TRIANGLE_STRIP,land.GPU_STATIC)
	self._mesh = m

  -- adds a vertex attribute of id #0, made of two float coordinates
  m:addAttributeType(0, 2, land.A32F, false);
  
  -- adds four vertices to the mesh
  m:addVertex(ork.vec2f(-1, -1))
  m:addVertex(ork.vec2f(1, -1))
  m:addVertex(ork.vec2f(-1, 1))
  m:addVertex(ork.vec2f(1, 1))

  -- creates a 2D texture with 4x4 pixels, using one 8bits channel
  -- per pixel, with a magnification filter in nearest mode
  local tt = { 0, 255, 0, 255, 255, 0, 255, 0, 0, 255, 0, 255, 255, 0, 255, 0 };

  for i=1, #tt do
		tt[i] = string.char(tt[i])
	end
	local data = table.concat(tt)

	local buffer = land.createCPUBuffer(data)
  local tex = ork.Texture2D(4, 4, land.R8, land.RED, land.UNSIGNED_BYTE, ork.Texture_Parameters():mag(land.NEAREST), ork.Buffer_Parameters(), buffer);

  -- creates a program made of a single module,
  -- itself made of a single fragment shader
  local p = ork.Program(land.createFragmentModule(330, [[
    uniform sampler2D sampler;
    uniform vec2 scale;
    layout(location = 0) out vec4 data;
    void main() {
        data = texture(sampler, gl_FragCoord.xy * scale).rrrr;
    }]]));

  -- -- sets the "sampler" uniform of 'p' to 'tex'
  p:getUniformSampler("sampler"):set(tex);
  self._prog = p

  local size=self:getCanvas():getGLCanvas():GetSize()
  self:onResize(size:GetWidth(),size:GetHeight())
end

function Class:onFrame()
	-- self:debug("Rendering frame.")
  local fb = ork.FrameBuffer.getDefault();
  -- clears the color buffer of the default framebuffer
  fb:clear(true, false, false);
  -- draws the mesh 'm' in the default framebuffer, with the program 'p'
  fb:drawMesh(self._prog, self._mesh);
end

function Class:onResize(x,y)
  self:debug("Rescaling to ",x,"x",y)
  local fb = ork.FrameBuffer.getDefault()
  fb:setViewport(ork.vec4i(0, 0, x, y));
  -- sets the 'scale' uniform in program 'p' to the inverse of the new window size
  self._prog:setUniform2fValue("scale",ork.vec2f(1.0 / x, 1.0 / y));
end

local app = Class{}

app:run()

log:info "Cleaning up"
collectgarbage('collect')

log:notice "GL Ork Minimal test done."
