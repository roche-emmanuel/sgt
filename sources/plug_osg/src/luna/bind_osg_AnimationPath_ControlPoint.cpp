#include <plug_common.h>

class luna_wrapper_osg_AnimationPath_ControlPoint {
public:
	typedef Luna< osg::AnimationPath::ControlPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19942584) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::AnimationPath::ControlPoint*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::AnimationPath::ControlPoint* rhs =(Luna< osg::AnimationPath::ControlPoint >::check(L,2));
		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
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

		osg::AnimationPath::ControlPoint* self= (osg::AnimationPath::ControlPoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AnimationPath::ControlPoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19942584) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
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

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::AnimationPath::ControlPoint");
		
		return luna_dynamicCast(L,converters,"osg::AnimationPath::ControlPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		if( (!(Luna< osg::AnimationPath::ControlPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,19942584) ) return false;
		if( (!(Luna< osg::AnimationPath::ControlPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		if( (!(Luna< osg::AnimationPath::ControlPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,19942584) ) return false;
		if( (!(Luna< osg::AnimationPath::ControlPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverse_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverse_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AnimationPath::ControlPoint::ControlPoint()
	static osg::AnimationPath::ControlPoint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::ControlPoint::ControlPoint() function, expected prototype:\nosg::AnimationPath::ControlPoint::ControlPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::AnimationPath::ControlPoint();
	}

	// osg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position)
	static osg::AnimationPath::ControlPoint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position) function, expected prototype:\nosg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::AnimationPath::ControlPoint::ControlPoint function");
		}
		const osg::Vec3d & position=*position_ptr;

		return new osg::AnimationPath::ControlPoint(position);
	}

	// osg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position, const osg::Quat & rotation)
	static osg::AnimationPath::ControlPoint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position, const osg::Quat & rotation) function, expected prototype:\nosg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position, const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::AnimationPath::ControlPoint::ControlPoint function");
		}
		const osg::Vec3d & position=*position_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osg::AnimationPath::ControlPoint::ControlPoint function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		return new osg::AnimationPath::ControlPoint(position, rotation);
	}

	// osg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position, const osg::Quat & rotation, const osg::Vec3d & scale)
	static osg::AnimationPath::ControlPoint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position, const osg::Quat & rotation, const osg::Vec3d & scale) function, expected prototype:\nosg::AnimationPath::ControlPoint::ControlPoint(const osg::Vec3d & position, const osg::Quat & rotation, const osg::Vec3d & scale)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::AnimationPath::ControlPoint::ControlPoint function");
		}
		const osg::Vec3d & position=*position_ptr;
		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osg::AnimationPath::ControlPoint::ControlPoint function");
		}
		const osg::Quat & rotation=*rotation_ptr;
		const osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::AnimationPath::ControlPoint::ControlPoint function");
		}
		const osg::Vec3d & scale=*scale_ptr;

		return new osg::AnimationPath::ControlPoint(position, rotation, scale);
	}

	// Overload binder for osg::AnimationPath::ControlPoint::ControlPoint
	static osg::AnimationPath::ControlPoint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ControlPoint, cannot match any of the overloads for function ControlPoint:\n  ControlPoint()\n  ControlPoint(const osg::Vec3d &)\n  ControlPoint(const osg::Vec3d &, const osg::Quat &)\n  ControlPoint(const osg::Vec3d &, const osg::Quat &, const osg::Vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::AnimationPath::ControlPoint::setPosition(const osg::Vec3d & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::setPosition(const osg::Vec3d & position) function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::setPosition(const osg::Vec3d & position)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::AnimationPath::ControlPoint::setPosition function");
		}
		const osg::Vec3d & position=*position_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::setPosition(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(position);

		return 0;
	}

	// const osg::Vec3d & osg::AnimationPath::ControlPoint::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AnimationPath::ControlPoint::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::AnimationPath::ControlPoint::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AnimationPath::ControlPoint::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AnimationPath::ControlPoint::setRotation(const osg::Quat & rotation)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::setRotation(const osg::Quat & rotation) function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::setRotation(const osg::Quat & rotation)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osg::AnimationPath::ControlPoint::setRotation function");
		}
		const osg::Quat & rotation=*rotation_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::setRotation(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotation(rotation);

		return 0;
	}

	// const osg::Quat & osg::AnimationPath::ControlPoint::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::AnimationPath::ControlPoint::getRotation() const function, expected prototype:\nconst osg::Quat & osg::AnimationPath::ControlPoint::getRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::AnimationPath::ControlPoint::getRotation() const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::AnimationPath::ControlPoint::setScale(const osg::Vec3d & scale)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::setScale(const osg::Vec3d & scale) function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::setScale(const osg::Vec3d & scale)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::AnimationPath::ControlPoint::setScale function");
		}
		const osg::Vec3d & scale=*scale_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::setScale(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScale(scale);

		return 0;
	}

	// const osg::Vec3d & osg::AnimationPath::ControlPoint::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AnimationPath::ControlPoint::getScale() const function, expected prototype:\nconst osg::Vec3d & osg::AnimationPath::ControlPoint::getScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AnimationPath::ControlPoint::getScale() const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getScale();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AnimationPath::ControlPoint::interpolate(float ratio, const osg::AnimationPath::ControlPoint & first, const osg::AnimationPath::ControlPoint & second)
	static int _bind_interpolate_overload_1(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::interpolate(float ratio, const osg::AnimationPath::ControlPoint & first, const osg::AnimationPath::ControlPoint & second) function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::interpolate(float ratio, const osg::AnimationPath::ControlPoint & first, const osg::AnimationPath::ControlPoint & second)\nClass arguments details:\narg 2 ID = 19942584\narg 3 ID = 19942584\n\n%s",luna_dumpStack(L).c_str());
		}

		float ratio=(float)lua_tonumber(L,2);
		const osg::AnimationPath::ControlPoint* first_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !first_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg first in osg::AnimationPath::ControlPoint::interpolate function");
		}
		const osg::AnimationPath::ControlPoint & first=*first_ptr;
		const osg::AnimationPath::ControlPoint* second_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,4));
		if( !second_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg second in osg::AnimationPath::ControlPoint::interpolate function");
		}
		const osg::AnimationPath::ControlPoint & second=*second_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::interpolate(float, const osg::AnimationPath::ControlPoint &, const osg::AnimationPath::ControlPoint &). Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->interpolate(ratio, first, second);

		return 0;
	}

	// void osg::AnimationPath::ControlPoint::interpolate(double ratio, const osg::AnimationPath::ControlPoint & first, const osg::AnimationPath::ControlPoint & second)
	static int _bind_interpolate_overload_2(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::interpolate(double ratio, const osg::AnimationPath::ControlPoint & first, const osg::AnimationPath::ControlPoint & second) function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::interpolate(double ratio, const osg::AnimationPath::ControlPoint & first, const osg::AnimationPath::ControlPoint & second)\nClass arguments details:\narg 2 ID = 19942584\narg 3 ID = 19942584\n\n%s",luna_dumpStack(L).c_str());
		}

		double ratio=(double)lua_tonumber(L,2);
		const osg::AnimationPath::ControlPoint* first_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !first_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg first in osg::AnimationPath::ControlPoint::interpolate function");
		}
		const osg::AnimationPath::ControlPoint & first=*first_ptr;
		const osg::AnimationPath::ControlPoint* second_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,4));
		if( !second_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg second in osg::AnimationPath::ControlPoint::interpolate function");
		}
		const osg::AnimationPath::ControlPoint & second=*second_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::interpolate(double, const osg::AnimationPath::ControlPoint &, const osg::AnimationPath::ControlPoint &). Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->interpolate(ratio, first, second);

		return 0;
	}

	// Overload binder for osg::AnimationPath::ControlPoint::interpolate
	static int _bind_interpolate(lua_State *L) {
		if (_lg_typecheck_interpolate_overload_1(L)) return _bind_interpolate_overload_1(L);
		if (_lg_typecheck_interpolate_overload_2(L)) return _bind_interpolate_overload_2(L);

		luaL_error(L, "error in function interpolate, cannot match any of the overloads for function interpolate:\n  interpolate(float, const osg::AnimationPath::ControlPoint &, const osg::AnimationPath::ControlPoint &)\n  interpolate(double, const osg::AnimationPath::ControlPoint &, const osg::AnimationPath::ControlPoint &)\n");
		return 0;
	}

	// void osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixf & matrix) const
	static int _bind_getMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixf & matrix) const function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixf & matrix) const\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::ControlPoint::getMatrix function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getMatrix(matrix);

		return 0;
	}

	// void osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixd & matrix) const
	static int _bind_getMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixd & matrix) const function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixd & matrix) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::ControlPoint::getMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::getMatrix(osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getMatrix(matrix);

		return 0;
	}

	// Overload binder for osg::AnimationPath::ControlPoint::getMatrix
	static int _bind_getMatrix(lua_State *L) {
		if (_lg_typecheck_getMatrix_overload_1(L)) return _bind_getMatrix_overload_1(L);
		if (_lg_typecheck_getMatrix_overload_2(L)) return _bind_getMatrix_overload_2(L);

		luaL_error(L, "error in function getMatrix, cannot match any of the overloads for function getMatrix:\n  getMatrix(osg::Matrixf &)\n  getMatrix(osg::Matrixd &)\n");
		return 0;
	}

	// void osg::AnimationPath::ControlPoint::getInverse(osg::Matrixf & matrix) const
	static int _bind_getInverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInverse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::getInverse(osg::Matrixf & matrix) const function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::getInverse(osg::Matrixf & matrix) const\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::ControlPoint::getInverse function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::getInverse(osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getInverse(matrix);

		return 0;
	}

	// void osg::AnimationPath::ControlPoint::getInverse(osg::Matrixd & matrix) const
	static int _bind_getInverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInverse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::ControlPoint::getInverse(osg::Matrixd & matrix) const function, expected prototype:\nvoid osg::AnimationPath::ControlPoint::getInverse(osg::Matrixd & matrix) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::ControlPoint::getInverse function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::AnimationPath::ControlPoint* self=(Luna< osg::AnimationPath::ControlPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::ControlPoint::getInverse(osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::AnimationPath::ControlPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getInverse(matrix);

		return 0;
	}

	// Overload binder for osg::AnimationPath::ControlPoint::getInverse
	static int _bind_getInverse(lua_State *L) {
		if (_lg_typecheck_getInverse_overload_1(L)) return _bind_getInverse_overload_1(L);
		if (_lg_typecheck_getInverse_overload_2(L)) return _bind_getInverse_overload_2(L);

		luaL_error(L, "error in function getInverse, cannot match any of the overloads for function getInverse:\n  getInverse(osg::Matrixf &)\n  getInverse(osg::Matrixd &)\n");
		return 0;
	}


	// Operator binds:

};

osg::AnimationPath::ControlPoint* LunaTraits< osg::AnimationPath::ControlPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AnimationPath_ControlPoint::_bind_ctor(L);
}

void LunaTraits< osg::AnimationPath::ControlPoint >::_bind_dtor(osg::AnimationPath::ControlPoint* obj) {
	delete obj;
}

const char LunaTraits< osg::AnimationPath::ControlPoint >::className[] = "AnimationPath_ControlPoint";
const char LunaTraits< osg::AnimationPath::ControlPoint >::fullName[] = "osg::AnimationPath::ControlPoint";
const char LunaTraits< osg::AnimationPath::ControlPoint >::moduleName[] = "osg";
const char* LunaTraits< osg::AnimationPath::ControlPoint >::parents[] = {0};
const int LunaTraits< osg::AnimationPath::ControlPoint >::hash = 19942584;
const int LunaTraits< osg::AnimationPath::ControlPoint >::uniqueIDs[] = {19942584,0};

luna_RegType LunaTraits< osg::AnimationPath::ControlPoint >::methods[] = {
	{"setPosition", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_getPosition},
	{"setRotation", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_getRotation},
	{"setScale", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_setScale},
	{"getScale", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_getScale},
	{"interpolate", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_interpolate},
	{"getMatrix", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_getMatrix},
	{"getInverse", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_getInverse},
	{"dynCast", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AnimationPath_ControlPoint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AnimationPath::ControlPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AnimationPath::ControlPoint >::enumValues[] = {
	{0,0}
};


