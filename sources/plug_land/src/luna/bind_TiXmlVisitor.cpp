#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlVisitor.h>

class luna_wrapper_TiXmlVisitor {
public:
	typedef Luna< TiXmlVisitor > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86845197) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TiXmlVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* rhs =(Luna< TiXmlVisitor >::check(L,2));
		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		TiXmlVisitor* self= (TiXmlVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlVisitor >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TiXmlVisitor");
		
		return luna_dynamicCast(L,converters,"TiXmlVisitor",name);
	}


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
	// TiXmlVisitor::TiXmlVisitor()
	static TiXmlVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlVisitor::TiXmlVisitor() function, expected prototype:\nTiXmlVisitor::TiXmlVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlVisitor();
	}

	// TiXmlVisitor::TiXmlVisitor(lua_Table * data)
	static TiXmlVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlVisitor::TiXmlVisitor(lua_Table * data) function, expected prototype:\nTiXmlVisitor::TiXmlVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlVisitor(L,NULL);
	}

	// Overload binder for TiXmlVisitor::TiXmlVisitor
	static TiXmlVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TiXmlVisitor, cannot match any of the overloads for function TiXmlVisitor:\n  TiXmlVisitor()\n  TiXmlVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool TiXmlVisitor::VisitEnter(const TiXmlDocument & arg1)
	static int _bind_VisitEnter_overload_1(lua_State *L) {
		if (!_lg_typecheck_VisitEnter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::VisitEnter(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlVisitor::VisitEnter(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::VisitEnter function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::VisitEnter(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitEnter(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)
	static int _bind_VisitEnter_overload_2(lua_State *L) {
		if (!_lg_typecheck_VisitEnter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2) function, expected prototype:\nbool TiXmlVisitor::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::VisitEnter function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;
		const TiXmlAttribute* _arg2=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,3));

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::VisitEnter(const TiXmlElement &, const TiXmlAttribute *). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitEnter(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlVisitor::VisitEnter
	static int _bind_VisitEnter(lua_State *L) {
		if (_lg_typecheck_VisitEnter_overload_1(L)) return _bind_VisitEnter_overload_1(L);
		if (_lg_typecheck_VisitEnter_overload_2(L)) return _bind_VisitEnter_overload_2(L);

		luaL_error(L, "error in function VisitEnter, cannot match any of the overloads for function VisitEnter:\n  VisitEnter(const TiXmlDocument &)\n  VisitEnter(const TiXmlElement &, const TiXmlAttribute *)\n");
		return 0;
	}

	// bool TiXmlVisitor::VisitExit(const TiXmlDocument & arg1)
	static int _bind_VisitExit_overload_1(lua_State *L) {
		if (!_lg_typecheck_VisitExit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::VisitExit(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlVisitor::VisitExit(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::VisitExit function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::VisitExit(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::VisitExit(const TiXmlElement & arg1)
	static int _bind_VisitExit_overload_2(lua_State *L) {
		if (!_lg_typecheck_VisitExit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::VisitExit(const TiXmlElement & arg1) function, expected prototype:\nbool TiXmlVisitor::VisitExit(const TiXmlElement & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::VisitExit function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::VisitExit(const TiXmlElement &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlVisitor::VisitExit
	static int _bind_VisitExit(lua_State *L) {
		if (_lg_typecheck_VisitExit_overload_1(L)) return _bind_VisitExit_overload_1(L);
		if (_lg_typecheck_VisitExit_overload_2(L)) return _bind_VisitExit_overload_2(L);

		luaL_error(L, "error in function VisitExit, cannot match any of the overloads for function VisitExit:\n  VisitExit(const TiXmlDocument &)\n  VisitExit(const TiXmlElement &)\n");
		return 0;
	}

	// bool TiXmlVisitor::Visit(const TiXmlDeclaration & arg1)
	static int _bind_Visit_overload_1(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::Visit(const TiXmlDeclaration & arg1) function, expected prototype:\nbool TiXmlVisitor::Visit(const TiXmlDeclaration & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::Visit function");
		}
		const TiXmlDeclaration & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::Visit(const TiXmlDeclaration &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::Visit(const TiXmlText & arg1)
	static int _bind_Visit_overload_2(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::Visit(const TiXmlText & arg1) function, expected prototype:\nbool TiXmlVisitor::Visit(const TiXmlText & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::Visit function");
		}
		const TiXmlText & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::Visit(const TiXmlText &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::Visit(const TiXmlComment & arg1)
	static int _bind_Visit_overload_3(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::Visit(const TiXmlComment & arg1) function, expected prototype:\nbool TiXmlVisitor::Visit(const TiXmlComment & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::Visit function");
		}
		const TiXmlComment & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::Visit(const TiXmlComment &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::Visit(const TiXmlUnknown & arg1)
	static int _bind_Visit_overload_4(lua_State *L) {
		if (!_lg_typecheck_Visit_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::Visit(const TiXmlUnknown & arg1) function, expected prototype:\nbool TiXmlVisitor::Visit(const TiXmlUnknown & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::Visit function");
		}
		const TiXmlUnknown & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::Visit(const TiXmlUnknown &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlVisitor::Visit
	static int _bind_Visit(lua_State *L) {
		if (_lg_typecheck_Visit_overload_1(L)) return _bind_Visit_overload_1(L);
		if (_lg_typecheck_Visit_overload_2(L)) return _bind_Visit_overload_2(L);
		if (_lg_typecheck_Visit_overload_3(L)) return _bind_Visit_overload_3(L);
		if (_lg_typecheck_Visit_overload_4(L)) return _bind_Visit_overload_4(L);

		luaL_error(L, "error in function Visit, cannot match any of the overloads for function Visit:\n  Visit(const TiXmlDeclaration &)\n  Visit(const TiXmlText &)\n  Visit(const TiXmlComment &)\n  Visit(const TiXmlUnknown &)\n");
		return 0;
	}

	// bool TiXmlVisitor::base_VisitEnter(const TiXmlDocument & arg1)
	static int _bind_base_VisitEnter_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_VisitEnter_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_VisitEnter(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlVisitor::base_VisitEnter(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_VisitEnter function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_VisitEnter(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::VisitEnter(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::base_VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)
	static int _bind_base_VisitEnter_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_VisitEnter_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2) function, expected prototype:\nbool TiXmlVisitor::base_VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)\nClass arguments details:\narg 1 ID = 89852901\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_VisitEnter function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;
		const TiXmlAttribute* _arg2=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,3));

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_VisitEnter(const TiXmlElement &, const TiXmlAttribute *). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::VisitEnter(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlVisitor::base_VisitEnter
	static int _bind_base_VisitEnter(lua_State *L) {
		if (_lg_typecheck_base_VisitEnter_overload_1(L)) return _bind_base_VisitEnter_overload_1(L);
		if (_lg_typecheck_base_VisitEnter_overload_2(L)) return _bind_base_VisitEnter_overload_2(L);

		luaL_error(L, "error in function base_VisitEnter, cannot match any of the overloads for function base_VisitEnter:\n  base_VisitEnter(const TiXmlDocument &)\n  base_VisitEnter(const TiXmlElement &, const TiXmlAttribute *)\n");
		return 0;
	}

	// bool TiXmlVisitor::base_VisitExit(const TiXmlDocument & arg1)
	static int _bind_base_VisitExit_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_VisitExit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_VisitExit(const TiXmlDocument & arg1) function, expected prototype:\nbool TiXmlVisitor::base_VisitExit(const TiXmlDocument & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDocument* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_VisitExit function");
		}
		const TiXmlDocument & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_VisitExit(const TiXmlDocument &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::base_VisitExit(const TiXmlElement & arg1)
	static int _bind_base_VisitExit_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_VisitExit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_VisitExit(const TiXmlElement & arg1) function, expected prototype:\nbool TiXmlVisitor::base_VisitExit(const TiXmlElement & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_VisitExit function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_VisitExit(const TiXmlElement &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::VisitExit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlVisitor::base_VisitExit
	static int _bind_base_VisitExit(lua_State *L) {
		if (_lg_typecheck_base_VisitExit_overload_1(L)) return _bind_base_VisitExit_overload_1(L);
		if (_lg_typecheck_base_VisitExit_overload_2(L)) return _bind_base_VisitExit_overload_2(L);

		luaL_error(L, "error in function base_VisitExit, cannot match any of the overloads for function base_VisitExit:\n  base_VisitExit(const TiXmlDocument &)\n  base_VisitExit(const TiXmlElement &)\n");
		return 0;
	}

	// bool TiXmlVisitor::base_Visit(const TiXmlDeclaration & arg1)
	static int _bind_base_Visit_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_Visit(const TiXmlDeclaration & arg1) function, expected prototype:\nbool TiXmlVisitor::base_Visit(const TiXmlDeclaration & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_Visit function");
		}
		const TiXmlDeclaration & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_Visit(const TiXmlDeclaration &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::base_Visit(const TiXmlText & arg1)
	static int _bind_base_Visit_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_Visit(const TiXmlText & arg1) function, expected prototype:\nbool TiXmlVisitor::base_Visit(const TiXmlText & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlText* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlText >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_Visit function");
		}
		const TiXmlText & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_Visit(const TiXmlText &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::base_Visit(const TiXmlComment & arg1)
	static int _bind_base_Visit_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_Visit(const TiXmlComment & arg1) function, expected prototype:\nbool TiXmlVisitor::base_Visit(const TiXmlComment & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlComment* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlComment >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_Visit function");
		}
		const TiXmlComment & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_Visit(const TiXmlComment &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlVisitor::base_Visit(const TiXmlUnknown & arg1)
	static int _bind_base_Visit_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_Visit_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlVisitor::base_Visit(const TiXmlUnknown & arg1) function, expected prototype:\nbool TiXmlVisitor::base_Visit(const TiXmlUnknown & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlUnknown* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlUnknown >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlVisitor::base_Visit function");
		}
		const TiXmlUnknown & _arg1=*_arg1_ptr;

		TiXmlVisitor* self=(Luna< TiXmlVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlVisitor::base_Visit(const TiXmlUnknown &). Got : '%s'\n%s",typeid(Luna< TiXmlVisitor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlVisitor::Visit(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for TiXmlVisitor::base_Visit
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

TiXmlVisitor* LunaTraits< TiXmlVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlVisitor::_bind_ctor(L);
}

void LunaTraits< TiXmlVisitor >::_bind_dtor(TiXmlVisitor* obj) {
	delete obj;
}

const char LunaTraits< TiXmlVisitor >::className[] = "TiXmlVisitor";
const char LunaTraits< TiXmlVisitor >::fullName[] = "TiXmlVisitor";
const char LunaTraits< TiXmlVisitor >::moduleName[] = "land";
const char* LunaTraits< TiXmlVisitor >::parents[] = {0};
const int LunaTraits< TiXmlVisitor >::hash = 86845197;
const int LunaTraits< TiXmlVisitor >::uniqueIDs[] = {86845197,0};

luna_RegType LunaTraits< TiXmlVisitor >::methods[] = {
	{"VisitEnter", &luna_wrapper_TiXmlVisitor::_bind_VisitEnter},
	{"VisitExit", &luna_wrapper_TiXmlVisitor::_bind_VisitExit},
	{"Visit", &luna_wrapper_TiXmlVisitor::_bind_Visit},
	{"base_VisitEnter", &luna_wrapper_TiXmlVisitor::_bind_base_VisitEnter},
	{"base_VisitExit", &luna_wrapper_TiXmlVisitor::_bind_base_VisitExit},
	{"base_Visit", &luna_wrapper_TiXmlVisitor::_bind_base_Visit},
	{"dynCast", &luna_wrapper_TiXmlVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_TiXmlVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_TiXmlVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlVisitor >::enumValues[] = {
	{0,0}
};


