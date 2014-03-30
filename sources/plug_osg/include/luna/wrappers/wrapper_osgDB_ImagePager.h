#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEPAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEPAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/ImagePager>

class wrapper_osgDB_ImagePager : public osgDB::ImagePager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ImagePager() {
		logDEBUG3("Calling delete function for wrapper osgDB_ImagePager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::ImagePager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ImagePager(lua_State* L, lua_Table* dum) 
		: osgDB::ImagePager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ImagePager::setThreadSafeRefUnref(threadSafe);
	};

	// double osgDB::ImagePager::getPreLoadTime() const
	double getPreLoadTime() const {
		if(_obj.pushFunction("getPreLoadTime")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			return (_obj.callFunction<double>());
		}

		return ImagePager::getPreLoadTime();
	};

	// osg::Image * osgDB::ImagePager::readImageFile(const std::string & fileName, const osg::Referenced * options = 0)
	osg::Image * readImageFile(const std::string & fileName, const osg::Referenced * options = 0) {
		if(_obj.pushFunction("readImageFile")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			_obj.pushArg(fileName);
			_obj.pushArg(options);
			return (_obj.callFunction<osg::Image*>());
		}

		return ImagePager::readImageFile(fileName, options);
	};

	// void osgDB::ImagePager::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options)
	void requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & imageRequest, const osg::Referenced * options) {
		if(_obj.pushFunction("requestImageFile")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			_obj.pushArg(fileName);
			_obj.pushArg(attachmentPoint);
			_obj.pushArg(attachmentIndex);
			_obj.pushArg(timeToMergeBy);
			_obj.pushArg(framestamp);
			_obj.pushArg(imageRequest);
			_obj.pushArg(options);
			return (_obj.callFunction<void>());
		}

		return ImagePager::requestImageFile(fileName, attachmentPoint, attachmentIndex, timeToMergeBy, framestamp, imageRequest, options);
	};

	// bool osgDB::ImagePager::requiresUpdateSceneGraph() const
	bool requiresUpdateSceneGraph() const {
		if(_obj.pushFunction("requiresUpdateSceneGraph")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			return (_obj.callFunction<bool>());
		}

		return ImagePager::requiresUpdateSceneGraph();
	};

	// void osgDB::ImagePager::updateSceneGraph(const osg::FrameStamp & frameStamp)
	void updateSceneGraph(const osg::FrameStamp & frameStamp) {
		if(_obj.pushFunction("updateSceneGraph")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			_obj.pushArg(&frameStamp);
			return (_obj.callFunction<void>());
		}

		return ImagePager::updateSceneGraph(frameStamp);
	};

	// void osgDB::ImagePager::signalBeginFrame(const osg::FrameStamp * framestamp)
	void signalBeginFrame(const osg::FrameStamp * framestamp) {
		if(_obj.pushFunction("signalBeginFrame")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			_obj.pushArg(framestamp);
			return (_obj.callFunction<void>());
		}

		return ImagePager::signalBeginFrame(framestamp);
	};

	// void osgDB::ImagePager::signalEndFrame()
	void signalEndFrame() {
		if(_obj.pushFunction("signalEndFrame")) {
			_obj.pushArg((osgDB::ImagePager*)this);
			return (_obj.callFunction<void>());
		}

		return ImagePager::signalEndFrame();
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_ImagePager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ImagePager >(L,1);
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


		wrapper_osgDB_ImagePager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ImagePager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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

