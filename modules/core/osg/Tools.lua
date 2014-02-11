local Class = require("classBuilder"){name="Tools",bases="base.Object"};

require "osg"
require "osg.NotificationHandler"
require "extensions.osg"
local cfg = require "config"

local gl = require "opengl"

local fs = require "base.FileSystem"

-- osg.setNotifyLevel(osg.DEBUG_FP)
osg.setNotifyLevel(osg[cfg.osg_log_level])

local default_quad_vs = [[
varying vec2 coords;

void main() {
    gl_Position = vec4(gl_Vertex.xy,0.0,1.0);
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}	
]]

local transform_quad_vs = [[
varying vec2 coords;

void main() {
    gl_Position = ftransform();
    coords = gl_MultiTexCoord0.xy;
}	
]]

local checker_fs = [[
varying vec2 coords;

void main()
{
	float squareSize = 0.05;
    
    float xnum = floor(coords.x/squareSize);
	float ynum = floor(coords.y/squareSize);

    //vec4 color = vec4(1.0,1.0,1.0,1.0);
    vec3 tmp = vec3(mod(xnum+ynum,2.0) < 0.5 ? 0.95 : 0.7) ;
    
    gl_FragColor = vec4(tmp,1.0);
}
]]
	
-- Function used to load a model from a file.
function Class:loadModel(filename)
	self:checkString(filename,"Invalid model filename")
	local node = osgDB.readNodeFile(filename)
	if not node then
		self:warn("Cannot load model from file: ",filename)
		return;
	end
	
	-- The node was loaded properly,
	self:debug2_v("Successfully loaded model from file ", filename)
	return node
end

function Class:getModel(file)
	return self:loadModel(fs:getRootPath(true) .. file)
end

function Class:loadImage(filename)
	self:checkString(filename,"Invalid image filename")
	local image = osgDB.readImageFile(filename)
	if not image then
		self:warn("Cannot load image from file: ",filename)
		return;
	end
	
	self:debug2_v("Successfully loaded image from file ", filename)
	return image;
end

function Class:getImage(file)
	return self:loadImage(fs:getImagePath(file))
end

-- Create a texture from an input image.
function Class:createTexture(options)
	
	local tex = nil
	
	if options.image then		
		local img = options.image
		if img:r()==1 then
			-- local tex = osg.TextureRectangle(options.image);
			tex = osg.Texture2D(img);
			tex:setTextureSize(img:s(),img:t());
		else
			tex = osg.Texture3D(img);
			tex:setTextureSize(img:s(),img:t(),img:r());			
		end
	elseif options.cubemaps then
		local maps = options.cubemaps
		tex = osg.TextureCubeMap()
		tex:setImage(osg.TextureCubeMap.POSITIVE_X, maps.x_pos)
		tex:setImage(osg.TextureCubeMap.NEGATIVE_X, maps.x_neg)
		tex:setImage(osg.TextureCubeMap.POSITIVE_Y, maps.y_pos)
		tex:setImage(osg.TextureCubeMap.NEGATIVE_Y, maps.y_neg)
		tex:setImage(osg.TextureCubeMap.POSITIVE_Z, maps.z_pos)
		tex:setImage(osg.TextureCubeMap.NEGATIVE_Z, maps.z_neg)
	elseif options.width and options.height then
		if options.depth then
			tex = osg.Texture3D()
			tex:setTextureSize(options.width,options.height,options.depth)
		else		
			tex = osg.Texture2D()
			tex:setTextureSize(options.width,options.height)
		end
		local fmt = options.format or "rgba"
		if fmt=="rgba" then
			tex:setInternalFormat( gl.RGBA )
		elseif fmt=="depth" then
			tex:setInternalFormat( gl.DEPTH_COMPONENT24 );
			tex:setSourceFormat( gl.DEPTH_COMPONENT );
			tex:setSourceType( gl.FLOAT );
		else
			log:error("Unsupported texture format: '",fmt,"'")
		end
	end
	
	self:check(tex,"Invalid texture options.")
	
	tex:setResizeNonPowerOfTwoHint(false);
	
	tex:setWrap(osg.Texture.WRAP_S,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_T,osg.Texture.CLAMP_TO_EDGE);
    tex:setWrap(osg.Texture.WRAP_R,osg.Texture.CLAMP_TO_EDGE);
    tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.LINEAR);
    --tex:setFilter(osg.Texture.MIN_FILTER,osg.Texture.NEAREST);
    tex:setFilter(osg.Texture.MAG_FILTER,osg.Texture.LINEAR);
	
	return tex;
end

-- Create a simple shader program to display a fixed color.
function Class:createColorProgram(options)
	options = options or {}
	
	local color = options.color or osg.Vec4f(0.0,1.0,1.0,1.0);
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource(default_quad_vs);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	fs:setShaderSource(([[
void main() {
    gl_FragColor = vec4(%f,%f,%f,%f);
}
	]]):format(color:r(),color:g(),color:b(),color:a()));
	
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
	end
	
	return prog
end

function Class:createTexture2DProgram(options)
	options = options or {}
	
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource(default_quad_vs);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	local coords = options.invertY and "vec2(coords.x, 1.0 - coords.y)" or "coords"
	
	fs:setShaderSource(([[
uniform sampler2D tex;	
varying vec2 coords;

void main() {
    vec4 color = texture2DLod(tex,%s,0.0);  
    gl_FragColor = color;
}
	]]):format(coords));
	
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
		ss:getOrCreateUniform("tex",osg.Uniform.SAMPLER_2D):setInt(0);
	end
	
	return prog
end

function Class:createTextureRectProgram(options)
	options = options or {}
	
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource(default_quad_vs);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	local coordy = options.invertY and "(1.0 - coords.y)" or "coords.y"
	
	fs:setShaderSource(([[
uniform sampler2DRect tex;

varying vec2 coords;

void main() {
    vec4 color = texture2DRect(tex,vec2(coords.x*%.1f,%s*%.1f));  
    gl_FragColor = color;
    //gl_FragColor = vec4(color.a > 0.5 ? color.rgb : vec3(0.0,1.0,0.0), 1.0) ;
}
	]]):format(options.texture:getTextureWidth(),coordy,options.texture:getTextureHeight()));
	
	--self:info("Texture width:",options.texture:getTextureWidth(),", texture height:",options.texture:getTextureHeight());
	
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
		ss:getOrCreateUniform("tex",osg.Uniform.INT):setInt(0);
		--ss:getOrCreateUniform("sizes",osg.Uniform.FLOAT_VEC2):set(options.texture:getTextureWidth(),options.texture:getTextureHeight());
	end
	
	return prog
end

function Class:createCheckerProgram(options)
	options = options or {}
	
	local ss = options.stateSet;
	
	local prog = osg.Program();
	
	local vs = osg.Shader(osg.Shader.VERTEX);
	vs:setShaderSource(options.withTransform and transform_quad_vs or default_quad_vs);
	
	local fs = osg.Shader(osg.Shader.FRAGMENT);	
	fs:setShaderSource(checker_fs);
		
	prog:addShader(vs)
	prog:addShader(fs)	
	
	if ss then
		ss:setAttributeAndModes(prog)
	end
	
	return prog
end

-- Create a screen aligned quad.
-- available options:
-- parent [optional] : parent node.
-- image [optional] : image to be displayed.
function Class:createScreenQuad(options)
	self:debug3("Creating screen quad.");
	
	local geode = osg.Geode()
	if options.parent then
		options.parent:addChild(geode)
	end
	geode:setCullingActive(false);
	
	local geom = osg.Geometry()
	geode:addDrawable(geom);

	local vertices = osg.Vec2Array();
	geom:setVertexArray(vertices);

    vertices:push_back(osg.Vec2f(-1.0,-1.0));
    vertices:push_back(osg.Vec2f(1.0,-1.0));
    vertices:push_back(osg.Vec2f(-1.0,1.0));
    vertices:push_back(osg.Vec2f(1.0,1.0));
	
    local colors = osg.Vec4Array()
    colors:push_back(osg.Vec4f(0.0,0.0,1.0,1.0));
    geom:setColorArray(colors)
    geom:setColorBinding(osg.Geometry.BIND_OVERALL)
	
	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	local ss = geode:getOrCreateStateSet()
	
	ss:setMode(gl.BLEND,osg.StateAttribute.ON)
	ss:setRenderingHint(osg.StateSet.TRANSPARENT_BIN)
	
	-- always pass the depth test, and never write anything by default:
	ss:setAttributeAndModes( osg.Depth(osg.Depth.ALWAYS, 1.0, 1.0, false) );
	
	local tex = options.texture
	local img = options.image
	
	if img then
		tex=self:createTexture{image=img}
	end

	if tex then
		ss:setTextureAttributeAndModes(0,tex);
		--self:createTextureRectProgram{stateSet=ss,texture=tex,invertY=options.invertY}
		if utils.typeEx(tex)=="osg.Texture2D" then
			self:createTexture2DProgram{stateSet=ss,texture=tex,invertY=options.invertY}
		end
	else
		self:createColorProgram{stateSet=ss}
	end

	return geode
end

-- Create a simple quad.
-- available options:
-- parent [optional] : parent node.
-- image [optional] : image to be displayed.
-- width
-- height
function Class:createQuad(options)
	self:debug3("Creating quad.");
	options = options or {}
	
	local center = options.center or osg.Vec3(0.0,0.0,-3.0)
	local width = options.width or 100.0
	local height = options.height or 100.0
	local offset = options.zoffset or 0.0
	
	local geode = osg.Geode()
	if options.parent then
		options.parent:addChild(geode)
	end
	--geode:setCullingActive(false);
	
	local geom = osg.Geometry()
	geode:addDrawable(geom);

	local vertices = osg.Vec3Array();
	geom:setVertexArray(vertices);

	vertices:push_back(center + osg.Vec3(-width/2.0,-height/2.0,offset))
	vertices:push_back(center + osg.Vec3(width/2.0,-height/2.0,offset))
	vertices:push_back(center + osg.Vec3(-width/2.0,height/2.0,offset))
	vertices:push_back(center + osg.Vec3(width/2.0,height/2.0,offset))
		
    local colors = osg.Vec4Array()
    colors:push_back(osg.Vec4f(0.0,0.0,1.0,1.0));
    geom:setColorArray(colors)
    geom:setColorBinding(osg.Geometry.BIND_OVERALL)
	
    local normals = osg.Vec3Array();
    normals:push_back(osg.Vec3(0.0,0.0,1.0));
    geom:setNormalArray(normals);
    geom:setNormalBinding(osg.Geometry.BIND_OVERALL);
	
    local coords = osg.Vec2Array();
    coords:push_back(osg.Vec2(0.0,0.0));
    coords:push_back(osg.Vec2(1.0,0.0));
    coords:push_back(osg.Vec2(0.0,1.0));
    coords:push_back(osg.Vec2(1.0,1.0));
    geom:setTexCoordArray(0,coords);

	geom:addPrimitiveSet(osg.DrawArrays(osg.PrimitiveSet.TRIANGLE_STRIP,0,4));
	
	local ss = geode:getOrCreateStateSet()
	
	local img = options.image
	
	if img then
		self:no_impl("No support for image texture on simple quad yet.")
		--local tex=self:createTexture{image=img}
		--ss:setTextureAttributeAndModes(0,tex);
		--self:createTextureRectProgram{stateSet=ss,texture=tex}
		--self:createTexture2DProgram{stateSet=ss,texture=tex}
	else
		self:createCheckerProgram{stateSet=ss,withTransform=true}
	end

	return geode
end

function Class:createSkyBox(options)
	local SkyBoxBuilder = require "osg.SkyBoxBuilder"
	return 	SkyBoxBuilder:create(options)
end

function Class:createRTTCamera(options)
	options = options or {}
	local cam = osg.Camera()
	local clearColor = options.clearColor or osg.Vec4f()
	local clearMask = options.clearMask or bit.bor(gl.COLOR_BUFFER_BIT,gl.DEPTH_BUFFER_BIT)
	local order = options.renderOrder or osg.Camera.PRE_RENDER --osg.Camera.NESTED_RENDER; --osg.Camera.POST_RENDER; --
	
	cam:setClearColor( clearColor );
	cam:setClearMask(clearMask);
	cam:setRenderTargetImplementation(osg.Camera.FRAME_BUFFER_OBJECT);
	cam:setRenderOrder(order);
	cam:setReferenceFrame( osg.Transform.ABSOLUTE_RF )
	cam:setAllowEventFocus( false );
	cam:setProjectionMatrixAsPerspective(60.0,1.33, 10.0, 10000.0)
	
	local colorTex = options.colorTex
	if(colorTex) then
		cam:setViewport( 0, 0, colorTex:getTextureWidth(), colorTex:getTextureHeight() );
		cam:attach( osg.Camera.COLOR_BUFFER, colorTex );
	end
	
	local depthTex = options.depthTex
	if(depthTex) then
		cam:setViewport( 0, 0, colorTex:getTextureWidth(), colorTex:getTextureHeight() );
		cam:attach( osg.Camera.DEPTH_BUFFER, depthTex );
	end

	return cam;
end

-- Take a function as argument and build the corresponding nodecallback
function Class:createNodeCallback(func)
	local cb = osg.NodeCallback {
		op_call = function(tt, obj, node, nv) 
			func(node,nv)
			obj:traverse(node,nv)
		end
	}
	
	return cb
end

function Class:createGUIEventHandler(func)
	local cb = osgGA.GUIEventHandler {
		handle = function(tt, obj, ea, aa, node, nv) 
			return func(ea, aa, node,nv) or false
		end
	}
	
	return cb
end

return Class()

