#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_WRITETOFILE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCREENCAPTUREHANDLER_WRITETOFILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_ScreenCaptureHandler_WriteToFile : public osgViewer::ScreenCaptureHandler::WriteToFile, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_ScreenCaptureHandler_WriteToFile() {
		logDEBUG3("Calling delete function for wrapper osgViewer_ScreenCaptureHandler_WriteToFile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::ScreenCaptureHandler::WriteToFile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_ScreenCaptureHandler_WriteToFile(lua_State* L, lua_Table* dum, const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) 
		: osgViewer::ScreenCaptureHandler::WriteToFile(filename, extension, savePolicy), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::ScreenCaptureHandler::WriteToFile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::ScreenCaptureHandler::WriteToFile*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return WriteToFile::setThreadSafeRefUnref(threadSafe);
	};

	// void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)
	void operator()(const osg::Image & image, const unsigned int context_id) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgViewer::ScreenCaptureHandler::WriteToFile*)this);
			_obj.pushArg(&image);
			_obj.pushArg(context_id);
			return (_obj.callFunction<void>());
		}

		return WriteToFile::operator()(image, context_id);
	};


	// Protected non-virtual methods:
	// osgViewer::ScreenCaptureHandler::WriteToFile & osgViewer::ScreenCaptureHandler::WriteToFile::operator=(const osgViewer::ScreenCaptureHandler::WriteToFile & arg1)
	osgViewer::ScreenCaptureHandler::WriteToFile & public_op_assign(const osgViewer::ScreenCaptureHandler::WriteToFile & arg1) {
		return osgViewer::ScreenCaptureHandler::WriteToFile::operator=(arg1);
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
	// osgViewer::ScreenCaptureHandler::WriteToFile & osgViewer::ScreenCaptureHandler::WriteToFile::public_op_assign(const osgViewer::ScreenCaptureHandler::WriteToFile & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::WriteToFile & osgViewer::ScreenCaptureHandler::WriteToFile::public_op_assign(const osgViewer::ScreenCaptureHandler::WriteToFile & arg1) function, expected prototype:\nosgViewer::ScreenCaptureHandler::WriteToFile & osgViewer::ScreenCaptureHandler::WriteToFile::public_op_assign(const osgViewer::ScreenCaptureHandler::WriteToFile & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgViewer::ScreenCaptureHandler::WriteToFile* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgViewer::ScreenCaptureHandler::WriteToFile >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::ScreenCaptureHandler::WriteToFile::public_op_assign function");
		}
		const osgViewer::ScreenCaptureHandler::WriteToFile & _arg1=*_arg1_ptr;

		wrapper_osgViewer_ScreenCaptureHandler_WriteToFile* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler_WriteToFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgViewer::ScreenCaptureHandler::WriteToFile & osgViewer::ScreenCaptureHandler::WriteToFile::public_op_assign(const osgViewer::ScreenCaptureHandler::WriteToFile &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgViewer::ScreenCaptureHandler::WriteToFile* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::ScreenCaptureHandler::WriteToFile >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_ScreenCaptureHandler_WriteToFile* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler_WriteToFile >(L,1);
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


		wrapper_osgViewer_ScreenCaptureHandler_WriteToFile* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_ScreenCaptureHandler_WriteToFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

