#ifndef _WRAPPERS_WRAPPER_OSGGA_EVENTVISITOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_EVENTVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/EventVisitor>

class wrapper_osgGA_EventVisitor : public osgGA::EventVisitor, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_EventVisitor() {
		logDEBUG3("Calling delete function for wrapper osgGA_EventVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::EventVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_EventVisitor(lua_State* L, lua_Table* dum) 
		: osgGA::EventVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::setThreadSafeRefUnref(threadSafe);
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return EventVisitor::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return EventVisitor::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return EventVisitor::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return EventVisitor::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return EventVisitor::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgGA::EventVisitor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return EventVisitor::libraryName();
	};

	// const char * osgGA::EventVisitor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			return (_obj.callFunction<const char*>());
		}

		return EventVisitor::className();
	};

	// void osgGA::EventVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::reset();
	};

	// void osgGA::EventVisitor::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Geode & node)
	void apply(osg::Geode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Billboard & node)
	void apply(osg::Billboard & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::LightSource & node)
	void apply(osg::LightSource & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Group & node)
	void apply(osg::Group & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Transform & node)
	void apply(osg::Transform & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Projection & node)
	void apply(osg::Projection & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::Switch & node)
	void apply(osg::Switch & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::LOD & node)
	void apply(osg::LOD & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};

	// void osgGA::EventVisitor::apply(osg::OccluderNode & node)
	void apply(osg::OccluderNode & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgGA::EventVisitor*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return EventVisitor::apply(node);
	};


	// Protected non-virtual methods:
	// void osgGA::EventVisitor::handle_callbacks(osg::StateSet * stateset)
	void public_handle_callbacks(osg::StateSet * stateset) {
		return osgGA::EventVisitor::handle_callbacks(stateset);
	};

	// void osgGA::EventVisitor::handle_callbacks_and_traverse(osg::Node & node)
	void public_handle_callbacks_and_traverse(osg::Node & node) {
		return osgGA::EventVisitor::handle_callbacks_and_traverse(node);
	};

	// void osgGA::EventVisitor::handle_geode_callbacks(osg::Geode & node)
	void public_handle_geode_callbacks(osg::Geode & node) {
		return osgGA::EventVisitor::handle_geode_callbacks(node);
	};

	// void osgGA::EventVisitor::traverseGeode(osg::Geode & geode)
	void public_traverseGeode(osg::Geode & geode) {
		return osgGA::EventVisitor::traverseGeode(geode);
	};

	// osgGA::EventVisitor & osgGA::EventVisitor::operator=(const osgGA::EventVisitor & arg1)
	osgGA::EventVisitor & public_op_assign(const osgGA::EventVisitor & arg1) {
		return osgGA::EventVisitor::operator=(arg1);
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
	inline static bool _lg_typecheck_public_handle_callbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_handle_callbacks_and_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_handle_geode_callbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_traverseGeode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// void osgGA::EventVisitor::public_handle_callbacks(osg::StateSet * stateset)
	static int _bind_public_handle_callbacks(lua_State *L) {
		if (!_lg_typecheck_public_handle_callbacks(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::public_handle_callbacks(osg::StateSet * stateset) function, expected prototype:\nvoid osgGA::EventVisitor::public_handle_callbacks(osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::public_handle_callbacks(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_handle_callbacks(stateset);

		return 0;
	}

	// void osgGA::EventVisitor::public_handle_callbacks_and_traverse(osg::Node & node)
	static int _bind_public_handle_callbacks_and_traverse(lua_State *L) {
		if (!_lg_typecheck_public_handle_callbacks_and_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::public_handle_callbacks_and_traverse(osg::Node & node) function, expected prototype:\nvoid osgGA::EventVisitor::public_handle_callbacks_and_traverse(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::public_handle_callbacks_and_traverse function");
		}
		osg::Node & node=*node_ptr;

		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::public_handle_callbacks_and_traverse(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_handle_callbacks_and_traverse(node);

		return 0;
	}

	// void osgGA::EventVisitor::public_handle_geode_callbacks(osg::Geode & node)
	static int _bind_public_handle_geode_callbacks(lua_State *L) {
		if (!_lg_typecheck_public_handle_geode_callbacks(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::public_handle_geode_callbacks(osg::Geode & node) function, expected prototype:\nvoid osgGA::EventVisitor::public_handle_geode_callbacks(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgGA::EventVisitor::public_handle_geode_callbacks function");
		}
		osg::Geode & node=*node_ptr;

		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::public_handle_geode_callbacks(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_handle_geode_callbacks(node);

		return 0;
	}

	// void osgGA::EventVisitor::public_traverseGeode(osg::Geode & geode)
	static int _bind_public_traverseGeode(lua_State *L) {
		if (!_lg_typecheck_public_traverseGeode(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::EventVisitor::public_traverseGeode(osg::Geode & geode) function, expected prototype:\nvoid osgGA::EventVisitor::public_traverseGeode(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgGA::EventVisitor::public_traverseGeode function");
		}
		osg::Geode & geode=*geode_ptr;

		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::EventVisitor::public_traverseGeode(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_traverseGeode(geode);

		return 0;
	}

	// osgGA::EventVisitor & osgGA::EventVisitor::public_op_assign(const osgGA::EventVisitor & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgGA::EventVisitor & osgGA::EventVisitor::public_op_assign(const osgGA::EventVisitor & arg1) function, expected prototype:\nosgGA::EventVisitor & osgGA::EventVisitor::public_op_assign(const osgGA::EventVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::EventVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::EventVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::EventVisitor::public_op_assign function");
		}
		const osgGA::EventVisitor & _arg1=*_arg1_ptr;

		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgGA::EventVisitor & osgGA::EventVisitor::public_op_assign(const osgGA::EventVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgGA::EventVisitor* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgGA::EventVisitor >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
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


		wrapper_osgGA_EventVisitor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_EventVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"handle_callbacks",_bind_public_handle_callbacks},
		{"handle_callbacks_and_traverse",_bind_public_handle_callbacks_and_traverse},
		{"handle_geode_callbacks",_bind_public_handle_geode_callbacks},
		{"traverseGeode",_bind_public_traverseGeode},
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

