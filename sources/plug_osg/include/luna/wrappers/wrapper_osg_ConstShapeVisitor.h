#ifndef _WRAPPERS_WRAPPER_OSG_CONSTSHAPEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_CONSTSHAPEVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_ConstShapeVisitor : public osg::ConstShapeVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ConstShapeVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ConstShapeVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ConstShapeVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ConstShapeVisitor(lua_State* L, lua_Table* dum) 
		: osg::ConstShapeVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::ConstShapeVisitor::apply(const osg::Shape & arg1)
	void apply(const osg::Shape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Sphere & arg1)
	void apply(const osg::Sphere & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Box & arg1)
	void apply(const osg::Box & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Cone & arg1)
	void apply(const osg::Cone & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Cylinder & arg1)
	void apply(const osg::Cylinder & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Capsule & arg1)
	void apply(const osg::Capsule & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::InfinitePlane & arg1)
	void apply(const osg::InfinitePlane & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::TriangleMesh & arg1)
	void apply(const osg::TriangleMesh & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::ConvexHull & arg1)
	void apply(const osg::ConvexHull & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::HeightField & arg1)
	void apply(const osg::HeightField & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::CompositeShape & arg1)
	void apply(const osg::CompositeShape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ConstShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConstShapeVisitor::apply(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

