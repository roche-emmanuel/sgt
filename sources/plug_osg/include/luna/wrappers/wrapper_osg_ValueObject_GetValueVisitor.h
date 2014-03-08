#ifndef _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_GETVALUEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_VALUEOBJECT_GETVALUEVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/ValueObject>

class wrapper_osg_ValueObject_GetValueVisitor : public osg::ValueObject::GetValueVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_ValueObject_GetValueVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_ValueObject_GetValueVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ValueObject::GetValueVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

