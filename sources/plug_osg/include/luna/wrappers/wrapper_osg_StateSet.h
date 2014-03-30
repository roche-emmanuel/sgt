#ifndef _WRAPPERS_WRAPPER_OSG_STATESET_H_
#define _WRAPPERS_WRAPPER_OSG_STATESET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/StateSet>

class wrapper_osg_StateSet : public osg::StateSet, public luna_wrapper_base {

public:
		

	~wrapper_osg_StateSet() {
		logDEBUG3("Calling delete function for wrapper osg_StateSet");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::StateSet*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_StateSet(lua_State* L, lua_Table* dum) 
		: osg::StateSet(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_StateSet(lua_State* L, lua_Table* dum, const osg::StateSet & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::StateSet(arg1, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StateSet::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StateSet::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::StateSet*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSet::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::StateSet*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSet::getUserData();
	};

	// osg::Object * osg::StateSet::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::StateSet*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return StateSet::cloneType();
	};

	// osg::Object * osg::StateSet::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return StateSet::clone(arg1);
	};

	// bool osg::StateSet::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StateSet::isSameKindAs(obj);
	};

	// const char * osg::StateSet::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::StateSet*)this);
			return (_obj.callFunction<const char*>());
		}

		return StateSet::libraryName();
	};

	// const char * osg::StateSet::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::StateSet*)this);
			return (_obj.callFunction<const char*>());
		}

		return StateSet::className();
	};

	// void osg::StateSet::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::StateSet*)this);
			return (_obj.callFunction<void>());
		}

		return StateSet::computeDataVariance();
	};

	// void osg::StateSet::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return StateSet::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::StateSet::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::StateSet*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return StateSet::releaseGLObjects(state);
	};


	// Protected non-virtual methods:
	// void osg::StateSet::addParent(osg::Object * object)
	void public_addParent(osg::Object * object) {
		return osg::StateSet::addParent(object);
	};

	// void osg::StateSet::removeParent(osg::Object * object)
	void public_removeParent(osg::Object * object) {
		return osg::StateSet::removeParent(object);
	};

	// osg::StateSet::ModeList & osg::StateSet::getOrCreateTextureModeList(unsigned int unit)
	osg::StateSet::ModeList & public_getOrCreateTextureModeList(unsigned int unit) {
		return osg::StateSet::getOrCreateTextureModeList(unit);
	};

	// osg::StateSet::AttributeList & osg::StateSet::getOrCreateTextureAttributeList(unsigned int unit)
	osg::StateSet::AttributeList & public_getOrCreateTextureAttributeList(unsigned int unit) {
		return osg::StateSet::getOrCreateTextureAttributeList(unit);
	};

	// int osg::StateSet::compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs)
	int public_compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs) {
		return osg::StateSet::compareModes(lhs, rhs);
	};

	// int osg::StateSet::compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)
	int public_compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs) {
		return osg::StateSet::compareAttributePtrs(lhs, rhs);
	};

	// int osg::StateSet::compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)
	int public_compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs) {
		return osg::StateSet::compareAttributeContents(lhs, rhs);
	};

	// void osg::StateSet::setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value)
	void public_setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value) {
		return osg::StateSet::setMode(modeList, mode, value);
	};

	// void osg::StateSet::setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode)
	void public_setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode) {
		return osg::StateSet::setModeToInherit(modeList, mode);
	};

	// unsigned int osg::StateSet::getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const
	unsigned int public_getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const {
		return osg::StateSet::getMode(modeList, mode);
	};

	// void osg::StateSet::setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF)
	void public_setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF) {
		return osg::StateSet::setAttribute(attributeList, attribute, value);
	};

	// osg::StateAttribute * osg::StateSet::getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member)
	osg::StateAttribute * public_getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) {
		return osg::StateSet::getAttribute(attributeList, type, member);
	};

	// const osg::StateSet::RefAttributePair * osg::StateSet::getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const
	const osg::StateSet::RefAttributePair * public_getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const {
		return osg::StateSet::getAttributePair(attributeList, type, member);
	};

	// void osg::StateSet::setNumChildrenRequiringUpdateTraversal(unsigned int num)
	void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
		return osg::StateSet::setNumChildrenRequiringUpdateTraversal(num);
	};

	// void osg::StateSet::setNumChildrenRequiringEventTraversal(unsigned int num)
	void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
		return osg::StateSet::setNumChildrenRequiringEventTraversal(num);
	};

	// osg::StateSet & osg::StateSet::operator=(const osg::StateSet & arg1)
	osg::StateSet & public_op_assign(const osg::StateSet & arg1) {
		return osg::StateSet::operator=(arg1);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getOrCreateTextureModeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getOrCreateTextureAttributeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_compareModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50375310) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50375310) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_compareAttributePtrs(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94158825) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,94158825) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_compareAttributeContents(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94158825) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,94158825) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setMode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50375310) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setModeToInherit(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50375310) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50375310) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94158825) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94158825) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getAttributePair(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94158825) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

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
	// void osg::StateSet::public_addParent(osg::Object * object)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_addParent(osg::Object * object) function, expected prototype:\nvoid osg::StateSet::public_addParent(osg::Object * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_addParent(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addParent(object);

		return 0;
	}

	// void osg::StateSet::public_removeParent(osg::Object * object)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_removeParent(osg::Object * object) function, expected prototype:\nvoid osg::StateSet::public_removeParent(osg::Object * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_removeParent(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeParent(object);

		return 0;
	}

	// osg::StateSet::ModeList & osg::StateSet::public_getOrCreateTextureModeList(unsigned int unit)
	static int _bind_public_getOrCreateTextureModeList(lua_State *L) {
		if (!_lg_typecheck_public_getOrCreateTextureModeList(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::ModeList & osg::StateSet::public_getOrCreateTextureModeList(unsigned int unit) function, expected prototype:\nosg::StateSet::ModeList & osg::StateSet::public_getOrCreateTextureModeList(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::ModeList & osg::StateSet::public_getOrCreateTextureModeList(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::ModeList* lret = &self->public_getOrCreateTextureModeList(unit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::ModeList >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet::AttributeList & osg::StateSet::public_getOrCreateTextureAttributeList(unsigned int unit)
	static int _bind_public_getOrCreateTextureAttributeList(lua_State *L) {
		if (!_lg_typecheck_public_getOrCreateTextureAttributeList(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::AttributeList & osg::StateSet::public_getOrCreateTextureAttributeList(unsigned int unit) function, expected prototype:\nosg::StateSet::AttributeList & osg::StateSet::public_getOrCreateTextureAttributeList(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::AttributeList & osg::StateSet::public_getOrCreateTextureAttributeList(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::AttributeList* lret = &self->public_getOrCreateTextureAttributeList(unit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::AttributeList >::push(L,lret,false);

		return 1;
	}

	// int osg::StateSet::public_compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs)
	static int _bind_public_compareModes(lua_State *L) {
		if (!_lg_typecheck_public_compareModes(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateSet::public_compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs) function, expected prototype:\nint osg::StateSet::public_compareModes(const osg::StateSet::ModeList & lhs, const osg::StateSet::ModeList & rhs)\nClass arguments details:\narg 1 ID = 59463386\narg 2 ID = 59463386\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet::ModeList* lhs_ptr=(Luna< std::map< unsigned int, unsigned int > >::checkSubType< osg::StateSet::ModeList >(L,2));
		if( !lhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::StateSet::public_compareModes function");
		}
		const osg::StateSet::ModeList & lhs=*lhs_ptr;
		const osg::StateSet::ModeList* rhs_ptr=(Luna< std::map< unsigned int, unsigned int > >::checkSubType< osg::StateSet::ModeList >(L,3));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::public_compareModes function");
		}
		const osg::StateSet::ModeList & rhs=*rhs_ptr;

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateSet::public_compareModes(const osg::StateSet::ModeList &, const osg::StateSet::ModeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_compareModes(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::StateSet::public_compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)
	static int _bind_public_compareAttributePtrs(lua_State *L) {
		if (!_lg_typecheck_public_compareAttributePtrs(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateSet::public_compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs) function, expected prototype:\nint osg::StateSet::public_compareAttributePtrs(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)\nClass arguments details:\narg 1 ID = 84373691\narg 2 ID = 84373691\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet::AttributeList* lhs_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,2));
		if( !lhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::StateSet::public_compareAttributePtrs function");
		}
		const osg::StateSet::AttributeList & lhs=*lhs_ptr;
		const osg::StateSet::AttributeList* rhs_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,3));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::public_compareAttributePtrs function");
		}
		const osg::StateSet::AttributeList & rhs=*rhs_ptr;

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateSet::public_compareAttributePtrs(const osg::StateSet::AttributeList &, const osg::StateSet::AttributeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_compareAttributePtrs(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::StateSet::public_compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)
	static int _bind_public_compareAttributeContents(lua_State *L) {
		if (!_lg_typecheck_public_compareAttributeContents(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateSet::public_compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs) function, expected prototype:\nint osg::StateSet::public_compareAttributeContents(const osg::StateSet::AttributeList & lhs, const osg::StateSet::AttributeList & rhs)\nClass arguments details:\narg 1 ID = 84373691\narg 2 ID = 84373691\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet::AttributeList* lhs_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,2));
		if( !lhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lhs in osg::StateSet::public_compareAttributeContents function");
		}
		const osg::StateSet::AttributeList & lhs=*lhs_ptr;
		const osg::StateSet::AttributeList* rhs_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,3));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::public_compareAttributeContents function");
		}
		const osg::StateSet::AttributeList & rhs=*rhs_ptr;

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateSet::public_compareAttributeContents(const osg::StateSet::AttributeList &, const osg::StateSet::AttributeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_compareAttributeContents(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::public_setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value)
	static int _bind_public_setMode(lua_State *L) {
		if (!_lg_typecheck_public_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value) function, expected prototype:\nvoid osg::StateSet::public_setMode(osg::StateSet::ModeList & modeList, unsigned int mode, unsigned int value)\nClass arguments details:\narg 1 ID = 59463386\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::ModeList* modeList_ptr=(Luna< std::map< unsigned int, unsigned int > >::checkSubType< osg::StateSet::ModeList >(L,2));
		if( !modeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modeList in osg::StateSet::public_setMode function");
		}
		osg::StateSet::ModeList & modeList=*modeList_ptr;
		unsigned int mode=(unsigned int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_setMode(osg::StateSet::ModeList &, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setMode(modeList, mode, value);

		return 0;
	}

	// void osg::StateSet::public_setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode)
	static int _bind_public_setModeToInherit(lua_State *L) {
		if (!_lg_typecheck_public_setModeToInherit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode) function, expected prototype:\nvoid osg::StateSet::public_setModeToInherit(osg::StateSet::ModeList & modeList, unsigned int mode)\nClass arguments details:\narg 1 ID = 59463386\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::ModeList* modeList_ptr=(Luna< std::map< unsigned int, unsigned int > >::checkSubType< osg::StateSet::ModeList >(L,2));
		if( !modeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modeList in osg::StateSet::public_setModeToInherit function");
		}
		osg::StateSet::ModeList & modeList=*modeList_ptr;
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_setModeToInherit(osg::StateSet::ModeList &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setModeToInherit(modeList, mode);

		return 0;
	}

	// unsigned int osg::StateSet::public_getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const
	static int _bind_public_getMode(lua_State *L) {
		if (!_lg_typecheck_public_getMode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::public_getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const function, expected prototype:\nunsigned int osg::StateSet::public_getMode(const osg::StateSet::ModeList & modeList, unsigned int mode) const\nClass arguments details:\narg 1 ID = 59463386\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet::ModeList* modeList_ptr=(Luna< std::map< unsigned int, unsigned int > >::checkSubType< osg::StateSet::ModeList >(L,2));
		if( !modeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modeList in osg::StateSet::public_getMode function");
		}
		const osg::StateSet::ModeList & modeList=*modeList_ptr;
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::public_getMode(const osg::StateSet::ModeList &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_getMode(modeList, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::public_setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF)
	static int _bind_public_setAttribute(lua_State *L) {
		if (!_lg_typecheck_public_setAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF) function, expected prototype:\nvoid osg::StateSet::public_setAttribute(osg::StateSet::AttributeList & attributeList, osg::StateAttribute * attribute, const unsigned int value = osg::StateAttribute::OFF)\nClass arguments details:\narg 1 ID = 84373691\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateSet::AttributeList* attributeList_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,2));
		if( !attributeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attributeList in osg::StateSet::public_setAttribute function");
		}
		osg::StateSet::AttributeList & attributeList=*attributeList_ptr;
		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));
		const unsigned int value=luatop>3 ? (const unsigned int)lua_tointeger(L,4) : (const unsigned int)osg::StateAttribute::OFF;

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_setAttribute(osg::StateSet::AttributeList &, osg::StateAttribute *, const unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setAttribute(attributeList, attribute, value);

		return 0;
	}

	// osg::StateAttribute * osg::StateSet::public_getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member)
	static int _bind_public_getAttribute(lua_State *L) {
		if (!_lg_typecheck_public_getAttribute(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osg::StateSet::public_getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) function, expected prototype:\nosg::StateAttribute * osg::StateSet::public_getAttribute(osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member)\nClass arguments details:\narg 1 ID = 84373691\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::AttributeList* attributeList_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,2));
		if( !attributeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attributeList in osg::StateSet::public_getAttribute function");
		}
		osg::StateSet::AttributeList & attributeList=*attributeList_ptr;
		const osg::StateAttribute::Type type=(const osg::StateAttribute::Type)lua_tointeger(L,3);
		unsigned int member=(unsigned int)lua_tointeger(L,4);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osg::StateSet::public_getAttribute(osg::StateSet::AttributeList &, const osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->public_getAttribute(attributeList, type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::RefAttributePair * osg::StateSet::public_getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const
	static int _bind_public_getAttributePair(lua_State *L) {
		if (!_lg_typecheck_public_getAttributePair(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::RefAttributePair * osg::StateSet::public_getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const function, expected prototype:\nconst osg::StateSet::RefAttributePair * osg::StateSet::public_getAttributePair(const osg::StateSet::AttributeList & attributeList, const osg::StateAttribute::Type type, unsigned int member) const\nClass arguments details:\narg 1 ID = 84373691\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet::AttributeList* attributeList_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,2));
		if( !attributeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attributeList in osg::StateSet::public_getAttributePair function");
		}
		const osg::StateSet::AttributeList & attributeList=*attributeList_ptr;
		const osg::StateAttribute::Type type=(const osg::StateAttribute::Type)lua_tointeger(L,3);
		unsigned int member=(unsigned int)lua_tointeger(L,4);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::RefAttributePair * osg::StateSet::public_getAttributePair(const osg::StateSet::AttributeList &, const osg::StateAttribute::Type, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::RefAttributePair * lret = self->public_getAttributePair(attributeList, type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::RefAttributePair >::push(L,lret,false);

		return 1;
	}

	// void osg::StateSet::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::StateSet::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_setNumChildrenRequiringUpdateTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// void osg::StateSet::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::StateSet::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::public_setNumChildrenRequiringEventTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// osg::StateSet & osg::StateSet::public_op_assign(const osg::StateSet & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet & osg::StateSet::public_op_assign(const osg::StateSet & arg1) function, expected prototype:\nosg::StateSet & osg::StateSet::public_op_assign(const osg::StateSet & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateSet::public_op_assign function");
		}
		const osg::StateSet & _arg1=*_arg1_ptr;

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet & osg::StateSet::public_op_assign(const osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
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


		wrapper_osg_StateSet* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
		{"getOrCreateTextureModeList",_bind_public_getOrCreateTextureModeList},
		{"getOrCreateTextureAttributeList",_bind_public_getOrCreateTextureAttributeList},
		{"compareModes",_bind_public_compareModes},
		{"compareAttributePtrs",_bind_public_compareAttributePtrs},
		{"compareAttributeContents",_bind_public_compareAttributeContents},
		{"setMode",_bind_public_setMode},
		{"setModeToInherit",_bind_public_setModeToInherit},
		{"getMode",_bind_public_getMode},
		{"setAttribute",_bind_public_setAttribute},
		{"getAttribute",_bind_public_getAttribute},
		{"getAttributePair",_bind_public_getAttributePair},
		{"setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"op_assign",_bind_public_op_assign},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

