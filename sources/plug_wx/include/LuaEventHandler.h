#ifndef _LUAEVENTHANDLER_H_
#define _LUAEVENTHANDLER_H_

#include <wx/event.h>

extern const char* wx_refs_key;

// ----------------------------------------------------------------------------
// LuaEventHandler - Forward events from wxEvtHandlers to Lua functions.
//
// The LuaEventHandler is created with the wxLuaState, the stack index of a
// Lua function to call when a wxEvent is received, the window id ranges, and
// the wxEventType used with wxEvtHandler::Connect() with "this" as the
// callback user data for event.
//
// Do NOT delete LuaEventHandlers since the wxEvtHandler deletes the
// callback user data itself.
//
// The function LuaEventHandler::OnAllEvents() generically handles all wxEvents
// by retrieving the LuaEventHandler instance from the wxEvent userdata
// to call LuaEventHandler::OnEvent() on the correct instance.
// ----------------------------------------------------------------------------

class LuaEventHandler : public wxEvtHandler
{
public:
    // default constructor, call Connect() to actually connect the event
    LuaEventHandler();

    virtual ~LuaEventHandler();

    // Verifies the inputs and calls evtHandler->Connect() with "this" as
    //   the callback userdata.
    // lua_func_stack_idx is the Lua stack index of a function to call with
    //   the wxEvent as the single parameter.
    // win_id and last_id follow the same notation as wxEvtHandler::Connect().
    //   If only one event Id is needed set last_id = wxID_ANY
    // Returns an empty string on success and the wxEvtHandler takes ownership of this,
    //   otherwise an error message is returned and you must delete this since nobody else will.
    virtual wxString connect( lua_State* L, int lua_func_stack_idx,
                              wxWindowID win_id, wxWindowID last_id,
                              wxEventType eventType, wxEvtHandler *evtHandler );

    wxWindowID    getId() const         { return m_id; }
    wxWindowID    getLastId() const     { return m_last_id; }
    wxEventType   getEventType() const  { return m_eventType; }
    wxEvtHandler* getEvtHandler() const { return m_evtHandler; }
    int           getLuaFuncRef() const { return m_luafunc_ref; }

    // Central event handler that calls OnEvent() for the actual
    //   LuaEventHandler callback userdata.
    // This function is treated like a static function that all handlers of
    //   this class will call.
    void OnAllEvents(wxEvent& event);

    // Handle the wxEvent by calling the Lua function to handle the event.
    // The Lua function will receive a single parameter, the wxEvent.
    virtual void OnEvent(wxEvent *event);

protected:
    int           m_luafunc_ref; // ref of the Lua routine to call in the wxlua_lreg_refs_key registry table
    lua_State*    m_state;    // stored to verify that that lua_State is still active
    wxEvtHandler* m_evtHandler;
    wxWindowID    m_id;
    wxWindowID    m_last_id;
    wxEventType   m_eventType; // data for this wxEventType

private:
    DECLARE_ABSTRACT_CLASS(LuaEventHandler)
};

#endif //_LUAEVENTHANDLER_H_
