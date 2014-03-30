#ifndef _WRAPPERS_WRAPPER_OSG_DRAWARRAYLENGTHS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWARRAYLENGTHS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawArrayLengths : public osg::DrawArrayLengths, public luna_wrapper_base {

public:
		

	~wrapper_osg_DrawArrayLengths() {
		logDEBUG3("Calling delete function for wrapper osg_DrawArrayLengths");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::DrawArrayLengths*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_DrawArrayLengths(lua_State* L, lua_Table* dum, unsigned int mode = 0) 
		: osg::DrawArrayLengths(mode), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawArrayLengths(lua_State* L, lua_Table* dum, const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::DrawArrayLengths(dal, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawArrayLengths(lua_State* L, lua_Table* dum, unsigned int mode, int first, unsigned int no, int * ptr) 
		: osg::DrawArrayLengths(mode, first, no, ptr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawArrayLengths(lua_State* L, lua_Table* dum, unsigned int mode, int first, unsigned int no) 
		: osg::DrawArrayLengths(mode, first, no), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawArrayLengths(lua_State* L, lua_Table* dum, unsigned int mode, int first) 
		: osg::DrawArrayLengths(mode, first), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawArrayLengths::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawArrayLengths::getUserData();
	};

	// osg::Array * osg::BufferData::asArray()
	osg::Array * asArray() {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return DrawArrayLengths::asArray();
	};

	// const osg::Array * osg::BufferData::asArray() const
	const osg::Array * asArray() const {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return DrawArrayLengths::asArray();
	};

	// osg::Image * osg::BufferData::asImage()
	osg::Image * asImage() {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return DrawArrayLengths::asImage();
	};

	// const osg::Image * osg::BufferData::asImage() const
	const osg::Image * asImage() const {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return DrawArrayLengths::asImage();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::releaseGLObjects(state);
	};

	// osg::PrimitiveSet * osg::PrimitiveSet::asPrimitiveSet()
	osg::PrimitiveSet * asPrimitiveSet() {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return DrawArrayLengths::asPrimitiveSet();
	};

	// const osg::PrimitiveSet * osg::PrimitiveSet::asPrimitiveSet() const
	const osg::PrimitiveSet * asPrimitiveSet() const {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return DrawArrayLengths::asPrimitiveSet();
	};

	// const void * osg::PrimitiveSet::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<void*>());
		}

		return DrawArrayLengths::getDataPointer();
	};

	// unsigned int osg::PrimitiveSet::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawArrayLengths::getTotalDataSize();
	};

	// bool osg::PrimitiveSet::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<bool>());
		}

		return DrawArrayLengths::supportsBufferObject();
	};

	// osg::DrawElements * osg::PrimitiveSet::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawArrayLengths::getDrawElements();
	};

	// const osg::DrawElements * osg::PrimitiveSet::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawArrayLengths::getDrawElements();
	};

	// void osg::PrimitiveSet::computeRange() const
	void computeRange() const {
		if(_obj.pushFunction("computeRange")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::computeRange();
	};

	// osg::Object * osg::DrawArrayLengths::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawArrayLengths::cloneType();
	};

	// osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawArrayLengths::clone(arg1);
	};

	// bool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DrawArrayLengths::isSameKindAs(obj);
	};

	// const char * osg::DrawArrayLengths::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawArrayLengths::libraryName();
	};

	// const char * osg::DrawArrayLengths::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawArrayLengths::className();
	};

	// void osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(&state);
			_obj.pushArg(useVertexBufferObjects);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::draw(state, useVertexBufferObjects);
	};

	// unsigned int osg::DrawArrayLengths::getNumIndices() const
	unsigned int getNumIndices() const {
		if(_obj.pushFunction("getNumIndices")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawArrayLengths::getNumIndices();
	};

	// unsigned int osg::DrawArrayLengths::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		if(_obj.pushFunction("index")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawArrayLengths::index(pos);
	};

	// void osg::DrawArrayLengths::offsetIndices(int offset)
	void offsetIndices(int offset) {
		if(_obj.pushFunction("offsetIndices")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			_obj.pushArg(offset);
			return (_obj.callFunction<void>());
		}

		return DrawArrayLengths::offsetIndices(offset);
	};

	// unsigned int osg::DrawArrayLengths::getNumPrimitives() const
	unsigned int getNumPrimitives() const {
		if(_obj.pushFunction("getNumPrimitives")) {
			_obj.pushArg((osg::DrawArrayLengths*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawArrayLengths::getNumPrimitives();
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DrawArrayLengths >(L,1);
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


		wrapper_osg_DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

