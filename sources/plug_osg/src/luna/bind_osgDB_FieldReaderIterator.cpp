#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FieldReaderIterator.h>

class luna_wrapper_osgDB_FieldReaderIterator {
public:
	typedef Luna< osgDB::FieldReaderIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::FieldReaderIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2696163) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::FieldReaderIterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FieldReaderIterator* rhs =(Luna< osgDB::FieldReaderIterator >::check(L,2));
		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
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

		osgDB::FieldReaderIterator* self= (osgDB::FieldReaderIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::FieldReaderIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2696163) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::FieldReaderIterator >::check(L,1));
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

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FieldReaderIterator");
		
		return luna_dynamicCast(L,converters,"osgDB::FieldReaderIterator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2696163) ) return false;
		if( (!(Luna< osgDB::FieldReaderIterator >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,2696163) ) return false;
		if( (!(Luna< osgDB::FieldReaderIterator >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77972206)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFieldReader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_insert_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,7546407)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osgDB::Field >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insert_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_field(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_advanceOverCurrentFieldOrBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_advanceToEndOfCurrentBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_advanceToEndOfBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_matchSequence(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2696163) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_inc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::FieldReaderIterator::FieldReaderIterator()
	static osgDB::FieldReaderIterator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator::FieldReaderIterator() function, expected prototype:\nosgDB::FieldReaderIterator::FieldReaderIterator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::FieldReaderIterator();
	}

	// osgDB::FieldReaderIterator::FieldReaderIterator(const osgDB::FieldReaderIterator & ic)
	static osgDB::FieldReaderIterator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator::FieldReaderIterator(const osgDB::FieldReaderIterator & ic) function, expected prototype:\nosgDB::FieldReaderIterator::FieldReaderIterator(const osgDB::FieldReaderIterator & ic)\nClass arguments details:\narg 1 ID = 2696163\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FieldReaderIterator* ic_ptr=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReaderIterator::FieldReaderIterator function");
		}
		const osgDB::FieldReaderIterator & ic=*ic_ptr;

		return new osgDB::FieldReaderIterator(ic);
	}

	// osgDB::FieldReaderIterator::FieldReaderIterator(lua_Table * data)
	static osgDB::FieldReaderIterator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator::FieldReaderIterator(lua_Table * data) function, expected prototype:\nosgDB::FieldReaderIterator::FieldReaderIterator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_FieldReaderIterator(L,NULL);
	}

	// osgDB::FieldReaderIterator::FieldReaderIterator(lua_Table * data, const osgDB::FieldReaderIterator & ic)
	static osgDB::FieldReaderIterator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator::FieldReaderIterator(lua_Table * data, const osgDB::FieldReaderIterator & ic) function, expected prototype:\nosgDB::FieldReaderIterator::FieldReaderIterator(lua_Table * data, const osgDB::FieldReaderIterator & ic)\nClass arguments details:\narg 2 ID = 2696163\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FieldReaderIterator* ic_ptr=(Luna< osgDB::FieldReaderIterator >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReaderIterator::FieldReaderIterator function");
		}
		const osgDB::FieldReaderIterator & ic=*ic_ptr;

		return new wrapper_osgDB_FieldReaderIterator(L,NULL, ic);
	}

	// Overload binder for osgDB::FieldReaderIterator::FieldReaderIterator
	static osgDB::FieldReaderIterator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FieldReaderIterator, cannot match any of the overloads for function FieldReaderIterator:\n  FieldReaderIterator()\n  FieldReaderIterator(const osgDB::FieldReaderIterator &)\n  FieldReaderIterator(lua_Table *)\n  FieldReaderIterator(lua_Table *, const osgDB::FieldReaderIterator &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::FieldReaderIterator::attach(std::istream * input)
	static int _bind_attach(lua_State *L) {
		if (!_lg_typecheck_attach(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::attach(std::istream * input) function, expected prototype:\nvoid osgDB::FieldReaderIterator::attach(std::istream * input)\nClass arguments details:\narg 1 ID = 77972206\n\n%s",luna_dumpStack(L).c_str());
		}

		std::istream* input=(Luna< std::istream >::check(L,2));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::attach(std::istream *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(input);

		return 0;
	}

	// void osgDB::FieldReaderIterator::detach()
	static int _bind_detach(lua_State *L) {
		if (!_lg_typecheck_detach(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::detach() function, expected prototype:\nvoid osgDB::FieldReaderIterator::detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::detach(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->detach();

		return 0;
	}

	// bool osgDB::FieldReaderIterator::eof() const
	static int _bind_eof(lua_State *L) {
		if (!_lg_typecheck_eof(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::eof() const function, expected prototype:\nbool osgDB::FieldReaderIterator::eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::eof() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader()
	static int _bind_getFieldReader(lua_State *L) {
		if (!_lg_typecheck_getFieldReader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader() function, expected prototype:\nosgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FieldReader* lret = &self->getFieldReader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReader >::push(L,lret,false);

		return 1;
	}

	// void osgDB::FieldReaderIterator::insert(int pos, osgDB::Field * field)
	static int _bind_insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_insert_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::insert(int pos, osgDB::Field * field) function, expected prototype:\nvoid osgDB::FieldReaderIterator::insert(int pos, osgDB::Field * field)\nClass arguments details:\narg 2 ID = 7546407\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		osgDB::Field* field=(Luna< osgDB::Field >::check(L,3));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::insert(int, osgDB::Field *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insert(pos, field);

		return 0;
	}

	// void osgDB::FieldReaderIterator::insert(int pos, const char * str)
	static int _bind_insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_insert_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::insert(int pos, const char * str) function, expected prototype:\nvoid osgDB::FieldReaderIterator::insert(int pos, const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		const char * str=(const char *)lua_tostring(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::insert(int, const char *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insert(pos, str);

		return 0;
	}

	// Overload binder for osgDB::FieldReaderIterator::insert
	static int _bind_insert(lua_State *L) {
		if (_lg_typecheck_insert_overload_1(L)) return _bind_insert_overload_1(L);
		if (_lg_typecheck_insert_overload_2(L)) return _bind_insert_overload_2(L);

		luaL_error(L, "error in function insert, cannot match any of the overloads for function insert:\n  insert(int, osgDB::Field *)\n  insert(int, const char *)\n");
		return 0;
	}

	// osgDB::Field & osgDB::FieldReaderIterator::field(int pos)
	static int _bind_field(lua_State *L) {
		if (!_lg_typecheck_field(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field & osgDB::FieldReaderIterator::field(int pos) function, expected prototype:\nosgDB::Field & osgDB::FieldReaderIterator::field(int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Field & osgDB::FieldReaderIterator::field(int). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Field* lret = &self->field(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Field >::push(L,lret,false);

		return 1;
	}

	// void osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock()
	static int _bind_advanceOverCurrentFieldOrBlock(lua_State *L) {
		if (!_lg_typecheck_advanceOverCurrentFieldOrBlock(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock() function, expected prototype:\nvoid osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->advanceOverCurrentFieldOrBlock();

		return 0;
	}

	// void osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock()
	static int _bind_advanceToEndOfCurrentBlock(lua_State *L) {
		if (!_lg_typecheck_advanceToEndOfCurrentBlock(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock() function, expected prototype:\nvoid osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->advanceToEndOfCurrentBlock();

		return 0;
	}

	// void osgDB::FieldReaderIterator::advanceToEndOfBlock(int noNestBrackets)
	static int _bind_advanceToEndOfBlock(lua_State *L) {
		if (!_lg_typecheck_advanceToEndOfBlock(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::advanceToEndOfBlock(int noNestBrackets) function, expected prototype:\nvoid osgDB::FieldReaderIterator::advanceToEndOfBlock(int noNestBrackets)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int noNestBrackets=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::advanceToEndOfBlock(int). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->advanceToEndOfBlock(noNestBrackets);

		return 0;
	}

	// bool osgDB::FieldReaderIterator::matchSequence(const char * str)
	static int _bind_matchSequence(lua_State *L) {
		if (!_lg_typecheck_matchSequence(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::matchSequence(const char * str) function, expected prototype:\nbool osgDB::FieldReaderIterator::matchSequence(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::matchSequence(const char *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchSequence(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, std::string & value)
	static int _bind_readSequence_overload_1(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, std::string & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		std::string value(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,value.data(),value.size());
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, unsigned int & value)
	static int _bind_readSequence_overload_2(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, unsigned int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, unsigned int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		unsigned int value=(unsigned int)lua_tointeger(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, unsigned int &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, int & value)
	static int _bind_readSequence_overload_3(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		int value=(int)lua_tointeger(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, int &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, float & value)
	static int _bind_readSequence_overload_4(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, float & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, float & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		float value=(float)lua_tonumber(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, float &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2f & value)
	static int _bind_readSequence_overload_5(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2f & value)\nClass arguments details:\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3f & value)
	static int _bind_readSequence_overload_6(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3f & value)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4f & value)
	static int _bind_readSequence_overload_7(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4f & value)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2d & value)
	static int _bind_readSequence_overload_8(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2d & value)\nClass arguments details:\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3d & value)
	static int _bind_readSequence_overload_9(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3d & value)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4d & value)
	static int _bind_readSequence_overload_10(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4d & value)\nClass arguments details:\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(std::string & value)
	static int _bind_readSequence_overload_11(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(std::string & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(std::string & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,value.data(),value.size());
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(unsigned int & value)
	static int _bind_readSequence_overload_12(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(unsigned int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(unsigned int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(unsigned int &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(int & value)
	static int _bind_readSequence_overload_13(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(int & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(int &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(float & value)
	static int _bind_readSequence_overload_14(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(float & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(float & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(float &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec2f & value)
	static int _bind_readSequence_overload_15(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec2f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec2f & value)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec3f & value)
	static int _bind_readSequence_overload_16(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec3f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec3f & value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec4f & value)
	static int _bind_readSequence_overload_17(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec4f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec4f & value)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec2d & value)
	static int _bind_readSequence_overload_18(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec2d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec2d & value)\nClass arguments details:\narg 1 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec2d &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec3d & value)
	static int _bind_readSequence_overload_19(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec3d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec3d & value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec4d & value)
	static int _bind_readSequence_overload_20(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec4d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec4d & value)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::FieldReaderIterator::readSequence
	static int _bind_readSequence(lua_State *L) {
		if (_lg_typecheck_readSequence_overload_1(L)) return _bind_readSequence_overload_1(L);
		if (_lg_typecheck_readSequence_overload_2(L)) return _bind_readSequence_overload_2(L);
		if (_lg_typecheck_readSequence_overload_3(L)) return _bind_readSequence_overload_3(L);
		if (_lg_typecheck_readSequence_overload_4(L)) return _bind_readSequence_overload_4(L);
		if (_lg_typecheck_readSequence_overload_5(L)) return _bind_readSequence_overload_5(L);
		if (_lg_typecheck_readSequence_overload_6(L)) return _bind_readSequence_overload_6(L);
		if (_lg_typecheck_readSequence_overload_7(L)) return _bind_readSequence_overload_7(L);
		if (_lg_typecheck_readSequence_overload_8(L)) return _bind_readSequence_overload_8(L);
		if (_lg_typecheck_readSequence_overload_9(L)) return _bind_readSequence_overload_9(L);
		if (_lg_typecheck_readSequence_overload_10(L)) return _bind_readSequence_overload_10(L);
		if (_lg_typecheck_readSequence_overload_11(L)) return _bind_readSequence_overload_11(L);
		if (_lg_typecheck_readSequence_overload_12(L)) return _bind_readSequence_overload_12(L);
		if (_lg_typecheck_readSequence_overload_13(L)) return _bind_readSequence_overload_13(L);
		if (_lg_typecheck_readSequence_overload_14(L)) return _bind_readSequence_overload_14(L);
		if (_lg_typecheck_readSequence_overload_15(L)) return _bind_readSequence_overload_15(L);
		if (_lg_typecheck_readSequence_overload_16(L)) return _bind_readSequence_overload_16(L);
		if (_lg_typecheck_readSequence_overload_17(L)) return _bind_readSequence_overload_17(L);
		if (_lg_typecheck_readSequence_overload_18(L)) return _bind_readSequence_overload_18(L);
		if (_lg_typecheck_readSequence_overload_19(L)) return _bind_readSequence_overload_19(L);
		if (_lg_typecheck_readSequence_overload_20(L)) return _bind_readSequence_overload_20(L);

		luaL_error(L, "error in function readSequence, cannot match any of the overloads for function readSequence:\n  readSequence(const char *, std::string &)\n  readSequence(const char *, unsigned int &)\n  readSequence(const char *, int &)\n  readSequence(const char *, float &)\n  readSequence(const char *, osg::Vec2f &)\n  readSequence(const char *, osg::Vec3f &)\n  readSequence(const char *, osg::Vec4f &)\n  readSequence(const char *, osg::Vec2d &)\n  readSequence(const char *, osg::Vec3d &)\n  readSequence(const char *, osg::Vec4d &)\n  readSequence(std::string &)\n  readSequence(unsigned int &)\n  readSequence(int &)\n  readSequence(float &)\n  readSequence(osg::Vec2f &)\n  readSequence(osg::Vec3f &)\n  readSequence(osg::Vec4f &)\n  readSequence(osg::Vec2d &)\n  readSequence(osg::Vec3d &)\n  readSequence(osg::Vec4d &)\n");
		return 0;
	}

	// bool osgDB::FieldReaderIterator::base_eof() const
	static int _bind_base_eof(lua_State *L) {
		if (!_lg_typecheck_base_eof(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::base_eof() const function, expected prototype:\nbool osgDB::FieldReaderIterator::base_eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::base_eof() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FieldReaderIterator::eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator=(const osgDB::FieldReaderIterator & ic)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator=(const osgDB::FieldReaderIterator & ic) function, expected prototype:\nosgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator=(const osgDB::FieldReaderIterator & ic)\nClass arguments details:\narg 1 ID = 2696163\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FieldReaderIterator* ic_ptr=(Luna< osgDB::FieldReaderIterator >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReaderIterator::operator= function");
		}
		const osgDB::FieldReaderIterator & ic=*ic_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator=(const osgDB::FieldReaderIterator &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FieldReaderIterator* lret = &self->operator=(ic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReaderIterator >::push(L,lret,false);

		return 1;
	}

	// osgDB::Field & osgDB::FieldReaderIterator::operator[](int pos)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field & osgDB::FieldReaderIterator::operator[](int pos) function, expected prototype:\nosgDB::Field & osgDB::FieldReaderIterator::operator[](int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Field & osgDB::FieldReaderIterator::operator[](int). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Field* lret = &self->operator[](pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Field >::push(L,lret,false);

		return 1;
	}

	// osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator++()
	static int _bind_op_inc(lua_State *L) {
		if (!_lg_typecheck_op_inc(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator++() function, expected prototype:\nosgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator++()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator++(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FieldReaderIterator* lret = &self->operator++();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReaderIterator >::push(L,lret,false);

		return 1;
	}

	// osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int no)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int no) function, expected prototype:\nosgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int no)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int no=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FieldReaderIterator* lret = &self->operator+=(no);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReaderIterator >::push(L,lret,false);

		return 1;
	}


};

osgDB::FieldReaderIterator* LunaTraits< osgDB::FieldReaderIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FieldReaderIterator::_bind_ctor(L);
}

void LunaTraits< osgDB::FieldReaderIterator >::_bind_dtor(osgDB::FieldReaderIterator* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FieldReaderIterator >::className[] = "FieldReaderIterator";
const char LunaTraits< osgDB::FieldReaderIterator >::fullName[] = "osgDB::FieldReaderIterator";
const char LunaTraits< osgDB::FieldReaderIterator >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FieldReaderIterator >::parents[] = {0};
const int LunaTraits< osgDB::FieldReaderIterator >::hash = 2696163;
const int LunaTraits< osgDB::FieldReaderIterator >::uniqueIDs[] = {2696163,0};

luna_RegType LunaTraits< osgDB::FieldReaderIterator >::methods[] = {
	{"attach", &luna_wrapper_osgDB_FieldReaderIterator::_bind_attach},
	{"detach", &luna_wrapper_osgDB_FieldReaderIterator::_bind_detach},
	{"eof", &luna_wrapper_osgDB_FieldReaderIterator::_bind_eof},
	{"getFieldReader", &luna_wrapper_osgDB_FieldReaderIterator::_bind_getFieldReader},
	{"insert", &luna_wrapper_osgDB_FieldReaderIterator::_bind_insert},
	{"field", &luna_wrapper_osgDB_FieldReaderIterator::_bind_field},
	{"advanceOverCurrentFieldOrBlock", &luna_wrapper_osgDB_FieldReaderIterator::_bind_advanceOverCurrentFieldOrBlock},
	{"advanceToEndOfCurrentBlock", &luna_wrapper_osgDB_FieldReaderIterator::_bind_advanceToEndOfCurrentBlock},
	{"advanceToEndOfBlock", &luna_wrapper_osgDB_FieldReaderIterator::_bind_advanceToEndOfBlock},
	{"matchSequence", &luna_wrapper_osgDB_FieldReaderIterator::_bind_matchSequence},
	{"readSequence", &luna_wrapper_osgDB_FieldReaderIterator::_bind_readSequence},
	{"base_eof", &luna_wrapper_osgDB_FieldReaderIterator::_bind_base_eof},
	{"op_assign", &luna_wrapper_osgDB_FieldReaderIterator::_bind_op_assign},
	{"op_index", &luna_wrapper_osgDB_FieldReaderIterator::_bind_op_index},
	{"op_inc", &luna_wrapper_osgDB_FieldReaderIterator::_bind_op_inc},
	{"op_add", &luna_wrapper_osgDB_FieldReaderIterator::_bind_op_add},
	{"dynCast", &luna_wrapper_osgDB_FieldReaderIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_FieldReaderIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_FieldReaderIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_FieldReaderIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_FieldReaderIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FieldReaderIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FieldReaderIterator >::enumValues[] = {
	{"MINIMUM_FIELD_READER_QUEUE_SIZE", osgDB::FieldReaderIterator::MINIMUM_FIELD_READER_QUEUE_SIZE},
	{0,0}
};


