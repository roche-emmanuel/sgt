#ifndef _WRAPPERS_WRAPPER_OSG_MATRIXTRANSFORM_H_
#define _WRAPPERS_WRAPPER_OSG_MATRIXTRANSFORM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/MatrixTransform>

class wrapper_osg_MatrixTransform : public osg::MatrixTransform, public luna_wrapper_base {

public:
		

	~wrapper_osg_MatrixTransform() {
		logDEBUG3("Calling delete function for wrapper osg_MatrixTransform");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::MatrixTransform*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_MatrixTransform(lua_State* L, lua_Table* dum) 
		: osg::MatrixTransform(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_MatrixTransform(lua_State* L, lua_Table* dum, const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::MatrixTransform(arg1, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_MatrixTransform(lua_State* L, lua_Table* dum, const osg::Matrixd & matix) 
		: osg::MatrixTransform(matix), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osg::Group::childRemoved(unsigned int arg1, unsigned int arg2)
	void childRemoved(unsigned int arg1, unsigned int arg2) {
		if(_obj.pushFunction("childRemoved")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::childRemoved(arg1, arg2);
	};

	// void osg::Group::childInserted(unsigned int arg1)
	void childInserted(unsigned int arg1) {
		if(_obj.pushFunction("childInserted")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::childInserted(arg1);
	};

public:
	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return MatrixTransform::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return MatrixTransform::getUserData();
	};

	// osg::Camera * osg::Node::asCamera()
	osg::Camera * asCamera() {
		if(_obj.pushFunction("asCamera")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Camera*>());
		}

		return MatrixTransform::asCamera();
	};

	// const osg::Camera * osg::Node::asCamera() const
	const osg::Camera * asCamera() const {
		if(_obj.pushFunction("asCamera")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Camera*>());
		}

		return MatrixTransform::asCamera();
	};

	// osg::Switch * osg::Node::asSwitch()
	osg::Switch * asSwitch() {
		if(_obj.pushFunction("asSwitch")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Switch*>());
		}

		return MatrixTransform::asSwitch();
	};

	// const osg::Switch * osg::Node::asSwitch() const
	const osg::Switch * asSwitch() const {
		if(_obj.pushFunction("asSwitch")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Switch*>());
		}

		return MatrixTransform::asSwitch();
	};

	// osg::Geode * osg::Node::asGeode()
	osg::Geode * asGeode() {
		if(_obj.pushFunction("asGeode")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Geode*>());
		}

		return MatrixTransform::asGeode();
	};

	// const osg::Geode * osg::Node::asGeode() const
	const osg::Geode * asGeode() const {
		if(_obj.pushFunction("asGeode")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Geode*>());
		}

		return MatrixTransform::asGeode();
	};

	// void osg::Node::ascend(osg::NodeVisitor & nv)
	void ascend(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("ascend")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::ascend(nv);
	};

	// osg::Group * osg::Group::asGroup()
	osg::Group * asGroup() {
		if(_obj.pushFunction("asGroup")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Group*>());
		}

		return MatrixTransform::asGroup();
	};

	// const osg::Group * osg::Group::asGroup() const
	const osg::Group * asGroup() const {
		if(_obj.pushFunction("asGroup")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Group*>());
		}

		return MatrixTransform::asGroup();
	};

	// void osg::Group::traverse(osg::NodeVisitor & arg1)
	void traverse(osg::NodeVisitor & arg1) {
		if(_obj.pushFunction("traverse")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::traverse(arg1);
	};

	// bool osg::Group::addChild(osg::Node * child)
	bool addChild(osg::Node * child) {
		if(_obj.pushFunction("addChild")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::addChild(child);
	};

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	bool insertChild(unsigned int index, osg::Node * child) {
		if(_obj.pushFunction("insertChild")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(index);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::insertChild(index, child);
	};

	// bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	bool removeChildren(unsigned int pos, unsigned int numChildrenToRemove) {
		if(_obj.pushFunction("removeChildren")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(pos);
			_obj.pushArg(numChildrenToRemove);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::removeChildren(pos, numChildrenToRemove);
	};

	// bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)
	bool replaceChild(osg::Node * origChild, osg::Node * newChild) {
		if(_obj.pushFunction("replaceChild")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(origChild);
			_obj.pushArg(newChild);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::replaceChild(origChild, newChild);
	};

	// bool osg::Group::setChild(unsigned int i, osg::Node * node)
	bool setChild(unsigned int i, osg::Node * node) {
		if(_obj.pushFunction("setChild")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(i);
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::setChild(i, node);
	};

	// void osg::Group::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Group::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::releaseGLObjects(arg1);
	};

	// osg::Transform * osg::Transform::asTransform()
	osg::Transform * asTransform() {
		if(_obj.pushFunction("asTransform")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Transform*>());
		}

		return MatrixTransform::asTransform();
	};

	// const osg::Transform * osg::Transform::asTransform() const
	const osg::Transform * asTransform() const {
		if(_obj.pushFunction("asTransform")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Transform*>());
		}

		return MatrixTransform::asTransform();
	};

	// osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()
	osg::PositionAttitudeTransform * asPositionAttitudeTransform() {
		if(_obj.pushFunction("asPositionAttitudeTransform")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::PositionAttitudeTransform*>());
		}

		return MatrixTransform::asPositionAttitudeTransform();
	};

	// const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const
	const osg::PositionAttitudeTransform * asPositionAttitudeTransform() const {
		if(_obj.pushFunction("asPositionAttitudeTransform")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::PositionAttitudeTransform*>());
		}

		return MatrixTransform::asPositionAttitudeTransform();
	};

	// osg::BoundingSphered osg::Transform::computeBound() const
	osg::BoundingSphered computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return *(_obj.callFunction<osg::BoundingSphered*>());
		}

		return MatrixTransform::computeBound();
	};

	// osg::Object * osg::MatrixTransform::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return MatrixTransform::cloneType();
	};

	// osg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const
	osg::Object * clone(const osg::CopyOp & copyop) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(&copyop);
			return (_obj.callFunction<osg::Object*>());
		}

		return MatrixTransform::clone(copyop);
	};

	// bool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::isSameKindAs(obj);
	};

	// const char * osg::MatrixTransform::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<const char*>());
		}

		return MatrixTransform::className();
	};

	// const char * osg::MatrixTransform::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<const char*>());
		}

		return MatrixTransform::libraryName();
	};

	// void osg::MatrixTransform::accept(osg::NodeVisitor & nv)
	void accept(osg::NodeVisitor & nv) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return MatrixTransform::accept(nv);
	};

	// osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform()
	osg::MatrixTransform * asMatrixTransform() {
		if(_obj.pushFunction("asMatrixTransform")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::MatrixTransform*>());
		}

		return MatrixTransform::asMatrixTransform();
	};

	// const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const
	const osg::MatrixTransform * asMatrixTransform() const {
		if(_obj.pushFunction("asMatrixTransform")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			return (_obj.callFunction<osg::MatrixTransform*>());
		}

		return MatrixTransform::asMatrixTransform();
	};

	// bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	bool computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const {
		if(_obj.pushFunction("computeLocalToWorldMatrix")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(&matrix);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::computeLocalToWorldMatrix(matrix, arg2);
	};

	// bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	bool computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const {
		if(_obj.pushFunction("computeWorldToLocalMatrix")) {
			_obj.pushArg((osg::MatrixTransform*)this);
			_obj.pushArg(&matrix);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return MatrixTransform::computeWorldToLocalMatrix(matrix, arg2);
	};


	// Protected non-virtual methods:
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
	// void osg::Node::public_addParent(osg::Group * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Node::public_addParent(osg::Group * node) function, expected prototype:\nvoid osg::Node::public_addParent(osg::Group * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* node=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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


		wrapper_osg_MatrixTransform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_MatrixTransform >(L,1);
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

