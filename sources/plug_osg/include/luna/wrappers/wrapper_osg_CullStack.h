#ifndef _WRAPPERS_WRAPPER_OSG_CULLSTACK_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSTACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/CullStack>

class wrapper_osg_CullStack : public osg::CullStack, public luna_wrapper_base {

public:
		

	~wrapper_osg_CullStack() {
		logDEBUG3("Calling delete function for wrapper osg_CullStack");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::CullStack*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_CullStack(lua_State* L, lua_Table* dum) 
		: osg::CullStack(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::CullStack*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_CullStack(lua_State* L, lua_Table* dum, const osg::CullStack & cs) 
		: osg::CullStack(cs), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::CullStack*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			_obj.pushArg((osg::CullStack*)this);
			return (_obj.callFunction<void>());
		}

		return CullStack::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osg::CullStack*)this);
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CullStack::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osg::CullStack*)this);
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CullStack::inheritCullSettings(settings, inheritanceMask);
	};


	// Protected non-virtual methods:
	// void osg::CullStack::computeFrustumVolume()
	void public_computeFrustumVolume() {
		return osg::CullStack::computeFrustumVolume();
	};

	// osg::RefMatrixd * osg::CullStack::createOrReuseMatrix(const osg::Matrixd & value)
	osg::RefMatrixd * public_createOrReuseMatrix(const osg::Matrixd & value) {
		return osg::CullStack::createOrReuseMatrix(value);
	};


	// Protected non-virtual checkers:
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
	// void osg::CullStack::public_computeFrustumVolume()
	static int _bind_public_computeFrustumVolume(lua_State *L) {
		if (!_lg_typecheck_public_computeFrustumVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::public_computeFrustumVolume() function, expected prototype:\nvoid osg::CullStack::public_computeFrustumVolume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_CullStack* self=Luna< osg::CullSettings >::checkSubType< wrapper_osg_CullStack >(L,1);
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

		wrapper_osg_CullStack* self=Luna< osg::CullSettings >::checkSubType< wrapper_osg_CullStack >(L,1);
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

