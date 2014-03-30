#ifndef _WRAPPERS_WRAPPER_OSG_SHAPEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_SHAPEVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_ShapeVisitor : public osg::ShapeVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ShapeVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ShapeVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ShapeVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ShapeVisitor(lua_State* L, lua_Table* dum) 
		: osg::ShapeVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::ShapeVisitor::apply(osg::Shape & arg1)
	void apply(osg::Shape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Sphere & arg1)
	void apply(osg::Sphere & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Box & arg1)
	void apply(osg::Box & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Cone & arg1)
	void apply(osg::Cone & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Cylinder & arg1)
	void apply(osg::Cylinder & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Capsule & arg1)
	void apply(osg::Capsule & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::InfinitePlane & arg1)
	void apply(osg::InfinitePlane & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::TriangleMesh & arg1)
	void apply(osg::TriangleMesh & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::ConvexHull & arg1)
	void apply(osg::ConvexHull & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::HeightField & arg1)
	void apply(osg::HeightField & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::CompositeShape & arg1)
	void apply(osg::CompositeShape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ShapeVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ShapeVisitor::apply(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

