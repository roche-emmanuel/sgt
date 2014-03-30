#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUSHORT_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTSUSHORT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElementsUShort : public osg::DrawElementsUShort, public luna_wrapper_base {

public:
		

	~wrapper_osg_DrawElementsUShort() {
		logDEBUG3("Calling delete function for wrapper osg_DrawElementsUShort");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::DrawElementsUShort*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, unsigned int mode = 0) 
		: osg::DrawElementsUShort(mode), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, const osg::DrawElementsUShort & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::DrawElementsUShort(array, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no, const unsigned short * ptr, int numInstances = 0) 
		: osg::DrawElementsUShort(mode, no, ptr, numInstances), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawElementsUShort(lua_State* L, lua_Table* dum, unsigned int mode, unsigned int no) 
		: osg::DrawElementsUShort(mode, no), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElementsUShort::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElementsUShort::getUserData();
	};

	// osg::Array * osg::BufferData::asArray()
	osg::Array * asArray() {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return DrawElementsUShort::asArray();
	};

	// const osg::Array * osg::BufferData::asArray() const
	const osg::Array * asArray() const {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return DrawElementsUShort::asArray();
	};

	// osg::Image * osg::BufferData::asImage()
	osg::Image * asImage() {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return DrawElementsUShort::asImage();
	};

	// const osg::Image * osg::BufferData::asImage() const
	const osg::Image * asImage() const {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return DrawElementsUShort::asImage();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::releaseGLObjects(state);
	};

	// osg::PrimitiveSet * osg::PrimitiveSet::asPrimitiveSet()
	osg::PrimitiveSet * asPrimitiveSet() {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return DrawElementsUShort::asPrimitiveSet();
	};

	// const osg::PrimitiveSet * osg::PrimitiveSet::asPrimitiveSet() const
	const osg::PrimitiveSet * asPrimitiveSet() const {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return DrawElementsUShort::asPrimitiveSet();
	};

	// unsigned int osg::PrimitiveSet::getNumPrimitives() const
	unsigned int getNumPrimitives() const {
		if(_obj.pushFunction("getNumPrimitives")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUShort::getNumPrimitives();
	};

	// void osg::PrimitiveSet::computeRange() const
	void computeRange() const {
		if(_obj.pushFunction("computeRange")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::computeRange();
	};

	// osg::DrawElements * osg::DrawElements::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElementsUShort::getDrawElements();
	};

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElementsUShort::getDrawElements();
	};

	// osg::Object * osg::DrawElementsUShort::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawElementsUShort::cloneType();
	};

	// osg::Object * osg::DrawElementsUShort::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DrawElementsUShort::clone(arg1);
	};

	// bool osg::DrawElementsUShort::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DrawElementsUShort::isSameKindAs(obj);
	};

	// const char * osg::DrawElementsUShort::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawElementsUShort::libraryName();
	};

	// const char * osg::DrawElementsUShort::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawElementsUShort::className();
	};

	// const void * osg::DrawElementsUShort::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<void*>());
		}

		return DrawElementsUShort::getDataPointer();
	};

	// unsigned int osg::DrawElementsUShort::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUShort::getTotalDataSize();
	};

	// bool osg::DrawElementsUShort::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<bool>());
		}

		return DrawElementsUShort::supportsBufferObject();
	};

	// void osg::DrawElementsUShort::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(&state);
			_obj.pushArg(useVertexBufferObjects);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::draw(state, useVertexBufferObjects);
	};

	// unsigned int osg::DrawElementsUShort::getNumIndices() const
	unsigned int getNumIndices() const {
		if(_obj.pushFunction("getNumIndices")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUShort::getNumIndices();
	};

	// unsigned int osg::DrawElementsUShort::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		if(_obj.pushFunction("index")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUShort::index(pos);
	};

	// void osg::DrawElementsUShort::offsetIndices(int offset)
	void offsetIndices(int offset) {
		if(_obj.pushFunction("offsetIndices")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(offset);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::offsetIndices(offset);
	};

	// void osg::DrawElementsUShort::reserveElements(unsigned int numIndices)
	void reserveElements(unsigned int numIndices) {
		if(_obj.pushFunction("reserveElements")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(numIndices);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::reserveElements(numIndices);
	};

	// void osg::DrawElementsUShort::setElement(unsigned int i, unsigned int v)
	void setElement(unsigned int i, unsigned int v) {
		if(_obj.pushFunction("setElement")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(i);
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::setElement(i, v);
	};

	// unsigned int osg::DrawElementsUShort::getElement(unsigned int i)
	unsigned int getElement(unsigned int i) {
		if(_obj.pushFunction("getElement")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElementsUShort::getElement(i);
	};

	// void osg::DrawElementsUShort::addElement(unsigned int v)
	void addElement(unsigned int v) {
		if(_obj.pushFunction("addElement")) {
			_obj.pushArg((osg::DrawElementsUShort*)this);
			_obj.pushArg(v);
			return (_obj.callFunction<void>());
		}

		return DrawElementsUShort::addElement(v);
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

		wrapper_osg_DrawElementsUShort* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DrawElementsUShort >(L,1);
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


		wrapper_osg_DrawElementsUShort* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DrawElementsUShort >(L,1);
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

