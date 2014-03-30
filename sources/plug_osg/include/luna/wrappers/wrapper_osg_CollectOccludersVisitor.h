#ifndef _WRAPPERS_WRAPPER_OSG_COLLECTOCCLUDERSVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_COLLECTOCCLUDERSVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/CollectOccludersVisitor>

class wrapper_osg_CollectOccludersVisitor : public osg::CollectOccludersVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osg_CollectOccludersVisitor() {
		logDEBUG3("Calling delete function for wrapper osg_CollectOccludersVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::CollectOccludersVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_CollectOccludersVisitor(lua_State* L, lua_Table* dum) 
		: osg::CollectOccludersVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CollectOccludersVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return CollectOccludersVisitor::getViewPoint();
	};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::inheritCullSettings(settings, inheritanceMask);
	};

	// const char * osg::CollectOccludersVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return CollectOccludersVisitor::libraryName();
	};

	// const char * osg::CollectOccludersVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return CollectOccludersVisitor::className();
	};

	// osg::CollectOccludersVisitor * osg::CollectOccludersVisitor::cloneType() const
	osg::CollectOccludersVisitor * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return (_obj.callFunction<osg::CollectOccludersVisitor*>());
		}

		return CollectOccludersVisitor::cloneType();
	};

	// void osg::CollectOccludersVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::reset();
	};

	// float osg::CollectOccludersVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CollectOccludersVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::CollectOccludersVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CollectOccludersVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// float osg::CollectOccludersVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return CollectOccludersVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Node & arg1)
	void apply(osg::Node & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(arg1);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};

	// void osg::CollectOccludersVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::CollectOccludersVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return CollectOccludersVisitor::apply(node);
	};


	// Protected non-virtual methods:
	// void osg::CollectOccludersVisitor::handle_cull_callbacks_and_traverse(osg::Node & node)
	void public_handle_cull_callbacks_and_traverse(osg::Node & node) {
		return osg::CollectOccludersVisitor::handle_cull_callbacks_and_traverse(node);
	};

	// void osg::CollectOccludersVisitor::handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode)
	void public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode) {
		return osg::CollectOccludersVisitor::handle_cull_callbacks_and_accept(node, acceptNode);
	};

	// osg::CollectOccludersVisitor & osg::CollectOccludersVisitor::operator=(const osg::CollectOccludersVisitor & arg1)
	osg::CollectOccludersVisitor & public_op_assign(const osg::CollectOccludersVisitor & arg1) {
		return osg::CollectOccludersVisitor::operator=(arg1);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};

	// void osg::CullStack::computeFrustumVolume()
	void public_computeFrustumVolume() {
		return osg::CullStack::computeFrustumVolume();
	};

	// osg::RefMatrixd * osg::CullStack::createOrReuseMatrix(const osg::Matrixd & value)
	osg::RefMatrixd * public_createOrReuseMatrix(const osg::Matrixd & value) {
		return osg::CullStack::createOrReuseMatrix(value);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_handle_cull_callbacks_and_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_handle_cull_callbacks_and_accept(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_public_computeFrustumVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_createOrReuseMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_traverse(osg::Node & node)
	static int _bind_public_handle_cull_callbacks_and_traverse(lua_State *L) {
		if (!_lg_typecheck_public_handle_cull_callbacks_and_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_traverse(osg::Node & node) function, expected prototype:\nvoid osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_traverse(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_traverse function");
		}
		osg::Node & node=*node_ptr;

		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_traverse(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_handle_cull_callbacks_and_traverse(node);

		return 0;
	}

	// void osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode)
	static int _bind_public_handle_cull_callbacks_and_accept(lua_State *L) {
		if (!_lg_typecheck_public_handle_cull_callbacks_and_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode) function, expected prototype:\nvoid osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_accept(osg::Node & node, osg::Node * acceptNode)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_accept function");
		}
		osg::Node & node=*node_ptr;
		osg::Node* acceptNode=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CollectOccludersVisitor::public_handle_cull_callbacks_and_accept(osg::Node &, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_handle_cull_callbacks_and_accept(node, acceptNode);

		return 0;
	}

	// osg::CollectOccludersVisitor & osg::CollectOccludersVisitor::public_op_assign(const osg::CollectOccludersVisitor & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::CollectOccludersVisitor & osg::CollectOccludersVisitor::public_op_assign(const osg::CollectOccludersVisitor & arg1) function, expected prototype:\nosg::CollectOccludersVisitor & osg::CollectOccludersVisitor::public_op_assign(const osg::CollectOccludersVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CollectOccludersVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::CollectOccludersVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CollectOccludersVisitor::public_op_assign function");
		}
		const osg::CollectOccludersVisitor & _arg1=*_arg1_ptr;

		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CollectOccludersVisitor & osg::CollectOccludersVisitor::public_op_assign(const osg::CollectOccludersVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CollectOccludersVisitor* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CollectOccludersVisitor >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
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


		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}

	// void osg::CullStack::public_computeFrustumVolume()
	static int _bind_public_computeFrustumVolume(lua_State *L) {
		if (!_lg_typecheck_public_computeFrustumVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::public_computeFrustumVolume() function, expected prototype:\nvoid osg::CullStack::public_computeFrustumVolume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::CullSettings >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::public_computeFrustumVolume(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeFrustumVolume();

		return 0;
	}

	// osg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd & value)
	static int _bind_public_createOrReuseMatrix(lua_State *L) {
		if (!_lg_typecheck_public_createOrReuseMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd & value) function, expected prototype:\nosg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd & value)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::CullStack::public_createOrReuseMatrix function");
		}
		const osg::Matrixd & value=*value_ptr;

		wrapper_osg_CollectOccludersVisitor* self=Luna< osg::CullSettings >::checkSubType< wrapper_osg_CollectOccludersVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osg::CullStack::public_createOrReuseMatrix(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->public_createOrReuseMatrix(value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"handle_cull_callbacks_and_traverse",_bind_public_handle_cull_callbacks_and_traverse},
		{"handle_cull_callbacks_and_accept",_bind_public_handle_cull_callbacks_and_accept},
		{"op_assign",_bind_public_op_assign},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{"computeFrustumVolume",_bind_public_computeFrustumVolume},
		{"createOrReuseMatrix",_bind_public_createOrReuseMatrix},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

