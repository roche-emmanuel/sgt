/*
 * LuaBase.h
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#ifndef LUABASE_H_
#define LUABASE_H_

#include "lunaCommon.h"

namespace sgt {

class SGTLUNA_EXPORT LuaBase : public osg::Referenced {
protected:
	mutable lua_State* _state;

public:
	LuaBase(lua_State* L) : _state(L) {
		THROW_IF(!L,"Invalid lua state.");
	}

	void invalidate() {
		_state = NULL;
	}

	virtual ~LuaBase() {};
};

};

#endif /* LUABASE_H_ */
