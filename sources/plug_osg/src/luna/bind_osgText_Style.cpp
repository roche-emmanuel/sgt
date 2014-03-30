#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Style.h>

class luna_wrapper_osgText_Style {
public:
	typedef Luna< osgText::Style > luna_t;

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

		osgText::Style* self= (osgText::Style*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::Style >::push(L,self,false);
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
		//osgText::Style* ptr= dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		osgText::Style* ptr= luna_caster< osg::Referenced, osgText::Style >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Style >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidthRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWidthRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThicknessRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getThicknessRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOutlineRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOutlineRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSampleDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSampleDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgText::Style::Style()
	static osgText::Style* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Style::Style() function, expected prototype:\nosgText::Style::Style()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::Style();
	}

	// osgText::Style::Style(const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Style* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Style::Style(const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Style::Style(const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Style* style_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in osgText::Style::Style function");
		}
		const osgText::Style & style=*style_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Style::Style function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgText::Style(style, copyop);
	}

	// osgText::Style::Style(lua_Table * data)
	static osgText::Style* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Style::Style(lua_Table * data) function, expected prototype:\nosgText::Style::Style(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_Style(L,NULL);
	}

	// osgText::Style::Style(lua_Table * data, const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Style* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Style::Style(lua_Table * data, const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Style::Style(lua_Table * data, const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Style* style_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in osgText::Style::Style function");
		}
		const osgText::Style & style=*style_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Style::Style function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_Style(L,NULL, style, copyop);
	}

	// Overload binder for osgText::Style::Style
	static osgText::Style* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Style, cannot match any of the overloads for function Style:\n  Style()\n  Style(const osgText::Style &, const osg::CopyOp &)\n  Style(lua_Table *)\n  Style(lua_Table *, const osgText::Style &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Style::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Style::cloneType() const function, expected prototype:\nosg::Object * osgText::Style::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Style::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Style::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Style::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Style::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Style::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Style::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Style::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Style::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Style::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Style::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Style::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Style::libraryName() const function, expected prototype:\nconst char * osgText::Style::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Style::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Style::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Style::className() const function, expected prototype:\nconst char * osgText::Style::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Style::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Style::setBevel(osgText::Bevel * bevel)
	static int _bind_setBevel(lua_State *L) {
		if (!_lg_typecheck_setBevel(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::setBevel(osgText::Bevel * bevel) function, expected prototype:\nvoid osgText::Style::setBevel(osgText::Bevel * bevel)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Bevel* bevel=(Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,2));

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::setBevel(osgText::Bevel *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBevel(bevel);

		return 0;
	}

	// const osgText::Bevel * osgText::Style::getBevel() const
	static int _bind_getBevel(lua_State *L) {
		if (!_lg_typecheck_getBevel(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::Bevel * osgText::Style::getBevel() const function, expected prototype:\nconst osgText::Bevel * osgText::Style::getBevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::Bevel * osgText::Style::getBevel() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Bevel * lret = self->getBevel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Bevel >::push(L,lret,false);

		return 1;
	}

	// void osgText::Style::setWidthRatio(float widthRatio)
	static int _bind_setWidthRatio(lua_State *L) {
		if (!_lg_typecheck_setWidthRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::setWidthRatio(float widthRatio) function, expected prototype:\nvoid osgText::Style::setWidthRatio(float widthRatio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float widthRatio=(float)lua_tonumber(L,2);

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::setWidthRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWidthRatio(widthRatio);

		return 0;
	}

	// float osgText::Style::getWidthRatio() const
	static int _bind_getWidthRatio(lua_State *L) {
		if (!_lg_typecheck_getWidthRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Style::getWidthRatio() const function, expected prototype:\nfloat osgText::Style::getWidthRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Style::getWidthRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWidthRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Style::setThicknessRatio(float thicknessRatio)
	static int _bind_setThicknessRatio(lua_State *L) {
		if (!_lg_typecheck_setThicknessRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::setThicknessRatio(float thicknessRatio) function, expected prototype:\nvoid osgText::Style::setThicknessRatio(float thicknessRatio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float thicknessRatio=(float)lua_tonumber(L,2);

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::setThicknessRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThicknessRatio(thicknessRatio);

		return 0;
	}

	// float osgText::Style::getThicknessRatio() const
	static int _bind_getThicknessRatio(lua_State *L) {
		if (!_lg_typecheck_getThicknessRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Style::getThicknessRatio() const function, expected prototype:\nfloat osgText::Style::getThicknessRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Style::getThicknessRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getThicknessRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Style::setOutlineRatio(float outlineRatio)
	static int _bind_setOutlineRatio(lua_State *L) {
		if (!_lg_typecheck_setOutlineRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::setOutlineRatio(float outlineRatio) function, expected prototype:\nvoid osgText::Style::setOutlineRatio(float outlineRatio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float outlineRatio=(float)lua_tonumber(L,2);

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::setOutlineRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOutlineRatio(outlineRatio);

		return 0;
	}

	// float osgText::Style::getOutlineRatio() const
	static int _bind_getOutlineRatio(lua_State *L) {
		if (!_lg_typecheck_getOutlineRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Style::getOutlineRatio() const function, expected prototype:\nfloat osgText::Style::getOutlineRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Style::getOutlineRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getOutlineRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Style::setSampleDensity(float sd)
	static int _bind_setSampleDensity(lua_State *L) {
		if (!_lg_typecheck_setSampleDensity(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::setSampleDensity(float sd) function, expected prototype:\nvoid osgText::Style::setSampleDensity(float sd)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sd=(float)lua_tonumber(L,2);

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::setSampleDensity(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleDensity(sd);

		return 0;
	}

	// float osgText::Style::getSampleDensity() const
	static int _bind_getSampleDensity(lua_State *L) {
		if (!_lg_typecheck_getSampleDensity(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Style::getSampleDensity() const function, expected prototype:\nfloat osgText::Style::getSampleDensity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Style::getSampleDensity() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSampleDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static osg::ref_ptr< osgText::Style > & osgText::Style::getDefaultStyle()
	static int _bind_getDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_getDefaultStyle(L)) {
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgText::Style > & osgText::Style::getDefaultStyle() function, expected prototype:\nstatic osg::ref_ptr< osgText::Style > & osgText::Style::getDefaultStyle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ref_ptr< osgText::Style > & lret = osgText::Style::getDefaultStyle();
		Luna< osgText::Style >::push(L,lret.get(),false);

		return 1;
	}

	// void osgText::Style::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Style::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Style::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Style::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::Style::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Style::setName(name);

		return 0;
	}

	// void osgText::Style::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::base_computeDataVariance() function, expected prototype:\nvoid osgText::Style::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Style::computeDataVariance();

		return 0;
	}

	// void osgText::Style::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::Style::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Style::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::Style::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::Style::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::Style::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::Style::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Style::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::Style::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::Style::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::Style::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::Style::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Style::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Style::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgText::Style::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Style::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgText::Style::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Style::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Style::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgText::Style::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Style::base_cloneType() const function, expected prototype:\nosg::Object * osgText::Style::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Style::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Style::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Style::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Style::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Style::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Style::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Style::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Style::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Style::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Style::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Style::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Style::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Style::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Style::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Style::base_libraryName() const function, expected prototype:\nconst char * osgText::Style::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Style::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Style::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Style::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Style::base_className() const function, expected prototype:\nconst char * osgText::Style::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Style::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Style::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// bool osgText::Style::operator==(const osgText::Style & style) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Style::operator==(const osgText::Style & style) const function, expected prototype:\nbool osgText::Style::operator==(const osgText::Style & style) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::Style* style_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in osgText::Style::operator== function");
		}
		const osgText::Style & style=*style_ptr;

		osgText::Style* self=Luna< osg::Referenced >::checkSubType< osgText::Style >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Style::operator==(const osgText::Style &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgText::Style* LunaTraits< osgText::Style >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Style::_bind_ctor(L);
}

void LunaTraits< osgText::Style >::_bind_dtor(osgText::Style* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Style >::className[] = "Style";
const char LunaTraits< osgText::Style >::fullName[] = "osgText::Style";
const char LunaTraits< osgText::Style >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Style >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgText::Style >::hash = 17493466;
const int LunaTraits< osgText::Style >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Style >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Style::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Style::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Style::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_Style::_bind_libraryName},
	{"className", &luna_wrapper_osgText_Style::_bind_className},
	{"setBevel", &luna_wrapper_osgText_Style::_bind_setBevel},
	{"getBevel", &luna_wrapper_osgText_Style::_bind_getBevel},
	{"setWidthRatio", &luna_wrapper_osgText_Style::_bind_setWidthRatio},
	{"getWidthRatio", &luna_wrapper_osgText_Style::_bind_getWidthRatio},
	{"setThicknessRatio", &luna_wrapper_osgText_Style::_bind_setThicknessRatio},
	{"getThicknessRatio", &luna_wrapper_osgText_Style::_bind_getThicknessRatio},
	{"setOutlineRatio", &luna_wrapper_osgText_Style::_bind_setOutlineRatio},
	{"getOutlineRatio", &luna_wrapper_osgText_Style::_bind_getOutlineRatio},
	{"setSampleDensity", &luna_wrapper_osgText_Style::_bind_setSampleDensity},
	{"getSampleDensity", &luna_wrapper_osgText_Style::_bind_getSampleDensity},
	{"getDefaultStyle", &luna_wrapper_osgText_Style::_bind_getDefaultStyle},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_Style::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgText_Style::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgText_Style::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgText_Style::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_Style::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgText_Style::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgText_Style::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_Style::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_Style::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgText_Style::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgText_Style::_bind_base_className},
	{"__eq", &luna_wrapper_osgText_Style::_bind___eq},
	{"fromVoid", &luna_wrapper_osgText_Style::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_Style::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_Style::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Style >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Style::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Style >::enumValues[] = {
	{0,0}
};


