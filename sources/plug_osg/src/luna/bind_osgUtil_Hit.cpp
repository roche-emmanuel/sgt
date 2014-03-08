#include <plug_common.h>

class luna_wrapper_osgUtil_Hit {
public:
	typedef Luna< osgUtil::Hit > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16095945) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::Hit*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Hit* rhs =(Luna< osgUtil::Hit >::check(L,2));
		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
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

		osgUtil::Hit* self= (osgUtil::Hit*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::Hit >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16095945) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::Hit >::check(L,1));
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

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Hit");
		
		return luna_dynamicCast(L,converters,"osgUtil::Hit",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16095945) ) return false;
		if( (!(Luna< osgUtil::Hit >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLocalIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOriginalLineSegment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalLineSegment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVecIndexList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOriginalLineSegment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67800054) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalLineSegment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67800054) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGeode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24357146) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91334477) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVecIndexList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92299338) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16095945) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16095945) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::Hit::Hit()
	static osgUtil::Hit* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Hit::Hit() function, expected prototype:\nosgUtil::Hit::Hit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::Hit();
	}

	// osgUtil::Hit::Hit(const osgUtil::Hit & hit)
	static osgUtil::Hit* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Hit::Hit(const osgUtil::Hit & hit) function, expected prototype:\nosgUtil::Hit::Hit(const osgUtil::Hit & hit)\nClass arguments details:\narg 1 ID = 16095945\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::Hit* hit_ptr=(Luna< osgUtil::Hit >::check(L,1));
		if( !hit_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hit in osgUtil::Hit::Hit function");
		}
		const osgUtil::Hit & hit=*hit_ptr;

		return new osgUtil::Hit(hit);
	}

	// Overload binder for osgUtil::Hit::Hit
	static osgUtil::Hit* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Hit, cannot match any of the overloads for function Hit:\n  Hit()\n  Hit(const osgUtil::Hit &)\n");
		return NULL;
	}


	// Function binds:
	// const osg::Vec3f & osgUtil::Hit::getLocalIntersectPoint() const
	static int _bind_getLocalIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgUtil::Hit::getLocalIntersectPoint() const function, expected prototype:\nconst osg::Vec3f & osgUtil::Hit::getLocalIntersectPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgUtil::Hit::getLocalIntersectPoint() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getLocalIntersectPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osgUtil::Hit::getLocalIntersectNormal() const
	static int _bind_getLocalIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectNormal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgUtil::Hit::getLocalIntersectNormal() const function, expected prototype:\nconst osg::Vec3f & osgUtil::Hit::getLocalIntersectNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgUtil::Hit::getLocalIntersectNormal() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getLocalIntersectNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f osgUtil::Hit::getWorldIntersectPoint() const
	static int _bind_getWorldIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getWorldIntersectPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osgUtil::Hit::getWorldIntersectPoint() const function, expected prototype:\nconst osg::Vec3f osgUtil::Hit::getWorldIntersectPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f osgUtil::Hit::getWorldIntersectPoint() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f stack_lret = self->getWorldIntersectPoint();
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// const osg::Vec3f osgUtil::Hit::getWorldIntersectNormal() const
	static int _bind_getWorldIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getWorldIntersectNormal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osgUtil::Hit::getWorldIntersectNormal() const function, expected prototype:\nconst osg::Vec3f osgUtil::Hit::getWorldIntersectNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f osgUtil::Hit::getWorldIntersectNormal() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f stack_lret = self->getWorldIntersectNormal();
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::Hit::getRatio() const
	static int _bind_getRatio(lua_State *L) {
		if (!_lg_typecheck_getRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Hit::getRatio() const function, expected prototype:\nfloat osgUtil::Hit::getRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Hit::getRatio() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::LineSegment * osgUtil::Hit::getOriginalLineSegment() const
	static int _bind_getOriginalLineSegment(lua_State *L) {
		if (!_lg_typecheck_getOriginalLineSegment(L)) {
			luaL_error(L, "luna typecheck failed in const osg::LineSegment * osgUtil::Hit::getOriginalLineSegment() const function, expected prototype:\nconst osg::LineSegment * osgUtil::Hit::getOriginalLineSegment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::LineSegment * osgUtil::Hit::getOriginalLineSegment() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::LineSegment * lret = self->getOriginalLineSegment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::LineSegment >::push(L,lret,false);

		return 1;
	}

	// const osg::LineSegment * osgUtil::Hit::getLocalLineSegment() const
	static int _bind_getLocalLineSegment(lua_State *L) {
		if (!_lg_typecheck_getLocalLineSegment(L)) {
			luaL_error(L, "luna typecheck failed in const osg::LineSegment * osgUtil::Hit::getLocalLineSegment() const function, expected prototype:\nconst osg::LineSegment * osgUtil::Hit::getLocalLineSegment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::LineSegment * osgUtil::Hit::getLocalLineSegment() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::LineSegment * lret = self->getLocalLineSegment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::LineSegment >::push(L,lret,false);

		return 1;
	}

	// osg::NodePath & osgUtil::Hit::getNodePath()
	static int _bind_getNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath & osgUtil::Hit::getNodePath() function, expected prototype:\nosg::NodePath & osgUtil::Hit::getNodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePath & osgUtil::Hit::getNodePath(). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// const osg::NodePath & osgUtil::Hit::getNodePath() const
	static int _bind_getNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodePath & osgUtil::Hit::getNodePath() const function, expected prototype:\nconst osg::NodePath & osgUtil::Hit::getNodePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodePath & osgUtil::Hit::getNodePath() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Hit::getNodePath
	static int _bind_getNodePath(lua_State *L) {
		if (_lg_typecheck_getNodePath_overload_1(L)) return _bind_getNodePath_overload_1(L);
		if (_lg_typecheck_getNodePath_overload_2(L)) return _bind_getNodePath_overload_2(L);

		luaL_error(L, "error in function getNodePath, cannot match any of the overloads for function getNodePath:\n  getNodePath()\n  getNodePath()\n");
		return 0;
	}

	// osg::Geode * osgUtil::Hit::getGeode()
	static int _bind_getGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgUtil::Hit::getGeode() function, expected prototype:\nosg::Geode * osgUtil::Hit::getGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgUtil::Hit::getGeode(). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->getGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgUtil::Hit::getGeode() const
	static int _bind_getGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgUtil::Hit::getGeode() const function, expected prototype:\nconst osg::Geode * osgUtil::Hit::getGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osgUtil::Hit::getGeode() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->getGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Hit::getGeode
	static int _bind_getGeode(lua_State *L) {
		if (_lg_typecheck_getGeode_overload_1(L)) return _bind_getGeode_overload_1(L);
		if (_lg_typecheck_getGeode_overload_2(L)) return _bind_getGeode_overload_2(L);

		luaL_error(L, "error in function getGeode, cannot match any of the overloads for function getGeode:\n  getGeode()\n  getGeode()\n");
		return 0;
	}

	// osg::Drawable * osgUtil::Hit::getDrawable()
	static int _bind_getDrawable_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable * osgUtil::Hit::getDrawable() function, expected prototype:\nosg::Drawable * osgUtil::Hit::getDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable * osgUtil::Hit::getDrawable(). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable * lret = self->getDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable * osgUtil::Hit::getDrawable() const
	static int _bind_getDrawable_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable * osgUtil::Hit::getDrawable() const function, expected prototype:\nconst osg::Drawable * osgUtil::Hit::getDrawable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable * osgUtil::Hit::getDrawable() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable * lret = self->getDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Hit::getDrawable
	static int _bind_getDrawable(lua_State *L) {
		if (_lg_typecheck_getDrawable_overload_1(L)) return _bind_getDrawable_overload_1(L);
		if (_lg_typecheck_getDrawable_overload_2(L)) return _bind_getDrawable_overload_2(L);

		luaL_error(L, "error in function getDrawable, cannot match any of the overloads for function getDrawable:\n  getDrawable()\n  getDrawable()\n");
		return 0;
	}

	// const osg::RefMatrixd * osgUtil::Hit::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::Hit::getMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::Hit::getMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::Hit::getMatrix() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::Hit::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::Hit::getInverseMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::Hit::getInverseMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::Hit::getInverseMatrix() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getInverseMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Hit::VecIndexList & osgUtil::Hit::getVecIndexList() const
	static int _bind_getVecIndexList(lua_State *L) {
		if (!_lg_typecheck_getVecIndexList(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::Hit::VecIndexList & osgUtil::Hit::getVecIndexList() const function, expected prototype:\nconst osgUtil::Hit::VecIndexList & osgUtil::Hit::getVecIndexList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::Hit::VecIndexList & osgUtil::Hit::getVecIndexList() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Hit::VecIndexList* lret = &self->getVecIndexList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Hit::VecIndexList >::push(L,lret,false);

		return 1;
	}

	// int osgUtil::Hit::getPrimitiveIndex() const
	static int _bind_getPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveIndex(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Hit::getPrimitiveIndex() const function, expected prototype:\nint osgUtil::Hit::getPrimitiveIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Hit::getPrimitiveIndex() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getPrimitiveIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::RefMatrixd > osgUtil::Hit::_inverse()
	static int _bind_getInverse(lua_State *L) {
		if (!_lg_typecheck_getInverse(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::RefMatrixd > osgUtil::Hit::_inverse() function, expected prototype:\nosg::ref_ptr< osg::RefMatrixd > osgUtil::Hit::_inverse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::RefMatrixd > osgUtil::Hit::_inverse(). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::RefMatrixd > lret = self->_inverse;
		Luna< osg::RefMatrixd >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Vec3f osgUtil::Hit::_intersectPoint()
	static int _bind_getIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getIntersectPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::Hit::_intersectPoint() function, expected prototype:\nosg::Vec3f osgUtil::Hit::_intersectPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::Hit::_intersectPoint(). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->_intersectPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgUtil::Hit::_intersectNormal()
	static int _bind_getIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getIntersectNormal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::Hit::_intersectNormal() function, expected prototype:\nosg::Vec3f osgUtil::Hit::_intersectNormal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::Hit::_intersectNormal(). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->_intersectNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::Hit::_ratio(float value)
	static int _bind_setRatio(lua_State *L) {
		if (!_lg_typecheck_setRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_ratio(float value) function, expected prototype:\nvoid osgUtil::Hit::_ratio(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_ratio(float). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_ratio = value;

		return 0;
	}

	// void osgUtil::Hit::_originalLineSegment(osg::ref_ptr< osg::LineSegment > value)
	static int _bind_setOriginalLineSegment(lua_State *L) {
		if (!_lg_typecheck_setOriginalLineSegment(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_originalLineSegment(osg::ref_ptr< osg::LineSegment > value) function, expected prototype:\nvoid osgUtil::Hit::_originalLineSegment(osg::ref_ptr< osg::LineSegment > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::LineSegment > value = dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_originalLineSegment(osg::ref_ptr< osg::LineSegment >). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_originalLineSegment = value;

		return 0;
	}

	// void osgUtil::Hit::_localLineSegment(osg::ref_ptr< osg::LineSegment > value)
	static int _bind_setLocalLineSegment(lua_State *L) {
		if (!_lg_typecheck_setLocalLineSegment(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_localLineSegment(osg::ref_ptr< osg::LineSegment > value) function, expected prototype:\nvoid osgUtil::Hit::_localLineSegment(osg::ref_ptr< osg::LineSegment > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::LineSegment > value = dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_localLineSegment(osg::ref_ptr< osg::LineSegment >). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_localLineSegment = value;

		return 0;
	}

	// void osgUtil::Hit::_nodePath(osg::NodePath value)
	static int _bind_setNodePath(lua_State *L) {
		if (!_lg_typecheck_setNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_nodePath(osg::NodePath value) function, expected prototype:\nvoid osgUtil::Hit::_nodePath(osg::NodePath value)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* value_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::Hit::_nodePath function");
		}
		osg::NodePath value=*value_ptr;

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_nodePath(osg::NodePath). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_nodePath = value;

		return 0;
	}

	// void osgUtil::Hit::_geode(osg::ref_ptr< osg::Geode > value)
	static int _bind_setGeode(lua_State *L) {
		if (!_lg_typecheck_setGeode(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_geode(osg::ref_ptr< osg::Geode > value) function, expected prototype:\nvoid osgUtil::Hit::_geode(osg::ref_ptr< osg::Geode > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Geode > value = dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_geode(osg::ref_ptr< osg::Geode >). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_geode = value;

		return 0;
	}

	// void osgUtil::Hit::_drawable(osg::ref_ptr< osg::Drawable > value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_drawable(osg::ref_ptr< osg::Drawable > value) function, expected prototype:\nvoid osgUtil::Hit::_drawable(osg::ref_ptr< osg::Drawable > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Drawable > value = dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_drawable(osg::ref_ptr< osg::Drawable >). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_drawable = value;

		return 0;
	}

	// void osgUtil::Hit::_matrix(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_matrix(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::Hit::_matrix(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_matrix(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_matrix = value;

		return 0;
	}

	// void osgUtil::Hit::_inverse(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setInverse(lua_State *L) {
		if (!_lg_typecheck_setInverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_inverse(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::Hit::_inverse(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_inverse(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_inverse = value;

		return 0;
	}

	// void osgUtil::Hit::_vecIndexList(osgUtil::Hit::VecIndexList value)
	static int _bind_setVecIndexList(lua_State *L) {
		if (!_lg_typecheck_setVecIndexList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_vecIndexList(osgUtil::Hit::VecIndexList value) function, expected prototype:\nvoid osgUtil::Hit::_vecIndexList(osgUtil::Hit::VecIndexList value)\nClass arguments details:\narg 1 ID = 92299338\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Hit::VecIndexList* value_ptr=(Luna< std::vector< int > >::checkSubType< osgUtil::Hit::VecIndexList >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::Hit::_vecIndexList function");
		}
		osgUtil::Hit::VecIndexList value=*value_ptr;

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_vecIndexList(osgUtil::Hit::VecIndexList). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_vecIndexList = value;

		return 0;
	}

	// void osgUtil::Hit::_primitiveIndex(int value)
	static int _bind_setPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveIndex(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_primitiveIndex(int value) function, expected prototype:\nvoid osgUtil::Hit::_primitiveIndex(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_primitiveIndex(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_primitiveIndex = value;

		return 0;
	}

	// void osgUtil::Hit::_intersectPoint(osg::Vec3f value)
	static int _bind_setIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_setIntersectPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_intersectPoint(osg::Vec3f value) function, expected prototype:\nvoid osgUtil::Hit::_intersectPoint(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::Hit::_intersectPoint function");
		}
		osg::Vec3f value=*value_ptr;

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_intersectPoint(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_intersectPoint = value;

		return 0;
	}

	// void osgUtil::Hit::_intersectNormal(osg::Vec3f value)
	static int _bind_setIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_setIntersectNormal(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Hit::_intersectNormal(osg::Vec3f value) function, expected prototype:\nvoid osgUtil::Hit::_intersectNormal(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::Hit::_intersectNormal function");
		}
		osg::Vec3f value=*value_ptr;

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Hit::_intersectNormal(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_intersectNormal = value;

		return 0;
	}


	// Operator binds:
	// osgUtil::Hit & osgUtil::Hit::operator=(const osgUtil::Hit & hit)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Hit & osgUtil::Hit::operator=(const osgUtil::Hit & hit) function, expected prototype:\nosgUtil::Hit & osgUtil::Hit::operator=(const osgUtil::Hit & hit)\nClass arguments details:\narg 1 ID = 16095945\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::Hit* hit_ptr=(Luna< osgUtil::Hit >::check(L,2));
		if( !hit_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hit in osgUtil::Hit::operator= function");
		}
		const osgUtil::Hit & hit=*hit_ptr;

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Hit & osgUtil::Hit::operator=(const osgUtil::Hit &). Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Hit* lret = &self->operator=(hit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Hit >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::Hit::operator<(const osgUtil::Hit & hit) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Hit::operator<(const osgUtil::Hit & hit) const function, expected prototype:\nbool osgUtil::Hit::operator<(const osgUtil::Hit & hit) const\nClass arguments details:\narg 1 ID = 16095945\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::Hit* hit_ptr=(Luna< osgUtil::Hit >::check(L,2));
		if( !hit_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hit in osgUtil::Hit::operator< function");
		}
		const osgUtil::Hit & hit=*hit_ptr;

		osgUtil::Hit* self=(Luna< osgUtil::Hit >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Hit::operator<(const osgUtil::Hit &) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Hit >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(hit);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::Hit* LunaTraits< osgUtil::Hit >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Hit::_bind_ctor(L);
}

void LunaTraits< osgUtil::Hit >::_bind_dtor(osgUtil::Hit* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Hit >::className[] = "Hit";
const char LunaTraits< osgUtil::Hit >::fullName[] = "osgUtil::Hit";
const char LunaTraits< osgUtil::Hit >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Hit >::parents[] = {0};
const int LunaTraits< osgUtil::Hit >::hash = 16095945;
const int LunaTraits< osgUtil::Hit >::uniqueIDs[] = {16095945,0};

luna_RegType LunaTraits< osgUtil::Hit >::methods[] = {
	{"getLocalIntersectPoint", &luna_wrapper_osgUtil_Hit::_bind_getLocalIntersectPoint},
	{"getLocalIntersectNormal", &luna_wrapper_osgUtil_Hit::_bind_getLocalIntersectNormal},
	{"getWorldIntersectPoint", &luna_wrapper_osgUtil_Hit::_bind_getWorldIntersectPoint},
	{"getWorldIntersectNormal", &luna_wrapper_osgUtil_Hit::_bind_getWorldIntersectNormal},
	{"getRatio", &luna_wrapper_osgUtil_Hit::_bind_getRatio},
	{"getOriginalLineSegment", &luna_wrapper_osgUtil_Hit::_bind_getOriginalLineSegment},
	{"getLocalLineSegment", &luna_wrapper_osgUtil_Hit::_bind_getLocalLineSegment},
	{"getNodePath", &luna_wrapper_osgUtil_Hit::_bind_getNodePath},
	{"getGeode", &luna_wrapper_osgUtil_Hit::_bind_getGeode},
	{"getDrawable", &luna_wrapper_osgUtil_Hit::_bind_getDrawable},
	{"getMatrix", &luna_wrapper_osgUtil_Hit::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgUtil_Hit::_bind_getInverseMatrix},
	{"getVecIndexList", &luna_wrapper_osgUtil_Hit::_bind_getVecIndexList},
	{"getPrimitiveIndex", &luna_wrapper_osgUtil_Hit::_bind_getPrimitiveIndex},
	{"getInverse", &luna_wrapper_osgUtil_Hit::_bind_getInverse},
	{"getIntersectPoint", &luna_wrapper_osgUtil_Hit::_bind_getIntersectPoint},
	{"getIntersectNormal", &luna_wrapper_osgUtil_Hit::_bind_getIntersectNormal},
	{"setRatio", &luna_wrapper_osgUtil_Hit::_bind_setRatio},
	{"setOriginalLineSegment", &luna_wrapper_osgUtil_Hit::_bind_setOriginalLineSegment},
	{"setLocalLineSegment", &luna_wrapper_osgUtil_Hit::_bind_setLocalLineSegment},
	{"setNodePath", &luna_wrapper_osgUtil_Hit::_bind_setNodePath},
	{"setGeode", &luna_wrapper_osgUtil_Hit::_bind_setGeode},
	{"setDrawable", &luna_wrapper_osgUtil_Hit::_bind_setDrawable},
	{"setMatrix", &luna_wrapper_osgUtil_Hit::_bind_setMatrix},
	{"setInverse", &luna_wrapper_osgUtil_Hit::_bind_setInverse},
	{"setVecIndexList", &luna_wrapper_osgUtil_Hit::_bind_setVecIndexList},
	{"setPrimitiveIndex", &luna_wrapper_osgUtil_Hit::_bind_setPrimitiveIndex},
	{"setIntersectPoint", &luna_wrapper_osgUtil_Hit::_bind_setIntersectPoint},
	{"setIntersectNormal", &luna_wrapper_osgUtil_Hit::_bind_setIntersectNormal},
	{"op_assign", &luna_wrapper_osgUtil_Hit::_bind_op_assign},
	{"__lt", &luna_wrapper_osgUtil_Hit::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_Hit::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_Hit::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_Hit::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_Hit::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Hit >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Hit >::enumValues[] = {
	{0,0}
};


