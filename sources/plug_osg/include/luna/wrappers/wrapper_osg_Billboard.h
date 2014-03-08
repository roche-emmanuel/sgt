#ifndef _WRAPPERS_WRAPPER_OSG_BILLBOARD_H_
#define _WRAPPERS_WRAPPER_OSG_BILLBOARD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Billboard>

class wrapper_osg_Billboard : public osg::Billboard, public luna_wrapper_base {

public:
		

	~wrapper_osg_Billboard() {
		logDEBUG3("Calling delete function for wrapper osg_Billboard");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::Billboard*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Billboard(lua_State* L, lua_Table* dum) 
		: osg::Billboard(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_Billboard(lua_State* L, lua_Table* dum, const osg::Billboard & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::Billboard(arg1, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Billboard::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<void>());
		}

		return Billboard::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Billboard::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Billboard::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Billboard::getUserData();
	};

	// osg::Group * osg::Node::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Group*>());
		}

		return Billboard::asGroup();
	};

	// const osg::Group * osg::Node::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Group*>());
		}

		return Billboard::asGroup();
	};

	// osg::Transform * osg::Node::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Transform*>());
		}

		return Billboard::asTransform();
	};

	// const osg::Transform * osg::Node::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Transform*>());
		}

		return Billboard::asTransform();
	};

	// osg::Camera * osg::Node::asCamera()
	osg::Camera * asCamera() {
		if(_obj.pushFunction("asCamera")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Camera*>());
		}

		return Billboard::asCamera();
	};

	// const osg::Camera * osg::Node::asCamera() const
	const osg::Camera * asCamera() const {
		if(_obj.pushFunction("asCamera")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Camera*>());
		}

		return Billboard::asCamera();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Switch*>());
		}

		return Billboard::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Switch*>());
		}

		return Billboard::asSwitch();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return Billboard::ascend(nv);
	};

	// void osg::Node::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Billboard::traverse(arg1);
	};

	// osg::Geode * osg::Geode::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Geode*>());
		}

		return Billboard::asGeode();
	};

	// const osg::Geode * osg::Geode::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Geode*>());
		}

		return Billboard::asGeode();
	};

	// bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	bool removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) {
		if(_obj.pushFunction("removeDrawables")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(i);
			_obj.pushArg(numDrawablesToRemove);
			return (_obj.callFunction<bool>());
		}

		return Billboard::removeDrawables(i, numDrawablesToRemove);
	};

	// bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	bool replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) {
		if(_obj.pushFunction("replaceDrawable")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(origDraw);
			_obj.pushArg(newDraw);
			return (_obj.callFunction<bool>());
		}

		return Billboard::replaceDrawable(origDraw, newDraw);
	};

	// bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)
	bool setDrawable(unsigned int i, osg::Drawable * drawable) {
		if(_obj.pushFunction("setDrawable")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(i);
			_obj.pushArg(drawable);
			return (_obj.callFunction<bool>());
		}

		return Billboard::setDrawable(i, drawable);
	};

	// void osg::Geode::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Billboard::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Geode::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Billboard::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Billboard::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Billboard::cloneType();
	};

	// osg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return Billboard::clone(copyop);
	};

	// bool osg::Billboard::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Billboard::isSameKindAs(obj);
	};

	// const char * osg::Billboard::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<const char*>());
		}

		return Billboard::className();
	};

	// const char * osg::Billboard::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::Billboard*)this);
			return (_obj.callFunction<const char*>());
		}

		return Billboard::libraryName();
	};

	// void osg::Billboard::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return Billboard::accept(nv);
	};

	// bool osg::Billboard::addDrawable(osg::Drawable * gset)
	bool addDrawable(osg::Drawable * gset) {
		if(_obj.pushFunction("addDrawable")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(gset);
			return (_obj.callFunction<bool>());
		}

		return Billboard::addDrawable(gset);
	};

	// bool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)
	bool addDrawable(osg::Drawable * gset, const osg::Vec3f & pos) {
		if(_obj.pushFunction("addDrawable")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(gset);
			_obj.pushArg(&pos);
			return (_obj.callFunction<bool>());
		}

		return Billboard::addDrawable(gset, pos);
	};

	// bool osg::Billboard::removeDrawable(osg::Drawable * gset)
	bool removeDrawable(osg::Drawable * gset) {
		if(_obj.pushFunction("removeDrawable")) {
			_obj.pushArg((osg::Billboard*)this);
			_obj.pushArg(gset);
			return (_obj.callFunction<bool>());
		}

		return Billboard::removeDrawable(gset);
	};

	// osg::BoundingSphered osg::Billboard::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((osg::Billboard*)this);
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return Billboard::computeBound();
	};


	// Protected non-virtual methods:
	// void osg::Billboard::updateCache()
	void public_updateCache() {
		return osg::Billboard::updateCache();
	};

	// void osg::Node::addParent(osg::Group * node)
	void public_addParent(osg::Group * node) {
		return osg::Node::addParent(node);
	};

	// void osg::Node::removeParent(osg::Group * node)
	void public_removeParent(osg::Group * node) {
		return osg::Node::removeParent(node);
	};

	// void osg::Node::setNumChildrenRequiringUpdateTraversal(unsigned int num)
	void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
		return osg::Node::setNumChildrenRequiringUpdateTraversal(num);
	};

	// void osg::Node::setNumChildrenRequiringEventTraversal(unsigned int num)
	void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
		return osg::Node::setNumChildrenRequiringEventTraversal(num);
	};

	// void osg::Node::setNumChildrenWithCullingDisabled(unsigned int num)
	void public_setNumChildrenWithCullingDisabled(unsigned int num) {
		return osg::Node::setNumChildrenWithCullingDisabled(num);
	};

	// void osg::Node::setNumChildrenWithOccluderNodes(unsigned int num)
	void public_setNumChildrenWithOccluderNodes(unsigned int num) {
		return osg::Node::setNumChildrenWithOccluderNodes(num);
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
	inline static bool _lg_typecheck_public_updateCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_public_setNumChildrenWithCullingDisabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenWithOccluderNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// void osg::Billboard::public_updateCache()
	static int _bind_public_updateCache(lua_State *L) {
		if (!_lg_typecheck_public_updateCache(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::public_updateCache() function, expected prototype:\nvoid osg::Billboard::public_updateCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::public_updateCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_updateCache();

		return 0;
	}

	// void osg::Node::public_addParent(osg::Group * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_addParent(osg::Group * node) function, expected prototype:\nvoid osg::Node::public_addParent(osg::Group * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::public_addParent(osg::Group *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addParent(node);

		return 0;
	}

	// void osg::Node::public_removeParent(osg::Group * node)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_removeParent(osg::Group * node) function, expected prototype:\nvoid osg::Node::public_removeParent(osg::Group * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::public_removeParent(osg::Group *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeParent(node);

		return 0;
	}

	// void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenRequiringUpdateTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenRequiringEventTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int num)
	static int _bind_public_setNumChildrenWithCullingDisabled(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenWithCullingDisabled(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenWithCullingDisabled(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenWithCullingDisabled(num);

		return 0;
	}

	// void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int num)
	static int _bind_public_setNumChildrenWithOccluderNodes(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenWithOccluderNodes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int num) function, expected prototype:\nvoid osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Node::public_setNumChildrenWithOccluderNodes(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenWithOccluderNodes(num);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
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


		wrapper_osg_Billboard* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"updateCache",_bind_public_updateCache},
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
		{"setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"setNumChildrenWithCullingDisabled",_bind_public_setNumChildrenWithCullingDisabled},
		{"setNumChildrenWithOccluderNodes",_bind_public_setNumChildrenWithOccluderNodes},
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

