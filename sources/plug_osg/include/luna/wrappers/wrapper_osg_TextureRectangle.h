#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURERECTANGLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/TextureRectangle>

class wrapper_osg_TextureRectangle : public osg::TextureRectangle, public luna_wrapper_base {

public:
		

	~wrapper_osg_TextureRectangle() {
		logDEBUG3("Calling delete function for wrapper osg_TextureRectangle");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::TextureRectangle*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum) 
		: osg::TextureRectangle(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum, osg::Image * image) 
		: osg::TextureRectangle(image), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_TextureRectangle(lua_State* L, lua_Table* dum, const osg::TextureRectangle & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::TextureRectangle(text, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osg::TextureRectangle::computeInternalFormat() const
	void computeInternalFormat() const {
		if(_obj.pushFunction("computeInternalFormat")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::computeInternalFormat();
	};

	// void osg::TextureRectangle::allocateMipmap(osg::State & state) const
	void allocateMipmap(osg::State & state) const {
		if(_obj.pushFunction("allocateMipmap")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::allocateMipmap(state);
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TextureRectangle::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TextureRectangle::getUserData();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return TextureRectangle::getMember();
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::checkValidityOfAssociatedModes(arg1);
	};

	// osg::Texture * osg::Texture::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<osg::Texture*>());
		}

		return TextureRectangle::asTexture();
	};

	// const osg::Texture * osg::Texture::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<osg::Texture*>());
		}

		return TextureRectangle::asTexture();
	};

	// bool osg::Texture::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::isTextureAttribute();
	};

	// bool osg::Texture::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::getModeUsage(arg1);
	};

	// void osg::Texture::compileGLObjects(osg::State & state) const
	void compileGLObjects(osg::State & state) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::compileGLObjects(state);
	};

	// void osg::Texture::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::releaseGLObjects(state);
	};

	// osg::Object * osg::TextureRectangle::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return TextureRectangle::cloneType();
	};

	// osg::Object * osg::TextureRectangle::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TextureRectangle::clone(arg1);
	};

	// bool osg::TextureRectangle::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TextureRectangle::isSameKindAs(obj);
	};

	// const char * osg::TextureRectangle::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<const char*>());
		}

		return TextureRectangle::libraryName();
	};

	// const char * osg::TextureRectangle::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<const char*>());
		}

		return TextureRectangle::className();
	};

	// osg::StateAttribute::Type osg::TextureRectangle::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return TextureRectangle::getType();
	};

	// int osg::TextureRectangle::compare(const osg::StateAttribute & rhs) const
	int compare(const osg::StateAttribute & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::compare(rhs);
	};

	// unsigned int osg::TextureRectangle::getTextureTarget() const
	unsigned int getTextureTarget() const {
		if(_obj.pushFunction("getTextureTarget")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return TextureRectangle::getTextureTarget();
	};

	// void osg::TextureRectangle::setImage(unsigned int arg1, osg::Image * image)
	void setImage(unsigned int arg1, osg::Image * image) {
		if(_obj.pushFunction("setImage")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(image);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::setImage(arg1, image);
	};

	// osg::Image * osg::TextureRectangle::getImage(unsigned int arg1)
	osg::Image * getImage(unsigned int arg1) {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return TextureRectangle::getImage(arg1);
	};

	// const osg::Image * osg::TextureRectangle::getImage(unsigned int arg1) const
	const osg::Image * getImage(unsigned int arg1) const {
		if(_obj.pushFunction("getImage")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<osg::Image*>());
		}

		return TextureRectangle::getImage(arg1);
	};

	// unsigned int osg::TextureRectangle::getNumImages() const
	unsigned int getNumImages() const {
		if(_obj.pushFunction("getNumImages")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return TextureRectangle::getNumImages();
	};

	// int osg::TextureRectangle::getTextureWidth() const
	int getTextureWidth() const {
		if(_obj.pushFunction("getTextureWidth")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::getTextureWidth();
	};

	// int osg::TextureRectangle::getTextureHeight() const
	int getTextureHeight() const {
		if(_obj.pushFunction("getTextureHeight")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::getTextureHeight();
	};

	// int osg::TextureRectangle::getTextureDepth() const
	int getTextureDepth() const {
		if(_obj.pushFunction("getTextureDepth")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			return (_obj.callFunction<int>());
		}

		return TextureRectangle::getTextureDepth();
	};

	// void osg::TextureRectangle::apply(osg::State & state) const
	void apply(osg::State & state) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::TextureRectangle*)this);
			_obj.pushArg(&state);
			return (_obj.callFunction<void>());
		}

		return TextureRectangle::apply(state);
	};


	// Protected non-virtual methods:
	// void osg::TextureRectangle::applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const
	void public_applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const {
		return osg::TextureRectangle::applyTexImage_load(target, image, state, inwidth, inheight);
	};

	// void osg::TextureRectangle::applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const
	void public_applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const {
		return osg::TextureRectangle::applyTexImage_subload(target, image, state, inwidth, inheight, inInternalFormat);
	};

	// void osg::Texture::computeInternalFormatWithImage(const osg::Image & image) const
	void public_computeInternalFormatWithImage(const osg::Image & image) const {
		return osg::Texture::computeInternalFormatWithImage(image);
	};

	// void osg::Texture::computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const
	void public_computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const {
		return osg::Texture::computeRequiredTextureDimensions(state, image, width, height, numMipmapLevels);
	};

	// void osg::Texture::computeInternalFormatType() const
	void public_computeInternalFormatType() const {
		return osg::Texture::computeInternalFormatType();
	};

	// void osg::Texture::applyTexParameters(unsigned int target, osg::State & state) const
	void public_applyTexParameters(unsigned int target, osg::State & state) const {
		return osg::Texture::applyTexParameters(target, state);
	};

	// bool osg::Texture::isHardwareMipmapGenerationEnabled(const osg::State & state) const
	bool public_isHardwareMipmapGenerationEnabled(const osg::State & state) const {
		return osg::Texture::isHardwareMipmapGenerationEnabled(state);
	};

	// bool osg::Texture::isSafeToUnrefImageData(const osg::State & state) const
	bool public_isSafeToUnrefImageData(const osg::State & state) const {
		return osg::Texture::isSafeToUnrefImageData(state);
	};

	// osg::Texture::GenerateMipmapMode osg::Texture::mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const
	osg::Texture::GenerateMipmapMode public_mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const {
		return osg::Texture::mipmapBeforeTexImage(state, hardwareMipmapOn);
	};

	// void osg::Texture::mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const
	void public_mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const {
		return osg::Texture::mipmapAfterTexImage(state, beforeResult);
	};

	// void osg::Texture::generateMipmap(osg::State & state) const
	void public_generateMipmap(osg::State & state) const {
		return osg::Texture::generateMipmap(state);
	};

	// int osg::Texture::compareTexture(const osg::Texture & rhs) const
	int public_compareTexture(const osg::Texture & rhs) const {
		return osg::Texture::compareTexture(rhs);
	};

	// int osg::Texture::compareTextureObjects(const osg::Texture & rhs) const
	int public_compareTextureObjects(const osg::Texture & rhs) const {
		return osg::Texture::compareTextureObjects(rhs);
	};

	// void osg::StateAttribute::addParent(osg::StateSet * object)
	void public_addParent(osg::StateSet * object) {
		return osg::StateAttribute::addParent(object);
	};

	// void osg::StateAttribute::removeParent(osg::StateSet * object)
	void public_removeParent(osg::StateSet * object) {
		return osg::StateAttribute::removeParent(object);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_applyTexImage_load(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50169651) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_applyTexImage_subload(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50169651) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeInternalFormatWithImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeRequiredTextureDimensions(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeInternalFormatType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_applyTexParameters(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_isHardwareMipmapGenerationEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_isSafeToUnrefImageData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_mipmapBeforeTexImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_mipmapAfterTexImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_generateMipmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_compareTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_compareTextureObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::TextureRectangle::public_applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const
	static int _bind_public_applyTexImage_load(lua_State *L) {
		if (!_lg_typecheck_public_applyTexImage_load(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::public_applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const function, expected prototype:\nvoid osg::TextureRectangle::public_applyTexImage_load(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight) const\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,4));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureRectangle::public_applyTexImage_load function");
		}
		osg::State & state=*state_ptr;
		int inwidth=(int)lua_tointeger(L,5);
		int inheight=(int)lua_tointeger(L,6);

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::public_applyTexImage_load(unsigned int, osg::Image *, osg::State &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_applyTexImage_load(target, image, state, inwidth, inheight);

		lua_pushnumber(L,inwidth);
		lua_pushnumber(L,inheight);
		return 2;
	}

	// void osg::TextureRectangle::public_applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const
	static int _bind_public_applyTexImage_subload(lua_State *L) {
		if (!_lg_typecheck_public_applyTexImage_subload(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::public_applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const function, expected prototype:\nvoid osg::TextureRectangle::public_applyTexImage_subload(unsigned int target, osg::Image * image, osg::State & state, int & inwidth, int & inheight, int & inInternalFormat) const\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,4));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureRectangle::public_applyTexImage_subload function");
		}
		osg::State & state=*state_ptr;
		int inwidth=(int)lua_tointeger(L,5);
		int inheight=(int)lua_tointeger(L,6);
		int inInternalFormat=(int)lua_tointeger(L,7);

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::public_applyTexImage_subload(unsigned int, osg::Image *, osg::State &, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_applyTexImage_subload(target, image, state, inwidth, inheight, inInternalFormat);

		lua_pushnumber(L,inwidth);
		lua_pushnumber(L,inheight);
		lua_pushnumber(L,inInternalFormat);
		return 3;
	}

	// void osg::Texture::public_computeInternalFormatWithImage(const osg::Image & image) const
	static int _bind_public_computeInternalFormatWithImage(lua_State *L) {
		if (!_lg_typecheck_public_computeInternalFormatWithImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::public_computeInternalFormatWithImage(const osg::Image & image) const function, expected prototype:\nvoid osg::Texture::public_computeInternalFormatWithImage(const osg::Image & image) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::Texture::public_computeInternalFormatWithImage function");
		}
		const osg::Image & image=*image_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::public_computeInternalFormatWithImage(const osg::Image &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeInternalFormatWithImage(image);

		return 0;
	}

	// void osg::Texture::public_computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const
	static int _bind_public_computeRequiredTextureDimensions(lua_State *L) {
		if (!_lg_typecheck_public_computeRequiredTextureDimensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::public_computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const function, expected prototype:\nvoid osg::Texture::public_computeRequiredTextureDimensions(osg::State & state, const osg::Image & image, int & width, int & height, int & numMipmapLevels) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_computeRequiredTextureDimensions function");
		}
		osg::State & state=*state_ptr;
		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osg::Texture::public_computeRequiredTextureDimensions function");
		}
		const osg::Image & image=*image_ptr;
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int numMipmapLevels=(int)lua_tointeger(L,6);

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::public_computeRequiredTextureDimensions(osg::State &, const osg::Image &, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeRequiredTextureDimensions(state, image, width, height, numMipmapLevels);

		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		lua_pushnumber(L,numMipmapLevels);
		return 3;
	}

	// void osg::Texture::public_computeInternalFormatType() const
	static int _bind_public_computeInternalFormatType(lua_State *L) {
		if (!_lg_typecheck_public_computeInternalFormatType(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::public_computeInternalFormatType() const function, expected prototype:\nvoid osg::Texture::public_computeInternalFormatType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::public_computeInternalFormatType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeInternalFormatType();

		return 0;
	}

	// void osg::Texture::public_applyTexParameters(unsigned int target, osg::State & state) const
	static int _bind_public_applyTexParameters(lua_State *L) {
		if (!_lg_typecheck_public_applyTexParameters(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::public_applyTexParameters(unsigned int target, osg::State & state) const function, expected prototype:\nvoid osg::Texture::public_applyTexParameters(unsigned int target, osg::State & state) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_applyTexParameters function");
		}
		osg::State & state=*state_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::public_applyTexParameters(unsigned int, osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_applyTexParameters(target, state);

		return 0;
	}

	// bool osg::Texture::public_isHardwareMipmapGenerationEnabled(const osg::State & state) const
	static int _bind_public_isHardwareMipmapGenerationEnabled(lua_State *L) {
		if (!_lg_typecheck_public_isHardwareMipmapGenerationEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::public_isHardwareMipmapGenerationEnabled(const osg::State & state) const function, expected prototype:\nbool osg::Texture::public_isHardwareMipmapGenerationEnabled(const osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_isHardwareMipmapGenerationEnabled function");
		}
		const osg::State & state=*state_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::public_isHardwareMipmapGenerationEnabled(const osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_isHardwareMipmapGenerationEnabled(state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::public_isSafeToUnrefImageData(const osg::State & state) const
	static int _bind_public_isSafeToUnrefImageData(lua_State *L) {
		if (!_lg_typecheck_public_isSafeToUnrefImageData(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::public_isSafeToUnrefImageData(const osg::State & state) const function, expected prototype:\nbool osg::Texture::public_isSafeToUnrefImageData(const osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_isSafeToUnrefImageData function");
		}
		const osg::State & state=*state_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::public_isSafeToUnrefImageData(const osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_isSafeToUnrefImageData(state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture::GenerateMipmapMode osg::Texture::public_mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const
	static int _bind_public_mipmapBeforeTexImage(lua_State *L) {
		if (!_lg_typecheck_public_mipmapBeforeTexImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::GenerateMipmapMode osg::Texture::public_mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const function, expected prototype:\nosg::Texture::GenerateMipmapMode osg::Texture::public_mipmapBeforeTexImage(const osg::State & state, bool hardwareMipmapOn) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_mipmapBeforeTexImage function");
		}
		const osg::State & state=*state_ptr;
		bool hardwareMipmapOn=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture::GenerateMipmapMode osg::Texture::public_mipmapBeforeTexImage(const osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture::GenerateMipmapMode lret = self->public_mipmapBeforeTexImage(state, hardwareMipmapOn);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::public_mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const
	static int _bind_public_mipmapAfterTexImage(lua_State *L) {
		if (!_lg_typecheck_public_mipmapAfterTexImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::public_mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const function, expected prototype:\nvoid osg::Texture::public_mipmapAfterTexImage(osg::State & state, osg::Texture::GenerateMipmapMode beforeResult) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_mipmapAfterTexImage function");
		}
		osg::State & state=*state_ptr;
		osg::Texture::GenerateMipmapMode beforeResult=(osg::Texture::GenerateMipmapMode)lua_tointeger(L,3);

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::public_mipmapAfterTexImage(osg::State &, osg::Texture::GenerateMipmapMode) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_mipmapAfterTexImage(state, beforeResult);

		return 0;
	}

	// void osg::Texture::public_generateMipmap(osg::State & state) const
	static int _bind_public_generateMipmap(lua_State *L) {
		if (!_lg_typecheck_public_generateMipmap(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::public_generateMipmap(osg::State & state) const function, expected prototype:\nvoid osg::Texture::public_generateMipmap(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture::public_generateMipmap function");
		}
		osg::State & state=*state_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::public_generateMipmap(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_generateMipmap(state);

		return 0;
	}

	// int osg::Texture::public_compareTexture(const osg::Texture & rhs) const
	static int _bind_public_compareTexture(lua_State *L) {
		if (!_lg_typecheck_public_compareTexture(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::public_compareTexture(const osg::Texture & rhs) const function, expected prototype:\nint osg::Texture::public_compareTexture(const osg::Texture & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture::public_compareTexture function");
		}
		const osg::Texture & rhs=*rhs_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::public_compareTexture(const osg::Texture &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_compareTexture(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::public_compareTextureObjects(const osg::Texture & rhs) const
	static int _bind_public_compareTextureObjects(lua_State *L) {
		if (!_lg_typecheck_public_compareTextureObjects(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::public_compareTextureObjects(const osg::Texture & rhs) const function, expected prototype:\nint osg::Texture::public_compareTextureObjects(const osg::Texture & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture::public_compareTextureObjects function");
		}
		const osg::Texture & rhs=*rhs_ptr;

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::public_compareTextureObjects(const osg::Texture &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_compareTextureObjects(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateAttribute::public_addParent(osg::StateSet * object)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_addParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_addParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_addParent(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addParent(object);

		return 0;
	}

	// void osg::StateAttribute::public_removeParent(osg::StateSet * object)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_removeParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_removeParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_removeParent(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeParent(object);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_TextureRectangle* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TextureRectangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"applyTexImage_load",_bind_public_applyTexImage_load},
		{"applyTexImage_subload",_bind_public_applyTexImage_subload},
		{"computeInternalFormatWithImage",_bind_public_computeInternalFormatWithImage},
		{"computeRequiredTextureDimensions",_bind_public_computeRequiredTextureDimensions},
		{"computeInternalFormatType",_bind_public_computeInternalFormatType},
		{"applyTexParameters",_bind_public_applyTexParameters},
		{"isHardwareMipmapGenerationEnabled",_bind_public_isHardwareMipmapGenerationEnabled},
		{"isSafeToUnrefImageData",_bind_public_isSafeToUnrefImageData},
		{"mipmapBeforeTexImage",_bind_public_mipmapBeforeTexImage},
		{"mipmapAfterTexImage",_bind_public_mipmapAfterTexImage},
		{"generateMipmap",_bind_public_generateMipmap},
		{"compareTexture",_bind_public_compareTexture},
		{"compareTextureObjects",_bind_public_compareTextureObjects},
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

