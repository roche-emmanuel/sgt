/*
 * LuaRef.cpp
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#include "lua/LuaRef.h"

using namespace sgt;

const char* luarefs_key = "luaref objects";

#define ABS_LUA_STKIDX(n, added_items) ((n) > 0 ? (n) : (n)-(added_items))

void LuaRef::refLuaItem(int index) {
	CHECK(_state,"Invalid lua state");
	lua_State* L = _state;

    // nothing on stack to insert and don't bother inserting nil
    if (lua_isnoneornil(L, index)) {
        _ref = LUA_REFNIL;
    	return;
    }

    lua_pushlightuserdata(L, (void*)luarefs_key);    	// push key
    lua_rawget(L, LUA_REGISTRYINDEX);           // pop key, push value (table)

	if(lua_isnil(L,-1)) {
		trINFO("LuaRef","Creating LuaRef index table.");
		lua_pop(L,1);
		lua_pushlightuserdata(L, (void*)luarefs_key);  // push key
		lua_newtable(L);
		lua_rawset(L, LUA_REGISTRYINDEX);       // pop key, pop value (table)

		lua_pushlightuserdata(L, (void*)luarefs_key);  // push key
		lua_rawget(L, LUA_REGISTRYINDEX);       // pop key, push value (table)
	}

    lua_pushvalue(L, ABS_LUA_STKIDX(index,1));      				// push value to store

    _ref = luaL_ref(L, -2);                     // t[ref_idx] = value; pops value

    lua_pop(L, 1);								// pop table
}

void LuaRef::unrefLuaItem() {
	CHECK(_state,"Invalid lua state");
	lua_State* L = _state;

	if (_ref==LUA_REFNIL)                       // nothing to remove
        return;

    lua_pushlightuserdata(L, (void*)luarefs_key); 	// push key
    lua_rawget(L, LUA_REGISTRYINDEX);       // pop key, push value (table)

    luaL_unref(L, -1, _ref);  				// remove key and value in refs table
    										// note: this key will be used for the next wxluaR_ref()

    lua_pop(L, 1);                    		// pop table
	//logNOTICE("Unreferenced lua object at ref="<<_ref);
}

bool LuaRef::pushLuaItem() const {
	CHECK_RET(_state,false,"Invalid lua state");
	lua_State* L = _state;

	if (_ref == LUA_REFNIL)          // nothing to get
		return false;

	lua_pushlightuserdata(L, (void*)luarefs_key); // push key
	lua_rawget(L, LUA_REGISTRYINDEX);                // pop key, push value (table)

	lua_rawgeti(L, -1, _ref);        // get t[ref_idx] = value; push value

	if (lua_isnil(L, -1))               // not a valid table key
	{
		lua_pop(L, 2);                  // pop nil and table
		return false;
	}

	lua_remove(L, -2);                  // remove table, leaving value on top
	return true;
}
