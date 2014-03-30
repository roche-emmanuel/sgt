#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELDREADER_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELDREADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_FieldReader : public osgDB::FieldReader, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FieldReader() {
		logDEBUG3("Calling delete function for wrapper osgDB_FieldReader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::FieldReader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_FieldReader(lua_State* L, lua_Table* dum) 
		: osgDB::FieldReader(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::FieldReader*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgDB_FieldReader(lua_State* L, lua_Table* dum, const osgDB::FieldReader & ic) 
		: osgDB::FieldReader(ic), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::FieldReader*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool osgDB::FieldReader::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			_obj.pushArg((osgDB::FieldReader*)this);
			return (_obj.callFunction<bool>());
		}

		return FieldReader::eof();
	};

	// osgDB::FieldReader & osgDB::FieldReader::operator=(const osgDB::FieldReader & ic)
	osgDB::FieldReader & operator=(const osgDB::FieldReader & ic) {
		if(_obj.pushFunction("op_assign")) {
			_obj.pushArg((osgDB::FieldReader*)this);
			_obj.pushArg(&ic);
			return *(_obj.callFunction<osgDB::FieldReader*>());
		}

		return FieldReader::operator=(ic);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

