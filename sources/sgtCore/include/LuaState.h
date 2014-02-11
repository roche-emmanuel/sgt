/*
 * LuaState.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef LUASTATE_H_
#define LUASTATE_H_

#include <lunaCommon.h>

struct lua_State;

namespace sgt {

/** Class containing a lua state object.
This class is used as an interface to a Lua_state object.
*/
class LuaState: public osg::Referenced {
public:
	/** Default constructor. 
	Will initialize an internal lua_State object.
	This constructor is protected because this class should be used as a singleton.
	*/
	LuaState();

protected:
	LuaState(const LuaState&); //!< Copy constructor. Intentionally left unimplemented.
	LuaState& operator=(const LuaState&); //!< Assignment operator. Intentionally left unimplemented.
public:

	/** Destructor.
	Will destroy the internal lua_State object.
	*/
	virtual ~LuaState();

	/** Set a global sring value */
	void setGlobal(const std::string& key, const std::string& val);

	/** Set a global number value */
	void setGlobal(const std::string& key, double val);

	/** Execute a given script file into this environment. 
		Returns false is case of failure.
	*/
	bool executeFile(const std::string& filename);

	/** Execute a script from a string. */
	bool executeString(const std::string& str, const std::string& name);
	
	/** Execute a script from a string. */
	bool executeString(const std::string& str, const std::string& name, int& ret);

	/** execute a script from a string. */
	bool executeString(const std::string& str, const std::string& name, const std::vector<std::string>& arg1, int& ret);

	/** Load a binary module from memory.*/
	void loadModuleFromMemory(void* data, const std::string& mname, const std::string& entryname);
	

protected:
	/** The actual Lua state pointer.*/
	lua_State* _L;
};

} /* namespace sgt */

#endif /* LUASTATE_H_ */
