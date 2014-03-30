#ifndef _WRAPPERS_WRAPPER_OSGTEXT_FONT_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_FONT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgText/Font>

class wrapper_osgText_Font : public osgText::Font, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Font() {
		logDEBUG3("Calling delete function for wrapper osgText_Font");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgText::Font*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Font(lua_State* L, lua_Table* dum, osgText::Font::FontImplementation * implementation = 0) 
		: osgText::Font(implementation), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Font::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<void>());
		}

		return Font::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Font::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Font::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Font::getUserData();
	};

	// osg::Object * osgText::Font::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Font::cloneType();
	};

	// osg::Object * osgText::Font::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Font::clone(arg1);
	};

	// bool osgText::Font::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Font::isSameKindAs(obj);
	};

	// const char * osgText::Font::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<const char*>());
		}

		return Font::className();
	};

	// const char * osgText::Font::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<const char*>());
		}

		return Font::libraryName();
	};

	// std::string osgText::Font::getFileName() const
	std::string getFileName() const {
		if(_obj.pushFunction("getFileName")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<std::string>());
		}

		return Font::getFileName();
	};

	// osg::Vec2f osgText::Font::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	osg::Vec2f getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType) {
		if(_obj.pushFunction("getKerning")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(leftcharcode);
			_obj.pushArg(rightcharcode);
			_obj.pushArg((int)kerningType);
			return *(_obj.callFunction<osg::Vec2f*>());
		}

		return Font::getKerning(leftcharcode, rightcharcode, kerningType);
	};

	// osgText::Glyph * osgText::Font::getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode)
	osgText::Glyph * getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode) {
		if(_obj.pushFunction("getGlyph")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(&fontSize);
			_obj.pushArg(charcode);
			return (_obj.callFunction<osgText::Glyph*>());
		}

		return Font::getGlyph(fontSize, charcode);
	};

	// osgText::Glyph3D * osgText::Font::getGlyph3D(unsigned int charcode)
	osgText::Glyph3D * getGlyph3D(unsigned int charcode) {
		if(_obj.pushFunction("getGlyph3D")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(charcode);
			return (_obj.callFunction<osgText::Glyph3D*>());
		}

		return Font::getGlyph3D(charcode);
	};

	// bool osgText::Font::hasVertical() const
	bool hasVertical() const {
		if(_obj.pushFunction("hasVertical")) {
			_obj.pushArg((osgText::Font*)this);
			return (_obj.callFunction<bool>());
		}

		return Font::hasVertical();
	};

	// bool osgText::Font::getVerticalSize(float & ascender, float & descender) const
	bool getVerticalSize(float & ascender, float & descender) const {
		if(_obj.pushFunction("getVerticalSize")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(ascender);
			_obj.pushArg(descender);
			return (_obj.callFunction<bool>());
		}

		return Font::getVerticalSize(ascender, descender);
	};

	// void osgText::Font::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Font::setThreadSafeRefUnref(threadSafe);
	};

	// void osgText::Font::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgText::Font*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Font::releaseGLObjects(state);
	};


	// Protected non-virtual methods:
	// void osgText::Font::addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph)
	void public_addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph) {
		return osgText::Font::addGlyph(fontRes, charcode, glyph);
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
	inline static bool _lg_typecheck_public_addGlyph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52265949) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
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
	// void osgText::Font::public_addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph)
	static int _bind_public_addGlyph(lua_State *L) {
		if (!_lg_typecheck_public_addGlyph(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Font::public_addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph) function, expected prototype:\nvoid osgText::Font::public_addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph)\nClass arguments details:\narg 1 ID = 17799265\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::FontResolution* fontRes_ptr=(Luna< std::pair< unsigned int, unsigned int > >::checkSubType< osgText::FontResolution >(L,2));
		if( !fontRes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fontRes in osgText::Font::public_addGlyph function");
		}
		const osgText::FontResolution & fontRes=*fontRes_ptr;
		unsigned int charcode=(unsigned int)lua_tointeger(L,3);
		osgText::Glyph* glyph=(Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,4));

		wrapper_osgText_Font* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Font::public_addGlyph(const osgText::FontResolution &, unsigned int, osgText::Glyph *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addGlyph(fontRes, charcode, glyph);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgText_Font* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Font >(L,1);
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


		wrapper_osgText_Font* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Font >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addGlyph",_bind_public_addGlyph},
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

