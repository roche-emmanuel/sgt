#ifndef _WRAPPERS_WRAPPER_WXTEXTENTRY_H_
#define _WRAPPERS_WRAPPER_WXTEXTENTRY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/textentry.h>

class wrapper_wxTextEntry : public wxTextEntry, public luna_wrapper_base {

public:
		

	~wrapper_wxTextEntry() {
		logDEBUG3("Calling delete function for wrapper wxTextEntry");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextEntry*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxTextEntry::AppendText(const wxString & text)
	void AppendText(const wxString & text) {
		if(_obj.pushFunction("AppendText")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::AppendText(text);
	};

	// bool wxTextEntry::CanCopy() const
	bool CanCopy() const {
		if(_obj.pushFunction("CanCopy")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::CanCopy();
	};

	// bool wxTextEntry::CanCut() const
	bool CanCut() const {
		if(_obj.pushFunction("CanCut")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::CanCut();
	};

	// bool wxTextEntry::CanPaste() const
	bool CanPaste() const {
		if(_obj.pushFunction("CanPaste")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::CanPaste();
	};

	// bool wxTextEntry::CanRedo() const
	bool CanRedo() const {
		if(_obj.pushFunction("CanRedo")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::CanRedo();
	};

	// bool wxTextEntry::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::CanUndo();
	};

	// void wxTextEntry::ChangeValue(const wxString & value)
	void ChangeValue(const wxString & value) {
		if(_obj.pushFunction("ChangeValue")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::ChangeValue(value);
	};

	// void wxTextEntry::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Clear();
	};

	// void wxTextEntry::Copy()
	void Copy() {
		if(_obj.pushFunction("Copy")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Copy();
	};

	// long wxTextEntry::GetInsertionPoint() const
	long GetInsertionPoint() const {
		if(_obj.pushFunction("GetInsertionPoint")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<long>());
		}

		return wxTextEntry::GetInsertionPoint();
	};

	// long wxTextEntry::GetLastPosition() const
	long GetLastPosition() const {
		if(_obj.pushFunction("GetLastPosition")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<long>());
		}

		return wxTextEntry::GetLastPosition();
	};

	// wxString wxTextEntry::GetRange(long from, long to) const
	wxString GetRange(long from, long to) const {
		if(_obj.pushFunction("GetRange")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTextEntry::GetRange(from, to);
	};

	// void wxTextEntry::GetSelection(long * from, long * to) const
	void GetSelection(long * from, long * to) const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::GetSelection(from, to);
	};

	// wxString wxTextEntry::GetStringSelection() const
	wxString GetStringSelection() const {
		if(_obj.pushFunction("GetStringSelection")) {
			_obj.pushArg((wxTextEntry*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTextEntry::GetStringSelection();
	};

	// wxString wxTextEntry::GetValue() const
	wxString GetValue() const {
		if(_obj.pushFunction("GetValue")) {
			_obj.pushArg((wxTextEntry*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTextEntry::GetValue();
	};

	// bool wxTextEntry::IsEditable() const
	bool IsEditable() const {
		if(_obj.pushFunction("IsEditable")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::IsEditable();
	};

	// bool wxTextEntry::IsEmpty() const
	bool IsEmpty() const {
		if(_obj.pushFunction("IsEmpty")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::IsEmpty();
	};

	// void wxTextEntry::Paste()
	void Paste() {
		if(_obj.pushFunction("Paste")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Paste();
	};

	// void wxTextEntry::Redo()
	void Redo() {
		if(_obj.pushFunction("Redo")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Redo();
	};

	// void wxTextEntry::Remove(long from, long to)
	void Remove(long from, long to) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Remove(from, to);
	};

	// void wxTextEntry::Replace(long from, long to, const wxString & value)
	void Replace(long from, long to, const wxString & value) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Replace(from, to, value);
	};

	// void wxTextEntry::SetEditable(bool editable)
	void SetEditable(bool editable) {
		if(_obj.pushFunction("SetEditable")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(editable);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SetEditable(editable);
	};

	// void wxTextEntry::SetInsertionPoint(long pos)
	void SetInsertionPoint(long pos) {
		if(_obj.pushFunction("SetInsertionPoint")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SetInsertionPoint(pos);
	};

	// void wxTextEntry::SetInsertionPointEnd()
	void SetInsertionPointEnd() {
		if(_obj.pushFunction("SetInsertionPointEnd")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SetInsertionPointEnd();
	};

	// void wxTextEntry::SetMaxLength(unsigned long len)
	void SetMaxLength(unsigned long len) {
		if(_obj.pushFunction("SetMaxLength")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(len);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SetMaxLength(len);
	};

	// void wxTextEntry::SetSelection(long from, long to)
	void SetSelection(long from, long to) {
		if(_obj.pushFunction("SetSelection")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SetSelection(from, to);
	};

	// void wxTextEntry::SelectAll()
	void SelectAll() {
		if(_obj.pushFunction("SelectAll")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SelectAll();
	};

	// bool wxTextEntry::SetHint(const wxString & hint)
	bool SetHint(const wxString & hint) {
		if(_obj.pushFunction("SetHint")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(hint);
			return (_obj.callFunction<bool>());
		}

		return wxTextEntry::SetHint(hint);
	};

	// wxString wxTextEntry::GetHint() const
	wxString GetHint() const {
		if(_obj.pushFunction("GetHint")) {
			_obj.pushArg((wxTextEntry*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTextEntry::GetHint();
	};

	// void wxTextEntry::SetValue(const wxString & value)
	void SetValue(const wxString & value) {
		if(_obj.pushFunction("SetValue")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::SetValue(value);
	};

	// void wxTextEntry::Undo()
	void Undo() {
		if(_obj.pushFunction("Undo")) {
			_obj.pushArg((wxTextEntry*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::Undo();
	};

	// void wxTextEntry::WriteText(const wxString & text)
	void WriteText(const wxString & text) {
		if(_obj.pushFunction("WriteText")) {
			_obj.pushArg((wxTextEntry*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxTextEntry::WriteText(text);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

