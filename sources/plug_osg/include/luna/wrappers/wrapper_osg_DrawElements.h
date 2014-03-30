#ifndef _WRAPPERS_WRAPPER_OSG_DRAWELEMENTS_H_
#define _WRAPPERS_WRAPPER_OSG_DRAWELEMENTS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/PrimitiveSet>

class wrapper_osg_DrawElements : public osg::DrawElements, public luna_wrapper_base {

public:
		

	~wrapper_osg_DrawElements() {
		logDEBUG3("Calling delete function for wrapper osg_DrawElements");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::DrawElements*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_DrawElements(lua_State* L, lua_Table* dum, osg::PrimitiveSet::Type primType = osg::PrimitiveSet::PrimitiveType, unsigned int mode = 0, int numInstances = 0) 
		: osg::DrawElements(primType, mode, numInstances), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DrawElements(lua_State* L, lua_Table* dum, const osg::DrawElements & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::DrawElements(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		_obj.pushArg((osg::DrawElements*)this);
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DrawElements::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DrawElements::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<void>());
		}

		return DrawElements::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DrawElements::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElements::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DrawElements::getUserData();
	};

	// osg::Array * osg::BufferData::asArray()
	osg::Array * asArray() {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return DrawElements::asArray();
	};

	// const osg::Array * osg::BufferData::asArray() const
	const osg::Array * asArray() const {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return DrawElements::asArray();
	};

	// osg::Image * osg::BufferData::asImage()
	osg::Image * asImage() {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return DrawElements::asImage();
	};

	// const osg::Image * osg::BufferData::asImage() const
	const osg::Image * asImage() const {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return DrawElements::asImage();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return DrawElements::releaseGLObjects(state);
	};

	// bool osg::PrimitiveSet::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::DrawElements*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DrawElements::isSameKindAs(obj);
	};

	// const char * osg::PrimitiveSet::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawElements::libraryName();
	};

	// const char * osg::PrimitiveSet::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<const char*>());
		}

		return DrawElements::className();
	};

	// osg::PrimitiveSet * osg::PrimitiveSet::asPrimitiveSet()
	osg::PrimitiveSet * asPrimitiveSet() {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return DrawElements::asPrimitiveSet();
	};

	// const osg::PrimitiveSet * osg::PrimitiveSet::asPrimitiveSet() const
	const osg::PrimitiveSet * asPrimitiveSet() const {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return DrawElements::asPrimitiveSet();
	};

	// const void * osg::PrimitiveSet::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<void*>());
		}

		return DrawElements::getDataPointer();
	};

	// unsigned int osg::PrimitiveSet::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElements::getTotalDataSize();
	};

	// bool osg::PrimitiveSet::supportsBufferObject() const
	bool supportsBufferObject() const {
		if(_obj.pushFunction("supportsBufferObject")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<bool>());
		}

		return DrawElements::supportsBufferObject();
	};

	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	void draw(osg::State & state, bool useVertexBufferObjects) const {
		THROW_IF(!_obj.pushFunction("draw"),"No implementation for abstract function osg::PrimitiveSet::draw");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(&state);
		_obj.pushArg(useVertexBufferObjects);
		return (_obj.callFunction<void>());
	};

	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		THROW_IF(!_obj.pushFunction("index"),"No implementation for abstract function osg::PrimitiveSet::index");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(pos);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::PrimitiveSet::getNumIndices() const
	unsigned int getNumIndices() const {
		THROW_IF(!_obj.pushFunction("getNumIndices"),"No implementation for abstract function osg::PrimitiveSet::getNumIndices");
		_obj.pushArg((osg::DrawElements*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::PrimitiveSet::offsetIndices(int offset)
	void offsetIndices(int offset) {
		THROW_IF(!_obj.pushFunction("offsetIndices"),"No implementation for abstract function osg::PrimitiveSet::offsetIndices");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(offset);
		return (_obj.callFunction<void>());
	};

	// unsigned int osg::PrimitiveSet::getNumPrimitives() const
	unsigned int getNumPrimitives() const {
		if(_obj.pushFunction("getNumPrimitives")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DrawElements::getNumPrimitives();
	};

	// void osg::PrimitiveSet::computeRange() const
	void computeRange() const {
		if(_obj.pushFunction("computeRange")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<void>());
		}

		return DrawElements::computeRange();
	};

	// osg::DrawElements * osg::DrawElements::getDrawElements()
	osg::DrawElements * getDrawElements() {
		if(_obj.pushFunction("getDrawElements")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElements::getDrawElements();
	};

	// const osg::DrawElements * osg::DrawElements::getDrawElements() const
	const osg::DrawElements * getDrawElements() const {
		if(_obj.pushFunction("getDrawElements")) {
			_obj.pushArg((osg::DrawElements*)this);
			return (_obj.callFunction<osg::DrawElements*>());
		}

		return DrawElements::getDrawElements();
	};

	// void osg::DrawElements::reserveElements(unsigned int numIndices)
	void reserveElements(unsigned int numIndices) {
		THROW_IF(!_obj.pushFunction("reserveElements"),"No implementation for abstract function osg::DrawElements::reserveElements");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(numIndices);
		return (_obj.callFunction<void>());
	};

	// void osg::DrawElements::setElement(unsigned int arg1, unsigned int arg2)
	void setElement(unsigned int arg1, unsigned int arg2) {
		THROW_IF(!_obj.pushFunction("setElement"),"No implementation for abstract function osg::DrawElements::setElement");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return (_obj.callFunction<void>());
	};

	// unsigned int osg::DrawElements::getElement(unsigned int arg1)
	unsigned int getElement(unsigned int arg1) {
		THROW_IF(!_obj.pushFunction("getElement"),"No implementation for abstract function osg::DrawElements::getElement");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::DrawElements::addElement(unsigned int arg1)
	void addElement(unsigned int arg1) {
		THROW_IF(!_obj.pushFunction("addElement"),"No implementation for abstract function osg::DrawElements::addElement");
		_obj.pushArg((osg::DrawElements*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
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

		wrapper_osg_DrawElements* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DrawElements >(L,1);
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


		wrapper_osg_DrawElements* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DrawElements >(L,1);
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


public:
// void osg::PrimitiveSet::accept(PrimitiveFunctor & functor) const
void accept(PrimitiveFunctor &) const {
	THROW_IF(true,"The function call void osg::PrimitiveSet::accept(PrimitiveFunctor &) const is not implemented in wrapper.");
};

public:
// void osg::PrimitiveSet::accept(PrimitiveIndexFunctor & functor) const
void accept(PrimitiveIndexFunctor &) const {
	THROW_IF(true,"The function call void osg::PrimitiveSet::accept(PrimitiveIndexFunctor &) const is not implemented in wrapper.");
};

};




#endif

