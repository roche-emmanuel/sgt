#include <plug_common.h>

#include <osg/Endian>
#include <osg/ImageUtils>
#include <osg/Notify>
#include <osgDB/Callbacks>
#include <osgDB/FileUtils>
#include <osgText/KerningType>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum Endian

	lua_pushnumber(L,osg::BigEndian); lua_setfield(L,-2,"BigEndian");
	lua_pushnumber(L,osg::LittleEndian); lua_setfield(L,-2,"LittleEndian");

	lua_setfield(L,-2,"Endian");

	lua_pushnumber(L,osg::BigEndian); lua_setfield(L,-2,"BigEndian");
	lua_pushnumber(L,osg::LittleEndian); lua_setfield(L,-2,"LittleEndian");


	lua_newtable(L); // enum ColorSpaceOperation

	lua_pushnumber(L,osg::NO_COLOR_SPACE_OPERATION); lua_setfield(L,-2,"NO_COLOR_SPACE_OPERATION");
	lua_pushnumber(L,osg::MODULATE_ALPHA_BY_LUMINANCE); lua_setfield(L,-2,"MODULATE_ALPHA_BY_LUMINANCE");
	lua_pushnumber(L,osg::MODULATE_ALPHA_BY_COLOR); lua_setfield(L,-2,"MODULATE_ALPHA_BY_COLOR");
	lua_pushnumber(L,osg::REPLACE_ALPHA_WITH_LUMINANCE); lua_setfield(L,-2,"REPLACE_ALPHA_WITH_LUMINANCE");
	lua_pushnumber(L,osg::REPLACE_RGB_WITH_LUMINANCE); lua_setfield(L,-2,"REPLACE_RGB_WITH_LUMINANCE");

	lua_setfield(L,-2,"ColorSpaceOperation");

	lua_pushnumber(L,osg::NO_COLOR_SPACE_OPERATION); lua_setfield(L,-2,"NO_COLOR_SPACE_OPERATION");
	lua_pushnumber(L,osg::MODULATE_ALPHA_BY_LUMINANCE); lua_setfield(L,-2,"MODULATE_ALPHA_BY_LUMINANCE");
	lua_pushnumber(L,osg::MODULATE_ALPHA_BY_COLOR); lua_setfield(L,-2,"MODULATE_ALPHA_BY_COLOR");
	lua_pushnumber(L,osg::REPLACE_ALPHA_WITH_LUMINANCE); lua_setfield(L,-2,"REPLACE_ALPHA_WITH_LUMINANCE");
	lua_pushnumber(L,osg::REPLACE_RGB_WITH_LUMINANCE); lua_setfield(L,-2,"REPLACE_RGB_WITH_LUMINANCE");


	lua_newtable(L); // enum NotifySeverity

	lua_pushnumber(L,osg::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,osg::FATAL); lua_setfield(L,-2,"FATAL");
	lua_pushnumber(L,osg::WARN); lua_setfield(L,-2,"WARN");
	lua_pushnumber(L,osg::NOTICE); lua_setfield(L,-2,"NOTICE");
	lua_pushnumber(L,osg::INFO); lua_setfield(L,-2,"INFO");
	lua_pushnumber(L,osg::DEBUG_INFO); lua_setfield(L,-2,"DEBUG_INFO");
	lua_pushnumber(L,osg::DEBUG_FP); lua_setfield(L,-2,"DEBUG_FP");

	lua_setfield(L,-2,"NotifySeverity");

	lua_pushnumber(L,osg::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,osg::FATAL); lua_setfield(L,-2,"FATAL");
	lua_pushnumber(L,osg::WARN); lua_setfield(L,-2,"WARN");
	lua_pushnumber(L,osg::NOTICE); lua_setfield(L,-2,"NOTICE");
	lua_pushnumber(L,osg::INFO); lua_setfield(L,-2,"INFO");
	lua_pushnumber(L,osg::DEBUG_INFO); lua_setfield(L,-2,"DEBUG_INFO");
	lua_pushnumber(L,osg::DEBUG_FP); lua_setfield(L,-2,"DEBUG_FP");


	lua_newtable(L); // enum CaseSensitivity

	lua_pushnumber(L,osgDB::CASE_SENSITIVE); lua_setfield(L,-2,"CASE_SENSITIVE");
	lua_pushnumber(L,osgDB::CASE_INSENSITIVE); lua_setfield(L,-2,"CASE_INSENSITIVE");

	lua_setfield(L,-2,"CaseSensitivity");

	lua_pushnumber(L,osgDB::CASE_SENSITIVE); lua_setfield(L,-2,"CASE_SENSITIVE");
	lua_pushnumber(L,osgDB::CASE_INSENSITIVE); lua_setfield(L,-2,"CASE_INSENSITIVE");


	lua_newtable(L); // enum FileType

	lua_pushnumber(L,osgDB::FILE_NOT_FOUND); lua_setfield(L,-2,"FILE_NOT_FOUND");
	lua_pushnumber(L,osgDB::REGULAR_FILE); lua_setfield(L,-2,"REGULAR_FILE");
	lua_pushnumber(L,osgDB::DIRECTORY); lua_setfield(L,-2,"DIRECTORY");

	lua_setfield(L,-2,"FileType");

	lua_pushnumber(L,osgDB::FILE_NOT_FOUND); lua_setfield(L,-2,"FILE_NOT_FOUND");
	lua_pushnumber(L,osgDB::REGULAR_FILE); lua_setfield(L,-2,"REGULAR_FILE");
	lua_pushnumber(L,osgDB::DIRECTORY); lua_setfield(L,-2,"DIRECTORY");


	lua_newtable(L); // enum Value


	lua_setfield(L,-2,"Value");



	lua_newtable(L); // enum KerningType

	lua_pushnumber(L,osgText::KERNING_DEFAULT); lua_setfield(L,-2,"KERNING_DEFAULT");
	lua_pushnumber(L,osgText::KERNING_UNFITTED); lua_setfield(L,-2,"KERNING_UNFITTED");
	lua_pushnumber(L,osgText::KERNING_NONE); lua_setfield(L,-2,"KERNING_NONE");

	lua_setfield(L,-2,"KerningType");

	lua_pushnumber(L,osgText::KERNING_DEFAULT); lua_setfield(L,-2,"KERNING_DEFAULT");
	lua_pushnumber(L,osgText::KERNING_UNFITTED); lua_setfield(L,-2,"KERNING_UNFITTED");
	lua_pushnumber(L,osgText::KERNING_NONE); lua_setfield(L,-2,"KERNING_NONE");


}

#ifdef __cplusplus
}
#endif


