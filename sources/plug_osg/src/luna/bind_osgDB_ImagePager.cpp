#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ImagePager.h>

class luna_wrapper_osgDB_ImagePager {
public:
	typedef Luna< osgDB::ImagePager > luna_t;

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

		osgDB::ImagePager* self= (osgDB::ImagePager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ImagePager >::push(L,self,false);
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
		//osgDB::ImagePager* ptr= dynamic_cast< osgDB::ImagePager* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ImagePager* ptr= luna_caster< osg::Referenced, osgDB::ImagePager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImagePager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPreLoadTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPreLoadTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readImageFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestImageFile(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84922662) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_signalBeginFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_signalEndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cancel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPreLoadTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readImageFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requestImageFile(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84922662) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_requiresUpdateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_updateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_signalBeginFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_signalEndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImagePager::ImagePager()
	static osgDB::ImagePager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImagePager::ImagePager() function, expected prototype:\nosgDB::ImagePager::ImagePager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ImagePager();
	}

	// osgDB::ImagePager::ImagePager(lua_Table * data)
	static osgDB::ImagePager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImagePager::ImagePager(lua_Table * data) function, expected prototype:\nosgDB::ImagePager::ImagePager(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_ImagePager(L,NULL);
	}

	// Overload binder for osgDB::ImagePager::ImagePager
	static osgDB::ImagePager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ImagePager, cannot match any of the overloads for function ImagePager:\n  ImagePager()\n  ImagePager(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ImagePager::setPreLoadTime(double preLoadTime)
	static int _bind_setPreLoadTime(lua_State *L) {
		if (!_lg_typecheck_setPreLoadTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::setPreLoadTime(double preLoadTime) function, expected prototype:\nvoid osgDB::ImagePager::setPreLoadTime(double preLoadTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double preLoadTime=(double)lua_tonumber(L,2);

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::setPreLoadTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPreLoadTime(preLoadTime);

		return 0;
	}

	// double osgDB::ImagePager::getPreLoadTime() const
	static int _bind_getPreLoadTime(lua_State *L) {
		if (!_lg_typecheck_getPreLoadTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::ImagePager::getPreLoadTime() const function, expected prototype:\ndouble osgDB::ImagePager::getPreLoadTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::ImagePager::getPreLoadTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getPreLoadTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Image * osgDB::ImagePager::readImageFile(const std::string & fileName, const osg::Referenced * options = 0)
	static int _bind_readImageFile(lua_State *L) {
		if (!_lg_typecheck_readImageFile(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::ImagePager::readImageFile(const std::string & fileName, const osg::Referenced * options = 0) function, expected prototype:\nosg::Image * osgDB::ImagePager::readImageFile(const std::string & fileName, const osg::Referenced * options = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osg::Referenced* options=luatop>2 ? (Luna< osg::Referenced >::check(L,3)) : (const osg::Referenced*)0;

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::ImagePager::readImageFile(const std::string &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->readImageFile(fileName, options);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osgDB::ImagePager::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options)
	static int _bind_requestImageFile(lua_State *L) {
		if (!_lg_typecheck_requestImageFile(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options) function, expected prototype:\nvoid osgDB::ImagePager::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options)\nClass arguments details:\narg 2 ID = 50169651\narg 5 ID = 50169651\narg 6 ID = [unknown]\narg 7 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* attachmentPoint=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		int attachmentIndex=(int)lua_tointeger(L,4);
		double timeToMergeBy=(double)lua_tonumber(L,5);
		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,6));
		osg::ref_ptr< osg::Referenced > imageRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,7));
		const osg::Referenced* options=(Luna< osg::Referenced >::check(L,8));

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::requestImageFile(const std::string &, osg::Object *, int, double, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->requestImageFile(fileName, attachmentPoint, attachmentIndex, timeToMergeBy, framestamp, imageRequest, options);

		return 0;
	}

	// bool osgDB::ImagePager::requiresUpdateSceneGraph() const
	static int _bind_requiresUpdateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ImagePager::requiresUpdateSceneGraph() const function, expected prototype:\nbool osgDB::ImagePager::requiresUpdateSceneGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ImagePager::requiresUpdateSceneGraph() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresUpdateSceneGraph();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::ImagePager::updateSceneGraph(const osg::FrameStamp & frameStamp)
	static int _bind_updateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_updateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::updateSceneGraph(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::ImagePager::updateSceneGraph(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::ImagePager::updateSceneGraph function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::updateSceneGraph(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSceneGraph(frameStamp);

		return 0;
	}

	// void osgDB::ImagePager::signalBeginFrame(const osg::FrameStamp * framestamp)
	static int _bind_signalBeginFrame(lua_State *L) {
		if (!_lg_typecheck_signalBeginFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::signalBeginFrame(const osg::FrameStamp * framestamp) function, expected prototype:\nvoid osgDB::ImagePager::signalBeginFrame(const osg::FrameStamp * framestamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::signalBeginFrame(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->signalBeginFrame(framestamp);

		return 0;
	}

	// void osgDB::ImagePager::signalEndFrame()
	static int _bind_signalEndFrame(lua_State *L) {
		if (!_lg_typecheck_signalEndFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::signalEndFrame() function, expected prototype:\nvoid osgDB::ImagePager::signalEndFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::signalEndFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->signalEndFrame();

		return 0;
	}

	// int osgDB::ImagePager::cancel()
	static int _bind_cancel(lua_State *L) {
		if (!_lg_typecheck_cancel(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::ImagePager::cancel() function, expected prototype:\nint osgDB::ImagePager::cancel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::ImagePager::cancel(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->cancel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ImagePager::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ImagePager::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImagePager::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// double osgDB::ImagePager::base_getPreLoadTime() const
	static int _bind_base_getPreLoadTime(lua_State *L) {
		if (!_lg_typecheck_base_getPreLoadTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::ImagePager::base_getPreLoadTime() const function, expected prototype:\ndouble osgDB::ImagePager::base_getPreLoadTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::ImagePager::base_getPreLoadTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ImagePager::getPreLoadTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Image * osgDB::ImagePager::base_readImageFile(const std::string & fileName, const osg::Referenced * options = 0)
	static int _bind_base_readImageFile(lua_State *L) {
		if (!_lg_typecheck_base_readImageFile(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::ImagePager::base_readImageFile(const std::string & fileName, const osg::Referenced * options = 0) function, expected prototype:\nosg::Image * osgDB::ImagePager::base_readImageFile(const std::string & fileName, const osg::Referenced * options = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osg::Referenced* options=luatop>2 ? (Luna< osg::Referenced >::check(L,3)) : (const osg::Referenced*)0;

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::ImagePager::base_readImageFile(const std::string &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->ImagePager::readImageFile(fileName, options);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osgDB::ImagePager::base_requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options)
	static int _bind_base_requestImageFile(lua_State *L) {
		if (!_lg_typecheck_base_requestImageFile(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::base_requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options) function, expected prototype:\nvoid osgDB::ImagePager::base_requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options)\nClass arguments details:\narg 2 ID = 50169651\narg 5 ID = 50169651\narg 6 ID = [unknown]\narg 7 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* attachmentPoint=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		int attachmentIndex=(int)lua_tointeger(L,4);
		double timeToMergeBy=(double)lua_tonumber(L,5);
		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,6));
		osg::ref_ptr< osg::Referenced > imageRequest = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,7));
		const osg::Referenced* options=(Luna< osg::Referenced >::check(L,8));

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::base_requestImageFile(const std::string &, osg::Object *, int, double, const osg::FrameStamp *, osg::ref_ptr< osg::Referenced > &, const osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImagePager::requestImageFile(fileName, attachmentPoint, attachmentIndex, timeToMergeBy, framestamp, imageRequest, options);

		return 0;
	}

	// bool osgDB::ImagePager::base_requiresUpdateSceneGraph() const
	static int _bind_base_requiresUpdateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_base_requiresUpdateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ImagePager::base_requiresUpdateSceneGraph() const function, expected prototype:\nbool osgDB::ImagePager::base_requiresUpdateSceneGraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ImagePager::base_requiresUpdateSceneGraph() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImagePager::requiresUpdateSceneGraph();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::ImagePager::base_updateSceneGraph(const osg::FrameStamp & frameStamp)
	static int _bind_base_updateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_base_updateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::base_updateSceneGraph(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::ImagePager::base_updateSceneGraph(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::ImagePager::base_updateSceneGraph function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::base_updateSceneGraph(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImagePager::updateSceneGraph(frameStamp);

		return 0;
	}

	// void osgDB::ImagePager::base_signalBeginFrame(const osg::FrameStamp * framestamp)
	static int _bind_base_signalBeginFrame(lua_State *L) {
		if (!_lg_typecheck_base_signalBeginFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::base_signalBeginFrame(const osg::FrameStamp * framestamp) function, expected prototype:\nvoid osgDB::ImagePager::base_signalBeginFrame(const osg::FrameStamp * framestamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* framestamp=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::base_signalBeginFrame(const osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImagePager::signalBeginFrame(framestamp);

		return 0;
	}

	// void osgDB::ImagePager::base_signalEndFrame()
	static int _bind_base_signalEndFrame(lua_State *L) {
		if (!_lg_typecheck_base_signalEndFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImagePager::base_signalEndFrame() function, expected prototype:\nvoid osgDB::ImagePager::base_signalEndFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImagePager* self=Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImagePager::base_signalEndFrame(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImagePager::signalEndFrame();

		return 0;
	}


	// Operator binds:

};

osgDB::ImagePager* LunaTraits< osgDB::ImagePager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImagePager::_bind_ctor(L);
}

void LunaTraits< osgDB::ImagePager >::_bind_dtor(osgDB::ImagePager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImagePager >::className[] = "ImagePager";
const char LunaTraits< osgDB::ImagePager >::fullName[] = "osgDB::ImagePager";
const char LunaTraits< osgDB::ImagePager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImagePager >::parents[] = {"osg.NodeVisitor_ImageRequestHandler", 0};
const int LunaTraits< osgDB::ImagePager >::hash = 34619519;
const int LunaTraits< osgDB::ImagePager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImagePager >::methods[] = {
	{"setPreLoadTime", &luna_wrapper_osgDB_ImagePager::_bind_setPreLoadTime},
	{"getPreLoadTime", &luna_wrapper_osgDB_ImagePager::_bind_getPreLoadTime},
	{"readImageFile", &luna_wrapper_osgDB_ImagePager::_bind_readImageFile},
	{"requestImageFile", &luna_wrapper_osgDB_ImagePager::_bind_requestImageFile},
	{"requiresUpdateSceneGraph", &luna_wrapper_osgDB_ImagePager::_bind_requiresUpdateSceneGraph},
	{"updateSceneGraph", &luna_wrapper_osgDB_ImagePager::_bind_updateSceneGraph},
	{"signalBeginFrame", &luna_wrapper_osgDB_ImagePager::_bind_signalBeginFrame},
	{"signalEndFrame", &luna_wrapper_osgDB_ImagePager::_bind_signalEndFrame},
	{"cancel", &luna_wrapper_osgDB_ImagePager::_bind_cancel},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ImagePager::_bind_base_setThreadSafeRefUnref},
	{"base_getPreLoadTime", &luna_wrapper_osgDB_ImagePager::_bind_base_getPreLoadTime},
	{"base_readImageFile", &luna_wrapper_osgDB_ImagePager::_bind_base_readImageFile},
	{"base_requestImageFile", &luna_wrapper_osgDB_ImagePager::_bind_base_requestImageFile},
	{"base_requiresUpdateSceneGraph", &luna_wrapper_osgDB_ImagePager::_bind_base_requiresUpdateSceneGraph},
	{"base_updateSceneGraph", &luna_wrapper_osgDB_ImagePager::_bind_base_updateSceneGraph},
	{"base_signalBeginFrame", &luna_wrapper_osgDB_ImagePager::_bind_base_signalBeginFrame},
	{"base_signalEndFrame", &luna_wrapper_osgDB_ImagePager::_bind_base_signalEndFrame},
	{"fromVoid", &luna_wrapper_osgDB_ImagePager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ImagePager::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ImagePager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImagePager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImagePager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImagePager >::enumValues[] = {
	{0,0}
};


