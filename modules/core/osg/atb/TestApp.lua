local Class = require("classBuilder"){name="ATBTestApp",bases="osg.OSGTestApp"};

local tools = require "osg.Tools"
local fs = require "base.FileSystem"

function Class:initialize(options)
	options = options or {}
		
	local mt = self:loadModel("tests/data/glider.osgt")
	self:createCube(1)
	self:createBase()
	self:applyCircleAnimation(mt, 4.0, 6.0)
	
	local manager = require "osg.atb.Manager"
	local context = manager:getContext()
	
	self._val = true;
	self._val2 = 5.0;
	self._val3 = 3.0;
	self._val4 = osg.Vec4f(1.0,0.0,0.0,1.0);
	self._val5 = "test string";
	self._val6 = osg.Quat();
	self._val7 = osg.Vec3d(1.0,0.0,0.0)
	self._val8 = 2;
	
	local win = context:createWindow("HelloWindow")
	win:addBool{name="My bool",def="",
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val = val; 
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val); 
			return self._val; 
		end
	}

	win:addSeparator()
	
	win:addDouble{name="MyDouble",def=" step=0.1 ",
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val2 = val; 
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val2); 
			return self._val2; 
		end
	}
	
	win:addInt{name="My Int",def="",
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val3 = val; 
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val2); 
			return self._val3; 
		end
	}
	win:addSeparator()

	win:addColor{name="My Color",def="",
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val4:set(val:x(),val:y(),val:z(),val:w()); 
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val4); 
			return self._val4; 
		end
	}
	
	win:addString{name="My String",def="",
		setValue=function(tt,obj,val) 
			-- self:info("Received value: ",val); 
			self._val5 = val;
		end,
		getValue=function(tt) 
			-- self:info("Returning value: ", self._val5); 
			return self._val5; 
		end
	}
	
	win:addQuat{name="My quat",def="",
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val6:set(val:x(),val:y(),val:z(),val:w());
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val5); 
			return self._val6; 
		end
	}

	win:addDir{name="My dir",def="",
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val7:set(val:x(),val:y(),val:z());
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val5); 
			return self._val7; 
		end
	}
	
	win:addButton{name="My button",def="",
		execute=function(tt) 
			self:info("Executing button action."); 
		end,
	}
	
	win:addEnum{name="Enum test",enum="SizeType", def="",
		values={"small","normal","big","extra","mega"},
		setValue=function(tt,obj,val) 
			--self:info("Received value: ",val); 
			self._val8 = val;
		end,
		getValue=function(tt) 
			--self:info("Returning value: ", self._val8); 
			return self._val8; 
		end
	}
	
	self:getViewer():addEventHandler( context:getEventHandler() );
	self:getViewer():getCamera():setFinalDrawCallback( context:getDrawCallback() );
	
	self:home()
end

function Class:setupEventHandlers()
	self:info("Setting up event handlers from ATB app.")
	local manager = require "osg.atb.Manager"
	local context = manager:getContext()
	
	self:getViewer():getCamera():setFinalDrawCallback( context:getDrawCallback() );

	self:getViewer():addEventHandler( context:getEventHandler() );
	self:getViewer():addEventHandler( osgViewer.StatsHandler() )	
	self:getViewer():addEventHandler( osgViewer.WindowSizeHandler() )
end

return Class 
