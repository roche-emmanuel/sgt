#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlPrinter.h>

class luna_wrapper_TiXmlPrinter {
public:
	typedef Luna< TiXmlPrinter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<TiXmlVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		TiXmlPrinter* self= (TiXmlPrinter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlPrinter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86845197) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_TiXmlVisitor(lua_State *L) {
		// all checked are already performed before reaching this point.
		//TiXmlPrinter* ptr= dynamic_cast< TiXmlPrinter* >(Luna< TiXmlVisitor >::check(L,1));
		TiXmlPrinter* ptr= luna_caster< TiXmlVisitor, TiXmlPrinter >::cast(Luna< TiXmlVisitor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlPrinter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_VisitEnter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VisitEnter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VisitExit_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_VisitExit_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Visit_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Visit_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Visit_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Visit_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Indent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLineBreak(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineBreak(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetStreamPrinting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Str(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_VisitEnter_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_VisitEnter_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_VisitExit_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_VisitExit_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Visit_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Visit_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Visit_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Visit_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// TiXmlPrinter::TiXmlPrinter()
	static TiXmlPrinter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlPrinter::TiXmlPrinter() function, expected prototype:\nTiXmlPrinter::TiXmlPrinter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlPrinter();
	}

	// TiXmlPrinter::TiXmlPrinter(lua_Table * data)
	static TiXmlPrinter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlPrinter::TiXmlPrinter(lua_Table * data) function, expected prototype:\nTiXmlPrinter::TiXmlPrinter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlPrinter(L,NULL);
	}

	// Overload binder for TiXmlPrinter::TiXmlPrinter
	static TiXmlPrinter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TiXmlPrinter, cannot match any of the overloads for function TiXmlPrinter:\n  TiXmlPrinter()\n  TiXmlPrinter(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool TiXmlPrinter::VisitEnter(const TiXmlDocument & arg1)
	static int _bind_VisitEnter_overload_1(lua_State *L) {
		if (!_lg_typecheck_VisitEnter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::VisitEnter(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlPrinter::VisitEnter(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::VisitEnter function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::VisitEnter(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitEnter(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)
	static int _bind_VisitEnter_overload_2(lua_State *L) {
		if (!_lg_typecheck_VisitEnter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2) function, expected prototype:\nbool TiXmlPrinter::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::VisitEnter function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;
		const TiXmlAttribute* _arg2=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,3));

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::VisitEnter(const TiXmlElement &, const TiXmlAttribute *). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitEnter(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlPrinter::VisitEnter
	static int _bind_VisitEnter(lua_State *L) {
		if (_lg_typecheck_VisitEnter_overload_1(L)) return _bind_VisitEnter_overload_1(L);
		if (_lg_typecheck_VisitEnter_overload_2(L)) return _bind_VisitEnter_overload_2(L);

		luaL_error(L, "error in function VisitEnter, cannot match any of the overloads for function VisitEnter:\n  VisitEnter(const TiXmlDocument &)\n  VisitEnter(const TiXmlElement &, const TiXmlAttribute *)\n");
		return 0;
	}

	// bool TiXmlPrinter::VisitExit(const TiXmlDocument & arg1)
	static int _bind_VisitExit_overload_1(lua_State *L) {
		if (!_lg_typecheck_VisitExit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::VisitExit(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlPrinter::VisitExit(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::VisitExit function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::VisitExit(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::VisitExit(const TiXmlElement & arg1)
	static int _bind_VisitExit_overload_2(lua_State *L) {
		if (!_lg_typecheck_VisitExit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::VisitExit(const TiXmlElement & arg1) function, expected prototype:\nbool TiXmlPrinter::VisitExit(const TiXmlElement & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::VisitExit function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::VisitExit(const TiXmlElement &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlPrinter::VisitExit
	static int _bind_VisitExit(lua_State *L) {
		if (_lg_typecheck_VisitExit_overload_1(L)) return _bind_VisitExit_overload_1(L);
		if (_lg_typecheck_VisitExit_overload_2(L)) return _bind_VisitExit_overload_2(L);

		luaL_error(L, "error in function VisitExit, cannot match any of the overloads for function VisitExit:\n  VisitExit(const TiXmlDocument &)\n  VisitExit(const TiXmlElement &)\n");
		return 0;
	}

	// bool TiXmlPrinter::Visit(const TiXmlDeclaration & arg1)
	static int _bind_Visit_overload_1(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::Visit(const TiXmlDeclaration & arg1) function, expected prototype:\nbool TiXmlPrinter::Visit(const TiXmlDeclaration & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::Visit function");
		}
		const TiXmlDeclaration & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::Visit(const TiXmlDeclaration &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::Visit(const TiXmlText & arg1)
	static int _bind_Visit_overload_2(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::Visit(const TiXmlText & arg1) function, expected prototype:\nbool TiXmlPrinter::Visit(const TiXmlText & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::Visit function");
		}
		const TiXmlText & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::Visit(const TiXmlText &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::Visit(const TiXmlComment & arg1)
	static int _bind_Visit_overload_3(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::Visit(const TiXmlComment & arg1) function, expected prototype:\nbool TiXmlPrinter::Visit(const TiXmlComment & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::Visit function");
		}
		const TiXmlComment & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::Visit(const TiXmlComment &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::Visit(const TiXmlUnknown & arg1)
	static int _bind_Visit_overload_4(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::Visit(const TiXmlUnknown & arg1) function, expected prototype:\nbool TiXmlPrinter::Visit(const TiXmlUnknown & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::Visit function");
		}
		const TiXmlUnknown & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::Visit(const TiXmlUnknown &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlPrinter::Visit
	static int _bind_Visit(lua_State *L) {
		if (_lg_typecheck_Visit_overload_1(L)) return _bind_Visit_overload_1(L);
		if (_lg_typecheck_Visit_overload_2(L)) return _bind_Visit_overload_2(L);
		if (_lg_typecheck_Visit_overload_3(L)) return _bind_Visit_overload_3(L);
		if (_lg_typecheck_Visit_overload_4(L)) return _bind_Visit_overload_4(L);

		luaL_error(L, "error in function Visit, cannot match any of the overloads for function Visit:\n  Visit(const TiXmlDeclaration &)\n  Visit(const TiXmlText &)\n  Visit(const TiXmlComment &)\n  Visit(const TiXmlUnknown &)\n");
		return 0;
	}

	// void TiXmlPrinter::SetIndent(const char * _indent)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlPrinter::SetIndent(const char * _indent) function, expected prototype:\nvoid TiXmlPrinter::SetIndent(const char * _indent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _indent=(const char *)lua_tostring(L,2);

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlPrinter::SetIndent(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIndent(_indent);

		return 0;
	}

	// const char * TiXmlPrinter::Indent()
	static int _bind_Indent(lua_State *L) {
		if (!_lg_typecheck_Indent(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlPrinter::Indent() function, expected prototype:\nconst char * TiXmlPrinter::Indent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlPrinter::Indent(). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Indent();
		lua_pushstring(L,lret);

		return 1;
	}

	// void TiXmlPrinter::SetLineBreak(const char * _lineBreak)
	static int _bind_SetLineBreak(lua_State *L) {
		if (!_lg_typecheck_SetLineBreak(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlPrinter::SetLineBreak(const char * _lineBreak) function, expected prototype:\nvoid TiXmlPrinter::SetLineBreak(const char * _lineBreak)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _lineBreak=(const char *)lua_tostring(L,2);

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlPrinter::SetLineBreak(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLineBreak(_lineBreak);

		return 0;
	}

	// const char * TiXmlPrinter::LineBreak()
	static int _bind_LineBreak(lua_State *L) {
		if (!_lg_typecheck_LineBreak(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlPrinter::LineBreak() function, expected prototype:\nconst char * TiXmlPrinter::LineBreak()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlPrinter::LineBreak(). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LineBreak();
		lua_pushstring(L,lret);

		return 1;
	}

	// void TiXmlPrinter::SetStreamPrinting()
	static int _bind_SetStreamPrinting(lua_State *L) {
		if (!_lg_typecheck_SetStreamPrinting(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlPrinter::SetStreamPrinting() function, expected prototype:\nvoid TiXmlPrinter::SetStreamPrinting()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlPrinter::SetStreamPrinting(). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStreamPrinting();

		return 0;
	}

	// const char * TiXmlPrinter::CStr()
	static int _bind_CStr(lua_State *L) {
		if (!_lg_typecheck_CStr(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlPrinter::CStr() function, expected prototype:\nconst char * TiXmlPrinter::CStr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlPrinter::CStr(). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CStr();
		lua_pushstring(L,lret);

		return 1;
	}

	// size_t TiXmlPrinter::Size()
	static int _bind_Size(lua_State *L) {
		if (!_lg_typecheck_Size(L)) {
			luaL_error(L, "luna typecheck failed in size_t TiXmlPrinter::Size() function, expected prototype:\nsize_t TiXmlPrinter::Size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t TiXmlPrinter::Size(). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->Size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const std::string & TiXmlPrinter::Str()
	static int _bind_Str(lua_State *L) {
		if (!_lg_typecheck_Str(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & TiXmlPrinter::Str() function, expected prototype:\nconst std::string & TiXmlPrinter::Str()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & TiXmlPrinter::Str(). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->Str();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool TiXmlPrinter::base_VisitEnter(const TiXmlDocument & arg1)
	static int _bind_base_VisitEnter_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_VisitEnter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_VisitEnter(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlPrinter::base_VisitEnter(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_VisitEnter function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_VisitEnter(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::VisitEnter(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::base_VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)
	static int _bind_base_VisitEnter_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_VisitEnter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2) function, expected prototype:\nbool TiXmlPrinter::base_VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_VisitEnter function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;
		const TiXmlAttribute* _arg2=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,3));

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_VisitEnter(const TiXmlElement &, const TiXmlAttribute *). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::VisitEnter(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlPrinter::base_VisitEnter
	static int _bind_base_VisitEnter(lua_State *L) {
		if (_lg_typecheck_base_VisitEnter_overload_1(L)) return _bind_base_VisitEnter_overload_1(L);
		if (_lg_typecheck_base_VisitEnter_overload_2(L)) return _bind_base_VisitEnter_overload_2(L);

		luaL_error(L, "error in function base_VisitEnter, cannot match any of the overloads for function base_VisitEnter:\n  base_VisitEnter(const TiXmlDocument &)\n  base_VisitEnter(const TiXmlElement &, const TiXmlAttribute *)\n");
		return 0;
	}

	// bool TiXmlPrinter::base_VisitExit(const TiXmlDocument & arg1)
	static int _bind_base_VisitExit_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_VisitExit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_VisitExit(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlPrinter::base_VisitExit(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_VisitExit function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_VisitExit(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::base_VisitExit(const TiXmlElement & arg1)
	static int _bind_base_VisitExit_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_VisitExit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_VisitExit(const TiXmlElement & arg1) function, expected prototype:\nbool TiXmlPrinter::base_VisitExit(const TiXmlElement & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_VisitExit function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_VisitExit(const TiXmlElement &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlPrinter::base_VisitExit
	static int _bind_base_VisitExit(lua_State *L) {
		if (_lg_typecheck_base_VisitExit_overload_1(L)) return _bind_base_VisitExit_overload_1(L);
		if (_lg_typecheck_base_VisitExit_overload_2(L)) return _bind_base_VisitExit_overload_2(L);

		luaL_error(L, "error in function base_VisitExit, cannot match any of the overloads for function base_VisitExit:\n  base_VisitExit(const TiXmlDocument &)\n  base_VisitExit(const TiXmlElement &)\n");
		return 0;
	}

	// bool TiXmlPrinter::base_Visit(const TiXmlDeclaration & arg1)
	static int _bind_base_Visit_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_Visit(const TiXmlDeclaration & arg1) function, expected prototype:\nbool TiXmlPrinter::base_Visit(const TiXmlDeclaration & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_Visit function");
		}
		const TiXmlDeclaration & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_Visit(const TiXmlDeclaration &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::base_Visit(const TiXmlText & arg1)
	static int _bind_base_Visit_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_Visit(const TiXmlText & arg1) function, expected prototype:\nbool TiXmlPrinter::base_Visit(const TiXmlText & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_Visit function");
		}
		const TiXmlText & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_Visit(const TiXmlText &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::base_Visit(const TiXmlComment & arg1)
	static int _bind_base_Visit_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_Visit(const TiXmlComment & arg1) function, expected prototype:\nbool TiXmlPrinter::base_Visit(const TiXmlComment & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_Visit function");
		}
		const TiXmlComment & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_Visit(const TiXmlComment &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlPrinter::base_Visit(const TiXmlUnknown & arg1)
	static int _bind_base_Visit_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlPrinter::base_Visit(const TiXmlUnknown & arg1) function, expected prototype:\nbool TiXmlPrinter::base_Visit(const TiXmlUnknown & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlPrinter::base_Visit function");
		}
		const TiXmlUnknown & _arg1=*_arg1_ptr;

		TiXmlPrinter* self=Luna< TiXmlVisitor >::checkSubType< TiXmlPrinter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlPrinter::base_Visit(const TiXmlUnknown &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlPrinter::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlPrinter::base_Visit
	static int _bind_base_Visit(lua_State *L) {
		if (_lg_typecheck_base_Visit_overload_1(L)) return _bind_base_Visit_overload_1(L);
		if (_lg_typecheck_base_Visit_overload_2(L)) return _bind_base_Visit_overload_2(L);
		if (_lg_typecheck_base_Visit_overload_3(L)) return _bind_base_Visit_overload_3(L);
		if (_lg_typecheck_base_Visit_overload_4(L)) return _bind_base_Visit_overload_4(L);

		luaL_error(L, "error in function base_Visit, cannot match any of the overloads for function base_Visit:\n  base_Visit(const TiXmlDeclaration &)\n  base_Visit(const TiXmlText &)\n  base_Visit(const TiXmlComment &)\n  base_Visit(const TiXmlUnknown &)\n");
		return 0;
	}


	// Operator binds:

};

TiXmlPrinter* LunaTraits< TiXmlPrinter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlPrinter::_bind_ctor(L);
}

void LunaTraits< TiXmlPrinter >::_bind_dtor(TiXmlPrinter* obj) {
	delete obj;
}

const char LunaTraits< TiXmlPrinter >::className[] = "TiXmlPrinter";
const char LunaTraits< TiXmlPrinter >::fullName[] = "TiXmlPrinter";
const char LunaTraits< TiXmlPrinter >::moduleName[] = "land";
const char* LunaTraits< TiXmlPrinter >::parents[] = {"land.TiXmlVisitor", 0};
const int LunaTraits< TiXmlPrinter >::hash = 10398482;
const int LunaTraits< TiXmlPrinter >::uniqueIDs[] = {86845197,0};

luna_RegType LunaTraits< TiXmlPrinter >::methods[] = {
	{"VisitEnter", &luna_wrapper_TiXmlPrinter::_bind_VisitEnter},
	{"VisitExit", &luna_wrapper_TiXmlPrinter::_bind_VisitExit},
	{"Visit", &luna_wrapper_TiXmlPrinter::_bind_Visit},
	{"SetIndent", &luna_wrapper_TiXmlPrinter::_bind_SetIndent},
	{"Indent", &luna_wrapper_TiXmlPrinter::_bind_Indent},
	{"SetLineBreak", &luna_wrapper_TiXmlPrinter::_bind_SetLineBreak},
	{"LineBreak", &luna_wrapper_TiXmlPrinter::_bind_LineBreak},
	{"SetStreamPrinting", &luna_wrapper_TiXmlPrinter::_bind_SetStreamPrinting},
	{"CStr", &luna_wrapper_TiXmlPrinter::_bind_CStr},
	{"Size", &luna_wrapper_TiXmlPrinter::_bind_Size},
	{"Str", &luna_wrapper_TiXmlPrinter::_bind_Str},
	{"base_VisitEnter", &luna_wrapper_TiXmlPrinter::_bind_base_VisitEnter},
	{"base_VisitExit", &luna_wrapper_TiXmlPrinter::_bind_base_VisitExit},
	{"base_Visit", &luna_wrapper_TiXmlPrinter::_bind_base_Visit},
	{"fromVoid", &luna_wrapper_TiXmlPrinter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlPrinter::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlPrinter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlPrinter >::converters[] = {
	{"TiXmlVisitor", &luna_wrapper_TiXmlPrinter::_cast_from_TiXmlVisitor},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlPrinter >::enumValues[] = {
	{0,0}
};


