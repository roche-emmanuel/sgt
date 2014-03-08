#ifndef _WRAPPERS_WRAPPER_OSG_ARRAYVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_ARRAYVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_ArrayVisitor : public osg::ArrayVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ArrayVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ArrayVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ArrayVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ArrayVisitor(lua_State* L, lua_Table* dum) 
		: osg::ArrayVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::ArrayVisitor::apply(osg::Array & arg1)
	void apply(osg::Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::ByteArray & arg1)
	void apply(osg::ByteArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::ShortArray & arg1)
	void apply(osg::ShortArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::IntArray & arg1)
	void apply(osg::IntArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::UByteArray & arg1)
	void apply(osg::UByteArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::UShortArray & arg1)
	void apply(osg::UShortArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::UIntArray & arg1)
	void apply(osg::UIntArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::FloatArray & arg1)
	void apply(osg::FloatArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::DoubleArray & arg1)
	void apply(osg::DoubleArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec2Array & arg1)
	void apply(osg::Vec2Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec3Array & arg1)
	void apply(osg::Vec3Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec4Array & arg1)
	void apply(osg::Vec4Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec4ubArray & arg1)
	void apply(osg::Vec4ubArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec2bArray & arg1)
	void apply(osg::Vec2bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec3bArray & arg1)
	void apply(osg::Vec3bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec4bArray & arg1)
	void apply(osg::Vec4bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec2sArray & arg1)
	void apply(osg::Vec2sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec3sArray & arg1)
	void apply(osg::Vec3sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec4sArray & arg1)
	void apply(osg::Vec4sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec2dArray & arg1)
	void apply(osg::Vec2dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec3dArray & arg1)
	void apply(osg::Vec3dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::Vec4dArray & arg1)
	void apply(osg::Vec4dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};

	// void osg::ArrayVisitor::apply(osg::MatrixfArray & arg1)
	void apply(osg::MatrixfArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ArrayVisitor::apply(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

