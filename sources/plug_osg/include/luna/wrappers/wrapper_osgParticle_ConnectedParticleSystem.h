#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_CONNECTEDPARTICLESYSTEM_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_CONNECTEDPARTICLESYSTEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgParticle/ConnectedParticleSystem>

class wrapper_osgParticle_ConnectedParticleSystem : public osgParticle::ConnectedParticleSystem, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_ConnectedParticleSystem() {
		logDEBUG3("Calling delete function for wrapper osgParticle_ConnectedParticleSystem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgParticle::ConnectedParticleSystem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_ConnectedParticleSystem(lua_State* L, lua_Table* dum) 
		: osgParticle::ConnectedParticleSystem(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgParticle_ConnectedParticleSystem(lua_State* L, lua_Table* dum, const osgParticle::ConnectedParticleSystem & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgParticle::ConnectedParticleSystem(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConnectedParticleSystem::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConnectedParticleSystem::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return ConnectedParticleSystem::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return ConnectedParticleSystem::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return ConnectedParticleSystem::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Drawable::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::releaseGLObjects(state);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::setDrawCallback(dc);
	};

	// void osgParticle::ParticleSystem::destroyParticle(int i)
	void destroyParticle(int i) {
		if(_obj.pushFunction("destroyParticle")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::destroyParticle(i);
	};

	// void osgParticle::ParticleSystem::update(double dt, osg::NodeVisitor & nv)
	void update(double dt, osg::NodeVisitor & nv) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(dt);
			_obj.pushArg(&nv);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::update(dt, nv);
	};

	// osg::BoundingBoxd osgParticle::ParticleSystem::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return ConnectedParticleSystem::computeBound();
	};

	// osg::Object * osgParticle::ConnectedParticleSystem::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return ConnectedParticleSystem::cloneType();
	};

	// osg::Object * osgParticle::ConnectedParticleSystem::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ConnectedParticleSystem::clone(arg1);
	};

	// bool osgParticle::ConnectedParticleSystem::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ConnectedParticleSystem::isSameKindAs(obj);
	};

	// const char * osgParticle::ConnectedParticleSystem::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<const char*>());
		}

		return ConnectedParticleSystem::libraryName();
	};

	// const char * osgParticle::ConnectedParticleSystem::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			return (_obj.callFunction<const char*>());
		}

		return ConnectedParticleSystem::className();
	};

	// osgParticle::Particle * osgParticle::ConnectedParticleSystem::createParticle(const osgParticle::Particle * ptemplate)
	osgParticle::Particle * createParticle(const osgParticle::Particle * ptemplate) {
		if(_obj.pushFunction("createParticle")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(ptemplate);
			return (_obj.callFunction<osgParticle::Particle*>());
		}

		return ConnectedParticleSystem::createParticle(ptemplate);
	};

	// void osgParticle::ConnectedParticleSystem::reuseParticle(int i)
	void reuseParticle(int i) {
		if(_obj.pushFunction("reuseParticle")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::reuseParticle(i);
	};

	// void osgParticle::ConnectedParticleSystem::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((osgParticle::ConnectedParticleSystem*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ConnectedParticleSystem::drawImplementation(renderInfo);
	};


	// Protected non-virtual methods:
	// osgParticle::ConnectedParticleSystem & osgParticle::ConnectedParticleSystem::operator=(const osgParticle::ConnectedParticleSystem & arg1)
	osgParticle::ConnectedParticleSystem & public_op_assign(const osgParticle::ConnectedParticleSystem & arg1) {
		return osgParticle::ConnectedParticleSystem::operator=(arg1);
	};

	// void osgParticle::ParticleSystem::update_bounds(const osg::Vec3f & p, float r)
	void public_update_bounds(const osg::Vec3f & p, float r) {
		return osgParticle::ParticleSystem::update_bounds(p, r);
	};

	// void osgParticle::ParticleSystem::single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const
	void public_single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const {
		return osgParticle::ParticleSystem::single_pass_render(renderInfo, modelview);
	};

	// void osgParticle::ParticleSystem::render_vertex_array(osg::RenderInfo & renderInfo) const
	void public_render_vertex_array(osg::RenderInfo & renderInfo) const {
		return osgParticle::ParticleSystem::render_vertex_array(renderInfo);
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

	inline static bool _lg_typecheck_public_update_bounds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_single_pass_render(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_render_vertex_array(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
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
	// osgParticle::ConnectedParticleSystem & osgParticle::ConnectedParticleSystem::public_op_assign(const osgParticle::ConnectedParticleSystem & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::ConnectedParticleSystem & osgParticle::ConnectedParticleSystem::public_op_assign(const osgParticle::ConnectedParticleSystem & arg1) function, expected prototype:\nosgParticle::ConnectedParticleSystem & osgParticle::ConnectedParticleSystem::public_op_assign(const osgParticle::ConnectedParticleSystem & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::ConnectedParticleSystem* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ConnectedParticleSystem >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ConnectedParticleSystem::public_op_assign function");
		}
		const osgParticle::ConnectedParticleSystem & _arg1=*_arg1_ptr;

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::ConnectedParticleSystem & osgParticle::ConnectedParticleSystem::public_op_assign(const osgParticle::ConnectedParticleSystem &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::ConnectedParticleSystem* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ConnectedParticleSystem >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::ParticleSystem::public_update_bounds(const osg::Vec3f & p, float r)
	static int _bind_public_update_bounds(lua_State *L) {
		if (!_lg_typecheck_public_update_bounds(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::public_update_bounds(const osg::Vec3f & p, float r) function, expected prototype:\nvoid osgParticle::ParticleSystem::public_update_bounds(const osg::Vec3f & p, float r)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* p_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::ParticleSystem::public_update_bounds function");
		}
		const osg::Vec3f & p=*p_ptr;
		float r=(float)lua_tonumber(L,3);

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::public_update_bounds(const osg::Vec3f &, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_update_bounds(p, r);

		return 0;
	}

	// void osgParticle::ParticleSystem::public_single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const
	static int _bind_public_single_pass_render(lua_State *L) {
		if (!_lg_typecheck_public_single_pass_render(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::public_single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const function, expected prototype:\nvoid osgParticle::ParticleSystem::public_single_pass_render(osg::RenderInfo & renderInfo, const osg::Matrixd & modelview) const\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ParticleSystem::public_single_pass_render function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		const osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !modelview_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modelview in osgParticle::ParticleSystem::public_single_pass_render function");
		}
		const osg::Matrixd & modelview=*modelview_ptr;

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::public_single_pass_render(osg::RenderInfo &, const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_single_pass_render(renderInfo, modelview);

		return 0;
	}

	// void osgParticle::ParticleSystem::public_render_vertex_array(osg::RenderInfo & renderInfo) const
	static int _bind_public_render_vertex_array(lua_State *L) {
		if (!_lg_typecheck_public_render_vertex_array(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystem::public_render_vertex_array(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgParticle::ParticleSystem::public_render_vertex_array(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::ParticleSystem::public_render_vertex_array function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystem::public_render_vertex_array(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_render_vertex_array(renderInfo);

		return 0;
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

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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


		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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


		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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

		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
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


		wrapper_osgParticle_ConnectedParticleSystem* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_ConnectedParticleSystem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"op_assign",_bind_public_op_assign},
		{"update_bounds",_bind_public_update_bounds},
		{"single_pass_render",_bind_public_single_pass_render},
		{"render_vertex_array",_bind_public_render_vertex_array},
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

