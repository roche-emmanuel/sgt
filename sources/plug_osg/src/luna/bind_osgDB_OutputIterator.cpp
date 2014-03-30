#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_OutputIterator.h>

class luna_wrapper_osgDB_OutputIterator {
public:
	typedef Luna< osgDB::OutputIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputIterator* self= (osgDB::OutputIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::OutputIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::OutputIterator* ptr= dynamic_cast< osgDB::OutputIterator* >(Luna< osg::Referenced >::check(L,1));
		osgDB::OutputIterator* ptr= luna_caster< osg::Referenced, osgDB::OutputIterator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::OutputIterator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2993706)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStream_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStream_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeUChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeUShort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeUInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeLong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeULong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeFloat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeGLenum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32567652) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23791141) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeMark(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60066730) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::OutputIterator::OutputIterator(lua_Table * data)
	static osgDB::OutputIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::OutputIterator::OutputIterator(lua_Table * data) function, expected prototype:\nosgDB::OutputIterator::OutputIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_OutputIterator(L,NULL);
	}


	// Function binds:
	// void osgDB::OutputIterator::setStream(std::ostream * ostream)
	static int _bind_setStream(lua_State *L) {
		if (!_lg_typecheck_setStream(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::setStream(std::ostream * ostream) function, expected prototype:\nvoid osgDB::OutputIterator::setStream(std::ostream * ostream)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* ostream=(Luna< std::ostream >::check(L,2));

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::setStream(std::ostream *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStream(ostream);

		return 0;
	}

	// std::ostream * osgDB::OutputIterator::getStream()
	static int _bind_getStream_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStream_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in std::ostream * osgDB::OutputIterator::getStream() function, expected prototype:\nstd::ostream * osgDB::OutputIterator::getStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::ostream * osgDB::OutputIterator::getStream(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::ostream * lret = self->getStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::ostream >::push(L,lret,false);

		return 1;
	}

	// const std::ostream * osgDB::OutputIterator::getStream() const
	static int _bind_getStream_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStream_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const std::ostream * osgDB::OutputIterator::getStream() const function, expected prototype:\nconst std::ostream * osgDB::OutputIterator::getStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::ostream * osgDB::OutputIterator::getStream() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::ostream * lret = self->getStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::ostream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::OutputIterator::getStream
	static int _bind_getStream(lua_State *L) {
		if (_lg_typecheck_getStream_overload_1(L)) return _bind_getStream_overload_1(L);
		if (_lg_typecheck_getStream_overload_2(L)) return _bind_getStream_overload_2(L);

		luaL_error(L, "error in function getStream, cannot match any of the overloads for function getStream:\n  getStream()\n  getStream()\n");
		return 0;
	}

	// bool osgDB::OutputIterator::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::OutputIterator::isBinary() const function, expected prototype:\nbool osgDB::OutputIterator::isBinary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::OutputIterator::isBinary() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::OutputIterator::writeBool(bool b)
	static int _bind_writeBool(lua_State *L) {
		if (!_lg_typecheck_writeBool(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeBool(bool b) function, expected prototype:\nvoid osgDB::OutputIterator::writeBool(bool b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeBool(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeBool(b);

		return 0;
	}

	// void osgDB::OutputIterator::writeChar(char c)
	static int _bind_writeChar(lua_State *L) {
		if (!_lg_typecheck_writeChar(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeChar(char c) function, expected prototype:\nvoid osgDB::OutputIterator::writeChar(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeChar(char). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeChar(c);

		return 0;
	}

	// void osgDB::OutputIterator::writeUChar(unsigned char c)
	static int _bind_writeUChar(lua_State *L) {
		if (!_lg_typecheck_writeUChar(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeUChar(unsigned char c) function, expected prototype:\nvoid osgDB::OutputIterator::writeUChar(unsigned char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeUChar(unsigned char). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeUChar(c);

		return 0;
	}

	// void osgDB::OutputIterator::writeShort(short s)
	static int _bind_writeShort(lua_State *L) {
		if (!_lg_typecheck_writeShort(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeShort(short s) function, expected prototype:\nvoid osgDB::OutputIterator::writeShort(short s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short s=(short)lua_tointeger(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeShort(short). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeShort(s);

		return 0;
	}

	// void osgDB::OutputIterator::writeUShort(unsigned short s)
	static int _bind_writeUShort(lua_State *L) {
		if (!_lg_typecheck_writeUShort(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeUShort(unsigned short s) function, expected prototype:\nvoid osgDB::OutputIterator::writeUShort(unsigned short s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short s=(unsigned short)lua_tointeger(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeUShort(unsigned short). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeUShort(s);

		return 0;
	}

	// void osgDB::OutputIterator::writeInt(int i)
	static int _bind_writeInt(lua_State *L) {
		if (!_lg_typecheck_writeInt(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeInt(int i) function, expected prototype:\nvoid osgDB::OutputIterator::writeInt(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeInt(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeInt(i);

		return 0;
	}

	// void osgDB::OutputIterator::writeUInt(unsigned int i)
	static int _bind_writeUInt(lua_State *L) {
		if (!_lg_typecheck_writeUInt(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeUInt(unsigned int i) function, expected prototype:\nvoid osgDB::OutputIterator::writeUInt(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeUInt(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeUInt(i);

		return 0;
	}

	// void osgDB::OutputIterator::writeLong(long l)
	static int _bind_writeLong(lua_State *L) {
		if (!_lg_typecheck_writeLong(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeLong(long l) function, expected prototype:\nvoid osgDB::OutputIterator::writeLong(long l)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long l=(long)lua_tonumber(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeLong(long). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeLong(l);

		return 0;
	}

	// void osgDB::OutputIterator::writeULong(unsigned long l)
	static int _bind_writeULong(lua_State *L) {
		if (!_lg_typecheck_writeULong(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeULong(unsigned long l) function, expected prototype:\nvoid osgDB::OutputIterator::writeULong(unsigned long l)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long l=(unsigned long)lua_tonumber(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeULong(unsigned long). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeULong(l);

		return 0;
	}

	// void osgDB::OutputIterator::writeFloat(float f)
	static int _bind_writeFloat(lua_State *L) {
		if (!_lg_typecheck_writeFloat(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeFloat(float f) function, expected prototype:\nvoid osgDB::OutputIterator::writeFloat(float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeFloat(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeFloat(f);

		return 0;
	}

	// void osgDB::OutputIterator::writeDouble(double d)
	static int _bind_writeDouble(lua_State *L) {
		if (!_lg_typecheck_writeDouble(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeDouble(double d) function, expected prototype:\nvoid osgDB::OutputIterator::writeDouble(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeDouble(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeDouble(d);

		return 0;
	}

	// void osgDB::OutputIterator::writeString(const std::string & s)
	static int _bind_writeString(lua_State *L) {
		if (!_lg_typecheck_writeString(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeString(const std::string & s) function, expected prototype:\nvoid osgDB::OutputIterator::writeString(const std::string & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeString(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeString(s);

		return 0;
	}

	// void osgDB::OutputIterator::writeGLenum(const osgDB::ObjectGLenum & value)
	static int _bind_writeGLenum(lua_State *L) {
		if (!_lg_typecheck_writeGLenum(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeGLenum(const osgDB::ObjectGLenum & value) function, expected prototype:\nvoid osgDB::OutputIterator::writeGLenum(const osgDB::ObjectGLenum & value)\nClass arguments details:\narg 1 ID = 32567652\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectGLenum* value_ptr=(Luna< osgDB::ObjectGLenum >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::OutputIterator::writeGLenum function");
		}
		const osgDB::ObjectGLenum & value=*value_ptr;

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeGLenum(const osgDB::ObjectGLenum &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeGLenum(value);

		return 0;
	}

	// void osgDB::OutputIterator::writeProperty(const osgDB::ObjectProperty & prop)
	static int _bind_writeProperty(lua_State *L) {
		if (!_lg_typecheck_writeProperty(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeProperty(const osgDB::ObjectProperty & prop) function, expected prototype:\nvoid osgDB::OutputIterator::writeProperty(const osgDB::ObjectProperty & prop)\nClass arguments details:\narg 1 ID = 23791141\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectProperty* prop_ptr=(Luna< osgDB::ObjectProperty >::check(L,2));
		if( !prop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prop in osgDB::OutputIterator::writeProperty function");
		}
		const osgDB::ObjectProperty & prop=*prop_ptr;

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeProperty(const osgDB::ObjectProperty &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeProperty(prop);

		return 0;
	}

	// void osgDB::OutputIterator::writeMark(const osgDB::ObjectMark & mark)
	static int _bind_writeMark(lua_State *L) {
		if (!_lg_typecheck_writeMark(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeMark(const osgDB::ObjectMark & mark) function, expected prototype:\nvoid osgDB::OutputIterator::writeMark(const osgDB::ObjectMark & mark)\nClass arguments details:\narg 1 ID = 60066730\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectMark* mark_ptr=(Luna< osgDB::ObjectMark >::check(L,2));
		if( !mark_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mark in osgDB::OutputIterator::writeMark function");
		}
		const osgDB::ObjectMark & mark=*mark_ptr;

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeMark(const osgDB::ObjectMark &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeMark(mark);

		return 0;
	}

	// void osgDB::OutputIterator::writeCharArray(const char * s, unsigned int size)
	static int _bind_writeCharArray(lua_State *L) {
		if (!_lg_typecheck_writeCharArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeCharArray(const char * s, unsigned int size) function, expected prototype:\nvoid osgDB::OutputIterator::writeCharArray(const char * s, unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * s=(const char *)lua_tostring(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeCharArray(const char *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeCharArray(s, size);

		return 0;
	}

	// void osgDB::OutputIterator::writeWrappedString(const std::string & str)
	static int _bind_writeWrappedString(lua_State *L) {
		if (!_lg_typecheck_writeWrappedString(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::writeWrappedString(const std::string & str) function, expected prototype:\nvoid osgDB::OutputIterator::writeWrappedString(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::writeWrappedString(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeWrappedString(str);

		return 0;
	}

	// void osgDB::OutputIterator::flush()
	static int _bind_flush(lua_State *L) {
		if (!_lg_typecheck_flush(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::flush() function, expected prototype:\nvoid osgDB::OutputIterator::flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::flush(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flush();

		return 0;
	}

	// void osgDB::OutputIterator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::OutputIterator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OutputIterator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::OutputIterator::base_flush()
	static int _bind_base_flush(lua_State *L) {
		if (!_lg_typecheck_base_flush(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::OutputIterator::base_flush() function, expected prototype:\nvoid osgDB::OutputIterator::base_flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::OutputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::OutputIterator::base_flush(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OutputIterator::flush();

		return 0;
	}


	// Operator binds:

};

osgDB::OutputIterator* LunaTraits< osgDB::OutputIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_OutputIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgDB::OutputIterator::isBinary() const
	// void osgDB::OutputIterator::writeBool(bool b)
	// void osgDB::OutputIterator::writeChar(char c)
	// void osgDB::OutputIterator::writeUChar(unsigned char c)
	// void osgDB::OutputIterator::writeShort(short s)
	// void osgDB::OutputIterator::writeUShort(unsigned short s)
	// void osgDB::OutputIterator::writeInt(int i)
	// void osgDB::OutputIterator::writeUInt(unsigned int i)
	// void osgDB::OutputIterator::writeLong(long l)
	// void osgDB::OutputIterator::writeULong(unsigned long l)
	// void osgDB::OutputIterator::writeFloat(float f)
	// void osgDB::OutputIterator::writeDouble(double d)
	// void osgDB::OutputIterator::writeString(const std::string & s)
	// void osgDB::OutputIterator::writeStream(std::ostream &(*)(std::ostream &) fn)
	// void osgDB::OutputIterator::writeBase(std::ios_base &(*)(std::ios_base &) fn)
	// void osgDB::OutputIterator::writeGLenum(const osgDB::ObjectGLenum & value)
	// void osgDB::OutputIterator::writeProperty(const osgDB::ObjectProperty & prop)
	// void osgDB::OutputIterator::writeMark(const osgDB::ObjectMark & mark)
	// void osgDB::OutputIterator::writeCharArray(const char * s, unsigned int size)
	// void osgDB::OutputIterator::writeWrappedString(const std::string & str)
}

void LunaTraits< osgDB::OutputIterator >::_bind_dtor(osgDB::OutputIterator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::OutputIterator >::className[] = "OutputIterator";
const char LunaTraits< osgDB::OutputIterator >::fullName[] = "osgDB::OutputIterator";
const char LunaTraits< osgDB::OutputIterator >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::OutputIterator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::OutputIterator >::hash = 52451979;
const int LunaTraits< osgDB::OutputIterator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::OutputIterator >::methods[] = {
	{"setStream", &luna_wrapper_osgDB_OutputIterator::_bind_setStream},
	{"getStream", &luna_wrapper_osgDB_OutputIterator::_bind_getStream},
	{"isBinary", &luna_wrapper_osgDB_OutputIterator::_bind_isBinary},
	{"writeBool", &luna_wrapper_osgDB_OutputIterator::_bind_writeBool},
	{"writeChar", &luna_wrapper_osgDB_OutputIterator::_bind_writeChar},
	{"writeUChar", &luna_wrapper_osgDB_OutputIterator::_bind_writeUChar},
	{"writeShort", &luna_wrapper_osgDB_OutputIterator::_bind_writeShort},
	{"writeUShort", &luna_wrapper_osgDB_OutputIterator::_bind_writeUShort},
	{"writeInt", &luna_wrapper_osgDB_OutputIterator::_bind_writeInt},
	{"writeUInt", &luna_wrapper_osgDB_OutputIterator::_bind_writeUInt},
	{"writeLong", &luna_wrapper_osgDB_OutputIterator::_bind_writeLong},
	{"writeULong", &luna_wrapper_osgDB_OutputIterator::_bind_writeULong},
	{"writeFloat", &luna_wrapper_osgDB_OutputIterator::_bind_writeFloat},
	{"writeDouble", &luna_wrapper_osgDB_OutputIterator::_bind_writeDouble},
	{"writeString", &luna_wrapper_osgDB_OutputIterator::_bind_writeString},
	{"writeGLenum", &luna_wrapper_osgDB_OutputIterator::_bind_writeGLenum},
	{"writeProperty", &luna_wrapper_osgDB_OutputIterator::_bind_writeProperty},
	{"writeMark", &luna_wrapper_osgDB_OutputIterator::_bind_writeMark},
	{"writeCharArray", &luna_wrapper_osgDB_OutputIterator::_bind_writeCharArray},
	{"writeWrappedString", &luna_wrapper_osgDB_OutputIterator::_bind_writeWrappedString},
	{"flush", &luna_wrapper_osgDB_OutputIterator::_bind_flush},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_OutputIterator::_bind_base_setThreadSafeRefUnref},
	{"base_flush", &luna_wrapper_osgDB_OutputIterator::_bind_base_flush},
	{"fromVoid", &luna_wrapper_osgDB_OutputIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_OutputIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_OutputIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::OutputIterator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_OutputIterator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::OutputIterator >::enumValues[] = {
	{0,0}
};


