#ifndef _WRAPPERS_WRAPPER_WXFILEDROPTARGET_H_
#define _WRAPPERS_WRAPPER_WXFILEDROPTARGET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dnd.h>

class wrapper_wxFileDropTarget : public wxFileDropTarget, public luna_wrapper_base {

public:
		

	~wrapper_wxFileDropTarget() {
		logDEBUG3("Calling delete function for wrapper wxFileDropTarget");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileDropTarget*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileDropTarget(lua_State* L, lua_Table* dum) 
		: wxFileDropTarget(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileDropTarget*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxDropTarget::GetData()
	bool GetData() {
		THROW_IF(!_obj.pushFunction("GetData"),"No implementation for abstract function wxDropTarget::GetData");
		_obj.pushArg((wxFileDropTarget*)this);
		return (_obj.callFunction<bool>());
	};

	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
	wxDragResult OnData(int x, int y, wxDragResult def) {
		THROW_IF(!_obj.pushFunction("OnData"),"No implementation for abstract function wxDropTarget::OnData");
		_obj.pushArg((wxFileDropTarget*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		_obj.pushArg((int)def);
		return (wxDragResult)(_obj.callFunction<int>());
	};

	// wxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def)
	wxDragResult OnDragOver(int x, int y, wxDragResult def) {
		if(_obj.pushFunction("OnDragOver")) {
			_obj.pushArg((wxFileDropTarget*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg((int)def);
			return (wxDragResult)(_obj.callFunction<int>());
		}

		return wxFileDropTarget::OnDragOver(x, y, def);
	};

	// wxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def)
	wxDragResult OnEnter(int x, int y, wxDragResult def) {
		if(_obj.pushFunction("OnEnter")) {
			_obj.pushArg((wxFileDropTarget*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg((int)def);
			return (wxDragResult)(_obj.callFunction<int>());
		}

		return wxFileDropTarget::OnEnter(x, y, def);
	};

	// void wxDropTarget::OnLeave()
	void OnLeave() {
		if(_obj.pushFunction("OnLeave")) {
			_obj.pushArg((wxFileDropTarget*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDropTarget::OnLeave();
	};

	// bool wxFileDropTarget::OnDrop(int x, int y)
	bool OnDrop(int x, int y) {
		if(_obj.pushFunction("OnDrop")) {
			_obj.pushArg((wxFileDropTarget*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return wxFileDropTarget::OnDrop(x, y);
	};

	// bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)
	bool OnDropFiles(int x, int y, const wxArrayString & filenames) {
		THROW_IF(!_obj.pushFunction("OnDropFiles"),"No implementation for abstract function wxFileDropTarget::OnDropFiles");
		_obj.pushArg((wxFileDropTarget*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		_obj.pushArg(&filenames);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

