#ifndef _WRAPPERS_WRAPPER_WXTEXTDROPTARGET_H_
#define _WRAPPERS_WRAPPER_WXTEXTDROPTARGET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dnd.h>

class wrapper_wxTextDropTarget : public wxTextDropTarget, public luna_wrapper_base {

public:
		

	~wrapper_wxTextDropTarget() {
		logDEBUG3("Calling delete function for wrapper wxTextDropTarget");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextDropTarget*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTextDropTarget(lua_State* L, lua_Table* dum) 
		: wxTextDropTarget(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTextDropTarget*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxDropTarget::GetData()
	bool GetData() {
		THROW_IF(!_obj.pushFunction("GetData"),"No implementation for abstract function wxDropTarget::GetData");
		_obj.pushArg((wxTextDropTarget*)this);
		return (_obj.callFunction<bool>());
	};

	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
	wxDragResult OnData(int x, int y, wxDragResult def) {
		THROW_IF(!_obj.pushFunction("OnData"),"No implementation for abstract function wxDropTarget::OnData");
		_obj.pushArg((wxTextDropTarget*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		_obj.pushArg((int)def);
		return (wxDragResult)(_obj.callFunction<int>());
	};

	// wxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def)
	wxDragResult OnDragOver(int x, int y, wxDragResult def) {
		if(_obj.pushFunction("OnDragOver")) {
			_obj.pushArg((wxTextDropTarget*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg((int)def);
			return (wxDragResult)(_obj.callFunction<int>());
		}

		return wxTextDropTarget::OnDragOver(x, y, def);
	};

	// wxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def)
	wxDragResult OnEnter(int x, int y, wxDragResult def) {
		if(_obj.pushFunction("OnEnter")) {
			_obj.pushArg((wxTextDropTarget*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg((int)def);
			return (wxDragResult)(_obj.callFunction<int>());
		}

		return wxTextDropTarget::OnEnter(x, y, def);
	};

	// void wxDropTarget::OnLeave()
	void OnLeave() {
		if(_obj.pushFunction("OnLeave")) {
			_obj.pushArg((wxTextDropTarget*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextDropTarget::OnLeave();
	};

	// bool wxTextDropTarget::OnDrop(int x, int y)
	bool OnDrop(int x, int y) {
		if(_obj.pushFunction("OnDrop")) {
			_obj.pushArg((wxTextDropTarget*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return wxTextDropTarget::OnDrop(x, y);
	};

	// bool wxTextDropTarget::OnDropText(int x, int y, const wxString & data)
	bool OnDropText(int x, int y, const wxString & data) {
		THROW_IF(!_obj.pushFunction("OnDropText"),"No implementation for abstract function wxTextDropTarget::OnDropText");
		_obj.pushArg((wxTextDropTarget*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		_obj.pushArg(data);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

