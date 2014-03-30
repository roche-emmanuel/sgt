#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CopyOp.h>

class luna_wrapper_osg_CopyOp {
public:
	typedef Luna< osg::CopyOp > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::CopyOp,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27134364) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::CopyOp*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::CopyOp* rhs =(Luna< osg::CopyOp >::check(L,2));
		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
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

		osg::CopyOp* self= (osg::CopyOp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CopyOp >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27134364) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::CopyOp >::check(L,1));
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

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CopyOp");
		
		return luna_dynamicCast(L,converters,"osg::CopyOp",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setCopyFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCopyFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 14 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,2)) ) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::CopyOp::CopyOp(unsigned int flags = osg::CopyOp::SHALLOW_COPY)
	static osg::CopyOp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CopyOp::CopyOp(unsigned int flags = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CopyOp::CopyOp(unsigned int flags = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)osg::CopyOp::SHALLOW_COPY;

		return new osg::CopyOp(flags);
	}

	// osg::CopyOp::CopyOp(lua_Table * data, unsigned int flags = osg::CopyOp::SHALLOW_COPY)
	static osg::CopyOp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CopyOp::CopyOp(lua_Table * data, unsigned int flags = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CopyOp::CopyOp(lua_Table * data, unsigned int flags = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_CopyOp(L,NULL, flags);
	}

	// Overload binder for osg::CopyOp::CopyOp
	static osg::CopyOp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CopyOp, cannot match any of the overloads for function CopyOp:\n  CopyOp(unsigned int)\n  CopyOp(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::CopyOp::setCopyFlags(unsigned int flags)
	static int _bind_setCopyFlags(lua_State *L) {
		if (!_lg_typecheck_setCopyFlags(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CopyOp::setCopyFlags(unsigned int flags) function, expected prototype:\nvoid osg::CopyOp::setCopyFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CopyOp::setCopyFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCopyFlags(flags);

		return 0;
	}

	// unsigned int osg::CopyOp::getCopyFlags() const
	static int _bind_getCopyFlags(lua_State *L) {
		if (!_lg_typecheck_getCopyFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::CopyOp::getCopyFlags() const function, expected prototype:\nunsigned int osg::CopyOp::getCopyFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::CopyOp::getCopyFlags() const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCopyFlags();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// osg::Referenced * osg::CopyOp::operator()(const osg::Referenced * ref) const
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::CopyOp::operator()(const osg::Referenced * ref) const function, expected prototype:\nosg::Referenced * osg::CopyOp::operator()(const osg::Referenced * ref) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* ref=(Luna< osg::Referenced >::check(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::CopyOp::operator()(const osg::Referenced *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->operator()(ref);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CopyOp::operator()(const osg::Object * obj) const
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CopyOp::operator()(const osg::Object * obj) const function, expected prototype:\nosg::Object * osg::CopyOp::operator()(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::CopyOp::operator()(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->operator()(obj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osg::CopyOp::operator()(const osg::Node * node) const
	static int _bind_op_call_overload_3(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::CopyOp::operator()(const osg::Node * node) const function, expected prototype:\nosg::Node * osg::CopyOp::operator()(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::CopyOp::operator()(const osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->operator()(node);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Drawable * osg::CopyOp::operator()(const osg::Drawable * drawable) const
	static int _bind_op_call_overload_4(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable * osg::CopyOp::operator()(const osg::Drawable * drawable) const function, expected prototype:\nosg::Drawable * osg::CopyOp::operator()(const osg::Drawable * drawable) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable * osg::CopyOp::operator()(const osg::Drawable *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable * lret = self->operator()(drawable);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osg::CopyOp::operator()(const osg::StateSet * stateset) const
	static int _bind_op_call_overload_5(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::CopyOp::operator()(const osg::StateSet * stateset) const function, expected prototype:\nosg::StateSet * osg::CopyOp::operator()(const osg::StateSet * stateset) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::CopyOp::operator()(const osg::StateSet *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->operator()(stateset);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::StateAttribute * osg::CopyOp::operator()(const osg::StateAttribute * attr) const
	static int _bind_op_call_overload_6(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osg::CopyOp::operator()(const osg::StateAttribute * attr) const function, expected prototype:\nosg::StateAttribute * osg::CopyOp::operator()(const osg::StateAttribute * attr) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osg::CopyOp::operator()(const osg::StateAttribute *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->operator()(attr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// osg::Texture * osg::CopyOp::operator()(const osg::Texture * text) const
	static int _bind_op_call_overload_7(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::CopyOp::operator()(const osg::Texture * text) const function, expected prototype:\nosg::Texture * osg::CopyOp::operator()(const osg::Texture * text) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture* text=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::CopyOp::operator()(const osg::Texture *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->operator()(text);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osg::CopyOp::operator()(const osg::Image * image) const
	static int _bind_op_call_overload_8(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::CopyOp::operator()(const osg::Image * image) const function, expected prototype:\nosg::Image * osg::CopyOp::operator()(const osg::Image * image) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::CopyOp::operator()(const osg::Image *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->operator()(image);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Array * osg::CopyOp::operator()(const osg::Array * array) const
	static int _bind_op_call_overload_9(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::CopyOp::operator()(const osg::Array * array) const function, expected prototype:\nosg::Array * osg::CopyOp::operator()(const osg::Array * array) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::CopyOp::operator()(const osg::Array *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->operator()(array);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// osg::PrimitiveSet * osg::CopyOp::operator()(const osg::PrimitiveSet * primitives) const
	static int _bind_op_call_overload_10(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::CopyOp::operator()(const osg::PrimitiveSet * primitives) const function, expected prototype:\nosg::PrimitiveSet * osg::CopyOp::operator()(const osg::PrimitiveSet * primitives) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::PrimitiveSet* primitives=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::CopyOp::operator()(const osg::PrimitiveSet *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->operator()(primitives);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// osg::Shape * osg::CopyOp::operator()(const osg::Shape * shape) const
	static int _bind_op_call_overload_11(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shape * osg::CopyOp::operator()(const osg::Shape * shape) const function, expected prototype:\nosg::Shape * osg::CopyOp::operator()(const osg::Shape * shape) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shape* shape=(Luna< osg::Referenced >::checkSubType< osg::Shape >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shape * osg::CopyOp::operator()(const osg::Shape *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shape * lret = self->operator()(shape);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shape >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform * osg::CopyOp::operator()(const osg::Uniform * shape) const
	static int _bind_op_call_overload_12(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::CopyOp::operator()(const osg::Uniform * shape) const function, expected prototype:\nosg::Uniform * osg::CopyOp::operator()(const osg::Uniform * shape) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Uniform* shape=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::CopyOp::operator()(const osg::Uniform *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->operator()(shape);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::NodeCallback * osg::CopyOp::operator()(const osg::NodeCallback * nodecallback) const
	static int _bind_op_call_overload_13(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback * osg::CopyOp::operator()(const osg::NodeCallback * nodecallback) const function, expected prototype:\nosg::NodeCallback * osg::CopyOp::operator()(const osg::NodeCallback * nodecallback) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::NodeCallback* nodecallback=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeCallback * osg::CopyOp::operator()(const osg::NodeCallback *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeCallback * lret = self->operator()(nodecallback);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// osg::StateAttributeCallback * osg::CopyOp::operator()(const osg::StateAttributeCallback * stateattributecallback) const
	static int _bind_op_call_overload_14(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback * osg::CopyOp::operator()(const osg::StateAttributeCallback * stateattributecallback) const function, expected prototype:\nosg::StateAttributeCallback * osg::CopyOp::operator()(const osg::StateAttributeCallback * stateattributecallback) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttributeCallback* stateattributecallback=(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,2));

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttributeCallback * osg::CopyOp::operator()(const osg::StateAttributeCallback *) const. Got : '%s'\n%s",typeid(Luna< osg::CopyOp >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttributeCallback * lret = self->operator()(stateattributecallback);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttributeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CopyOp::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);
		if (_lg_typecheck_op_call_overload_3(L)) return _bind_op_call_overload_3(L);
		if (_lg_typecheck_op_call_overload_4(L)) return _bind_op_call_overload_4(L);
		if (_lg_typecheck_op_call_overload_5(L)) return _bind_op_call_overload_5(L);
		if (_lg_typecheck_op_call_overload_6(L)) return _bind_op_call_overload_6(L);
		if (_lg_typecheck_op_call_overload_7(L)) return _bind_op_call_overload_7(L);
		if (_lg_typecheck_op_call_overload_8(L)) return _bind_op_call_overload_8(L);
		if (_lg_typecheck_op_call_overload_9(L)) return _bind_op_call_overload_9(L);
		if (_lg_typecheck_op_call_overload_10(L)) return _bind_op_call_overload_10(L);
		if (_lg_typecheck_op_call_overload_11(L)) return _bind_op_call_overload_11(L);
		if (_lg_typecheck_op_call_overload_12(L)) return _bind_op_call_overload_12(L);
		if (_lg_typecheck_op_call_overload_13(L)) return _bind_op_call_overload_13(L);
		if (_lg_typecheck_op_call_overload_14(L)) return _bind_op_call_overload_14(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(const osg::Referenced *)\n  operator()(const osg::Object *)\n  operator()(const osg::Node *)\n  operator()(const osg::Drawable *)\n  operator()(const osg::StateSet *)\n  operator()(const osg::StateAttribute *)\n  operator()(const osg::Texture *)\n  operator()(const osg::Image *)\n  operator()(const osg::Array *)\n  operator()(const osg::PrimitiveSet *)\n  operator()(const osg::Shape *)\n  operator()(const osg::Uniform *)\n  operator()(const osg::NodeCallback *)\n  operator()(const osg::StateAttributeCallback *)\n");
		return 0;
	}


};

osg::CopyOp* LunaTraits< osg::CopyOp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CopyOp::_bind_ctor(L);
}

void LunaTraits< osg::CopyOp >::_bind_dtor(osg::CopyOp* obj) {
	delete obj;
}

const char LunaTraits< osg::CopyOp >::className[] = "CopyOp";
const char LunaTraits< osg::CopyOp >::fullName[] = "osg::CopyOp";
const char LunaTraits< osg::CopyOp >::moduleName[] = "osg";
const char* LunaTraits< osg::CopyOp >::parents[] = {0};
const int LunaTraits< osg::CopyOp >::hash = 27134364;
const int LunaTraits< osg::CopyOp >::uniqueIDs[] = {27134364,0};

luna_RegType LunaTraits< osg::CopyOp >::methods[] = {
	{"setCopyFlags", &luna_wrapper_osg_CopyOp::_bind_setCopyFlags},
	{"getCopyFlags", &luna_wrapper_osg_CopyOp::_bind_getCopyFlags},
	{"op_call", &luna_wrapper_osg_CopyOp::_bind_op_call},
	{"dynCast", &luna_wrapper_osg_CopyOp::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_CopyOp::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_CopyOp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CopyOp::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CopyOp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CopyOp >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CopyOp >::enumValues[] = {
	{"SHALLOW_COPY", osg::CopyOp::SHALLOW_COPY},
	{"DEEP_COPY_OBJECTS", osg::CopyOp::DEEP_COPY_OBJECTS},
	{"DEEP_COPY_NODES", osg::CopyOp::DEEP_COPY_NODES},
	{"DEEP_COPY_DRAWABLES", osg::CopyOp::DEEP_COPY_DRAWABLES},
	{"DEEP_COPY_STATESETS", osg::CopyOp::DEEP_COPY_STATESETS},
	{"DEEP_COPY_STATEATTRIBUTES", osg::CopyOp::DEEP_COPY_STATEATTRIBUTES},
	{"DEEP_COPY_TEXTURES", osg::CopyOp::DEEP_COPY_TEXTURES},
	{"DEEP_COPY_IMAGES", osg::CopyOp::DEEP_COPY_IMAGES},
	{"DEEP_COPY_ARRAYS", osg::CopyOp::DEEP_COPY_ARRAYS},
	{"DEEP_COPY_PRIMITIVES", osg::CopyOp::DEEP_COPY_PRIMITIVES},
	{"DEEP_COPY_SHAPES", osg::CopyOp::DEEP_COPY_SHAPES},
	{"DEEP_COPY_UNIFORMS", osg::CopyOp::DEEP_COPY_UNIFORMS},
	{"DEEP_COPY_CALLBACKS", osg::CopyOp::DEEP_COPY_CALLBACKS},
	{"DEEP_COPY_USERDATA", osg::CopyOp::DEEP_COPY_USERDATA},
	{"DEEP_COPY_ALL", osg::CopyOp::DEEP_COPY_ALL},
	{0,0}
};


