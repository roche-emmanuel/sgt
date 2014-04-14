#ifndef _WRAPPERS_WRAPPER_PROLAND_GPUTILESTORAGE_GPUSLOT_H_
#define _WRAPPERS_WRAPPER_PROLAND_GPUTILESTORAGE_GPUSLOT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/producer/GPUTileStorage.h>

class wrapper_proland_GPUTileStorage_GPUSlot : public proland::GPUTileStorage::GPUSlot, public luna_wrapper_base {

public:
		

	~wrapper_proland_GPUTileStorage_GPUSlot() {
		logDEBUG3("Calling delete function for wrapper proland_GPUTileStorage_GPUSlot");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::GPUTileStorage::GPUSlot*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_GPUTileStorage_GPUSlot(lua_State* L, lua_Table* dum, proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l) 
		: proland::GPUTileStorage::GPUSlot(owner, index, t, l), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::GPUTileStorage::GPUSlot*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void proland::GPUTileStorage::GPUSlot::copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h)
	void copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h) {
		if(_obj.pushFunction("copyPixels")) {
			_obj.pushArg((proland::GPUTileStorage::GPUSlot*)this);
			_obj.pushArg((ork::FrameBuffer*)fb.get());
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(w);
			_obj.pushArg(h);
			return (_obj.callFunction<void>());
		}

		return GPUSlot::copyPixels(fb, x, y, w, h);
	};

	// void proland::GPUTileStorage::GPUSlot::setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	void setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) {
		if(_obj.pushFunction("setSubImage")) {
			_obj.pushArg((proland::GPUTileStorage::GPUSlot*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(w);
			_obj.pushArg(h);
			_obj.pushArg((int)f);
			_obj.pushArg((int)t);
			_obj.pushArg(&s);
			_obj.pushArg(&pixels);
			return (_obj.callFunction<void>());
		}

		return GPUSlot::setSubImage(x, y, w, h, f, t, s, pixels);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

