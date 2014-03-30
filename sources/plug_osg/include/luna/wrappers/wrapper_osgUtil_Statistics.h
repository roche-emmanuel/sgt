#ifndef _WRAPPERS_WRAPPER_OSGUTIL_STATISTICS_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_STATISTICS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/Statistics>

class wrapper_osgUtil_Statistics : public osgUtil::Statistics, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Statistics() {
		logDEBUG3("Calling delete function for wrapper osgUtil_Statistics");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::Statistics*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Statistics(lua_State* L, lua_Table* dum) 
		: osgUtil::Statistics(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices)
	void setVertexArray(unsigned int count, const osg::Vec3f * vertices) {
		if(_obj.pushFunction("setVertexArray")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(count);
			_obj.pushArg(vertices);
			return (_obj.callFunction<void>());
		}

		return Statistics::setVertexArray(count, vertices);
	};

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices)
	void setVertexArray(unsigned int count, const osg::Vec2f * vertices) {
		if(_obj.pushFunction("setVertexArray")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(count);
			_obj.pushArg(vertices);
			return (_obj.callFunction<void>());
		}

		return Statistics::setVertexArray(count, vertices);
	};

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices)
	void setVertexArray(unsigned int count, const osg::Vec4f * vertices) {
		if(_obj.pushFunction("setVertexArray")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(count);
			_obj.pushArg(vertices);
			return (_obj.callFunction<void>());
		}

		return Statistics::setVertexArray(count, vertices);
	};

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices)
	void setVertexArray(unsigned int count, const osg::Vec3d * vertices) {
		if(_obj.pushFunction("setVertexArray")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(count);
			_obj.pushArg(vertices);
			return (_obj.callFunction<void>());
		}

		return Statistics::setVertexArray(count, vertices);
	};

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices)
	void setVertexArray(unsigned int count, const osg::Vec2d * vertices) {
		if(_obj.pushFunction("setVertexArray")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(count);
			_obj.pushArg(vertices);
			return (_obj.callFunction<void>());
		}

		return Statistics::setVertexArray(count, vertices);
	};

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices)
	void setVertexArray(unsigned int count, const osg::Vec4d * vertices) {
		if(_obj.pushFunction("setVertexArray")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(count);
			_obj.pushArg(vertices);
			return (_obj.callFunction<void>());
		}

		return Statistics::setVertexArray(count, vertices);
	};

	// void osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count)
	void drawArrays(unsigned int mode, int first, int count) {
		if(_obj.pushFunction("drawArrays")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(mode);
			_obj.pushArg(first);
			_obj.pushArg(count);
			return (_obj.callFunction<void>());
		}

		return Statistics::drawArrays(mode, first, count);
	};

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices)
	void drawElements(unsigned int mode, int count, const unsigned char * indices) {
		if(_obj.pushFunction("drawElements")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(mode);
			_obj.pushArg(count);
			_obj.pushArg((void*)indices);
			return (_obj.callFunction<void>());
		}

		return Statistics::drawElements(mode, count, indices);
	};

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices)
	void drawElements(unsigned int mode, int count, const unsigned short * indices) {
		if(_obj.pushFunction("drawElements")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(mode);
			_obj.pushArg(count);
			_obj.pushArg((void*)indices);
			return (_obj.callFunction<void>());
		}

		return Statistics::drawElements(mode, count, indices);
	};

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices)
	void drawElements(unsigned int mode, int count, const unsigned int * indices) {
		if(_obj.pushFunction("drawElements")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(mode);
			_obj.pushArg(count);
			_obj.pushArg((void*)indices);
			return (_obj.callFunction<void>());
		}

		return Statistics::drawElements(mode, count, indices);
	};

	// void osgUtil::Statistics::begin(unsigned int mode)
	void begin(unsigned int mode) {
		if(_obj.pushFunction("begin")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(mode);
			return (_obj.callFunction<void>());
		}

		return Statistics::begin(mode);
	};

	// void osgUtil::Statistics::vertex(float x, float y, float z)
	void vertex(float x, float y, float z) {
		if(_obj.pushFunction("vertex")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(z);
			return (_obj.callFunction<void>());
		}

		return Statistics::vertex(x, y, z);
	};

	// void osgUtil::Statistics::vertex(const osg::Vec3f & vert)
	void vertex(const osg::Vec3f & vert) {
		if(_obj.pushFunction("vertex")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(&vert);
			return (_obj.callFunction<void>());
		}

		return Statistics::vertex(vert);
	};

	// void osgUtil::Statistics::vertex(const osg::Vec2f & vert)
	void vertex(const osg::Vec2f & vert) {
		if(_obj.pushFunction("vertex")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(&vert);
			return (_obj.callFunction<void>());
		}

		return Statistics::vertex(vert);
	};

	// void osgUtil::Statistics::vertex(const osg::Vec4f & vert)
	void vertex(const osg::Vec4f & vert) {
		if(_obj.pushFunction("vertex")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(&vert);
			return (_obj.callFunction<void>());
		}

		return Statistics::vertex(vert);
	};

	// void osgUtil::Statistics::vertex(float x, float y)
	void vertex(float x, float y) {
		if(_obj.pushFunction("vertex")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return Statistics::vertex(x, y);
	};

	// void osgUtil::Statistics::vertex(float x, float y, float z, float w)
	void vertex(float x, float y, float z, float w) {
		if(_obj.pushFunction("vertex")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(z);
			_obj.pushArg(w);
			return (_obj.callFunction<void>());
		}

		return Statistics::vertex(x, y, z, w);
	};

	// void osgUtil::Statistics::end()
	void end() {
		if(_obj.pushFunction("end")) {
			_obj.pushArg((osgUtil::Statistics*)this);
			return (_obj.callFunction<void>());
		}

		return Statistics::end();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

