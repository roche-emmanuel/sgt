/*
 * LuaRef.h
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#ifndef LUAREF_H_
#define LUAREF_H_

#include "lunaCommon.h"
#include "lua/LuaBase.h"

namespace sgt {

class SGTLUNA_EXPORT LuaRef : public sgt::LuaBase {
protected:
	 int _ref;

public:
	LuaRef(lua_State* L, int index) : LuaBase(L) {
		refLuaItem(index);
	}

	virtual ~LuaRef() {
		unrefLuaItem();
	};

	bool pushLuaItem() const;

protected:
	void refLuaItem(int index);
	void unrefLuaItem();
};

};


#endif /* LUAREF_H_ */
