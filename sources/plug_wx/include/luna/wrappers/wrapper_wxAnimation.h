#ifndef _WRAPPERS_WRAPPER_WXANIMATION_H_
#define _WRAPPERS_WRAPPER_WXANIMATION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/animate.h>

class wrapper_wxAnimation : public wxAnimation, public luna_wrapper_base {

public:
		

	~wrapper_wxAnimation() {
		logDEBUG3("Calling delete function for wrapper wxAnimation");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAnimation*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAnimation(lua_State* L, lua_Table* dum, const wxAnimation & anim) 
		: wxAnimation(anim), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxAnimation(lua_State* L, lua_Table* dum, const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) 
		: wxAnimation(name, type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAnimation*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAnimation::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAnimation::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAnimation*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAnimation::GetClassInfo();
	};

	// int wxAnimation::GetDelay(unsigned int i) const
	int GetDelay(unsigned int i) const {
		if(_obj.pushFunction("GetDelay")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<int>());
		}

		return wxAnimation::GetDelay(i);
	};

	// wxImage wxAnimation::GetFrame(unsigned int i) const
	wxImage GetFrame(unsigned int i) const {
		if(_obj.pushFunction("GetFrame")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.pushArg(i);
			return *(_obj.callFunction<wxImage*>());
		}

		return wxAnimation::GetFrame(i);
	};

	// unsigned int wxAnimation::GetFrameCount() const
	unsigned int GetFrameCount() const {
		if(_obj.pushFunction("GetFrameCount")) {
			_obj.pushArg((wxAnimation*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxAnimation::GetFrameCount();
	};

	// wxSize wxAnimation::GetSize() const
	wxSize GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxAnimation*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAnimation::GetSize();
	};

	// bool wxAnimation::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxAnimation*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAnimation::IsOk();
	};

	// bool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	bool Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY) {
		if(_obj.pushFunction("Load")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.pushArg(&stream);
			_obj.pushArg((int)type);
			return (_obj.callFunction<bool>());
		}

		return wxAnimation::Load(stream, type);
	};

	// bool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	bool LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg((wxAnimation*)this);
			_obj.pushArg(name);
			_obj.pushArg((int)type);
			return (_obj.callFunction<bool>());
		}

		return wxAnimation::LoadFile(name, type);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

