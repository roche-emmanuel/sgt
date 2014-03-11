/////////////////////////////////////////////////////////////////////////////
// Name:        wxlcallb.cpp
// Purpose:     LuaEventHandler and wxLuaWinDestroyCallback
// Author:      Francis Irving, John Labenski
// Created:     11/05/2002
// Copyright:   (c) 2002 Creature Labs. All rights reserved.
// Licence:     wxWidgets licence
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif // WX_PRECOMP

#include "LuaEventHandler.h"

const char* wx_refs_key = "wxlua_lreg_refs_key : wxLua Lua object refs";

#define ABS_LUA_STKIDX(n, added_items) ((n) > 0 ? (n) : (n)-(added_items))

int wxluaR_ref(lua_State* L, int stack_idx, void* lightuserdata_reg_key)
{
    // nothing on stack to insert and don't bother inserting nil
    if (lua_isnoneornil(L, stack_idx))
        return LUA_REFNIL;

    lua_pushlightuserdata(L, lightuserdata_reg_key);    // push key
    lua_rawget(L, LUA_REGISTRYINDEX);                   // pop key, push value (table)
	
	if(lua_isnil(L,-1)) {
		trINFO("Luna","Creating wx function index table.");
		lua_pop(L,1);
		lua_pushlightuserdata(L, lightuserdata_reg_key);    // push key
		lua_newtable(L);
		lua_rawset(L, LUA_REGISTRYINDEX);                   // pop key, push value (table)

		lua_pushlightuserdata(L, lightuserdata_reg_key);    // push key
		lua_rawget(L, LUA_REGISTRYINDEX);                   // pop key, push value (table)
	}

    lua_pushvalue(L, ABS_LUA_STKIDX(stack_idx,1));      // push value to store

    int ref_idx = luaL_ref(L, -2);                      // t[ref_idx] = value; pops value

    lua_pop(L, 1);                                      // pop table

    return ref_idx;
}

bool wxluaR_unref(lua_State* L, int ref_idx, void* lightuserdata_reg_key)
{
    if (ref_idx == LUA_REFNIL)                       // nothing to remove
        return false;

    lua_pushlightuserdata(L, lightuserdata_reg_key); // push key
    lua_rawget(L, LUA_REGISTRYINDEX);                // pop key, push value (table)

    luaL_unref(L, -1, ref_idx);       // remove key and value in refs table
                                      // note: this key will be used for the next wxluaR_ref()

    lua_pop(L, 1);                    // pop table

    return true;
}

bool wxluaR_getref(lua_State *L, int ref_idx, void* lightuserdata_reg_key)
{
	if (ref_idx == LUA_REFNIL)          // nothing to get
		return false;

	lua_pushlightuserdata(L, lightuserdata_reg_key); // push key
	lua_rawget(L, LUA_REGISTRYINDEX);                // pop key, push value (table)

	lua_rawgeti(L, -1, ref_idx);        // get t[ref_idx] = value; push value

	if (lua_isnil(L, -1))               // not a valid table key
	{
		lua_pop(L, 2);                  // pop nil and table
		return false;
	}

	lua_remove(L, -2);                  // remove table, leaving value on top

	return true; // return if table has a valid value and it's on the stack
}

//-----------------------------------------------------------------------------
// LuaEventHandler
//-----------------------------------------------------------------------------
IMPLEMENT_ABSTRACT_CLASS(LuaEventHandler, wxEvtHandler)

LuaEventHandler::LuaEventHandler() 
                   : wxEvtHandler(),
                    m_luafunc_ref(LUA_NOREF), m_state(0),
                    m_evtHandler(NULL), m_id(wxID_ANY), m_last_id(wxID_ANY)
{
}

LuaEventHandler::~LuaEventHandler()
{
    // Remove the reference to the Lua function that we call
	logDEBUG4("Calling LuaEventHandler destructor with L=" << (const void*)m_state << ", ref="<< m_luafunc_ref);
	
    if (m_state && m_luafunc_ref!=LUA_NOREF)
    {
		wxluaR_unref(m_state,m_luafunc_ref,&wx_refs_key);
    }
}

wxString LuaEventHandler::connect(lua_State* L, int lua_func_stack_idx,
                                     wxWindowID win_id, wxWindowID last_id,
                                     wxEventType eventType, wxEvtHandler *evtHandler)
{
    //trINFO("LuaEventHandler","Entering connect(...)");

	// Assert too since these errors are serious and not just bad Lua code.
    wxCHECK_MSG(evtHandler != NULL, wxT("Invalid wxEvtHandler in LuaEventHandler::Connect()"), wxT("Invalid wxEvtHandler in LuaEventHandler::Connect()"));
    wxCHECK_MSG((m_evtHandler == NULL) && (m_luafunc_ref == LUA_NOREF), wxT("Attempting to reconnect a LuaEventHandler"), wxT("Attempting to reconnect a LuaEventHandler"));
    wxCHECK_MSG(L, wxT("Invalid wxLuaState"), wxT("Invalid wxLuaState"));

	//trINFO("LuaEventHandler","Checking thread...");

    // We must always be installed into the main lua_State, never a coroutine
    // 1) It will be called only when the lua_State is suspended or dead
    // 2) We have no way of tracking when the coroutine state is garbage collected/dead
    if (lua_pushthread(L) != 1)
    {
        lua_pop(L,1);
        return wxT("wxLua: Creating a callback function in a coroutine is not allowed since it will only be called when the thread is either suspended or dead.");
    }

    lua_pop(L,1);

    m_state   = L;
    m_evtHandler = evtHandler;
    m_id         = win_id;
    m_last_id    = last_id;
	m_eventType  = eventType;


	//trINFO("LuaEventHandler","Creating ref...");

    // create a reference to the Lua event handler function
    m_luafunc_ref = wxluaR_ref(L,lua_func_stack_idx, &wx_refs_key);

	//trINFO("LuaEventHandler","Performing actual connection...");

    // Note: We use the callback userdata and not the event sink since the event sink
    // requires a wxEvtHandler object which is a fairly large class.
    // The userdata (i.e. this) is also deleted for us which makes our life easier.
    m_evtHandler->Connect(win_id, last_id, eventType,
                         (wxObjectEventFunction)&LuaEventHandler::OnAllEvents,
                         this);
    // m_evtHandler->Bind(eventType,
					   // &LuaEventHandler::OnAllEvents, 
					   // win_id, 
					   // last_id, 
                       // this);

	//trINFO("LuaEventHandler","Leaving connect(...)");

    return wxEmptyString;
}

void LuaEventHandler::OnAllEvents(wxEvent& event)
{
    wxEventType evtType = event.GetEventType();

    // Get the LuaEventHandler instance to use which is NOT "this" since
    // "this" is a central event handler function. i.e. this != theCallback
    LuaEventHandler *theCallback = (LuaEventHandler *)event.m_callbackUserData;
    wxCHECK_RET(theCallback != NULL, wxT("Invalid LuaEventHandler in wxEvent user data"));

    if (theCallback != NULL)
    {

        theCallback->OnEvent(&event);
    }
}

void LuaEventHandler::OnEvent(wxEvent *event)
{
	lua_State* L = m_state;
    int oldTop = lua_gettop(L);
	
	// Retrieve the referenced function:

    if (wxluaR_getref(L,m_luafunc_ref, &wx_refs_key))
    {
		Luna< wxEvent >::push(L,event,false);
        int result = lua_pcall(L,1,0,0); // one input no returns
        // lua_call(L,1,0); // one input no returns
		// int result = 0;
		
		if(result==LUA_ERRRUN) {
			trERROR("LuaEventHandler",lua_tostring(L,-1));
		}
	}

	lua_settop(L,oldTop); // pop function and error message from the stack (if they're there)
}
