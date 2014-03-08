#ifndef _WRAPPERS_WRAPPER_OSGDB_BASIC_TYPE_WRAPPER_H_
#define _WRAPPERS_WRAPPER_OSGDB_BASIC_TYPE_WRAPPER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_basic_type_wrapper : public osgDB::basic_type_wrapper, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_basic_type_wrapper() {
		logDEBUG3("Calling delete function for wrapper osgDB_basic_type_wrapper");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::basic_type_wrapper*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_basic_type_wrapper(lua_State* L, lua_Table* dum) 
		: osgDB::basic_type_wrapper(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::basic_type_wrapper*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const
	bool matches(const osg::Object * proto) const {
		THROW_IF(!_obj.pushFunction("matches"),"No implementation for abstract function osgDB::basic_type_wrapper::matches");
		_obj.pushArg((osgDB::basic_type_wrapper*)this);
		_obj.pushArg(proto);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

