#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_SceneVisitor.h>

class luna_wrapper_proland_SceneVisitor {
public:
	typedef Luna< proland::SceneVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::SceneVisitor* self= (proland::SceneVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::SceneVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::SceneVisitor* ptr= dynamic_cast< proland::SceneVisitor* >(Luna< ork::Object >::check(L,1));
		proland::SceneVisitor* ptr= luna_caster< ork::Object, proland::SceneVisitor >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::SceneVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_visitNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitNodeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Value >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitProducer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileLayer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitNodeField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitNodeMethod(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Method >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_visitEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_visitNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitNodeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Value >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitProducer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileLayer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitNodeField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitNodeMethod(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Method >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_visitEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::SceneVisitor::SceneVisitor()
	static proland::SceneVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::SceneVisitor::SceneVisitor() function, expected prototype:\nproland::SceneVisitor::SceneVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::SceneVisitor();
	}

	// proland::SceneVisitor::SceneVisitor(lua_Table * data)
	static proland::SceneVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::SceneVisitor::SceneVisitor(lua_Table * data) function, expected prototype:\nproland::SceneVisitor::SceneVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_SceneVisitor(L,NULL);
	}

	// Overload binder for proland::SceneVisitor::SceneVisitor
	static proland::SceneVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SceneVisitor, cannot match any of the overloads for function SceneVisitor:\n  SceneVisitor()\n  SceneVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNode(ork::ptr< ork::SceneNode > node)
	static int _bind_visitNode(lua_State *L) {
		if (!_lg_typecheck_visitNode(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNode(ork::ptr< ork::SceneNode > node) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNode(ork::ptr< ork::SceneNode > node)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNode(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitNode(node);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeValue(ork::ptr< ork::Value > value)
	static int _bind_visitNodeValue(lua_State *L) {
		if (!_lg_typecheck_visitNodeValue(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeValue(ork::ptr< ork::Value > value) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeValue(ork::ptr< ork::Value > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > value = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitNodeValue(value);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitProducer(ork::ptr< proland::TileProducer > producer)
	static int _bind_visitProducer(lua_State *L) {
		if (!_lg_typecheck_visitProducer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitProducer(ork::ptr< proland::TileProducer > producer) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitProducer(ork::ptr< proland::TileProducer > producer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitProducer(ork::ptr< proland::TileProducer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitProducer(producer);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitLayer(ork::ptr< proland::TileLayer > layer)
	static int _bind_visitLayer(lua_State *L) {
		if (!_lg_typecheck_visitLayer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitLayer(ork::ptr< proland::TileLayer > layer) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitLayer(ork::ptr< proland::TileLayer > layer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileLayer > layer = Luna< ork::Object >::checkSubType< proland::TileLayer >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitLayer(ork::ptr< proland::TileLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitLayer(layer);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeField(std::string & name, ork::ptr< ork::Object > field)
	static int _bind_visitNodeField(lua_State *L) {
		if (!_lg_typecheck_visitNodeField(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeField(std::string & name, ork::ptr< ork::Object > field) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeField(std::string & name, ork::ptr< ork::Object > field)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Object > field = Luna< ork::Object >::checkSubType< ork::Object >(L,3);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeField(std::string &, ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitNodeField(name, field);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		lua_pushlstring(L,name.data(),name.size());
		return 2;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeMethod(std::string & name, ork::ptr< ork::Method > method)
	static int _bind_visitNodeMethod(lua_State *L) {
		if (!_lg_typecheck_visitNodeMethod(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeMethod(std::string & name, ork::ptr< ork::Method > method) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeMethod(std::string & name, ork::ptr< ork::Method > method)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Method > method = Luna< ork::Object >::checkSubType< ork::Method >(L,3);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitNodeMethod(std::string &, ork::ptr< ork::Method >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitNodeMethod(name, method);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		lua_pushlstring(L,name.data(),name.size());
		return 2;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitCache(ork::ptr< proland::TileCache > cache)
	static int _bind_visitCache(lua_State *L) {
		if (!_lg_typecheck_visitCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitCache(ork::ptr< proland::TileCache > cache) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitCache(ork::ptr< proland::TileCache > cache)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::visitCache(ork::ptr< proland::TileCache >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->visitCache(cache);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::SceneVisitor::visitEnd()
	static int _bind_visitEnd(lua_State *L) {
		if (!_lg_typecheck_visitEnd(L)) {
			luaL_error(L, "luna typecheck failed in void proland::SceneVisitor::visitEnd() function, expected prototype:\nvoid proland::SceneVisitor::visitEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::SceneVisitor::visitEnd(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->visitEnd();

		return 0;
	}

	// void proland::SceneVisitor::accept(ork::ptr< ork::SceneNode > root)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void proland::SceneVisitor::accept(ork::ptr< ork::SceneNode > root) function, expected prototype:\nvoid proland::SceneVisitor::accept(ork::ptr< ork::SceneNode > root)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > root = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::SceneVisitor::accept(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(root);

		return 0;
	}

	// const char * proland::SceneVisitor::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::SceneVisitor::base_toString() function, expected prototype:\nconst char * proland::SceneVisitor::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::SceneVisitor::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SceneVisitor::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNode(ork::ptr< ork::SceneNode > node)
	static int _bind_base_visitNode(lua_State *L) {
		if (!_lg_typecheck_base_visitNode(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNode(ork::ptr< ork::SceneNode > node) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNode(ork::ptr< ork::SceneNode > node)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNode(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitNode(node);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeValue(ork::ptr< ork::Value > value)
	static int _bind_base_visitNodeValue(lua_State *L) {
		if (!_lg_typecheck_base_visitNodeValue(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeValue(ork::ptr< ork::Value > value) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeValue(ork::ptr< ork::Value > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > value = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitNodeValue(value);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitProducer(ork::ptr< proland::TileProducer > producer)
	static int _bind_base_visitProducer(lua_State *L) {
		if (!_lg_typecheck_base_visitProducer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitProducer(ork::ptr< proland::TileProducer > producer) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitProducer(ork::ptr< proland::TileProducer > producer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitProducer(ork::ptr< proland::TileProducer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitProducer(producer);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitLayer(ork::ptr< proland::TileLayer > layer)
	static int _bind_base_visitLayer(lua_State *L) {
		if (!_lg_typecheck_base_visitLayer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitLayer(ork::ptr< proland::TileLayer > layer) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitLayer(ork::ptr< proland::TileLayer > layer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileLayer > layer = Luna< ork::Object >::checkSubType< proland::TileLayer >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitLayer(ork::ptr< proland::TileLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitLayer(layer);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeField(std::string & name, ork::ptr< ork::Object > field)
	static int _bind_base_visitNodeField(lua_State *L) {
		if (!_lg_typecheck_base_visitNodeField(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeField(std::string & name, ork::ptr< ork::Object > field) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeField(std::string & name, ork::ptr< ork::Object > field)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Object > field = Luna< ork::Object >::checkSubType< ork::Object >(L,3);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeField(std::string &, ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitNodeField(name, field);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		lua_pushlstring(L,name.data(),name.size());
		return 2;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeMethod(std::string & name, ork::ptr< ork::Method > method)
	static int _bind_base_visitNodeMethod(lua_State *L) {
		if (!_lg_typecheck_base_visitNodeMethod(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeMethod(std::string & name, ork::ptr< ork::Method > method) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeMethod(std::string & name, ork::ptr< ork::Method > method)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Method > method = Luna< ork::Object >::checkSubType< ork::Method >(L,3);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitNodeMethod(std::string &, ork::ptr< ork::Method >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitNodeMethod(name, method);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		lua_pushlstring(L,name.data(),name.size());
		return 2;
	}

	// ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitCache(ork::ptr< proland::TileCache > cache)
	static int _bind_base_visitCache(lua_State *L) {
		if (!_lg_typecheck_base_visitCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitCache(ork::ptr< proland::TileCache > cache) function, expected prototype:\nork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitCache(ork::ptr< proland::TileCache > cache)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);

		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::SceneVisitor > proland::SceneVisitor::base_visitCache(ork::ptr< proland::TileCache >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::SceneVisitor > lret = self->SceneVisitor::visitCache(cache);
		Luna< proland::SceneVisitor >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::SceneVisitor::base_visitEnd()
	static int _bind_base_visitEnd(lua_State *L) {
		if (!_lg_typecheck_base_visitEnd(L)) {
			luaL_error(L, "luna typecheck failed in void proland::SceneVisitor::base_visitEnd() function, expected prototype:\nvoid proland::SceneVisitor::base_visitEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::SceneVisitor* self=Luna< ork::Object >::checkSubType< proland::SceneVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::SceneVisitor::base_visitEnd(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SceneVisitor::visitEnd();

		return 0;
	}


	// Operator binds:

};

proland::SceneVisitor* LunaTraits< proland::SceneVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_SceneVisitor::_bind_ctor(L);
}

void LunaTraits< proland::SceneVisitor >::_bind_dtor(proland::SceneVisitor* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::SceneVisitor >::className[] = "SceneVisitor";
const char LunaTraits< proland::SceneVisitor >::fullName[] = "proland::SceneVisitor";
const char LunaTraits< proland::SceneVisitor >::moduleName[] = "proland";
const char* LunaTraits< proland::SceneVisitor >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::SceneVisitor >::hash = 67367741;
const int LunaTraits< proland::SceneVisitor >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::SceneVisitor >::methods[] = {
	{"visitNode", &luna_wrapper_proland_SceneVisitor::_bind_visitNode},
	{"visitNodeValue", &luna_wrapper_proland_SceneVisitor::_bind_visitNodeValue},
	{"visitProducer", &luna_wrapper_proland_SceneVisitor::_bind_visitProducer},
	{"visitLayer", &luna_wrapper_proland_SceneVisitor::_bind_visitLayer},
	{"visitNodeField", &luna_wrapper_proland_SceneVisitor::_bind_visitNodeField},
	{"visitNodeMethod", &luna_wrapper_proland_SceneVisitor::_bind_visitNodeMethod},
	{"visitCache", &luna_wrapper_proland_SceneVisitor::_bind_visitCache},
	{"visitEnd", &luna_wrapper_proland_SceneVisitor::_bind_visitEnd},
	{"accept", &luna_wrapper_proland_SceneVisitor::_bind_accept},
	{"base_toString", &luna_wrapper_proland_SceneVisitor::_bind_base_toString},
	{"base_visitNode", &luna_wrapper_proland_SceneVisitor::_bind_base_visitNode},
	{"base_visitNodeValue", &luna_wrapper_proland_SceneVisitor::_bind_base_visitNodeValue},
	{"base_visitProducer", &luna_wrapper_proland_SceneVisitor::_bind_base_visitProducer},
	{"base_visitLayer", &luna_wrapper_proland_SceneVisitor::_bind_base_visitLayer},
	{"base_visitNodeField", &luna_wrapper_proland_SceneVisitor::_bind_base_visitNodeField},
	{"base_visitNodeMethod", &luna_wrapper_proland_SceneVisitor::_bind_base_visitNodeMethod},
	{"base_visitCache", &luna_wrapper_proland_SceneVisitor::_bind_base_visitCache},
	{"base_visitEnd", &luna_wrapper_proland_SceneVisitor::_bind_base_visitEnd},
	{"fromVoid", &luna_wrapper_proland_SceneVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_SceneVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_SceneVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::SceneVisitor >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_SceneVisitor::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::SceneVisitor >::enumValues[] = {
	{0,0}
};


