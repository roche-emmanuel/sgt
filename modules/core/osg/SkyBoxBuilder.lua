local Class = require("classBuilder"){name="SkyBoxBuilder",bases="base.Object"}

local tools = require "osg.Tools"
local gl = require "luagl"

function Class:create(options)
	-- create the texturecube:
	local maps = {
		x_pos = tools:getImage(options.x_pos),
		x_neg = tools:getImage(options.x_neg),
		y_pos = tools:getImage(options.y_pos),
		y_neg = tools:getImage(options.y_neg),
		z_pos = tools:getImage(options.z_pos),
		z_neg = tools:getImage(options.z_neg),
	}
	
	local tex = tools:createTexture{cubemaps=maps}
	local quad = tools:createScreenQuad{texture=tex}
	
	local ss = quad:getOrCreateStateSet()
	self:createSkyBoxProgram{stateSet=ss}
	
	-- override renderbin:
	ss:setRenderingHint(osg.StateSet.OPAQUE_BIN) -- restore opaque rendering
	ss:setAttributeAndModes( osg.Depth(osg.Depth.LEQUAL, 1.0, 1.0) );
	ss:setMode( gl.LIGHTING, osg.StateAttribute.OFF );
	ss:setMode( gl.CULL_FACE, osg.StateAttribute.OFF );
	ss:setRenderBinDetails( 5, "RenderBin" );
  
	return quad;
end

function Class:createSkyBoxProgram(options)
	options = options or {}
	
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource([[
varying vec3 worldDir;
uniform mat4 osg_ViewMatrixInverse;

void main() {
    gl_Position = gl_Vertex;
    
	// Compute the world direction corresponding to this vertex.
	// we are un clip coords [-1,1], so we need to project back in the camera frame using the inverse projection:
	// vec4 pos_in_cam_frame = gl_ProjectionMatrixInverse * vec4(gl_Vertex.x,gl_Vertex.y,1.0,1.0);
	// pos_in_cam_frame /= pos_in_cam_frame.w;
	// we use z=1 because we want the far away position.
	// we use w=0 because we are only interested in the direction ...
	// Then we need to convert this in the world frame.
	// dir_in_world = osg_ViewMatrixInverse * vec4(pos_in_cam_frame.xyz,0.0);
	// w=0.0 because we are only interested in the direction.
	vec4 pos = gl_ProjectionMatrixInverse * vec4(gl_Vertex.x,gl_Vertex.y,1.0,1.0);
	pos /= pos.w;
	vec4 dir =  osg_ViewMatrixInverse * vec4(pos.xyz,0.0);
	worldDir = normalize(dir.xyz);
}
	]]);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	
	fs:setShaderSource([[
uniform samplerCube tex;	
varying vec3 worldDir;

void main() {
	vec3 dir = normalize(worldDir);
    vec4 color = textureCube(tex,dir);  
    gl_FragColor = color;
}
	]])
	
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
		ss:getOrCreateUniform("tex",osg.Uniform.SAMPLER_CUBE):setInt(0);
	end
	
	return prog
end

return Class();
