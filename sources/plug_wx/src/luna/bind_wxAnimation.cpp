#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAnimation.h>

class luna_wrapper_wxAnimation {
public:
	typedef Luna< wxAnimation > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAnimation* self= (wxAnimation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAnimation >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxAnimation* ptr= dynamic_cast< wxAnimation* >(Luna< wxObject >::check(L,1));
		wxAnimation* ptr= luna_caster< wxObject, wxAnimation >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAnimation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxAnimation >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxAnimation >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrameCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFrameCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Load(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxAnimation::wxAnimation(const wxAnimation & anim)
	static wxAnimation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAnimation::wxAnimation(const wxAnimation & anim) function, expected prototype:\nwxAnimation::wxAnimation(const wxAnimation & anim)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAnimation* anim_ptr=(Luna< wxObject >::checkSubType< wxAnimation >(L,1));
		if( !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimation::wxAnimation function");
		}
		const wxAnimation & anim=*anim_ptr;

		return new wxAnimation(anim);
	}

	// wxAnimation::wxAnimation(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	static wxAnimation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAnimation::wxAnimation(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nwxAnimation::wxAnimation(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxAnimationType type=luatop>1 ? (wxAnimationType)lua_tointeger(L,2) : (wxAnimationType)::wxANIMATION_TYPE_ANY;

		return new wxAnimation(name, type);
	}

	// wxAnimation::wxAnimation(lua_Table * data, const wxAnimation & anim)
	static wxAnimation* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxAnimation::wxAnimation(lua_Table * data, const wxAnimation & anim) function, expected prototype:\nwxAnimation::wxAnimation(lua_Table * data, const wxAnimation & anim)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAnimation* anim_ptr=(Luna< wxObject >::checkSubType< wxAnimation >(L,2));
		if( !anim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anim in wxAnimation::wxAnimation function");
		}
		const wxAnimation & anim=*anim_ptr;

		return new wrapper_wxAnimation(L,NULL, anim);
	}

	// wxAnimation::wxAnimation(lua_Table * data, const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	static wxAnimation* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxAnimation::wxAnimation(lua_Table * data, const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nwxAnimation::wxAnimation(lua_Table * data, const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : (wxAnimationType)::wxANIMATION_TYPE_ANY;

		return new wrapper_wxAnimation(L,NULL, name, type);
	}

	// Overload binder for wxAnimation::wxAnimation
	static wxAnimation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxAnimation, cannot match any of the overloads for function wxAnimation:\n  wxAnimation(const wxAnimation &)\n  wxAnimation(const wxString &, wxAnimationType)\n  wxAnimation(lua_Table *, const wxAnimation &)\n  wxAnimation(lua_Table *, const wxString &, wxAnimationType)\n");
		return NULL;
	}


	// Function binds:
	// int wxAnimation::GetDelay(unsigned int i) const
	static int _bind_GetDelay(lua_State *L) {
		if (!_lg_typecheck_GetDelay(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnimation::GetDelay(unsigned int i) const function, expected prototype:\nint wxAnimation::GetDelay(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnimation::GetDelay(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDelay(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImage wxAnimation::GetFrame(unsigned int i) const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxAnimation::GetFrame(unsigned int i) const function, expected prototype:\nwxImage wxAnimation::GetFrame(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxAnimation::GetFrame(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->GetFrame(i);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// unsigned int wxAnimation::GetFrameCount() const
	static int _bind_GetFrameCount(lua_State *L) {
		if (!_lg_typecheck_GetFrameCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxAnimation::GetFrameCount() const function, expected prototype:\nunsigned int wxAnimation::GetFrameCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxAnimation::GetFrameCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetFrameCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxAnimation::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnimation::GetSize() const function, expected prototype:\nwxSize wxAnimation::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnimation::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAnimation::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnimation::IsOk() const function, expected prototype:\nbool wxAnimation::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnimation::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimation::Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxAnimation::Load function");
		}
		wxInputStream & stream=*stream_ptr;
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : (wxAnimationType)::wxANIMATION_TYPE_ANY;

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnimation::Load(wxInputStream &, wxAnimationType). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Load(stream, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimation::LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : (wxAnimationType)::wxANIMATION_TYPE_ANY;

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnimation::LoadFile(const wxString &, wxAnimationType). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxAnimation::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAnimation::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAnimation::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAnimation::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxAnimation::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxAnimation::base_GetDelay(unsigned int i) const
	static int _bind_base_GetDelay(lua_State *L) {
		if (!_lg_typecheck_base_GetDelay(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnimation::base_GetDelay(unsigned int i) const function, expected prototype:\nint wxAnimation::base_GetDelay(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnimation::base_GetDelay(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAnimation::GetDelay(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImage wxAnimation::base_GetFrame(unsigned int i) const
	static int _bind_base_GetFrame(lua_State *L) {
		if (!_lg_typecheck_base_GetFrame(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxAnimation::base_GetFrame(unsigned int i) const function, expected prototype:\nwxImage wxAnimation::base_GetFrame(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxAnimation::base_GetFrame(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->wxAnimation::GetFrame(i);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// unsigned int wxAnimation::base_GetFrameCount() const
	static int _bind_base_GetFrameCount(lua_State *L) {
		if (!_lg_typecheck_base_GetFrameCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxAnimation::base_GetFrameCount() const function, expected prototype:\nunsigned int wxAnimation::base_GetFrameCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxAnimation::base_GetFrameCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxAnimation::GetFrameCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxAnimation::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnimation::base_GetSize() const function, expected prototype:\nwxSize wxAnimation::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnimation::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnimation::GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAnimation::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnimation::base_IsOk() const function, expected prototype:\nbool wxAnimation::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnimation::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnimation::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimation::base_Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	static int _bind_base_Load(lua_State *L) {
		if (!_lg_typecheck_base_Load(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnimation::base_Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimation::base_Load(wxInputStream & stream, wxAnimationType type = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxAnimation::base_Load function");
		}
		wxInputStream & stream=*stream_ptr;
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : (wxAnimationType)::wxANIMATION_TYPE_ANY;

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnimation::base_Load(wxInputStream &, wxAnimationType). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnimation::Load(stream, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnimation::base_LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)
	static int _bind_base_LoadFile(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnimation::base_LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY) function, expected prototype:\nbool wxAnimation::base_LoadFile(const wxString & name, wxAnimationType type = ::wxANIMATION_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxAnimationType type=luatop>2 ? (wxAnimationType)lua_tointeger(L,3) : (wxAnimationType)::wxANIMATION_TYPE_ANY;

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnimation::base_LoadFile(const wxString &, wxAnimationType). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnimation::LoadFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// wxAnimation & wxAnimation::operator=(const wxAnimation & brush)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxAnimation & wxAnimation::operator=(const wxAnimation & brush) function, expected prototype:\nwxAnimation & wxAnimation::operator=(const wxAnimation & brush)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAnimation* brush_ptr=(Luna< wxObject >::checkSubType< wxAnimation >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxAnimation::operator= function");
		}
		const wxAnimation & brush=*brush_ptr;

		wxAnimation* self=Luna< wxObject >::checkSubType< wxAnimation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAnimation & wxAnimation::operator=(const wxAnimation &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAnimation* lret = &self->operator=(brush);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAnimation >::push(L,lret,false);

		return 1;
	}


};

wxAnimation* LunaTraits< wxAnimation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAnimation::_bind_ctor(L);
}

void LunaTraits< wxAnimation >::_bind_dtor(wxAnimation* obj) {
	delete obj;
}

const char LunaTraits< wxAnimation >::className[] = "wxAnimation";
const char LunaTraits< wxAnimation >::fullName[] = "wxAnimation";
const char LunaTraits< wxAnimation >::moduleName[] = "wx";
const char* LunaTraits< wxAnimation >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxAnimation >::hash = 52285947;
const int LunaTraits< wxAnimation >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAnimation >::methods[] = {
	{"GetDelay", &luna_wrapper_wxAnimation::_bind_GetDelay},
	{"GetFrame", &luna_wrapper_wxAnimation::_bind_GetFrame},
	{"GetFrameCount", &luna_wrapper_wxAnimation::_bind_GetFrameCount},
	{"GetSize", &luna_wrapper_wxAnimation::_bind_GetSize},
	{"IsOk", &luna_wrapper_wxAnimation::_bind_IsOk},
	{"Load", &luna_wrapper_wxAnimation::_bind_Load},
	{"LoadFile", &luna_wrapper_wxAnimation::_bind_LoadFile},
	{"base_GetClassInfo", &luna_wrapper_wxAnimation::_bind_base_GetClassInfo},
	{"base_GetDelay", &luna_wrapper_wxAnimation::_bind_base_GetDelay},
	{"base_GetFrame", &luna_wrapper_wxAnimation::_bind_base_GetFrame},
	{"base_GetFrameCount", &luna_wrapper_wxAnimation::_bind_base_GetFrameCount},
	{"base_GetSize", &luna_wrapper_wxAnimation::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxAnimation::_bind_base_IsOk},
	{"base_Load", &luna_wrapper_wxAnimation::_bind_base_Load},
	{"base_LoadFile", &luna_wrapper_wxAnimation::_bind_base_LoadFile},
	{"op_assign", &luna_wrapper_wxAnimation::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxAnimation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAnimation::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAnimation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAnimation >::converters[] = {
	{"wxObject", &luna_wrapper_wxAnimation::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAnimation >::enumValues[] = {
	{0,0}
};


