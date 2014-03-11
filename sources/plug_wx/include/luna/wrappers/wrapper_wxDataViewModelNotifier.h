#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWMODELNOTIFIER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWMODELNOTIFIER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewModelNotifier : public wxDataViewModelNotifier, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewModelNotifier() {
		logDEBUG3("Calling delete function for wrapper wxDataViewModelNotifier");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewModelNotifier*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewModelNotifier(lua_State* L, lua_Table* dum) 
		: wxDataViewModelNotifier(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewModelNotifier*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxDataViewModelNotifier::Cleared()
	bool Cleared() {
		THROW_IF(!_obj.pushFunction("Cleared"),"No implementation for abstract function wxDataViewModelNotifier::Cleared");
		_obj.pushArg((wxDataViewModelNotifier*)this);
		return (_obj.callFunction<bool>());
	};

	// bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)
	bool ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item) {
		THROW_IF(!_obj.pushFunction("ItemAdded"),"No implementation for abstract function wxDataViewModelNotifier::ItemAdded");
		_obj.pushArg((wxDataViewModelNotifier*)this);
		_obj.pushArg(&parent);
		_obj.pushArg(&item);
		return (_obj.callFunction<bool>());
	};

	// bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)
	bool ItemChanged(const wxDataViewItem & item) {
		THROW_IF(!_obj.pushFunction("ItemChanged"),"No implementation for abstract function wxDataViewModelNotifier::ItemChanged");
		_obj.pushArg((wxDataViewModelNotifier*)this);
		_obj.pushArg(&item);
		return (_obj.callFunction<bool>());
	};

	// bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)
	bool ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item) {
		THROW_IF(!_obj.pushFunction("ItemDeleted"),"No implementation for abstract function wxDataViewModelNotifier::ItemDeleted");
		_obj.pushArg((wxDataViewModelNotifier*)this);
		_obj.pushArg(&parent);
		_obj.pushArg(&item);
		return (_obj.callFunction<bool>());
	};

	// bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	bool ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items) {
		if(_obj.pushFunction("ItemsAdded")) {
			_obj.pushArg((wxDataViewModelNotifier*)this);
			_obj.pushArg(&parent);
			_obj.pushArg(&items);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModelNotifier::ItemsAdded(parent, items);
	};

	// bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items)
	bool ItemsChanged(const wxDataViewItemArray & items) {
		if(_obj.pushFunction("ItemsChanged")) {
			_obj.pushArg((wxDataViewModelNotifier*)this);
			_obj.pushArg(&items);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModelNotifier::ItemsChanged(items);
	};

	// bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	bool ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items) {
		if(_obj.pushFunction("ItemsDeleted")) {
			_obj.pushArg((wxDataViewModelNotifier*)this);
			_obj.pushArg(&parent);
			_obj.pushArg(&items);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewModelNotifier::ItemsDeleted(parent, items);
	};

	// void wxDataViewModelNotifier::Resort()
	void Resort() {
		THROW_IF(!_obj.pushFunction("Resort"),"No implementation for abstract function wxDataViewModelNotifier::Resort");
		_obj.pushArg((wxDataViewModelNotifier*)this);
		return (_obj.callFunction<void>());
	};

	// bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)
	bool ValueChanged(const wxDataViewItem & item, unsigned int col) {
		THROW_IF(!_obj.pushFunction("ValueChanged"),"No implementation for abstract function wxDataViewModelNotifier::ValueChanged");
		_obj.pushArg((wxDataViewModelNotifier*)this);
		_obj.pushArg(&item);
		_obj.pushArg(col);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

