#ifndef _WRAPPERS_WRAPPER_ORK_SHOWLOGTASK_H_
#define _WRAPPERS_WRAPPER_ORK_SHOWLOGTASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/ShowLogTask.h>

class wrapper_ork_ShowLogTask : public ork::ShowLogTask, public luna_wrapper_base {

public:
		

	~wrapper_ork_ShowLogTask() {
		logDEBUG3("Calling delete function for wrapper ork_ShowLogTask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ShowLogTask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ShowLogTask(lua_State* L, lua_Table* dum, ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos) 
		: ork::ShowLogTask(f, p, fontHeight, pos), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_ShowLogTask(lua_State* L, lua_Table* dum) 
		: ork::ShowLogTask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			return (_obj.callFunction<void>());
		}

		return ShowLogTask::doRelease();
	};

	// void ork::ShowInfoTask::swap(ork::ptr< ork::ShowInfoTask > t)
	void swap(ork::ptr< ork::ShowInfoTask > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.pushArg((ork::ShowInfoTask*)t.get());
			return (_obj.callFunction<void>());
		}

		return ShowLogTask::swap(t);
	};

	// void ork::ShowInfoTask::drawLine(const ork::vec4f & vp, float xs, float ys, int color, const std::string & s)
	void drawLine(const ork::vec4f & vp, float xs, float ys, int color, const std::string & s) {
		if(_obj.pushFunction("drawLine")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.pushArg(&vp);
			_obj.pushArg(xs);
			_obj.pushArg(ys);
			_obj.pushArg(color);
			_obj.pushArg(s);
			return (_obj.callFunction<void>());
		}

		return ShowLogTask::drawLine(vp, xs, ys, color, s);
	};

	// void ork::ShowLogTask::init(ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos)
	void init(ork::ptr< ork::Font > f, ork::ptr< ork::Program > p, float fontHeight, ork::vec3i pos) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.pushArg((ork::Font*)f.get());
			_obj.pushArg((ork::Program*)p.get());
			_obj.pushArg(fontHeight);
			_obj.pushArg(&pos);
			return (_obj.callFunction<void>());
		}

		return ShowLogTask::init(f, p, fontHeight, pos);
	};

	// void ork::ShowLogTask::draw(ork::ptr< ork::Method > context)
	void draw(ork::ptr< ork::Method > context) {
		if(_obj.pushFunction("draw")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.pushArg((ork::Method*)context.get());
			return (_obj.callFunction<void>());
		}

		return ShowLogTask::draw(context);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			return (_obj.callFunction<const char*>());
		}

		return ShowLogTask::toString();
	};

	// ork::ptr< ork::Task > ork::ShowInfoTask::getTask(ork::ptr< ork::Object > context)
	ork::ptr< ork::Task > getTask(ork::ptr< ork::Object > context) {
		if(_obj.pushFunction("getTask")) {
			_obj.pushArg((ork::ShowLogTask*)this);
			_obj.pushArg((ork::Object*)context.get());
			return _obj.callFunction< ork::Task* >();
		}

		return ShowLogTask::getTask(context);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

