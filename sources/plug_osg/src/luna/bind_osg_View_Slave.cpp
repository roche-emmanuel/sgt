#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_View_Slave.h>

class luna_wrapper_osg_View_Slave {
public:
	typedef Luna< osg::View::Slave > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::View::Slave,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94812983) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::View::Slave*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::View::Slave* rhs =(Luna< osg::View::Slave >::check(L,2));
		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
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

		osg::View::Slave* self= (osg::View::Slave*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::View::Slave >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94812983) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::View::Slave >::check(L,1));
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

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::View::Slave");
		
		return luna_dynamicCast(L,converters,"osg::View::Slave",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94812983) ) return false;
		if( (!(Luna< osg::View::Slave >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,94812983) ) return false;
		if( (!(Luna< osg::View::Slave >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateSlave(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateSlaveImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseMastersSceneData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateSlaveCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98742859) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjectionOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseMastersSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpdateSlaveCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48121090) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateSlaveImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94812983) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::View::Slave::Slave(bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(bool useMastersSceneData = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool useMastersSceneData=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		return new osg::View::Slave(useMastersSceneData);
	}

	// osg::View::Slave::Slave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1));
		const osg::Matrixd* projectionOffset_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projectionOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectionOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & projectionOffset=*projectionOffset_ptr;
		const osg::Matrixd* viewOffset_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !viewOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & viewOffset=*viewOffset_ptr;
		bool useMastersSceneData=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new osg::View::Slave(camera, projectionOffset, viewOffset, useMastersSceneData);
	}

	// osg::View::Slave::Slave(const osg::View::Slave & rhs)
	static osg::View::Slave* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(const osg::View::Slave & rhs) function, expected prototype:\nosg::View::Slave::Slave(const osg::View::Slave & rhs)\nClass arguments details:\narg 1 ID = 94812983\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::View::Slave* rhs_ptr=(Luna< osg::View::Slave >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::Slave::Slave function");
		}
		const osg::View::Slave & rhs=*rhs_ptr;

		return new osg::View::Slave(rhs);
	}

	// osg::View::Slave::Slave(lua_Table * data, bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(lua_Table * data, bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(lua_Table * data, bool useMastersSceneData = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool useMastersSceneData=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wrapper_osg_View_Slave(L,NULL, useMastersSceneData);
	}

	// osg::View::Slave::Slave(lua_Table * data, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)
	static osg::View::Slave* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(lua_Table * data, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) function, expected prototype:\nosg::View::Slave::Slave(lua_Table * data, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 18903838\narg 4 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		const osg::Matrixd* projectionOffset_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !projectionOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projectionOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & projectionOffset=*projectionOffset_ptr;
		const osg::Matrixd* viewOffset_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !viewOffset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewOffset in osg::View::Slave::Slave function");
		}
		const osg::Matrixd & viewOffset=*viewOffset_ptr;
		bool useMastersSceneData=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		return new wrapper_osg_View_Slave(L,NULL, camera, projectionOffset, viewOffset, useMastersSceneData);
	}

	// osg::View::Slave::Slave(lua_Table * data, const osg::View::Slave & rhs)
	static osg::View::Slave* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::Slave(lua_Table * data, const osg::View::Slave & rhs) function, expected prototype:\nosg::View::Slave::Slave(lua_Table * data, const osg::View::Slave & rhs)\nClass arguments details:\narg 2 ID = 94812983\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::View::Slave* rhs_ptr=(Luna< osg::View::Slave >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::Slave::Slave function");
		}
		const osg::View::Slave & rhs=*rhs_ptr;

		return new wrapper_osg_View_Slave(L,NULL, rhs);
	}

	// Overload binder for osg::View::Slave::Slave
	static osg::View::Slave* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Slave, cannot match any of the overloads for function Slave:\n  Slave(bool)\n  Slave(osg::Camera *, const osg::Matrixd &, const osg::Matrixd &, bool)\n  Slave(const osg::View::Slave &)\n  Slave(lua_Table *, bool)\n  Slave(lua_Table *, osg::Camera *, const osg::Matrixd &, const osg::Matrixd &, bool)\n  Slave(lua_Table *, const osg::View::Slave &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::View::Slave::updateSlave(osg::View & view)
	static int _bind_updateSlave(lua_State *L) {
		if (!_lg_typecheck_updateSlave(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::updateSlave(osg::View & view) function, expected prototype:\nvoid osg::View::Slave::updateSlave(osg::View & view)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::updateSlave function");
		}
		osg::View & view=*view_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::updateSlave(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSlave(view);

		return 0;
	}

	// void osg::View::Slave::updateSlaveImplementation(osg::View & view)
	static int _bind_updateSlaveImplementation(lua_State *L) {
		if (!_lg_typecheck_updateSlaveImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::updateSlaveImplementation(osg::View & view) function, expected prototype:\nvoid osg::View::Slave::updateSlaveImplementation(osg::View & view)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::updateSlaveImplementation function");
		}
		osg::View & view=*view_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::updateSlaveImplementation(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSlaveImplementation(view);

		return 0;
	}

	// osg::ref_ptr< osg::Camera > osg::View::Slave::_camera()
	static int _bind_getCamera(lua_State *L) {
		if (!_lg_typecheck_getCamera(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Camera > osg::View::Slave::_camera() function, expected prototype:\nosg::ref_ptr< osg::Camera > osg::View::Slave::_camera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Camera > osg::View::Slave::_camera(). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Camera > lret = self->_camera;
		Luna< osg::Camera >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Matrixd osg::View::Slave::_projectionOffset()
	static int _bind_getProjectionOffset(lua_State *L) {
		if (!_lg_typecheck_getProjectionOffset(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::View::Slave::_projectionOffset() function, expected prototype:\nosg::Matrixd osg::View::Slave::_projectionOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::View::Slave::_projectionOffset(). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->_projectionOffset;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::View::Slave::_viewOffset()
	static int _bind_getViewOffset(lua_State *L) {
		if (!_lg_typecheck_getViewOffset(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::View::Slave::_viewOffset() function, expected prototype:\nosg::Matrixd osg::View::Slave::_viewOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::View::Slave::_viewOffset(). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->_viewOffset;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// bool osg::View::Slave::_useMastersSceneData()
	static int _bind_getUseMastersSceneData(lua_State *L) {
		if (!_lg_typecheck_getUseMastersSceneData(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::View::Slave::_useMastersSceneData() function, expected prototype:\nbool osg::View::Slave::_useMastersSceneData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::View::Slave::_useMastersSceneData(). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_useMastersSceneData;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > osg::View::Slave::_updateSlaveCallback()
	static int _bind_getUpdateSlaveCallback(lua_State *L) {
		if (!_lg_typecheck_getUpdateSlaveCallback(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > osg::View::Slave::_updateSlaveCallback() function, expected prototype:\nosg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > osg::View::Slave::_updateSlaveCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > osg::View::Slave::_updateSlaveCallback(). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > lret = self->_updateSlaveCallback;
		Luna< osg::View::Slave::UpdateSlaveCallback >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::View::Slave::_camera(osg::ref_ptr< osg::Camera > value)
	static int _bind_setCamera(lua_State *L) {
		if (!_lg_typecheck_setCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::_camera(osg::ref_ptr< osg::Camera > value) function, expected prototype:\nvoid osg::View::Slave::_camera(osg::ref_ptr< osg::Camera > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Camera > value = dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::_camera(osg::ref_ptr< osg::Camera >). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_camera = value;

		return 0;
	}

	// void osg::View::Slave::_projectionOffset(osg::Matrixd value)
	static int _bind_setProjectionOffset(lua_State *L) {
		if (!_lg_typecheck_setProjectionOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::_projectionOffset(osg::Matrixd value) function, expected prototype:\nvoid osg::View::Slave::_projectionOffset(osg::Matrixd value)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::View::Slave::_projectionOffset function");
		}
		osg::Matrixd value=*value_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::_projectionOffset(osg::Matrixd). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_projectionOffset = value;

		return 0;
	}

	// void osg::View::Slave::_viewOffset(osg::Matrixd value)
	static int _bind_setViewOffset(lua_State *L) {
		if (!_lg_typecheck_setViewOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::_viewOffset(osg::Matrixd value) function, expected prototype:\nvoid osg::View::Slave::_viewOffset(osg::Matrixd value)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::View::Slave::_viewOffset function");
		}
		osg::Matrixd value=*value_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::_viewOffset(osg::Matrixd). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_viewOffset = value;

		return 0;
	}

	// void osg::View::Slave::_useMastersSceneData(bool value)
	static int _bind_setUseMastersSceneData(lua_State *L) {
		if (!_lg_typecheck_setUseMastersSceneData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::_useMastersSceneData(bool value) function, expected prototype:\nvoid osg::View::Slave::_useMastersSceneData(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::_useMastersSceneData(bool). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_useMastersSceneData = value;

		return 0;
	}

	// void osg::View::Slave::_updateSlaveCallback(osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > value)
	static int _bind_setUpdateSlaveCallback(lua_State *L) {
		if (!_lg_typecheck_setUpdateSlaveCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::_updateSlaveCallback(osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > value) function, expected prototype:\nvoid osg::View::Slave::_updateSlaveCallback(osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback > value = dynamic_cast< osg::View::Slave::UpdateSlaveCallback* >(Luna< osg::Referenced >::check(L,2));

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::_updateSlaveCallback(osg::ref_ptr< osg::View::Slave::UpdateSlaveCallback >). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_updateSlaveCallback = value;

		return 0;
	}

	// void osg::View::Slave::base_updateSlaveImplementation(osg::View & view)
	static int _bind_base_updateSlaveImplementation(lua_State *L) {
		if (!_lg_typecheck_base_updateSlaveImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::base_updateSlaveImplementation(osg::View & view) function, expected prototype:\nvoid osg::View::Slave::base_updateSlaveImplementation(osg::View & view)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::base_updateSlaveImplementation function");
		}
		osg::View & view=*view_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::base_updateSlaveImplementation(osg::View &). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Slave::updateSlaveImplementation(view);

		return 0;
	}


	// Operator binds:
	// osg::View::Slave & osg::View::Slave::operator=(const osg::View::Slave & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave & osg::View::Slave::operator=(const osg::View::Slave & rhs) function, expected prototype:\nosg::View::Slave & osg::View::Slave::operator=(const osg::View::Slave & rhs)\nClass arguments details:\narg 1 ID = 94812983\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::View::Slave* rhs_ptr=(Luna< osg::View::Slave >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::View::Slave::operator= function");
		}
		const osg::View::Slave & rhs=*rhs_ptr;

		osg::View::Slave* self=(Luna< osg::View::Slave >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View::Slave & osg::View::Slave::operator=(const osg::View::Slave &). Got : '%s'\n%s",typeid(Luna< osg::View::Slave >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::View::Slave* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View::Slave >::push(L,lret,false);

		return 1;
	}


};

osg::View::Slave* LunaTraits< osg::View::Slave >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_View_Slave::_bind_ctor(L);
}

void LunaTraits< osg::View::Slave >::_bind_dtor(osg::View::Slave* obj) {
	delete obj;
}

const char LunaTraits< osg::View::Slave >::className[] = "View_Slave";
const char LunaTraits< osg::View::Slave >::fullName[] = "osg::View::Slave";
const char LunaTraits< osg::View::Slave >::moduleName[] = "osg";
const char* LunaTraits< osg::View::Slave >::parents[] = {0};
const int LunaTraits< osg::View::Slave >::hash = 94812983;
const int LunaTraits< osg::View::Slave >::uniqueIDs[] = {94812983,0};

luna_RegType LunaTraits< osg::View::Slave >::methods[] = {
	{"updateSlave", &luna_wrapper_osg_View_Slave::_bind_updateSlave},
	{"updateSlaveImplementation", &luna_wrapper_osg_View_Slave::_bind_updateSlaveImplementation},
	{"getCamera", &luna_wrapper_osg_View_Slave::_bind_getCamera},
	{"getProjectionOffset", &luna_wrapper_osg_View_Slave::_bind_getProjectionOffset},
	{"getViewOffset", &luna_wrapper_osg_View_Slave::_bind_getViewOffset},
	{"getUseMastersSceneData", &luna_wrapper_osg_View_Slave::_bind_getUseMastersSceneData},
	{"getUpdateSlaveCallback", &luna_wrapper_osg_View_Slave::_bind_getUpdateSlaveCallback},
	{"setCamera", &luna_wrapper_osg_View_Slave::_bind_setCamera},
	{"setProjectionOffset", &luna_wrapper_osg_View_Slave::_bind_setProjectionOffset},
	{"setViewOffset", &luna_wrapper_osg_View_Slave::_bind_setViewOffset},
	{"setUseMastersSceneData", &luna_wrapper_osg_View_Slave::_bind_setUseMastersSceneData},
	{"setUpdateSlaveCallback", &luna_wrapper_osg_View_Slave::_bind_setUpdateSlaveCallback},
	{"base_updateSlaveImplementation", &luna_wrapper_osg_View_Slave::_bind_base_updateSlaveImplementation},
	{"op_assign", &luna_wrapper_osg_View_Slave::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_View_Slave::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_View_Slave::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_View_Slave::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_View_Slave::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_View_Slave::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::View::Slave >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::View::Slave >::enumValues[] = {
	{0,0}
};


