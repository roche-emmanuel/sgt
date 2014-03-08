#ifndef _WRAPPERS_WRAPPER_OSG_SHAPEDRAWABLE_H_
#define _WRAPPERS_WRAPPER_OSG_SHAPEDRAWABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/ShapeDrawable>

class wrapper_osg_ShapeDrawable : public osg::ShapeDrawable, public luna_wrapper_base {

public:
		

	~wrapper_osg_ShapeDrawable() {
		logDEBUG3("Calling delete function for wrapper osg_ShapeDrawable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ShapeDrawable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ShapeDrawable(lua_State* L, lua_Table* dum) 
		: osg::ShapeDrawable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_ShapeDrawable(lua_State* L, lua_Table* dum, osg::Shape * shape, osg::TessellationHints * hints = 0) 
		: osg::ShapeDrawable(shape, hints), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_ShapeDrawable(lua_State* L, lua_Table* dum, const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::ShapeDrawable(pg, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ShapeDrawable::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ShapeDrawable::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return ShapeDrawable::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return ShapeDrawable::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return ShapeDrawable::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Drawable::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::releaseGLObjects(state);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::setDrawCallback(dc);
	};

	// osg::Object * osg::ShapeDrawable::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return ShapeDrawable::cloneType();
	};

	// osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ShapeDrawable::clone(arg1);
	};

	// bool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ShapeDrawable::isSameKindAs(obj);
	};

	// const char * osg::ShapeDrawable::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<const char*>());
		}

		return ShapeDrawable::libraryName();
	};

	// const char * osg::ShapeDrawable::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return (_obj.callFunction<const char*>());
		}

		return ShapeDrawable::className();
	};

	// void osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ShapeDrawable::drawImplementation(renderInfo);
	};

	// osg::BoundingBoxd osg::ShapeDrawable::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((osg::ShapeDrawable*)this);
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return ShapeDrawable::computeBound();
	};


	// Protected non-virtual methods:
	// osg::ShapeDrawable & osg::ShapeDrawable::operator=(const osg::ShapeDrawable & arg1)
	osg::ShapeDrawable & public_op_assign(const osg::ShapeDrawable & arg1) {
		return osg::ShapeDrawable::operator=(arg1);
	};

	// void osg::Drawable::setBound(const osg::BoundingBoxd & bb) const
	void public_setBound(const osg::BoundingBoxd & bb) const {
		return osg::Drawable::setBound(bb);
	};

	// void osg::Drawable::addParent(osg::Node * node)
	void public_addParent(osg::Node * node) {
		return osg::Drawable::addParent(node);
	};

	// void osg::Drawable::removeParent(osg::Node * node)
	void public_removeParent(osg::Node * node) {
		return osg::Drawable::removeParent(node);
	};

	// void osg::Drawable::setNumChildrenRequiringUpdateTraversal(unsigned int num)
	void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
		return osg::Drawable::setNumChildrenRequiringUpdateTraversal(num);
	};

	// unsigned int osg::Drawable::getNumChildrenRequiringUpdateTraversal() const
	unsigned int public_getNumChildrenRequiringUpdateTraversal() const {
		return osg::Drawable::getNumChildrenRequiringUpdateTraversal();
	};

	// void osg::Drawable::setNumChildrenRequiringEventTraversal(unsigned int num)
	void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
		return osg::Drawable::setNumChildrenRequiringEventTraversal(num);
	};

	// unsigned int osg::Drawable::getNumChildrenRequiringEventTraversal() const
	unsigned int public_getNumChildrenRequiringEventTraversal() const {
		return osg::Drawable::getNumChildrenRequiringEventTraversal();
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
	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
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

	inline static bool _lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::ShapeDrawable & osg::ShapeDrawable::public_op_assign(const osg::ShapeDrawable & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable & osg::ShapeDrawable::public_op_assign(const osg::ShapeDrawable & arg1) function, expected prototype:\nosg::ShapeDrawable & osg::ShapeDrawable::public_op_assign(const osg::ShapeDrawable & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ShapeDrawable* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShapeDrawable >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeDrawable::public_op_assign function");
		}
		const osg::ShapeDrawable & _arg1=*_arg1_ptr;

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ShapeDrawable & osg::ShapeDrawable::public_op_assign(const osg::ShapeDrawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShapeDrawable* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShapeDrawable >::push(L,lret,false);

		return 1;
	}

	// void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const
	static int _bind_public_setBound(lua_State *L) {
		if (!_lg_typecheck_public_setBound(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const function, expected prototype:\nvoid osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Drawable::public_setBound function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setBound(const osg::BoundingBoxd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setBound(bb);

		return 0;
	}

	// void osg::Drawable::public_addParent(osg::Node * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_addParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_addParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_addParent(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addParent(node);

		return 0;
	}

	// void osg::Drawable::public_removeParent(osg::Node * node)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_removeParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_removeParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_removeParent(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeParent(node);

		return 0;
	}

	// void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const
	static int _bind_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_getNumChildrenRequiringUpdateTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const
	static int _bind_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_getNumChildrenRequiringEventTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
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


		wrapper_osg_ShapeDrawable* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ShapeDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"op_assign",_bind_public_op_assign},
		{"setBound",_bind_public_setBound},
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
		{"setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"getNumChildrenRequiringUpdateTraversal",_bind_public_getNumChildrenRequiringUpdateTraversal},
		{"setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"getNumChildrenRequiringEventTraversal",_bind_public_getNumChildrenRequiringEventTraversal},
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

