#ifndef _WRAPPERS_WRAPPER_OSGDB_INPUT_H_
#define _WRAPPERS_WRAPPER_OSGDB_INPUT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_Input : public osgDB::Input, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Input() {
		logDEBUG3("Calling delete function for wrapper osgDB_Input");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::Input*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Input(lua_State* L, lua_Table* dum) 
		: osgDB::Input(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool osgDB::FieldReaderIterator::eof() const
	bool eof() const {
		if(_obj.pushFunction("eof")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<bool>());
		}

		return Input::eof();
	};

	// osg::Object * osgDB::Input::readObjectOfType(const osg::Object & compObj)
	osg::Object * readObjectOfType(const osg::Object & compObj) {
		if(_obj.pushFunction("readObjectOfType")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(&compObj);
			return (_obj.callFunction<osg::Object*>());
		}

		return Input::readObjectOfType(compObj);
	};

	// osg::Object * osgDB::Input::readObjectOfType(const osgDB::basic_type_wrapper & btw)
	osg::Object * readObjectOfType(const osgDB::basic_type_wrapper & btw) {
		if(_obj.pushFunction("readObjectOfType")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(&btw);
			return (_obj.callFunction<osg::Object*>());
		}

		return Input::readObjectOfType(btw);
	};

	// osg::Object * osgDB::Input::readObject()
	osg::Object * readObject() {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Input::readObject();
	};

	// osg::Image * osgDB::Input::readImage()
	osg::Image * readImage() {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::Image*>());
		}

		return Input::readImage();
	};

	// osg::Drawable * osgDB::Input::readDrawable()
	osg::Drawable * readDrawable() {
		if(_obj.pushFunction("readDrawable")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::Drawable*>());
		}

		return Input::readDrawable();
	};

	// osg::StateAttribute * osgDB::Input::readStateAttribute()
	osg::StateAttribute * readStateAttribute() {
		if(_obj.pushFunction("readStateAttribute")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::StateAttribute*>());
		}

		return Input::readStateAttribute();
	};

	// osg::Uniform * osgDB::Input::readUniform()
	osg::Uniform * readUniform() {
		if(_obj.pushFunction("readUniform")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::Uniform*>());
		}

		return Input::readUniform();
	};

	// osg::Node * osgDB::Input::readNode()
	osg::Node * readNode() {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return Input::readNode();
	};

	// osg::Shader * osgDB::Input::readShader()
	osg::Shader * readShader() {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg((osgDB::Input*)this);
			return (_obj.callFunction<osg::Shader*>());
		}

		return Input::readShader();
	};

	// osg::Object * osgDB::Input::readObject(const std::string & fileName)
	osg::Object * readObject(const std::string & fileName) {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(fileName);
			return (_obj.callFunction<osg::Object*>());
		}

		return Input::readObject(fileName);
	};

	// osg::Image * osgDB::Input::readImage(const std::string & fileName)
	osg::Image * readImage(const std::string & fileName) {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(fileName);
			return (_obj.callFunction<osg::Image*>());
		}

		return Input::readImage(fileName);
	};

	// osg::Node * osgDB::Input::readNode(const std::string & fileName)
	osg::Node * readNode(const std::string & fileName) {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(fileName);
			return (_obj.callFunction<osg::Node*>());
		}

		return Input::readNode(fileName);
	};

	// osg::Shader * osgDB::Input::readShader(const std::string & fileName)
	osg::Shader * readShader(const std::string & fileName) {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(fileName);
			return (_obj.callFunction<osg::Shader*>());
		}

		return Input::readShader(fileName);
	};

	// osg::Object * osgDB::Input::getObjectForUniqueID(const std::string & uniqueID)
	osg::Object * getObjectForUniqueID(const std::string & uniqueID) {
		if(_obj.pushFunction("getObjectForUniqueID")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(uniqueID);
			return (_obj.callFunction<osg::Object*>());
		}

		return Input::getObjectForUniqueID(uniqueID);
	};

	// void osgDB::Input::registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj)
	void registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj) {
		if(_obj.pushFunction("registerUniqueIDForObject")) {
			_obj.pushArg((osgDB::Input*)this);
			_obj.pushArg(uniqueID);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Input::registerUniqueIDForObject(uniqueID, obj);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

