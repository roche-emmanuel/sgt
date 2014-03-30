#ifndef _WRAPPERS_WRAPPER_WXREGION_H_
#define _WRAPPERS_WRAPPER_WXREGION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/region.h>

class wrapper_wxRegion : public wxRegion, public luna_wrapper_base {

public:
		

	~wrapper_wxRegion() {
		logDEBUG3("Calling delete function for wrapper wxRegion");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRegion*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxRegion(lua_State* L, lua_Table* dum) 
		: wxRegion(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, int x, int y, int width, int height) 
		: wxRegion(x, y, width, height), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxPoint & topLeft, const wxPoint & bottomRight) 
		: wxRegion(topLeft, bottomRight), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxRect & rect) 
		: wxRegion(rect), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxRegion & region) 
		: wxRegion(region), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, size_t n, const wxPoint * points, wxPolygonFillMode fillStyle = ::wxODDEVEN_RULE) 
		: wxRegion(n, points, fillStyle), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxBitmap & bmp) 
		: wxRegion(bmp), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRegion(lua_State* L, lua_Table* dum, const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0) 
		: wxRegion(bmp, transColour, tolerance), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRegion*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRegion*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRegion::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRegion*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRegion::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRegion*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRegion::GetClassInfo();
	};

	// void wxRegion::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxRegion*)this);
			return (_obj.callFunction<void>());
		}

		return wxRegion::Clear();
	};

	// bool wxRegion::IsEmpty() const
	bool IsEmpty() const {
		if(_obj.pushFunction("IsEmpty")) {
			_obj.pushArg((wxRegion*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRegion::IsEmpty();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

