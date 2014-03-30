#include <plug_common.h>

class luna_wrapper_osgDB_ReaderWriter_ReadResult {
public:
	typedef Luna< osgDB::ReaderWriter::ReadResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25279089) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ReaderWriter::ReadResult*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::ReadResult* rhs =(Luna< osgDB::ReaderWriter::ReadResult >::check(L,2));
		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osgDB::ReaderWriter::ReadResult* self= (osgDB::ReaderWriter::ReadResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ReaderWriter::ReadResult >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25279089) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ReaderWriter::ReadResult");
		
		return luna_dynamicCast(L,converters,"osgDB::ReaderWriter::ReadResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25279089) ) return false;
		if( (!(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeightField(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArchive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validHeightField(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validArchive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validShader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeHeightField(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeArchive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeShader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_message_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_message_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_status(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_success(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_loadedFromCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notFound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notEnoughMemory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25279089) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::ReaderWriter::ReadResult::ReadResult(const std::string & m)
	static osgDB::ReaderWriter::ReadResult* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult::ReadResult(const std::string & m) function, expected prototype:\nosgDB::ReaderWriter::ReadResult::ReadResult(const std::string & m)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string m(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::ReaderWriter::ReadResult(m);
	}

	// osgDB::ReaderWriter::ReadResult::ReadResult(const osgDB::ReaderWriter::ReadResult & rr)
	static osgDB::ReaderWriter::ReadResult* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult::ReadResult(const osgDB::ReaderWriter::ReadResult & rr) function, expected prototype:\nosgDB::ReaderWriter::ReadResult::ReadResult(const osgDB::ReaderWriter::ReadResult & rr)\nClass arguments details:\narg 1 ID = 25279089\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ReaderWriter::ReadResult* rr_ptr=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if( !rr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rr in osgDB::ReaderWriter::ReadResult::ReadResult function");
		}
		const osgDB::ReaderWriter::ReadResult & rr=*rr_ptr;

		return new osgDB::ReaderWriter::ReadResult(rr);
	}

	// Overload binder for osgDB::ReaderWriter::ReadResult::ReadResult
	static osgDB::ReaderWriter::ReadResult* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReadResult, cannot match any of the overloads for function ReadResult:\n  ReadResult(const std::string &)\n  ReadResult(const osgDB::ReaderWriter::ReadResult &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ReaderWriter::ReadResult::getObject()
	static int _bind_getObject(lua_State *L) {
		if (!_lg_typecheck_getObject(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::ReadResult::getObject() function, expected prototype:\nosg::Object * osgDB::ReaderWriter::ReadResult::getObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::ReadResult::getObject(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osgDB::ReaderWriter::ReadResult::getImage()
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::ReaderWriter::ReadResult::getImage() function, expected prototype:\nosg::Image * osgDB::ReaderWriter::ReadResult::getImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::ReaderWriter::ReadResult::getImage(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::HeightField * osgDB::ReaderWriter::ReadResult::getHeightField()
	static int _bind_getHeightField(lua_State *L) {
		if (!_lg_typecheck_getHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osg::HeightField * osgDB::ReaderWriter::ReadResult::getHeightField() function, expected prototype:\nosg::HeightField * osgDB::ReaderWriter::ReadResult::getHeightField()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::HeightField * osgDB::ReaderWriter::ReadResult::getHeightField(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::HeightField * lret = self->getHeightField();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::HeightField >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgDB::ReaderWriter::ReadResult::getNode()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgDB::ReaderWriter::ReadResult::getNode() function, expected prototype:\nosg::Node * osgDB::ReaderWriter::ReadResult::getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgDB::ReaderWriter::ReadResult::getNode(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osgDB::Archive * osgDB::ReaderWriter::ReadResult::getArchive()
	static int _bind_getArchive(lua_State *L) {
		if (!_lg_typecheck_getArchive(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::ReaderWriter::ReadResult::getArchive() function, expected prototype:\nosgDB::Archive * osgDB::ReaderWriter::ReadResult::getArchive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Archive * osgDB::ReaderWriter::ReadResult::getArchive(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Archive * lret = self->getArchive();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Archive >::push(L,lret,false);

		return 1;
	}

	// osg::Shader * osgDB::ReaderWriter::ReadResult::getShader()
	static int _bind_getShader(lua_State *L) {
		if (!_lg_typecheck_getShader(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::ReaderWriter::ReadResult::getShader() function, expected prototype:\nosg::Shader * osgDB::ReaderWriter::ReadResult::getShader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osgDB::ReaderWriter::ReadResult::getShader(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->getShader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::validObject()
	static int _bind_validObject(lua_State *L) {
		if (!_lg_typecheck_validObject(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::validObject() function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::validObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::validObject(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::validImage()
	static int _bind_validImage(lua_State *L) {
		if (!_lg_typecheck_validImage(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::validImage() function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::validImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::validImage(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::validHeightField()
	static int _bind_validHeightField(lua_State *L) {
		if (!_lg_typecheck_validHeightField(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::validHeightField() function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::validHeightField()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::validHeightField(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validHeightField();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::validNode()
	static int _bind_validNode(lua_State *L) {
		if (!_lg_typecheck_validNode(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::validNode() function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::validNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::validNode(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validNode();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::validArchive()
	static int _bind_validArchive(lua_State *L) {
		if (!_lg_typecheck_validArchive(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::validArchive() function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::validArchive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::validArchive(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validArchive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::validShader()
	static int _bind_validShader(lua_State *L) {
		if (!_lg_typecheck_validShader(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::validShader() function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::validShader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::validShader(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->validShader();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Object * osgDB::ReaderWriter::ReadResult::takeObject()
	static int _bind_takeObject(lua_State *L) {
		if (!_lg_typecheck_takeObject(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::ReadResult::takeObject() function, expected prototype:\nosg::Object * osgDB::ReaderWriter::ReadResult::takeObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::ReadResult::takeObject(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->takeObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osgDB::ReaderWriter::ReadResult::takeImage()
	static int _bind_takeImage(lua_State *L) {
		if (!_lg_typecheck_takeImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::ReaderWriter::ReadResult::takeImage() function, expected prototype:\nosg::Image * osgDB::ReaderWriter::ReadResult::takeImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::ReaderWriter::ReadResult::takeImage(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->takeImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::HeightField * osgDB::ReaderWriter::ReadResult::takeHeightField()
	static int _bind_takeHeightField(lua_State *L) {
		if (!_lg_typecheck_takeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osg::HeightField * osgDB::ReaderWriter::ReadResult::takeHeightField() function, expected prototype:\nosg::HeightField * osgDB::ReaderWriter::ReadResult::takeHeightField()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::HeightField * osgDB::ReaderWriter::ReadResult::takeHeightField(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::HeightField * lret = self->takeHeightField();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::HeightField >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgDB::ReaderWriter::ReadResult::takeNode()
	static int _bind_takeNode(lua_State *L) {
		if (!_lg_typecheck_takeNode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgDB::ReaderWriter::ReadResult::takeNode() function, expected prototype:\nosg::Node * osgDB::ReaderWriter::ReadResult::takeNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgDB::ReaderWriter::ReadResult::takeNode(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->takeNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osgDB::Archive * osgDB::ReaderWriter::ReadResult::takeArchive()
	static int _bind_takeArchive(lua_State *L) {
		if (!_lg_typecheck_takeArchive(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::ReaderWriter::ReadResult::takeArchive() function, expected prototype:\nosgDB::Archive * osgDB::ReaderWriter::ReadResult::takeArchive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Archive * osgDB::ReaderWriter::ReadResult::takeArchive(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Archive * lret = self->takeArchive();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Archive >::push(L,lret,false);

		return 1;
	}

	// osg::Shader * osgDB::ReaderWriter::ReadResult::takeShader()
	static int _bind_takeShader(lua_State *L) {
		if (!_lg_typecheck_takeShader(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::ReaderWriter::ReadResult::takeShader() function, expected prototype:\nosg::Shader * osgDB::ReaderWriter::ReadResult::takeShader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osgDB::ReaderWriter::ReadResult::takeShader(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->takeShader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// std::string & osgDB::ReaderWriter::ReadResult::message()
	static int _bind_message_overload_1(lua_State *L) {
		if (!_lg_typecheck_message_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in std::string & osgDB::ReaderWriter::ReadResult::message() function, expected prototype:\nstd::string & osgDB::ReaderWriter::ReadResult::message()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string & osgDB::ReaderWriter::ReadResult::message(). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string & lret = self->message();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const std::string & osgDB::ReaderWriter::ReadResult::message() const
	static int _bind_message_overload_2(lua_State *L) {
		if (!_lg_typecheck_message_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::ReaderWriter::ReadResult::message() const function, expected prototype:\nconst std::string & osgDB::ReaderWriter::ReadResult::message() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::ReaderWriter::ReadResult::message() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->message();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::ReadResult::message
	static int _bind_message(lua_State *L) {
		if (_lg_typecheck_message_overload_1(L)) return _bind_message_overload_1(L);
		if (_lg_typecheck_message_overload_2(L)) return _bind_message_overload_2(L);

		luaL_error(L, "error in function message, cannot match any of the overloads for function message:\n  message()\n  message()\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult::ReadStatus osgDB::ReaderWriter::ReadResult::status() const
	static int _bind_status(lua_State *L) {
		if (!_lg_typecheck_status(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult::ReadStatus osgDB::ReaderWriter::ReadResult::status() const function, expected prototype:\nosgDB::ReaderWriter::ReadResult::ReadStatus osgDB::ReaderWriter::ReadResult::status() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult::ReadStatus osgDB::ReaderWriter::ReadResult::status() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult::ReadStatus lret = self->status();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::success() const
	static int _bind_success(lua_State *L) {
		if (!_lg_typecheck_success(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::success() const function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::success() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::success() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->success();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::loadedFromCache() const
	static int _bind_loadedFromCache(lua_State *L) {
		if (!_lg_typecheck_loadedFromCache(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::loadedFromCache() const function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::loadedFromCache() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::loadedFromCache() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->loadedFromCache();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::error() const
	static int _bind_error(lua_State *L) {
		if (!_lg_typecheck_error(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::error() const function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::error() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::error() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->error();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::notHandled() const
	static int _bind_notHandled(lua_State *L) {
		if (!_lg_typecheck_notHandled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::notHandled() const function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::notHandled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::notHandled() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->notHandled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::notFound() const
	static int _bind_notFound(lua_State *L) {
		if (!_lg_typecheck_notFound(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::notFound() const function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::notFound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::notFound() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->notFound();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::ReadResult::notEnoughMemory() const
	static int _bind_notEnoughMemory(lua_State *L) {
		if (!_lg_typecheck_notEnoughMemory(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::ReadResult::notEnoughMemory() const function, expected prototype:\nbool osgDB::ReaderWriter::ReadResult::notEnoughMemory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::ReadResult::notEnoughMemory() const. Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->notEnoughMemory();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// osgDB::ReaderWriter::ReadResult & osgDB::ReaderWriter::ReadResult::operator=(const osgDB::ReaderWriter::ReadResult & rr)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult & osgDB::ReaderWriter::ReadResult::operator=(const osgDB::ReaderWriter::ReadResult & rr) function, expected prototype:\nosgDB::ReaderWriter::ReadResult & osgDB::ReaderWriter::ReadResult::operator=(const osgDB::ReaderWriter::ReadResult & rr)\nClass arguments details:\narg 1 ID = 25279089\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ReaderWriter::ReadResult* rr_ptr=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,2));
		if( !rr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rr in osgDB::ReaderWriter::ReadResult::operator= function");
		}
		const osgDB::ReaderWriter::ReadResult & rr=*rr_ptr;

		osgDB::ReaderWriter::ReadResult* self=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult & osgDB::ReaderWriter::ReadResult::operator=(const osgDB::ReaderWriter::ReadResult &). Got : '%s'\n%s",typeid(Luna< osgDB::ReaderWriter::ReadResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::ReadResult* lret = &self->operator=(rr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,false);

		return 1;
	}


};

osgDB::ReaderWriter::ReadResult* LunaTraits< osgDB::ReaderWriter::ReadResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_ctor(L);
}

void LunaTraits< osgDB::ReaderWriter::ReadResult >::_bind_dtor(osgDB::ReaderWriter::ReadResult* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ReaderWriter::ReadResult >::className[] = "ReaderWriter_ReadResult";
const char LunaTraits< osgDB::ReaderWriter::ReadResult >::fullName[] = "osgDB::ReaderWriter::ReadResult";
const char LunaTraits< osgDB::ReaderWriter::ReadResult >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriter::ReadResult >::parents[] = {0};
const int LunaTraits< osgDB::ReaderWriter::ReadResult >::hash = 25279089;
const int LunaTraits< osgDB::ReaderWriter::ReadResult >::uniqueIDs[] = {25279089,0};

luna_RegType LunaTraits< osgDB::ReaderWriter::ReadResult >::methods[] = {
	{"getObject", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_getObject},
	{"getImage", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_getImage},
	{"getHeightField", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_getHeightField},
	{"getNode", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_getNode},
	{"getArchive", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_getArchive},
	{"getShader", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_getShader},
	{"validObject", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_validObject},
	{"validImage", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_validImage},
	{"validHeightField", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_validHeightField},
	{"validNode", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_validNode},
	{"validArchive", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_validArchive},
	{"validShader", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_validShader},
	{"takeObject", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_takeObject},
	{"takeImage", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_takeImage},
	{"takeHeightField", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_takeHeightField},
	{"takeNode", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_takeNode},
	{"takeArchive", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_takeArchive},
	{"takeShader", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_takeShader},
	{"message", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_message},
	{"status", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_status},
	{"success", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_success},
	{"loadedFromCache", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_loadedFromCache},
	{"error", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_error},
	{"notHandled", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_notHandled},
	{"notFound", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_notFound},
	{"notEnoughMemory", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_notEnoughMemory},
	{"op_assign", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_op_assign},
	{"dynCast", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ReaderWriter_ReadResult::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriter::ReadResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriter::ReadResult >::enumValues[] = {
	{"NOT_IMPLEMENTED", osgDB::ReaderWriter::ReadResult::NOT_IMPLEMENTED},
	{"FILE_NOT_HANDLED", osgDB::ReaderWriter::ReadResult::FILE_NOT_HANDLED},
	{"FILE_NOT_FOUND", osgDB::ReaderWriter::ReadResult::FILE_NOT_FOUND},
	{"FILE_LOADED", osgDB::ReaderWriter::ReadResult::FILE_LOADED},
	{"FILE_LOADED_FROM_CACHE", osgDB::ReaderWriter::ReadResult::FILE_LOADED_FROM_CACHE},
	{"ERROR_IN_READING_FILE", osgDB::ReaderWriter::ReadResult::ERROR_IN_READING_FILE},
	{"FILE_REQUESTED", osgDB::ReaderWriter::ReadResult::FILE_REQUESTED},
	{"INSUFFICIENT_MEMORY_TO_LOAD", osgDB::ReaderWriter::ReadResult::INSUFFICIENT_MEMORY_TO_LOAD},
	{0,0}
};


