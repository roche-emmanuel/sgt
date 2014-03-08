#ifndef _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_SETVALUEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_SETVALUEVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/ValueObject>

class wrapper_osg_ValueObject_SetValueVisitor : public osg::ValueObject::SetValueVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ValueObject_SetValueVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ValueObject_SetValueVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ValueObject::SetValueVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ValueObject_SetValueVisitor(lua_State* L, lua_Table* dum) 
		: osg::ValueObject::SetValueVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::ValueObject::SetValueVisitor::apply(bool & value)
	void apply(bool & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(char & value)
	void apply(char & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(unsigned char & value)
	void apply(unsigned char & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(short & value)
	void apply(short & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(unsigned short & value)
	void apply(unsigned short & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(int & value)
	void apply(int & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(unsigned int & value)
	void apply(unsigned int & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(float & value)
	void apply(float & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(double & value)
	void apply(double & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(std::string & value)
	void apply(std::string & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec2f & value)
	void apply(osg::Vec2f & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec3f & value)
	void apply(osg::Vec3f & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec4f & value)
	void apply(osg::Vec4f & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec2d & value)
	void apply(osg::Vec2d & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec3d & value)
	void apply(osg::Vec3d & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Vec4d & value)
	void apply(osg::Vec4d & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Quat & value)
	void apply(osg::Quat & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Plane & value)
	void apply(osg::Plane & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Matrixf & value)
	void apply(osg::Matrixf & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};

	// void osg::ValueObject::SetValueVisitor::apply(osg::Matrixd & value)
	void apply(osg::Matrixd & value) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::ValueObject::SetValueVisitor*)this);
			_obj.pushArg(&value);
			return (_obj.callFunction<void>());
		}

		return SetValueVisitor::apply(value);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

