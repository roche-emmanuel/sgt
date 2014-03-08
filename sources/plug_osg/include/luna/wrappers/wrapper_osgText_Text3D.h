#ifndef _WRAPPERS_WRAPPER_OSGTEXT_TEXT_D_H_
#define _WRAPPERS_WRAPPER_OSGTEXT_TEXT_D_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgText/Text3D>

class wrapper_osgText_Text3D : public osgText::Text3D, public luna_wrapper_base {

public:
		

	~wrapper_osgText_Text3D() {
		logDEBUG3("Calling delete function for wrapper osgText_Text3D");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgText::Text3D*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgText_Text3D(lua_State* L, lua_Table* dum) 
		: osgText::Text3D(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgText_Text3D(lua_State* L, lua_Table* dum, const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgText::Text3D(text, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osgText::Text3D::computeGlyphRepresentation()
	void computeGlyphRepresentation() {
		if(_obj.pushFunction("computeGlyphRepresentation")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<void>());
		}

		return Text3D::computeGlyphRepresentation();
	};

	// void osgText::Text3D::computePositions(unsigned int contextID) const
	void computePositions(unsigned int contextID) const {
		if(_obj.pushFunction("computePositions")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(contextID);
			return (_obj.callFunction<void>());
		}

		return Text3D::computePositions(contextID);
	};

public:
	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Text3D::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Text3D::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Text3D::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Text3D::getUserData();
	};

	// osg::Geometry * osg::Drawable::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Text3D::asGeometry();
	};

	// const osg::Geometry * osg::Drawable::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Text3D::asGeometry();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<void>());
		}

		return Text3D::computeDataVariance();
	};

	// void osg::Drawable::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return Text3D::setUseVertexBufferObjects(flag);
	};

	// void osg::Drawable::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<void>());
		}

		return Text3D::dirtyDisplayList();
	};

	// unsigned int osg::Drawable::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return Text3D::getGLObjectSizeHint();
	};

	// void osg::Drawable::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Text3D::compileGLObjects(renderInfo);
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Text3D::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Text3D::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return Text3D::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return Text3D::setDrawCallback(dc);
	};

	// void osgText::TextBase::setFont(osgText::Font * font = 0)
	void setFont(osgText::Font * font = 0) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(font);
			return (_obj.callFunction<void>());
		}

		return Text3D::setFont(font);
	};

	// void osgText::TextBase::setFont(const std::string & fontfile)
	void setFont(const std::string & fontfile) {
		if(_obj.pushFunction("setFont")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(fontfile);
			return (_obj.callFunction<void>());
		}

		return Text3D::setFont(fontfile);
	};

	// osg::Object * osgText::Text3D::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Text3D::cloneType();
	};

	// osg::Object * osgText::Text3D::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Text3D::clone(arg1);
	};

	// bool osgText::Text3D::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Text3D::isSameKindAs(obj);
	};

	// const char * osgText::Text3D::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<const char*>());
		}

		return Text3D::libraryName();
	};

	// const char * osgText::Text3D::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgText::Text3D*)this);
			return (_obj.callFunction<const char*>());
		}

		return Text3D::className();
	};

	// void osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Text3D::drawImplementation(renderInfo);
	};

	// void osgText::Text3D::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Text3D::setThreadSafeRefUnref(threadSafe);
	};

	// void osgText::Text3D::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgText::Text3D*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Text3D::releaseGLObjects(state);
	};

	// osg::BoundingBoxd osgText::Text3D::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((osgText::Text3D*)this);
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return Text3D::computeBound();
	};


	// Protected non-virtual methods:
	// void osgText::Text3D::renderPerGlyph(osg::State & state) const
	void public_renderPerGlyph(osg::State & state) const {
		return osgText::Text3D::renderPerGlyph(state);
	};

	// void osgText::Text3D::renderPerFace(osg::State & state) const
	void public_renderPerFace(osg::State & state) const {
		return osgText::Text3D::renderPerFace(state);
	};

	// void osgText::TextBase::positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength)
	void public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength) {
		return osgText::TextBase::positionCursor(endOfLine_coords, cursor, linelength);
	};

	// void osgText::TextBase::computePositions()
	void public_computePositions() {
		return osgText::TextBase::computePositions();
	};

	// void osg::Drawable::setBound(const osg::BoundingBoxd & bb) const
	void public_setBound(const osg::BoundingBoxd & bb) const {
		return osg::Drawable::setBound(bb);
	};

	// void osg::Drawable::addParent(osg::Node * node)
	void public_addParent(osg::Node * node) {
		return osg::Drawable::addParent(node);
	};

	// void osg::Drawable::removeParent(osg::Node * node)
	void public_removeParent(osg::Node * node) {
		return osg::Drawable::removeParent(node);
	};

	// void osg::Drawable::setNumChildrenRequiringUpdateTraversal(unsigned int num)
	void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
		return osg::Drawable::setNumChildrenRequiringUpdateTraversal(num);
	};

	// unsigned int osg::Drawable::getNumChildrenRequiringUpdateTraversal() const
	unsigned int public_getNumChildrenRequiringUpdateTraversal() const {
		return osg::Drawable::getNumChildrenRequiringUpdateTraversal();
	};

	// void osg::Drawable::setNumChildrenRequiringEventTraversal(unsigned int num)
	void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
		return osg::Drawable::setNumChildrenRequiringEventTraversal(num);
	};

	// unsigned int osg::Drawable::getNumChildrenRequiringEventTraversal() const
	unsigned int public_getNumChildrenRequiringEventTraversal() const {
		return osg::Drawable::getNumChildrenRequiringEventTraversal();
	};

	// osg::Drawable & osg::Drawable::operator=(const osg::Drawable & arg1)
	osg::Drawable & public_op_assign(const osg::Drawable & arg1) {
		return osg::Drawable::operator=(arg1);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_renderPerGlyph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_renderPerFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_positionCursor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computePositions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osgText::Text3D::public_renderPerGlyph(osg::State & state) const
	static int _bind_public_renderPerGlyph(lua_State *L) {
		if (!_lg_typecheck_public_renderPerGlyph(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::public_renderPerGlyph(osg::State & state) const function, expected prototype:\nvoid osgText::Text3D::public_renderPerGlyph(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text3D::public_renderPerGlyph function");
		}
		osg::State & state=*state_ptr;

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::public_renderPerGlyph(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_renderPerGlyph(state);

		return 0;
	}

	// void osgText::Text3D::public_renderPerFace(osg::State & state) const
	static int _bind_public_renderPerFace(lua_State *L) {
		if (!_lg_typecheck_public_renderPerFace(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::public_renderPerFace(osg::State & state) const function, expected prototype:\nvoid osgText::Text3D::public_renderPerFace(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::Text3D::public_renderPerFace function");
		}
		osg::State & state=*state_ptr;

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::public_renderPerFace(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_renderPerFace(state);

		return 0;
	}

	// void osgText::TextBase::public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength)
	static int _bind_public_positionCursor(lua_State *L) {
		if (!_lg_typecheck_public_positionCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength) function, expected prototype:\nvoid osgText::TextBase::public_positionCursor(const osg::Vec2f & endOfLine_coords, osg::Vec2f & cursor, unsigned int linelength)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* endOfLine_coords_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !endOfLine_coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg endOfLine_coords in osgText::TextBase::public_positionCursor function");
		}
		const osg::Vec2f & endOfLine_coords=*endOfLine_coords_ptr;
		osg::Vec2f* cursor_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in osgText::TextBase::public_positionCursor function");
		}
		osg::Vec2f & cursor=*cursor_ptr;
		unsigned int linelength=(unsigned int)lua_tointeger(L,4);

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::public_positionCursor(const osg::Vec2f &, osg::Vec2f &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_positionCursor(endOfLine_coords, cursor, linelength);

		return 0;
	}

	// void osgText::TextBase::public_computePositions()
	static int _bind_public_computePositions(lua_State *L) {
		if (!_lg_typecheck_public_computePositions(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::public_computePositions() function, expected prototype:\nvoid osgText::TextBase::public_computePositions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::public_computePositions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computePositions();

		return 0;
	}

	// void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const
	static int _bind_public_setBound(lua_State *L) {
		if (!_lg_typecheck_public_setBound(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const function, expected prototype:\nvoid osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Drawable::public_setBound function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setBound(const osg::BoundingBoxd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setBound(bb);

		return 0;
	}

	// void osg::Drawable::public_addParent(osg::Node * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_addParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_addParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_addParent(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addParent(node);

		return 0;
	}

	// void osg::Drawable::public_removeParent(osg::Node * node)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_removeParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_removeParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_removeParent(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeParent(node);

		return 0;
	}

	// void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const
	static int _bind_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_getNumChildrenRequiringUpdateTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const
	static int _bind_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_getNumChildrenRequiringEventTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Drawable & osg::Drawable::public_op_assign(const osg::Drawable & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable & osg::Drawable::public_op_assign(const osg::Drawable & arg1) function, expected prototype:\nosg::Drawable & osg::Drawable::public_op_assign(const osg::Drawable & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::public_op_assign function");
		}
		const osg::Drawable & _arg1=*_arg1_ptr;

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable & osg::Drawable::public_op_assign(const osg::Drawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgText_Text3D* self=Luna< osg::Referenced >::checkSubType< wrapper_osgText_Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"renderPerGlyph",_bind_public_renderPerGlyph},
		{"renderPerFace",_bind_public_renderPerFace},
		{"positionCursor",_bind_public_positionCursor},
		{"computePositions",_bind_public_computePositions},
		{"setBound",_bind_public_setBound},
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
		{"setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"getNumChildrenRequiringUpdateTraversal",_bind_public_getNumChildrenRequiringUpdateTraversal},
		{"setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"getNumChildrenRequiringEventTraversal",_bind_public_getNumChildrenRequiringEventTraversal},
		{"op_assign",_bind_public_op_assign},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

