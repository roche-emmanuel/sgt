#ifndef _WRAPPERS_WRAPPER_OSG_CONSTARRAYVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_CONSTARRAYVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_ConstArrayVisitor : public osg::ConstArrayVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ConstArrayVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ConstArrayVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ConstArrayVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ConstArrayVisitor(lua_State* L, lua_Table* dum) 
		: osg::ConstArrayVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::ConstArrayVisitor::apply(const osg::Array & arg1)
	void apply(const osg::Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::ByteArray & arg1)
	void apply(const osg::ByteArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::ShortArray & arg1)
	void apply(const osg::ShortArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::IntArray & arg1)
	void apply(const osg::IntArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::UByteArray & arg1)
	void apply(const osg::UByteArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::UShortArray & arg1)
	void apply(const osg::UShortArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::UIntArray & arg1)
	void apply(const osg::UIntArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::FloatArray & arg1)
	void apply(const osg::FloatArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::DoubleArray & arg1)
	void apply(const osg::DoubleArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2Array & arg1)
	void apply(const osg::Vec2Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3Array & arg1)
	void apply(const osg::Vec3Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4Array & arg1)
	void apply(const osg::Vec4Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & arg1)
	void apply(const osg::Vec4ubArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2bArray & arg1)
	void apply(const osg::Vec2bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3bArray & arg1)
	void apply(const osg::Vec3bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4bArray & arg1)
	void apply(const osg::Vec4bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2sArray & arg1)
	void apply(const osg::Vec2sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3sArray & arg1)
	void apply(const osg::Vec3sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4sArray & arg1)
	void apply(const osg::Vec4sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2dArray & arg1)
	void apply(const osg::Vec2dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3dArray & arg1)
	void apply(const osg::Vec3dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4dArray & arg1)
	void apply(const osg::Vec4dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::MatrixfArray & arg1)
	void apply(const osg::MatrixfArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstArrayVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstArrayVisitor::apply(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

