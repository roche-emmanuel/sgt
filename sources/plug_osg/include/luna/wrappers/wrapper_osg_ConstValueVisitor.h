#ifndef _WRAPPERS_WRAPPER_OSG_CONSTVALUEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_CONSTVALUEVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_ConstValueVisitor : public osg::ConstValueVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ConstValueVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ConstValueVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ConstValueVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ConstValueVisitor(lua_State* L, lua_Table* dum) 
		: osg::ConstValueVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::ConstValueVisitor::apply(const signed char & arg1)
	void apply(const signed char & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const short & arg1)
	void apply(const short & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const int & arg1)
	void apply(const int & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const unsigned short & arg1)
	void apply(const unsigned short & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const unsigned char & arg1)
	void apply(const unsigned char & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const unsigned int & arg1)
	void apply(const unsigned int & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const float & arg1)
	void apply(const float & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const double & arg1)
	void apply(const double & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec4ub & arg1)
	void apply(const osg::Vec4ub & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec2f & arg1)
	void apply(const osg::Vec2f & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec3f & arg1)
	void apply(const osg::Vec3f & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec4f & arg1)
	void apply(const osg::Vec4f & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec2b & arg1)
	void apply(const osg::Vec2b & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec3b & arg1)
	void apply(const osg::Vec3b & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec4b & arg1)
	void apply(const osg::Vec4b & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec2s & arg1)
	void apply(const osg::Vec2s & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec3s & arg1)
	void apply(const osg::Vec3s & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec4s & arg1)
	void apply(const osg::Vec4s & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec2d & arg1)
	void apply(const osg::Vec2d & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec3d & arg1)
	void apply(const osg::Vec3d & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Vec4d & arg1)
	void apply(const osg::Vec4d & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};

	// void osg::ConstValueVisitor::apply(const osg::Matrixf & arg1)
	void apply(const osg::Matrixf & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstValueVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstValueVisitor::apply(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

