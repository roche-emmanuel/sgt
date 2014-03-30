#ifndef _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYCONSTRAINT_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYCONSTRAINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/DelaunayTriangulator>

class wrapper_osgUtil_DelaunayConstraint : public osgUtil::DelaunayConstraint, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_DelaunayConstraint() {
		logDEBUG3("Calling delete function for wrapper osgUtil_DelaunayConstraint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::DelaunayConstraint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_DelaunayConstraint(lua_State* L, lua_Table* dum) 
		: osgUtil::DelaunayConstraint(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DelaunayConstraint::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DelaunayConstraint::getUserData();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::computeDataVariance();
	};

	// osg::BoundingBoxd osg::Drawable::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return DelaunayConstraint::computeBound();
	};

	// void osg::Drawable::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setDrawCallback(dc);
	};

	// osg::Object * osg::Geometry::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return DelaunayConstraint::cloneType();
	};

	// osg::Object * osg::Geometry::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DelaunayConstraint::clone(arg1);
	};

	// bool osg::Geometry::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DelaunayConstraint::isSameKindAs(obj);
	};

	// const char * osg::Geometry::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<const char*>());
		}

		return DelaunayConstraint::libraryName();
	};

	// const char * osg::Geometry::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<const char*>());
		}

		return DelaunayConstraint::className();
	};

	// osg::Geometry * osg::Geometry::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return DelaunayConstraint::asGeometry();
	};

	// const osg::Geometry * osg::Geometry::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return DelaunayConstraint::asGeometry();
	};

	// void osg::Geometry::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::setUseVertexBufferObjects(flag);
	};

	// void osg::Geometry::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::dirtyDisplayList();
	};

	// void osg::Geometry::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::releaseGLObjects(state);
	};

	// unsigned int osg::Geometry::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DelaunayConstraint::getGLObjectSizeHint();
	};

	// void osg::Geometry::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::compileGLObjects(renderInfo);
	};

	// void osg::Geometry::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return DelaunayConstraint::drawImplementation(renderInfo);
	};

	// bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const
	bool contains(const osg::Vec3f & testpoint) const {
		if(_obj.pushFunction("contains")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(&testpoint);
			return (_obj.callFunction<bool>());
		}

		return DelaunayConstraint::contains(testpoint);
	};

	// bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const
	bool outside(const osg::Vec3f & testpoint) const {
		if(_obj.pushFunction("outside")) {
			_obj.pushArg((osgUtil::DelaunayConstraint*)this);
			_obj.pushArg(&testpoint);
			return (_obj.callFunction<bool>());
		}

		return DelaunayConstraint::outside(testpoint);
	};


	// Protected non-virtual methods:
	// bool osg::Geometry::verifyBindings(const osg::Geometry::ArrayData & arrayData) const
	bool public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const {
		return osg::Geometry::verifyBindings(arrayData);
	};

	// void osg::Geometry::computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)
	void public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName) {
		return osg::Geometry::computeCorrectBindingsAndArraySizes(arrayData, arrayName);
	};

	// void osg::Geometry::addVertexBufferObjectIfRequired(osg::Array * array)
	void public_addVertexBufferObjectIfRequired(osg::Array * array) {
		return osg::Geometry::addVertexBufferObjectIfRequired(array);
	};

	// void osg::Geometry::addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)
	void public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet) {
		return osg::Geometry::addElementBufferObjectIfRequired(primitiveSet);
	};

	// osg::Geometry & osg::Geometry::operator=(const osg::Geometry & arg1)
	osg::Geometry & public_op_assign(const osg::Geometry & arg1) {
		return osg::Geometry::operator=(arg1);
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
	inline static bool _lg_typecheck_public_verifyBindings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeCorrectBindingsAndArraySizes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addVertexBufferObjectIfRequired(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addElementBufferObjectIfRequired(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

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
	// bool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const
	static int _bind_public_verifyBindings(lua_State *L) {
		if (!_lg_typecheck_public_verifyBindings(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const function, expected prototype:\nbool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::public_verifyBindings function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_verifyBindings(arrayData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)
	static int _bind_public_computeCorrectBindingsAndArraySizes(lua_State *L) {
		if (!_lg_typecheck_public_computeCorrectBindingsAndArraySizes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName) function, expected prototype:\nvoid osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::public_computeCorrectBindingsAndArraySizes function");
		}
		osg::Geometry::ArrayData & arrayData=*arrayData_ptr;
		const char * arrayName=(const char *)lua_tostring(L,3);

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData &, const char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeCorrectBindingsAndArraySizes(arrayData, arrayName);

		return 0;
	}

	// void osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array * array)
	static int _bind_public_addVertexBufferObjectIfRequired(lua_State *L) {
		if (!_lg_typecheck_public_addVertexBufferObjectIfRequired(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addVertexBufferObjectIfRequired(array);

		return 0;
	}

	// void osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)
	static int _bind_public_addElementBufferObjectIfRequired(lua_State *L) {
		if (!_lg_typecheck_public_addElementBufferObjectIfRequired(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet) function, expected prototype:\nvoid osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PrimitiveSet* primitiveSet=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addElementBufferObjectIfRequired(primitiveSet);

		return 0;
	}

	// osg::Geometry & osg::Geometry::public_op_assign(const osg::Geometry & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry & osg::Geometry::public_op_assign(const osg::Geometry & arg1) function, expected prototype:\nosg::Geometry & osg::Geometry::public_op_assign(const osg::Geometry & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Geometry::public_op_assign function");
		}
		const osg::Geometry & _arg1=*_arg1_ptr;

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry & osg::Geometry::public_op_assign(const osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

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

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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


		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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


		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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

		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
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


		wrapper_osgUtil_DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"verifyBindings",_bind_public_verifyBindings},
		{"computeCorrectBindingsAndArraySizes",_bind_public_computeCorrectBindingsAndArraySizes},
		{"addVertexBufferObjectIfRequired",_bind_public_addVertexBufferObjectIfRequired},
		{"addElementBufferObjectIfRequired",_bind_public_addElementBufferObjectIfRequired},
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

