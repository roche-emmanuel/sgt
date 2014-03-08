#ifndef _WRAPPERS_WRAPPER_OSGDB_INPUTITERATOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_INPUTITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/StreamOperator>

class wrapper_osgDB_InputIterator : public osgDB::InputIterator, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_InputIterator() {
		logDEBUG3("Calling delete function for wrapper osgDB_InputIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::InputIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_InputIterator(lua_State* L, lua_Table* dum) 
		: osgDB::InputIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::InputIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::InputIterator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return InputIterator::setThreadSafeRefUnref(threadSafe);
	};

	// bool osgDB::InputIterator::isBinary() const
	bool isBinary() const {
		THROW_IF(!_obj.pushFunction("isBinary"),"No implementation for abstract function osgDB::InputIterator::isBinary");
		_obj.pushArg((osgDB::InputIterator*)this);
		return (_obj.callFunction<bool>());
	};

	// void osgDB::InputIterator::readBool(bool & b)
	void readBool(bool & b) {
		THROW_IF(!_obj.pushFunction("readBool"),"No implementation for abstract function osgDB::InputIterator::readBool");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(b);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readChar(char & c)
	void readChar(char & c) {
		THROW_IF(!_obj.pushFunction("readChar"),"No implementation for abstract function osgDB::InputIterator::readChar");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readSChar(signed char & c)
	void readSChar(signed char & c) {
		THROW_IF(!_obj.pushFunction("readSChar"),"No implementation for abstract function osgDB::InputIterator::readSChar");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readUChar(unsigned char & c)
	void readUChar(unsigned char & c) {
		THROW_IF(!_obj.pushFunction("readUChar"),"No implementation for abstract function osgDB::InputIterator::readUChar");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readShort(short & s)
	void readShort(short & s) {
		THROW_IF(!_obj.pushFunction("readShort"),"No implementation for abstract function osgDB::InputIterator::readShort");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readUShort(unsigned short & s)
	void readUShort(unsigned short & s) {
		THROW_IF(!_obj.pushFunction("readUShort"),"No implementation for abstract function osgDB::InputIterator::readUShort");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readInt(int & i)
	void readInt(int & i) {
		THROW_IF(!_obj.pushFunction("readInt"),"No implementation for abstract function osgDB::InputIterator::readInt");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readUInt(unsigned int & i)
	void readUInt(unsigned int & i) {
		THROW_IF(!_obj.pushFunction("readUInt"),"No implementation for abstract function osgDB::InputIterator::readUInt");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readLong(long & l)
	void readLong(long & l) {
		THROW_IF(!_obj.pushFunction("readLong"),"No implementation for abstract function osgDB::InputIterator::readLong");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(l);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readULong(unsigned long & l)
	void readULong(unsigned long & l) {
		THROW_IF(!_obj.pushFunction("readULong"),"No implementation for abstract function osgDB::InputIterator::readULong");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(l);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readFloat(float & f)
	void readFloat(float & f) {
		THROW_IF(!_obj.pushFunction("readFloat"),"No implementation for abstract function osgDB::InputIterator::readFloat");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(f);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readDouble(double & d)
	void readDouble(double & d) {
		THROW_IF(!_obj.pushFunction("readDouble"),"No implementation for abstract function osgDB::InputIterator::readDouble");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(d);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readString(std::string & s)
	void readString(std::string & s) {
		THROW_IF(!_obj.pushFunction("readString"),"No implementation for abstract function osgDB::InputIterator::readString");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)
	void readGLenum(osgDB::ObjectGLenum & value) {
		THROW_IF(!_obj.pushFunction("readGLenum"),"No implementation for abstract function osgDB::InputIterator::readGLenum");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(&value);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)
	void readProperty(osgDB::ObjectProperty & prop) {
		THROW_IF(!_obj.pushFunction("readProperty"),"No implementation for abstract function osgDB::InputIterator::readProperty");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(&prop);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)
	void readMark(osgDB::ObjectMark & mark) {
		THROW_IF(!_obj.pushFunction("readMark"),"No implementation for abstract function osgDB::InputIterator::readMark");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(&mark);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readCharArray(char * s, unsigned int size)
	void readCharArray(char * s, unsigned int size) {
		THROW_IF(!_obj.pushFunction("readCharArray"),"No implementation for abstract function osgDB::InputIterator::readCharArray");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(s);
		_obj.pushArg(size);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readWrappedString(std::string & str)
	void readWrappedString(std::string & str) {
		THROW_IF(!_obj.pushFunction("readWrappedString"),"No implementation for abstract function osgDB::InputIterator::readWrappedString");
		_obj.pushArg((osgDB::InputIterator*)this);
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};

	// bool osgDB::InputIterator::matchString(const std::string & arg1)
	bool matchString(const std::string & arg1) {
		if(_obj.pushFunction("matchString")) {
			_obj.pushArg((osgDB::InputIterator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return InputIterator::matchString(arg1);
	};

	// void osgDB::InputIterator::advanceToCurrentEndBracket()
	void advanceToCurrentEndBracket() {
		if(_obj.pushFunction("advanceToCurrentEndBracket")) {
			_obj.pushArg((osgDB::InputIterator*)this);
			return (_obj.callFunction<void>());
		}

		return InputIterator::advanceToCurrentEndBracket();
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_InputIterator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgDB_InputIterator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// void osgDB::InputIterator::readStream(std::istream &(*)(std::istream &) fn)
void readStream(std::istream &(*)(std::istream &)) {
	THROW_IF(true,"The function call void osgDB::InputIterator::readStream(std::istream &(*)(std::istream &)) is not implemented in wrapper.");
};

public:
// void osgDB::InputIterator::readBase(std::ios_base &(*)(std::ios_base &) fn)
void readBase(std::ios_base &(*)(std::ios_base &)) {
	THROW_IF(true,"The function call void osgDB::InputIterator::readBase(std::ios_base &(*)(std::ios_base &)) is not implemented in wrapper.");
};

};




#endif

