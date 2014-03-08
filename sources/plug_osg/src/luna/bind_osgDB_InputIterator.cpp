#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_InputIterator.h>

class luna_wrapper_osgDB_InputIterator {
public:
	typedef Luna< osgDB::InputIterator > luna_t;

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

		osgDB::InputIterator* self= (osgDB::InputIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::InputIterator >::push(L,self,false);
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
		//osgDB::InputIterator* ptr= dynamic_cast< osgDB::InputIterator* >(Luna< osg::Referenced >::check(L,1));
		osgDB::InputIterator* ptr= luna_caster< osg::Referenced, osgDB::InputIterator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::InputIterator >::push(L,ptr,false);
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

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77972206)) ) return false;
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

	inline static bool _lg_typecheck_setInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47918182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInputStream_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInputStream_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setByteSwap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getByteSwap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFailed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readUChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readUShort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readUInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readLong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readULong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readFloat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readGLenum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32567652) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23791141) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readMark(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60066730) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_matchString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_advanceToCurrentEndBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readComponentArray(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_matchString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_advanceToCurrentEndBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::InputIterator::InputIterator(lua_Table * data)
	static osgDB::InputIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::InputIterator::InputIterator(lua_Table * data) function, expected prototype:\nosgDB::InputIterator::InputIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_InputIterator(L,NULL);
	}


	// Function binds:
	// void osgDB::InputIterator::setStream(std::istream * istream)
	static int _bind_setStream(lua_State *L) {
		if (!_lg_typecheck_setStream(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::setStream(std::istream * istream) function, expected prototype:\nvoid osgDB::InputIterator::setStream(std::istream * istream)\nClass arguments details:\narg 1 ID = 77972206\n\n%s",luna_dumpStack(L).c_str());
		}

		std::istream* istream=(Luna< std::istream >::check(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::setStream(std::istream *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStream(istream);

		return 0;
	}

	// std::istream * osgDB::InputIterator::getStream()
	static int _bind_getStream_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStream_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in std::istream * osgDB::InputIterator::getStream() function, expected prototype:\nstd::istream * osgDB::InputIterator::getStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::istream * osgDB::InputIterator::getStream(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::istream * lret = self->getStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::istream >::push(L,lret,false);

		return 1;
	}

	// const std::istream * osgDB::InputIterator::getStream() const
	static int _bind_getStream_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStream_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const std::istream * osgDB::InputIterator::getStream() const function, expected prototype:\nconst std::istream * osgDB::InputIterator::getStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::istream * osgDB::InputIterator::getStream() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::istream * lret = self->getStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::istream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::InputIterator::getStream
	static int _bind_getStream(lua_State *L) {
		if (_lg_typecheck_getStream_overload_1(L)) return _bind_getStream_overload_1(L);
		if (_lg_typecheck_getStream_overload_2(L)) return _bind_getStream_overload_2(L);

		luaL_error(L, "error in function getStream, cannot match any of the overloads for function getStream:\n  getStream()\n  getStream()\n");
		return 0;
	}

	// void osgDB::InputIterator::setInputStream(osgDB::InputStream * inputStream)
	static int _bind_setInputStream(lua_State *L) {
		if (!_lg_typecheck_setInputStream(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::setInputStream(osgDB::InputStream * inputStream) function, expected prototype:\nvoid osgDB::InputIterator::setInputStream(osgDB::InputStream * inputStream)\nClass arguments details:\narg 1 ID = 47918182\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::InputStream* inputStream=(Luna< osgDB::InputStream >::check(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::setInputStream(osgDB::InputStream *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInputStream(inputStream);

		return 0;
	}

	// osgDB::InputStream * osgDB::InputIterator::getInputStream()
	static int _bind_getInputStream_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInputStream_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::InputStream * osgDB::InputIterator::getInputStream() function, expected prototype:\nosgDB::InputStream * osgDB::InputIterator::getInputStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::InputStream * osgDB::InputIterator::getInputStream(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::InputStream * lret = self->getInputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// const osgDB::InputStream * osgDB::InputIterator::getInputStream() const
	static int _bind_getInputStream_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInputStream_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::InputStream * osgDB::InputIterator::getInputStream() const function, expected prototype:\nconst osgDB::InputStream * osgDB::InputIterator::getInputStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::InputStream * osgDB::InputIterator::getInputStream() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::InputStream * lret = self->getInputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::InputIterator::getInputStream
	static int _bind_getInputStream(lua_State *L) {
		if (_lg_typecheck_getInputStream_overload_1(L)) return _bind_getInputStream_overload_1(L);
		if (_lg_typecheck_getInputStream_overload_2(L)) return _bind_getInputStream_overload_2(L);

		luaL_error(L, "error in function getInputStream, cannot match any of the overloads for function getInputStream:\n  getInputStream()\n  getInputStream()\n");
		return 0;
	}

	// void osgDB::InputIterator::setByteSwap(int byteSwap)
	static int _bind_setByteSwap(lua_State *L) {
		if (!_lg_typecheck_setByteSwap(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::setByteSwap(int byteSwap) function, expected prototype:\nvoid osgDB::InputIterator::setByteSwap(int byteSwap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int byteSwap=(int)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::setByteSwap(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setByteSwap(byteSwap);

		return 0;
	}

	// int osgDB::InputIterator::getByteSwap() const
	static int _bind_getByteSwap(lua_State *L) {
		if (!_lg_typecheck_getByteSwap(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::InputIterator::getByteSwap() const function, expected prototype:\nint osgDB::InputIterator::getByteSwap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::InputIterator::getByteSwap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getByteSwap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::InputIterator::checkStream() const
	static int _bind_checkStream(lua_State *L) {
		if (!_lg_typecheck_checkStream(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::checkStream() const function, expected prototype:\nvoid osgDB::InputIterator::checkStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::checkStream() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->checkStream();

		return 0;
	}

	// bool osgDB::InputIterator::isFailed() const
	static int _bind_isFailed(lua_State *L) {
		if (!_lg_typecheck_isFailed(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::isFailed() const function, expected prototype:\nbool osgDB::InputIterator::isFailed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::isFailed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFailed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::InputIterator::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::isBinary() const function, expected prototype:\nbool osgDB::InputIterator::isBinary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::isBinary() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputIterator::readBool(bool & b)
	static int _bind_readBool(lua_State *L) {
		if (!_lg_typecheck_readBool(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readBool(bool & b) function, expected prototype:\nvoid osgDB::InputIterator::readBool(bool & b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readBool(bool &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readBool(b);

		lua_pushboolean(L,b?1:0);
		return 1;
	}

	// void osgDB::InputIterator::readChar(char & c)
	static int _bind_readChar(lua_State *L) {
		if (!_lg_typecheck_readChar(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readChar(char & c) function, expected prototype:\nvoid osgDB::InputIterator::readChar(char & c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readChar(char &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readChar(c);

		lua_pushnumber(L,c);
		return 1;
	}

	// void osgDB::InputIterator::readSChar(signed char & c)
	static int _bind_readSChar(lua_State *L) {
		if (!_lg_typecheck_readSChar(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readSChar(signed char & c) function, expected prototype:\nvoid osgDB::InputIterator::readSChar(signed char & c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed char c=(signed char)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readSChar(signed char &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readSChar(c);

		lua_pushnumber(L,c);
		return 1;
	}

	// void osgDB::InputIterator::readUChar(unsigned char & c)
	static int _bind_readUChar(lua_State *L) {
		if (!_lg_typecheck_readUChar(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readUChar(unsigned char & c) function, expected prototype:\nvoid osgDB::InputIterator::readUChar(unsigned char & c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readUChar(unsigned char &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readUChar(c);

		lua_pushnumber(L,(int)c);
		return 1;
	}

	// void osgDB::InputIterator::readShort(short & s)
	static int _bind_readShort(lua_State *L) {
		if (!_lg_typecheck_readShort(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readShort(short & s) function, expected prototype:\nvoid osgDB::InputIterator::readShort(short & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short s=(short)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readShort(short &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readShort(s);

		lua_pushnumber(L,s);
		return 1;
	}

	// void osgDB::InputIterator::readUShort(unsigned short & s)
	static int _bind_readUShort(lua_State *L) {
		if (!_lg_typecheck_readUShort(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readUShort(unsigned short & s) function, expected prototype:\nvoid osgDB::InputIterator::readUShort(unsigned short & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short s=(unsigned short)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readUShort(unsigned short &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readUShort(s);

		lua_pushnumber(L,s);
		return 1;
	}

	// void osgDB::InputIterator::readInt(int & i)
	static int _bind_readInt(lua_State *L) {
		if (!_lg_typecheck_readInt(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readInt(int & i) function, expected prototype:\nvoid osgDB::InputIterator::readInt(int & i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readInt(int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readInt(i);

		lua_pushnumber(L,i);
		return 1;
	}

	// void osgDB::InputIterator::readUInt(unsigned int & i)
	static int _bind_readUInt(lua_State *L) {
		if (!_lg_typecheck_readUInt(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readUInt(unsigned int & i) function, expected prototype:\nvoid osgDB::InputIterator::readUInt(unsigned int & i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readUInt(unsigned int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readUInt(i);

		lua_pushnumber(L,i);
		return 1;
	}

	// void osgDB::InputIterator::readLong(long & l)
	static int _bind_readLong(lua_State *L) {
		if (!_lg_typecheck_readLong(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readLong(long & l) function, expected prototype:\nvoid osgDB::InputIterator::readLong(long & l)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long l=(long)lua_tonumber(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readLong(long &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readLong(l);

		lua_pushnumber(L,l);
		return 1;
	}

	// void osgDB::InputIterator::readULong(unsigned long & l)
	static int _bind_readULong(lua_State *L) {
		if (!_lg_typecheck_readULong(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readULong(unsigned long & l) function, expected prototype:\nvoid osgDB::InputIterator::readULong(unsigned long & l)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long l=(unsigned long)lua_tonumber(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readULong(unsigned long &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readULong(l);

		lua_pushnumber(L,l);
		return 1;
	}

	// void osgDB::InputIterator::readFloat(float & f)
	static int _bind_readFloat(lua_State *L) {
		if (!_lg_typecheck_readFloat(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readFloat(float & f) function, expected prototype:\nvoid osgDB::InputIterator::readFloat(float & f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readFloat(float &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readFloat(f);

		lua_pushnumber(L,f);
		return 1;
	}

	// void osgDB::InputIterator::readDouble(double & d)
	static int _bind_readDouble(lua_State *L) {
		if (!_lg_typecheck_readDouble(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readDouble(double & d) function, expected prototype:\nvoid osgDB::InputIterator::readDouble(double & d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readDouble(double &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readDouble(d);

		lua_pushnumber(L,d);
		return 1;
	}

	// void osgDB::InputIterator::readString(std::string & s)
	static int _bind_readString(lua_State *L) {
		if (!_lg_typecheck_readString(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readString(std::string & s) function, expected prototype:\nvoid osgDB::InputIterator::readString(std::string & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readString(std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readString(s);

		lua_pushlstring(L,s.data(),s.size());
		return 1;
	}

	// void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)
	static int _bind_readGLenum(lua_State *L) {
		if (!_lg_typecheck_readGLenum(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value) function, expected prototype:\nvoid osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)\nClass arguments details:\narg 1 ID = 32567652\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectGLenum* value_ptr=(Luna< osgDB::ObjectGLenum >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::InputIterator::readGLenum function");
		}
		osgDB::ObjectGLenum & value=*value_ptr;

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readGLenum(value);

		return 0;
	}

	// void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)
	static int _bind_readProperty(lua_State *L) {
		if (!_lg_typecheck_readProperty(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop) function, expected prototype:\nvoid osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)\nClass arguments details:\narg 1 ID = 23791141\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectProperty* prop_ptr=(Luna< osgDB::ObjectProperty >::check(L,2));
		if( !prop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prop in osgDB::InputIterator::readProperty function");
		}
		osgDB::ObjectProperty & prop=*prop_ptr;

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readProperty(osgDB::ObjectProperty &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readProperty(prop);

		return 0;
	}

	// void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)
	static int _bind_readMark(lua_State *L) {
		if (!_lg_typecheck_readMark(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark) function, expected prototype:\nvoid osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)\nClass arguments details:\narg 1 ID = 60066730\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectMark* mark_ptr=(Luna< osgDB::ObjectMark >::check(L,2));
		if( !mark_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mark in osgDB::InputIterator::readMark function");
		}
		osgDB::ObjectMark & mark=*mark_ptr;

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readMark(osgDB::ObjectMark &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readMark(mark);

		return 0;
	}

	// void osgDB::InputIterator::readCharArray(char * s, unsigned int size)
	static int _bind_readCharArray(lua_State *L) {
		if (!_lg_typecheck_readCharArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readCharArray(char * s, unsigned int size) function, expected prototype:\nvoid osgDB::InputIterator::readCharArray(char * s, unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* s=(char*)Luna< void >::check(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readCharArray(char *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readCharArray(s, size);

		return 0;
	}

	// void osgDB::InputIterator::readWrappedString(std::string & str)
	static int _bind_readWrappedString(lua_State *L) {
		if (!_lg_typecheck_readWrappedString(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readWrappedString(std::string & str) function, expected prototype:\nvoid osgDB::InputIterator::readWrappedString(std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readWrappedString(std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readWrappedString(str);

		lua_pushlstring(L,str.data(),str.size());
		return 1;
	}

	// bool osgDB::InputIterator::matchString(const std::string & arg1)
	static int _bind_matchString(lua_State *L) {
		if (!_lg_typecheck_matchString(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::matchString(const std::string & arg1) function, expected prototype:\nbool osgDB::InputIterator::matchString(const std::string & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::matchString(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchString(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputIterator::advanceToCurrentEndBracket()
	static int _bind_advanceToCurrentEndBracket(lua_State *L) {
		if (!_lg_typecheck_advanceToCurrentEndBracket(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::advanceToCurrentEndBracket() function, expected prototype:\nvoid osgDB::InputIterator::advanceToCurrentEndBracket()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::advanceToCurrentEndBracket(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->advanceToCurrentEndBracket();

		return 0;
	}

	// void osgDB::InputIterator::readComponentArray(char * s, unsigned int numElements, unsigned int numComponentsPerElements, unsigned int componentSizeInBytes)
	static int _bind_readComponentArray(lua_State *L) {
		if (!_lg_typecheck_readComponentArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readComponentArray(char * s, unsigned int numElements, unsigned int numComponentsPerElements, unsigned int componentSizeInBytes) function, expected prototype:\nvoid osgDB::InputIterator::readComponentArray(char * s, unsigned int numElements, unsigned int numComponentsPerElements, unsigned int componentSizeInBytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* s=(char*)Luna< void >::check(L,2);
		unsigned int numElements=(unsigned int)lua_tointeger(L,3);
		unsigned int numComponentsPerElements=(unsigned int)lua_tointeger(L,4);
		unsigned int componentSizeInBytes=(unsigned int)lua_tointeger(L,5);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readComponentArray(char *, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readComponentArray(s, numElements, numComponentsPerElements, componentSizeInBytes);

		return 0;
	}

	// void osgDB::InputIterator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::InputIterator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InputIterator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// bool osgDB::InputIterator::base_matchString(const std::string & arg1)
	static int _bind_base_matchString(lua_State *L) {
		if (!_lg_typecheck_base_matchString(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::base_matchString(const std::string & arg1) function, expected prototype:\nbool osgDB::InputIterator::base_matchString(const std::string & arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::base_matchString(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InputIterator::matchString(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputIterator::base_advanceToCurrentEndBracket()
	static int _bind_base_advanceToCurrentEndBracket(lua_State *L) {
		if (!_lg_typecheck_base_advanceToCurrentEndBracket(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::base_advanceToCurrentEndBracket() function, expected prototype:\nvoid osgDB::InputIterator::base_advanceToCurrentEndBracket()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::base_advanceToCurrentEndBracket(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InputIterator::advanceToCurrentEndBracket();

		return 0;
	}


	// Operator binds:

};

osgDB::InputIterator* LunaTraits< osgDB::InputIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_InputIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgDB::InputIterator::isBinary() const
	// void osgDB::InputIterator::readBool(bool & b)
	// void osgDB::InputIterator::readChar(char & c)
	// void osgDB::InputIterator::readSChar(signed char & c)
	// void osgDB::InputIterator::readUChar(unsigned char & c)
	// void osgDB::InputIterator::readShort(short & s)
	// void osgDB::InputIterator::readUShort(unsigned short & s)
	// void osgDB::InputIterator::readInt(int & i)
	// void osgDB::InputIterator::readUInt(unsigned int & i)
	// void osgDB::InputIterator::readLong(long & l)
	// void osgDB::InputIterator::readULong(unsigned long & l)
	// void osgDB::InputIterator::readFloat(float & f)
	// void osgDB::InputIterator::readDouble(double & d)
	// void osgDB::InputIterator::readString(std::string & s)
	// void osgDB::InputIterator::readStream(std::istream &(*)(std::istream &) fn)
	// void osgDB::InputIterator::readBase(std::ios_base &(*)(std::ios_base &) fn)
	// void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)
	// void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)
	// void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)
	// void osgDB::InputIterator::readCharArray(char * s, unsigned int size)
	// void osgDB::InputIterator::readWrappedString(std::string & str)
}

void LunaTraits< osgDB::InputIterator >::_bind_dtor(osgDB::InputIterator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::InputIterator >::className[] = "InputIterator";
const char LunaTraits< osgDB::InputIterator >::fullName[] = "osgDB::InputIterator";
const char LunaTraits< osgDB::InputIterator >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputIterator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::InputIterator >::hash = 63109576;
const int LunaTraits< osgDB::InputIterator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::InputIterator >::methods[] = {
	{"setStream", &luna_wrapper_osgDB_InputIterator::_bind_setStream},
	{"getStream", &luna_wrapper_osgDB_InputIterator::_bind_getStream},
	{"setInputStream", &luna_wrapper_osgDB_InputIterator::_bind_setInputStream},
	{"getInputStream", &luna_wrapper_osgDB_InputIterator::_bind_getInputStream},
	{"setByteSwap", &luna_wrapper_osgDB_InputIterator::_bind_setByteSwap},
	{"getByteSwap", &luna_wrapper_osgDB_InputIterator::_bind_getByteSwap},
	{"checkStream", &luna_wrapper_osgDB_InputIterator::_bind_checkStream},
	{"isFailed", &luna_wrapper_osgDB_InputIterator::_bind_isFailed},
	{"isBinary", &luna_wrapper_osgDB_InputIterator::_bind_isBinary},
	{"readBool", &luna_wrapper_osgDB_InputIterator::_bind_readBool},
	{"readChar", &luna_wrapper_osgDB_InputIterator::_bind_readChar},
	{"readSChar", &luna_wrapper_osgDB_InputIterator::_bind_readSChar},
	{"readUChar", &luna_wrapper_osgDB_InputIterator::_bind_readUChar},
	{"readShort", &luna_wrapper_osgDB_InputIterator::_bind_readShort},
	{"readUShort", &luna_wrapper_osgDB_InputIterator::_bind_readUShort},
	{"readInt", &luna_wrapper_osgDB_InputIterator::_bind_readInt},
	{"readUInt", &luna_wrapper_osgDB_InputIterator::_bind_readUInt},
	{"readLong", &luna_wrapper_osgDB_InputIterator::_bind_readLong},
	{"readULong", &luna_wrapper_osgDB_InputIterator::_bind_readULong},
	{"readFloat", &luna_wrapper_osgDB_InputIterator::_bind_readFloat},
	{"readDouble", &luna_wrapper_osgDB_InputIterator::_bind_readDouble},
	{"readString", &luna_wrapper_osgDB_InputIterator::_bind_readString},
	{"readGLenum", &luna_wrapper_osgDB_InputIterator::_bind_readGLenum},
	{"readProperty", &luna_wrapper_osgDB_InputIterator::_bind_readProperty},
	{"readMark", &luna_wrapper_osgDB_InputIterator::_bind_readMark},
	{"readCharArray", &luna_wrapper_osgDB_InputIterator::_bind_readCharArray},
	{"readWrappedString", &luna_wrapper_osgDB_InputIterator::_bind_readWrappedString},
	{"matchString", &luna_wrapper_osgDB_InputIterator::_bind_matchString},
	{"advanceToCurrentEndBracket", &luna_wrapper_osgDB_InputIterator::_bind_advanceToCurrentEndBracket},
	{"readComponentArray", &luna_wrapper_osgDB_InputIterator::_bind_readComponentArray},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_InputIterator::_bind_base_setThreadSafeRefUnref},
	{"base_matchString", &luna_wrapper_osgDB_InputIterator::_bind_base_matchString},
	{"base_advanceToCurrentEndBracket", &luna_wrapper_osgDB_InputIterator::_bind_base_advanceToCurrentEndBracket},
	{"fromVoid", &luna_wrapper_osgDB_InputIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_InputIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_InputIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputIterator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_InputIterator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputIterator >::enumValues[] = {
	{0,0}
};


