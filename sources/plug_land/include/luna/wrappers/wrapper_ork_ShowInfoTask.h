#ifndef _WRAPPERS_WRAPPER_ORK_SHOWINFOTASK_H_
#define _WRAPPERS_WRAPPER_ORK_SHOWINFOTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/ShowInfoTask.h>

class wrapper_ork_ShowInfoTask : public ork::ShowInfoTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_ShowInfoTask() {
		logDEBUG3("Calling delete function for wrapper ork_ShowInfoTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ShowInfoTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ShowInfoTask(lua_State* L, lua_Table* dum, ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos) 
		: ork::ShowInfoTask(font, p, color, size, pos), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_ShowInfoTask(lua_State* L, lua_Table* dum) 
		: ork::ShowInfoTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			return (_obj.callFunction<void>());
		}

		return ShowInfoTask::doRelease();
	};

	// void ork::ShowInfoTask::init(ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos)
	void init(ork::ptr< ork::Font > font, ork::ptr< ork::Program > p, int color, float size, ork::vec3i pos) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.pushArg((ork::Font*)font.get());
			_obj.pushArg((ork::Program*)p.get());
			_obj.pushArg(color);
			_obj.pushArg(size);
			_obj.pushArg(&pos);
			return (_obj.callFunction<void>());
		}

		return ShowInfoTask::init(font, p, color, size, pos);
	};

	// void ork::ShowInfoTask::swap(ork::ptr< ork::ShowInfoTask > t)
	void swap(ork::ptr< ork::ShowInfoTask > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.pushArg((ork::ShowInfoTask*)t.get());
			return (_obj.callFunction<void>());
		}

		return ShowInfoTask::swap(t);
	};

	// void ork::ShowInfoTask::drawLine(const ork::vec4f & vp, float xs, float ys, int color, const std::string & s)
	void drawLine(const ork::vec4f & vp, float xs, float ys, int color, const std::string & s) {
		if(_obj.pushFunction("drawLine")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.pushArg(&vp);
			_obj.pushArg(xs);
			_obj.pushArg(ys);
			_obj.pushArg(color);
			_obj.pushArg(s);
			return (_obj.callFunction<void>());
		}

		return ShowInfoTask::drawLine(vp, xs, ys, color, s);
	};

	// void ork::ShowInfoTask::draw(ork::ptr< ork::Method > context)
	void draw(ork::ptr< ork::Method > context) {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.pushArg((ork::Method*)context.get());
			return (_obj.callFunction<void>());
		}

		return ShowInfoTask::draw(context);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return ShowInfoTask::toString();
	};

	// ork::ptr< ork::Task > ork::ShowInfoTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::ShowInfoTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return ShowInfoTask::getTask(context);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

