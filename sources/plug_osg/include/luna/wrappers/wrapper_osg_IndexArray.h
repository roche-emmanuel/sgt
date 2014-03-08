#ifndef _WRAPPERS_WRAPPER_OSG_INDEXARRAY_H_
#define _WRAPPERS_WRAPPER_OSG_INDEXARRAY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_IndexArray : public osg::IndexArray, public luna_wrapper_base {

public:
		

	~wrapper_osg_IndexArray() {
		logDEBUG3("Calling delete function for wrapper osg_IndexArray");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::IndexArray*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_IndexArray(lua_State* L, lua_Table* dum, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0) 
		: osg::IndexArray(arrayType, dataSize, dataType), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_IndexArray(lua_State* L, lua_Table* dum, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::IndexArray(array, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		_obj.pushArg((osg::IndexArray*)this);
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return IndexArray::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return IndexArray::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<void>());
		}

		return IndexArray::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return IndexArray::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return IndexArray::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return IndexArray::getUserData();
	};

	// osg::PrimitiveSet * osg::BufferData::asPrimitiveSet()
	osg::PrimitiveSet * asPrimitiveSet() {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return IndexArray::asPrimitiveSet();
	};

	// const osg::PrimitiveSet * osg::BufferData::asPrimitiveSet() const
	const osg::PrimitiveSet * asPrimitiveSet() const {
		if(_obj.pushFunction("asPrimitiveSet")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::PrimitiveSet*>());
		}

		return IndexArray::asPrimitiveSet();
	};

	// osg::Image * osg::BufferData::asImage()
	osg::Image * asImage() {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return IndexArray::asImage();
	};

	// const osg::Image * osg::BufferData::asImage() const
	const osg::Image * asImage() const {
		if(_obj.pushFunction("asImage")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return IndexArray::asImage();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return IndexArray::releaseGLObjects(state);
	};

	// const char * osg::Array::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<const char*>());
		}

		return IndexArray::libraryName();
	};

	// const char * osg::Array::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<const char*>());
		}

		return IndexArray::className();
	};

	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	void accept(osg::ArrayVisitor & arg1) {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<void>());
	};

	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	void accept(osg::ConstArrayVisitor & arg1) const {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<void>());
	};

	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	void accept(unsigned int index, osg::ValueVisitor & arg2) {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(index);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<void>());
	};

	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const {
		THROW_IF(!_obj.pushFunction("accept"),"No implementation for abstract function osg::Array::accept");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(index);
		_obj.pushArg(&arg2);
		return (_obj.callFunction<void>());
	};

	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	int compare(unsigned int lhs, unsigned int rhs) const {
		THROW_IF(!_obj.pushFunction("compare"),"No implementation for abstract function osg::Array::compare");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(lhs);
		_obj.pushArg(rhs);
		return (_obj.callFunction<int>());
	};

	// osg::Array * osg::Array::asArray()
	osg::Array * asArray() {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return IndexArray::asArray();
	};

	// const osg::Array * osg::Array::asArray() const
	const osg::Array * asArray() const {
		if(_obj.pushFunction("asArray")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<osg::Array*>());
		}

		return IndexArray::asArray();
	};

	// const void * osg::Array::getDataPointer() const
	const void * getDataPointer() const {
		THROW_IF(!_obj.pushFunction("getDataPointer"),"No implementation for abstract function osg::Array::getDataPointer");
		_obj.pushArg((osg::IndexArray*)this);
		return (_obj.callFunction<void*>());
	};

	// unsigned int osg::Array::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		THROW_IF(!_obj.pushFunction("getTotalDataSize"),"No implementation for abstract function osg::Array::getTotalDataSize");
		_obj.pushArg((osg::IndexArray*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::Array::getNumElements() const
	unsigned int getNumElements() const {
		THROW_IF(!_obj.pushFunction("getNumElements"),"No implementation for abstract function osg::Array::getNumElements");
		_obj.pushArg((osg::IndexArray*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::Array::trim()
	void trim() {
		if(_obj.pushFunction("trim")) {
			_obj.pushArg((osg::IndexArray*)this);
			return (_obj.callFunction<void>());
		}

		return IndexArray::trim();
	};

	// bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::IndexArray*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return IndexArray::isSameKindAs(obj);
	};

	// unsigned int osg::IndexArray::index(unsigned int pos) const
	unsigned int index(unsigned int pos) const {
		THROW_IF(!_obj.pushFunction("index"),"No implementation for abstract function osg::IndexArray::index");
		_obj.pushArg((osg::IndexArray*)this);
		_obj.pushArg(pos);
		return (_obj.callFunction<unsigned int>());
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

		wrapper_osg_IndexArray* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_IndexArray >(L,1);
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


		wrapper_osg_IndexArray* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_IndexArray >(L,1);
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

