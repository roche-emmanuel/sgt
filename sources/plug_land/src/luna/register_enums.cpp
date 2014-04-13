#include <plug_common.h>

#include <ork/render/Types.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum BufferUsage

	lua_pushnumber(L,ork::STREAM_DRAW); lua_setfield(L,-2,"STREAM_DRAW");
	lua_pushnumber(L,ork::STREAM_READ); lua_setfield(L,-2,"STREAM_READ");
	lua_pushnumber(L,ork::STREAM_COPY); lua_setfield(L,-2,"STREAM_COPY");
	lua_pushnumber(L,ork::STATIC_DRAW); lua_setfield(L,-2,"STATIC_DRAW");
	lua_pushnumber(L,ork::STATIC_READ); lua_setfield(L,-2,"STATIC_READ");
	lua_pushnumber(L,ork::STATIC_COPY); lua_setfield(L,-2,"STATIC_COPY");
	lua_pushnumber(L,ork::DYNAMIC_DRAW); lua_setfield(L,-2,"DYNAMIC_DRAW");
	lua_pushnumber(L,ork::DYNAMIC_READ); lua_setfield(L,-2,"DYNAMIC_READ");
	lua_pushnumber(L,ork::DYNAMIC_COPY); lua_setfield(L,-2,"DYNAMIC_COPY");

	lua_setfield(L,-2,"BufferUsage");

	lua_pushnumber(L,ork::STREAM_DRAW); lua_setfield(L,-2,"STREAM_DRAW");
	lua_pushnumber(L,ork::STREAM_READ); lua_setfield(L,-2,"STREAM_READ");
	lua_pushnumber(L,ork::STREAM_COPY); lua_setfield(L,-2,"STREAM_COPY");
	lua_pushnumber(L,ork::STATIC_DRAW); lua_setfield(L,-2,"STATIC_DRAW");
	lua_pushnumber(L,ork::STATIC_READ); lua_setfield(L,-2,"STATIC_READ");
	lua_pushnumber(L,ork::STATIC_COPY); lua_setfield(L,-2,"STATIC_COPY");
	lua_pushnumber(L,ork::DYNAMIC_DRAW); lua_setfield(L,-2,"DYNAMIC_DRAW");
	lua_pushnumber(L,ork::DYNAMIC_READ); lua_setfield(L,-2,"DYNAMIC_READ");
	lua_pushnumber(L,ork::DYNAMIC_COPY); lua_setfield(L,-2,"DYNAMIC_COPY");


	lua_newtable(L); // enum BufferAccess

	lua_pushnumber(L,ork::READ_ONLY); lua_setfield(L,-2,"READ_ONLY");
	lua_pushnumber(L,ork::WRITE_ONLY); lua_setfield(L,-2,"WRITE_ONLY");
	lua_pushnumber(L,ork::READ_WRITE); lua_setfield(L,-2,"READ_WRITE");

	lua_setfield(L,-2,"BufferAccess");

	lua_pushnumber(L,ork::READ_ONLY); lua_setfield(L,-2,"READ_ONLY");
	lua_pushnumber(L,ork::WRITE_ONLY); lua_setfield(L,-2,"WRITE_ONLY");
	lua_pushnumber(L,ork::READ_WRITE); lua_setfield(L,-2,"READ_WRITE");


	lua_newtable(L); // enum AttributeType

	lua_pushnumber(L,ork::A8I); lua_setfield(L,-2,"A8I");
	lua_pushnumber(L,ork::A8UI); lua_setfield(L,-2,"A8UI");
	lua_pushnumber(L,ork::A16I); lua_setfield(L,-2,"A16I");
	lua_pushnumber(L,ork::A16UI); lua_setfield(L,-2,"A16UI");
	lua_pushnumber(L,ork::A32I); lua_setfield(L,-2,"A32I");
	lua_pushnumber(L,ork::A32UI); lua_setfield(L,-2,"A32UI");
	lua_pushnumber(L,ork::A16F); lua_setfield(L,-2,"A16F");
	lua_pushnumber(L,ork::A32F); lua_setfield(L,-2,"A32F");
	lua_pushnumber(L,ork::A64F); lua_setfield(L,-2,"A64F");
	lua_pushnumber(L,ork::A32I_2_10_10_10_REV); lua_setfield(L,-2,"A32I_2_10_10_10_REV");
	lua_pushnumber(L,ork::A32UI_2_10_10_10_REV); lua_setfield(L,-2,"A32UI_2_10_10_10_REV");
	lua_pushnumber(L,ork::A32I_FIXED); lua_setfield(L,-2,"A32I_FIXED");

	lua_setfield(L,-2,"AttributeType");

	lua_pushnumber(L,ork::A8I); lua_setfield(L,-2,"A8I");
	lua_pushnumber(L,ork::A8UI); lua_setfield(L,-2,"A8UI");
	lua_pushnumber(L,ork::A16I); lua_setfield(L,-2,"A16I");
	lua_pushnumber(L,ork::A16UI); lua_setfield(L,-2,"A16UI");
	lua_pushnumber(L,ork::A32I); lua_setfield(L,-2,"A32I");
	lua_pushnumber(L,ork::A32UI); lua_setfield(L,-2,"A32UI");
	lua_pushnumber(L,ork::A16F); lua_setfield(L,-2,"A16F");
	lua_pushnumber(L,ork::A32F); lua_setfield(L,-2,"A32F");
	lua_pushnumber(L,ork::A64F); lua_setfield(L,-2,"A64F");
	lua_pushnumber(L,ork::A32I_2_10_10_10_REV); lua_setfield(L,-2,"A32I_2_10_10_10_REV");
	lua_pushnumber(L,ork::A32UI_2_10_10_10_REV); lua_setfield(L,-2,"A32UI_2_10_10_10_REV");
	lua_pushnumber(L,ork::A32I_FIXED); lua_setfield(L,-2,"A32I_FIXED");


	lua_newtable(L); // enum MeshMode

	lua_pushnumber(L,ork::POINTS); lua_setfield(L,-2,"POINTS");
	lua_pushnumber(L,ork::LINE_STRIP); lua_setfield(L,-2,"LINE_STRIP");
	lua_pushnumber(L,ork::LINE_LOOP); lua_setfield(L,-2,"LINE_LOOP");
	lua_pushnumber(L,ork::LINES); lua_setfield(L,-2,"LINES");
	lua_pushnumber(L,ork::TRIANGLE_STRIP); lua_setfield(L,-2,"TRIANGLE_STRIP");
	lua_pushnumber(L,ork::TRIANGLE_FAN); lua_setfield(L,-2,"TRIANGLE_FAN");
	lua_pushnumber(L,ork::TRIANGLES); lua_setfield(L,-2,"TRIANGLES");
	lua_pushnumber(L,ork::LINES_ADJACENCY); lua_setfield(L,-2,"LINES_ADJACENCY");
	lua_pushnumber(L,ork::LINE_STRIP_ADJACENCY); lua_setfield(L,-2,"LINE_STRIP_ADJACENCY");
	lua_pushnumber(L,ork::TRIANGLES_ADJACENCY); lua_setfield(L,-2,"TRIANGLES_ADJACENCY");
	lua_pushnumber(L,ork::TRIANGLE_STRIP_ADJACENCY); lua_setfield(L,-2,"TRIANGLE_STRIP_ADJACENCY");
	lua_pushnumber(L,ork::PATCHES); lua_setfield(L,-2,"PATCHES");

	lua_setfield(L,-2,"MeshMode");

	lua_pushnumber(L,ork::POINTS); lua_setfield(L,-2,"POINTS");
	lua_pushnumber(L,ork::LINE_STRIP); lua_setfield(L,-2,"LINE_STRIP");
	lua_pushnumber(L,ork::LINE_LOOP); lua_setfield(L,-2,"LINE_LOOP");
	lua_pushnumber(L,ork::LINES); lua_setfield(L,-2,"LINES");
	lua_pushnumber(L,ork::TRIANGLE_STRIP); lua_setfield(L,-2,"TRIANGLE_STRIP");
	lua_pushnumber(L,ork::TRIANGLE_FAN); lua_setfield(L,-2,"TRIANGLE_FAN");
	lua_pushnumber(L,ork::TRIANGLES); lua_setfield(L,-2,"TRIANGLES");
	lua_pushnumber(L,ork::LINES_ADJACENCY); lua_setfield(L,-2,"LINES_ADJACENCY");
	lua_pushnumber(L,ork::LINE_STRIP_ADJACENCY); lua_setfield(L,-2,"LINE_STRIP_ADJACENCY");
	lua_pushnumber(L,ork::TRIANGLES_ADJACENCY); lua_setfield(L,-2,"TRIANGLES_ADJACENCY");
	lua_pushnumber(L,ork::TRIANGLE_STRIP_ADJACENCY); lua_setfield(L,-2,"TRIANGLE_STRIP_ADJACENCY");
	lua_pushnumber(L,ork::PATCHES); lua_setfield(L,-2,"PATCHES");


	lua_newtable(L); // enum MeshUsage

	lua_pushnumber(L,ork::CPU); lua_setfield(L,-2,"CPU");
	lua_pushnumber(L,ork::GPU_STATIC); lua_setfield(L,-2,"GPU_STATIC");
	lua_pushnumber(L,ork::GPU_DYNAMIC); lua_setfield(L,-2,"GPU_DYNAMIC");
	lua_pushnumber(L,ork::GPU_STREAM); lua_setfield(L,-2,"GPU_STREAM");

	lua_setfield(L,-2,"MeshUsage");

	lua_pushnumber(L,ork::CPU); lua_setfield(L,-2,"CPU");
	lua_pushnumber(L,ork::GPU_STATIC); lua_setfield(L,-2,"GPU_STATIC");
	lua_pushnumber(L,ork::GPU_DYNAMIC); lua_setfield(L,-2,"GPU_DYNAMIC");
	lua_pushnumber(L,ork::GPU_STREAM); lua_setfield(L,-2,"GPU_STREAM");


	lua_newtable(L); // enum CubeFace

	lua_pushnumber(L,ork::POSITIVE_X); lua_setfield(L,-2,"POSITIVE_X");
	lua_pushnumber(L,ork::NEGATIVE_X); lua_setfield(L,-2,"NEGATIVE_X");
	lua_pushnumber(L,ork::POSITIVE_Y); lua_setfield(L,-2,"POSITIVE_Y");
	lua_pushnumber(L,ork::NEGATIVE_Y); lua_setfield(L,-2,"NEGATIVE_Y");
	lua_pushnumber(L,ork::POSITIVE_Z); lua_setfield(L,-2,"POSITIVE_Z");
	lua_pushnumber(L,ork::NEGATIVE_Z); lua_setfield(L,-2,"NEGATIVE_Z");

	lua_setfield(L,-2,"CubeFace");

	lua_pushnumber(L,ork::POSITIVE_X); lua_setfield(L,-2,"POSITIVE_X");
	lua_pushnumber(L,ork::NEGATIVE_X); lua_setfield(L,-2,"NEGATIVE_X");
	lua_pushnumber(L,ork::POSITIVE_Y); lua_setfield(L,-2,"POSITIVE_Y");
	lua_pushnumber(L,ork::NEGATIVE_Y); lua_setfield(L,-2,"NEGATIVE_Y");
	lua_pushnumber(L,ork::POSITIVE_Z); lua_setfield(L,-2,"POSITIVE_Z");
	lua_pushnumber(L,ork::NEGATIVE_Z); lua_setfield(L,-2,"NEGATIVE_Z");


	lua_newtable(L); // enum TextureInternalFormat

	lua_pushnumber(L,ork::R8); lua_setfield(L,-2,"R8");
	lua_pushnumber(L,ork::R8_SNORM); lua_setfield(L,-2,"R8_SNORM");
	lua_pushnumber(L,ork::R16); lua_setfield(L,-2,"R16");
	lua_pushnumber(L,ork::R16_SNORM); lua_setfield(L,-2,"R16_SNORM");
	lua_pushnumber(L,ork::RG8); lua_setfield(L,-2,"RG8");
	lua_pushnumber(L,ork::RG8_SNORM); lua_setfield(L,-2,"RG8_SNORM");
	lua_pushnumber(L,ork::RG16); lua_setfield(L,-2,"RG16");
	lua_pushnumber(L,ork::RG16_SNORM); lua_setfield(L,-2,"RG16_SNORM");
	lua_pushnumber(L,ork::R3_G3_B2); lua_setfield(L,-2,"R3_G3_B2");
	lua_pushnumber(L,ork::RGB4); lua_setfield(L,-2,"RGB4");
	lua_pushnumber(L,ork::RGB5); lua_setfield(L,-2,"RGB5");
	lua_pushnumber(L,ork::RGB8); lua_setfield(L,-2,"RGB8");
	lua_pushnumber(L,ork::RGB8_SNORM); lua_setfield(L,-2,"RGB8_SNORM");
	lua_pushnumber(L,ork::RGB10); lua_setfield(L,-2,"RGB10");
	lua_pushnumber(L,ork::RGB12); lua_setfield(L,-2,"RGB12");
	lua_pushnumber(L,ork::RGB16); lua_setfield(L,-2,"RGB16");
	lua_pushnumber(L,ork::RGB16_SNORM); lua_setfield(L,-2,"RGB16_SNORM");
	lua_pushnumber(L,ork::RGBA2); lua_setfield(L,-2,"RGBA2");
	lua_pushnumber(L,ork::RGBA4); lua_setfield(L,-2,"RGBA4");
	lua_pushnumber(L,ork::RGB5_A1); lua_setfield(L,-2,"RGB5_A1");
	lua_pushnumber(L,ork::RGBA8); lua_setfield(L,-2,"RGBA8");
	lua_pushnumber(L,ork::RGBA8_SNORM); lua_setfield(L,-2,"RGBA8_SNORM");
	lua_pushnumber(L,ork::RGB10_A2); lua_setfield(L,-2,"RGB10_A2");
	lua_pushnumber(L,ork::RGB10_A2UI); lua_setfield(L,-2,"RGB10_A2UI");
	lua_pushnumber(L,ork::RGBA12); lua_setfield(L,-2,"RGBA12");
	lua_pushnumber(L,ork::RGBA16); lua_setfield(L,-2,"RGBA16");
	lua_pushnumber(L,ork::RGBA16_SNORM); lua_setfield(L,-2,"RGBA16_SNORM");
	lua_pushnumber(L,ork::SRGB8); lua_setfield(L,-2,"SRGB8");
	lua_pushnumber(L,ork::SRGB8_ALPHA8); lua_setfield(L,-2,"SRGB8_ALPHA8");
	lua_pushnumber(L,ork::R16F); lua_setfield(L,-2,"R16F");
	lua_pushnumber(L,ork::RG16F); lua_setfield(L,-2,"RG16F");
	lua_pushnumber(L,ork::RGB16F); lua_setfield(L,-2,"RGB16F");
	lua_pushnumber(L,ork::RGBA16F); lua_setfield(L,-2,"RGBA16F");
	lua_pushnumber(L,ork::R32F); lua_setfield(L,-2,"R32F");
	lua_pushnumber(L,ork::RG32F); lua_setfield(L,-2,"RG32F");
	lua_pushnumber(L,ork::RGB32F); lua_setfield(L,-2,"RGB32F");
	lua_pushnumber(L,ork::RGBA32F); lua_setfield(L,-2,"RGBA32F");
	lua_pushnumber(L,ork::R11F_G11F_B10F); lua_setfield(L,-2,"R11F_G11F_B10F");
	lua_pushnumber(L,ork::RGB9_E5); lua_setfield(L,-2,"RGB9_E5");
	lua_pushnumber(L,ork::R8I); lua_setfield(L,-2,"R8I");
	lua_pushnumber(L,ork::R8UI); lua_setfield(L,-2,"R8UI");
	lua_pushnumber(L,ork::R16I); lua_setfield(L,-2,"R16I");
	lua_pushnumber(L,ork::R16UI); lua_setfield(L,-2,"R16UI");
	lua_pushnumber(L,ork::R32I); lua_setfield(L,-2,"R32I");
	lua_pushnumber(L,ork::R32UI); lua_setfield(L,-2,"R32UI");
	lua_pushnumber(L,ork::RG8I); lua_setfield(L,-2,"RG8I");
	lua_pushnumber(L,ork::RG8UI); lua_setfield(L,-2,"RG8UI");
	lua_pushnumber(L,ork::RG16I); lua_setfield(L,-2,"RG16I");
	lua_pushnumber(L,ork::RG16UI); lua_setfield(L,-2,"RG16UI");
	lua_pushnumber(L,ork::RG32I); lua_setfield(L,-2,"RG32I");
	lua_pushnumber(L,ork::RG32UI); lua_setfield(L,-2,"RG32UI");
	lua_pushnumber(L,ork::RGB8I); lua_setfield(L,-2,"RGB8I");
	lua_pushnumber(L,ork::RGB8UI); lua_setfield(L,-2,"RGB8UI");
	lua_pushnumber(L,ork::RGB16I); lua_setfield(L,-2,"RGB16I");
	lua_pushnumber(L,ork::RGB16UI); lua_setfield(L,-2,"RGB16UI");
	lua_pushnumber(L,ork::RGB32I); lua_setfield(L,-2,"RGB32I");
	lua_pushnumber(L,ork::RGB32UI); lua_setfield(L,-2,"RGB32UI");
	lua_pushnumber(L,ork::RGBA8I); lua_setfield(L,-2,"RGBA8I");
	lua_pushnumber(L,ork::RGBA8UI); lua_setfield(L,-2,"RGBA8UI");
	lua_pushnumber(L,ork::RGBA16I); lua_setfield(L,-2,"RGBA16I");
	lua_pushnumber(L,ork::RGBA16UI); lua_setfield(L,-2,"RGBA16UI");
	lua_pushnumber(L,ork::RGBA32I); lua_setfield(L,-2,"RGBA32I");
	lua_pushnumber(L,ork::RGBA32UI); lua_setfield(L,-2,"RGBA32UI");
	lua_pushnumber(L,ork::DEPTH_COMPONENT16); lua_setfield(L,-2,"DEPTH_COMPONENT16");
	lua_pushnumber(L,ork::DEPTH_COMPONENT24); lua_setfield(L,-2,"DEPTH_COMPONENT24");
	lua_pushnumber(L,ork::DEPTH_COMPONENT32F); lua_setfield(L,-2,"DEPTH_COMPONENT32F");
	lua_pushnumber(L,ork::DEPTH32F_STENCIL8); lua_setfield(L,-2,"DEPTH32F_STENCIL8");
	lua_pushnumber(L,ork::DEPTH24_STENCIL8); lua_setfield(L,-2,"DEPTH24_STENCIL8");
	lua_pushnumber(L,ork::COMPRESSED_RED); lua_setfield(L,-2,"COMPRESSED_RED");
	lua_pushnumber(L,ork::COMPRESSED_RG); lua_setfield(L,-2,"COMPRESSED_RG");
	lua_pushnumber(L,ork::COMPRESSED_RGB); lua_setfield(L,-2,"COMPRESSED_RGB");
	lua_pushnumber(L,ork::COMPRESSED_RGBA); lua_setfield(L,-2,"COMPRESSED_RGBA");
	lua_pushnumber(L,ork::COMPRESSED_SRGB); lua_setfield(L,-2,"COMPRESSED_SRGB");
	lua_pushnumber(L,ork::COMPRESSED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_RED_RGTC1");
	lua_pushnumber(L,ork::COMPRESSED_SIGNED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_SIGNED_RED_RGTC1");
	lua_pushnumber(L,ork::COMPRESSED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_RG_RGTC2");
	lua_pushnumber(L,ork::COMPRESSED_SIGNED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_SIGNED_RG_RGTC2");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_RGBA_BPTC_UNORM_ARB");
	lua_pushnumber(L,ork::COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB");
	lua_pushnumber(L,ork::COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB");
	lua_pushnumber(L,ork::COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB");
	lua_pushnumber(L,ork::COMPRESSED_RGB_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGB_S3TC_DXT1_EXT");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT1_EXT");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_S3TC_DXT3_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT3_EXT");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_S3TC_DXT5_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT5_EXT");

	lua_setfield(L,-2,"TextureInternalFormat");

	lua_pushnumber(L,ork::R8); lua_setfield(L,-2,"R8");
	lua_pushnumber(L,ork::R8_SNORM); lua_setfield(L,-2,"R8_SNORM");
	lua_pushnumber(L,ork::R16); lua_setfield(L,-2,"R16");
	lua_pushnumber(L,ork::R16_SNORM); lua_setfield(L,-2,"R16_SNORM");
	lua_pushnumber(L,ork::RG8); lua_setfield(L,-2,"RG8");
	lua_pushnumber(L,ork::RG8_SNORM); lua_setfield(L,-2,"RG8_SNORM");
	lua_pushnumber(L,ork::RG16); lua_setfield(L,-2,"RG16");
	lua_pushnumber(L,ork::RG16_SNORM); lua_setfield(L,-2,"RG16_SNORM");
	lua_pushnumber(L,ork::R3_G3_B2); lua_setfield(L,-2,"R3_G3_B2");
	lua_pushnumber(L,ork::RGB4); lua_setfield(L,-2,"RGB4");
	lua_pushnumber(L,ork::RGB5); lua_setfield(L,-2,"RGB5");
	lua_pushnumber(L,ork::RGB8); lua_setfield(L,-2,"RGB8");
	lua_pushnumber(L,ork::RGB8_SNORM); lua_setfield(L,-2,"RGB8_SNORM");
	lua_pushnumber(L,ork::RGB10); lua_setfield(L,-2,"RGB10");
	lua_pushnumber(L,ork::RGB12); lua_setfield(L,-2,"RGB12");
	lua_pushnumber(L,ork::RGB16); lua_setfield(L,-2,"RGB16");
	lua_pushnumber(L,ork::RGB16_SNORM); lua_setfield(L,-2,"RGB16_SNORM");
	lua_pushnumber(L,ork::RGBA2); lua_setfield(L,-2,"RGBA2");
	lua_pushnumber(L,ork::RGBA4); lua_setfield(L,-2,"RGBA4");
	lua_pushnumber(L,ork::RGB5_A1); lua_setfield(L,-2,"RGB5_A1");
	lua_pushnumber(L,ork::RGBA8); lua_setfield(L,-2,"RGBA8");
	lua_pushnumber(L,ork::RGBA8_SNORM); lua_setfield(L,-2,"RGBA8_SNORM");
	lua_pushnumber(L,ork::RGB10_A2); lua_setfield(L,-2,"RGB10_A2");
	lua_pushnumber(L,ork::RGB10_A2UI); lua_setfield(L,-2,"RGB10_A2UI");
	lua_pushnumber(L,ork::RGBA12); lua_setfield(L,-2,"RGBA12");
	lua_pushnumber(L,ork::RGBA16); lua_setfield(L,-2,"RGBA16");
	lua_pushnumber(L,ork::RGBA16_SNORM); lua_setfield(L,-2,"RGBA16_SNORM");
	lua_pushnumber(L,ork::SRGB8); lua_setfield(L,-2,"SRGB8");
	lua_pushnumber(L,ork::SRGB8_ALPHA8); lua_setfield(L,-2,"SRGB8_ALPHA8");
	lua_pushnumber(L,ork::R16F); lua_setfield(L,-2,"R16F");
	lua_pushnumber(L,ork::RG16F); lua_setfield(L,-2,"RG16F");
	lua_pushnumber(L,ork::RGB16F); lua_setfield(L,-2,"RGB16F");
	lua_pushnumber(L,ork::RGBA16F); lua_setfield(L,-2,"RGBA16F");
	lua_pushnumber(L,ork::R32F); lua_setfield(L,-2,"R32F");
	lua_pushnumber(L,ork::RG32F); lua_setfield(L,-2,"RG32F");
	lua_pushnumber(L,ork::RGB32F); lua_setfield(L,-2,"RGB32F");
	lua_pushnumber(L,ork::RGBA32F); lua_setfield(L,-2,"RGBA32F");
	lua_pushnumber(L,ork::R11F_G11F_B10F); lua_setfield(L,-2,"R11F_G11F_B10F");
	lua_pushnumber(L,ork::RGB9_E5); lua_setfield(L,-2,"RGB9_E5");
	lua_pushnumber(L,ork::R8I); lua_setfield(L,-2,"R8I");
	lua_pushnumber(L,ork::R8UI); lua_setfield(L,-2,"R8UI");
	lua_pushnumber(L,ork::R16I); lua_setfield(L,-2,"R16I");
	lua_pushnumber(L,ork::R16UI); lua_setfield(L,-2,"R16UI");
	lua_pushnumber(L,ork::R32I); lua_setfield(L,-2,"R32I");
	lua_pushnumber(L,ork::R32UI); lua_setfield(L,-2,"R32UI");
	lua_pushnumber(L,ork::RG8I); lua_setfield(L,-2,"RG8I");
	lua_pushnumber(L,ork::RG8UI); lua_setfield(L,-2,"RG8UI");
	lua_pushnumber(L,ork::RG16I); lua_setfield(L,-2,"RG16I");
	lua_pushnumber(L,ork::RG16UI); lua_setfield(L,-2,"RG16UI");
	lua_pushnumber(L,ork::RG32I); lua_setfield(L,-2,"RG32I");
	lua_pushnumber(L,ork::RG32UI); lua_setfield(L,-2,"RG32UI");
	lua_pushnumber(L,ork::RGB8I); lua_setfield(L,-2,"RGB8I");
	lua_pushnumber(L,ork::RGB8UI); lua_setfield(L,-2,"RGB8UI");
	lua_pushnumber(L,ork::RGB16I); lua_setfield(L,-2,"RGB16I");
	lua_pushnumber(L,ork::RGB16UI); lua_setfield(L,-2,"RGB16UI");
	lua_pushnumber(L,ork::RGB32I); lua_setfield(L,-2,"RGB32I");
	lua_pushnumber(L,ork::RGB32UI); lua_setfield(L,-2,"RGB32UI");
	lua_pushnumber(L,ork::RGBA8I); lua_setfield(L,-2,"RGBA8I");
	lua_pushnumber(L,ork::RGBA8UI); lua_setfield(L,-2,"RGBA8UI");
	lua_pushnumber(L,ork::RGBA16I); lua_setfield(L,-2,"RGBA16I");
	lua_pushnumber(L,ork::RGBA16UI); lua_setfield(L,-2,"RGBA16UI");
	lua_pushnumber(L,ork::RGBA32I); lua_setfield(L,-2,"RGBA32I");
	lua_pushnumber(L,ork::RGBA32UI); lua_setfield(L,-2,"RGBA32UI");
	lua_pushnumber(L,ork::DEPTH_COMPONENT16); lua_setfield(L,-2,"DEPTH_COMPONENT16");
	lua_pushnumber(L,ork::DEPTH_COMPONENT24); lua_setfield(L,-2,"DEPTH_COMPONENT24");
	lua_pushnumber(L,ork::DEPTH_COMPONENT32F); lua_setfield(L,-2,"DEPTH_COMPONENT32F");
	lua_pushnumber(L,ork::DEPTH32F_STENCIL8); lua_setfield(L,-2,"DEPTH32F_STENCIL8");
	lua_pushnumber(L,ork::DEPTH24_STENCIL8); lua_setfield(L,-2,"DEPTH24_STENCIL8");
	lua_pushnumber(L,ork::COMPRESSED_RED); lua_setfield(L,-2,"COMPRESSED_RED");
	lua_pushnumber(L,ork::COMPRESSED_RG); lua_setfield(L,-2,"COMPRESSED_RG");
	lua_pushnumber(L,ork::COMPRESSED_RGB); lua_setfield(L,-2,"COMPRESSED_RGB");
	lua_pushnumber(L,ork::COMPRESSED_RGBA); lua_setfield(L,-2,"COMPRESSED_RGBA");
	lua_pushnumber(L,ork::COMPRESSED_SRGB); lua_setfield(L,-2,"COMPRESSED_SRGB");
	lua_pushnumber(L,ork::COMPRESSED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_RED_RGTC1");
	lua_pushnumber(L,ork::COMPRESSED_SIGNED_RED_RGTC1); lua_setfield(L,-2,"COMPRESSED_SIGNED_RED_RGTC1");
	lua_pushnumber(L,ork::COMPRESSED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_RG_RGTC2");
	lua_pushnumber(L,ork::COMPRESSED_SIGNED_RG_RGTC2); lua_setfield(L,-2,"COMPRESSED_SIGNED_RG_RGTC2");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_RGBA_BPTC_UNORM_ARB");
	lua_pushnumber(L,ork::COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB); lua_setfield(L,-2,"COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB");
	lua_pushnumber(L,ork::COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB");
	lua_pushnumber(L,ork::COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB); lua_setfield(L,-2,"COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB");
	lua_pushnumber(L,ork::COMPRESSED_RGB_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGB_S3TC_DXT1_EXT");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_S3TC_DXT1_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT1_EXT");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_S3TC_DXT3_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT3_EXT");
	lua_pushnumber(L,ork::COMPRESSED_RGBA_S3TC_DXT5_EXT); lua_setfield(L,-2,"COMPRESSED_RGBA_S3TC_DXT5_EXT");


	lua_newtable(L); // enum TextureFormat

	lua_pushnumber(L,ork::STENCIL_INDEX); lua_setfield(L,-2,"STENCIL_INDEX");
	lua_pushnumber(L,ork::DEPTH_COMPONENT); lua_setfield(L,-2,"DEPTH_COMPONENT");
	lua_pushnumber(L,ork::DEPTH_STENCIL); lua_setfield(L,-2,"DEPTH_STENCIL");
	lua_pushnumber(L,ork::RED); lua_setfield(L,-2,"RED");
	lua_pushnumber(L,ork::GREEN); lua_setfield(L,-2,"GREEN");
	lua_pushnumber(L,ork::BLUE); lua_setfield(L,-2,"BLUE");
	lua_pushnumber(L,ork::RG); lua_setfield(L,-2,"RG");
	lua_pushnumber(L,ork::RGB); lua_setfield(L,-2,"RGB");
	lua_pushnumber(L,ork::RGBA); lua_setfield(L,-2,"RGBA");
	lua_pushnumber(L,ork::BGR); lua_setfield(L,-2,"BGR");
	lua_pushnumber(L,ork::BGRA); lua_setfield(L,-2,"BGRA");
	lua_pushnumber(L,ork::RED_INTEGER); lua_setfield(L,-2,"RED_INTEGER");
	lua_pushnumber(L,ork::BLUE_INTEGER); lua_setfield(L,-2,"BLUE_INTEGER");
	lua_pushnumber(L,ork::GREEN_INTEGER); lua_setfield(L,-2,"GREEN_INTEGER");
	lua_pushnumber(L,ork::RG_INTEGER); lua_setfield(L,-2,"RG_INTEGER");
	lua_pushnumber(L,ork::RGB_INTEGER); lua_setfield(L,-2,"RGB_INTEGER");
	lua_pushnumber(L,ork::RGBA_INTEGER); lua_setfield(L,-2,"RGBA_INTEGER");
	lua_pushnumber(L,ork::BGR_INTEGER); lua_setfield(L,-2,"BGR_INTEGER");
	lua_pushnumber(L,ork::BGRA_INTEGER); lua_setfield(L,-2,"BGRA_INTEGER");

	lua_setfield(L,-2,"TextureFormat");

	lua_pushnumber(L,ork::STENCIL_INDEX); lua_setfield(L,-2,"STENCIL_INDEX");
	lua_pushnumber(L,ork::DEPTH_COMPONENT); lua_setfield(L,-2,"DEPTH_COMPONENT");
	lua_pushnumber(L,ork::DEPTH_STENCIL); lua_setfield(L,-2,"DEPTH_STENCIL");
	lua_pushnumber(L,ork::RED); lua_setfield(L,-2,"RED");
	lua_pushnumber(L,ork::GREEN); lua_setfield(L,-2,"GREEN");
	lua_pushnumber(L,ork::BLUE); lua_setfield(L,-2,"BLUE");
	lua_pushnumber(L,ork::RG); lua_setfield(L,-2,"RG");
	lua_pushnumber(L,ork::RGB); lua_setfield(L,-2,"RGB");
	lua_pushnumber(L,ork::RGBA); lua_setfield(L,-2,"RGBA");
	lua_pushnumber(L,ork::BGR); lua_setfield(L,-2,"BGR");
	lua_pushnumber(L,ork::BGRA); lua_setfield(L,-2,"BGRA");
	lua_pushnumber(L,ork::RED_INTEGER); lua_setfield(L,-2,"RED_INTEGER");
	lua_pushnumber(L,ork::BLUE_INTEGER); lua_setfield(L,-2,"BLUE_INTEGER");
	lua_pushnumber(L,ork::GREEN_INTEGER); lua_setfield(L,-2,"GREEN_INTEGER");
	lua_pushnumber(L,ork::RG_INTEGER); lua_setfield(L,-2,"RG_INTEGER");
	lua_pushnumber(L,ork::RGB_INTEGER); lua_setfield(L,-2,"RGB_INTEGER");
	lua_pushnumber(L,ork::RGBA_INTEGER); lua_setfield(L,-2,"RGBA_INTEGER");
	lua_pushnumber(L,ork::BGR_INTEGER); lua_setfield(L,-2,"BGR_INTEGER");
	lua_pushnumber(L,ork::BGRA_INTEGER); lua_setfield(L,-2,"BGRA_INTEGER");


	lua_newtable(L); // enum PixelType

	lua_pushnumber(L,ork::UNSIGNED_BYTE); lua_setfield(L,-2,"UNSIGNED_BYTE");
	lua_pushnumber(L,ork::BYTE); lua_setfield(L,-2,"BYTE");
	lua_pushnumber(L,ork::UNSIGNED_SHORT); lua_setfield(L,-2,"UNSIGNED_SHORT");
	lua_pushnumber(L,ork::SHORT); lua_setfield(L,-2,"SHORT");
	lua_pushnumber(L,ork::UNSIGNED_INT); lua_setfield(L,-2,"UNSIGNED_INT");
	lua_pushnumber(L,ork::INT); lua_setfield(L,-2,"INT");
	lua_pushnumber(L,ork::HALF); lua_setfield(L,-2,"HALF");
	lua_pushnumber(L,ork::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,ork::UNSIGNED_BYTE_3_3_2); lua_setfield(L,-2,"UNSIGNED_BYTE_3_3_2");
	lua_pushnumber(L,ork::UNSIGNED_BYTE_2_3_3_REV); lua_setfield(L,-2,"UNSIGNED_BYTE_2_3_3_REV");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_5_6_5); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_5_6_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5_REV");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_4_4_4_4); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_4_4_4_4_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4_REV");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_5_5_5_1); lua_setfield(L,-2,"UNSIGNED_SHORT_5_5_5_1");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_1_5_5_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_1_5_5_5_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_8_8_8_8); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8");
	lua_pushnumber(L,ork::UNSIGNED_INT_8_8_8_8_REV); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_10_10_10_2); lua_setfield(L,-2,"UNSIGNED_INT_10_10_10_2");
	lua_pushnumber(L,ork::UNSIGNED_INT_2_10_10_10_REV); lua_setfield(L,-2,"UNSIGNED_INT_2_10_10_10_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_24_8); lua_setfield(L,-2,"UNSIGNED_INT_24_8");
	lua_pushnumber(L,ork::UNSIGNED_INT_10F_11F_11F_REV); lua_setfield(L,-2,"UNSIGNED_INT_10F_11F_11F_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_5_9_9_9_REV); lua_setfield(L,-2,"UNSIGNED_INT_5_9_9_9_REV");
	lua_pushnumber(L,ork::FLOAT_32_UNSIGNED_INT_24_8_REV); lua_setfield(L,-2,"FLOAT_32_UNSIGNED_INT_24_8_REV");

	lua_setfield(L,-2,"PixelType");

	lua_pushnumber(L,ork::UNSIGNED_BYTE); lua_setfield(L,-2,"UNSIGNED_BYTE");
	lua_pushnumber(L,ork::BYTE); lua_setfield(L,-2,"BYTE");
	lua_pushnumber(L,ork::UNSIGNED_SHORT); lua_setfield(L,-2,"UNSIGNED_SHORT");
	lua_pushnumber(L,ork::SHORT); lua_setfield(L,-2,"SHORT");
	lua_pushnumber(L,ork::UNSIGNED_INT); lua_setfield(L,-2,"UNSIGNED_INT");
	lua_pushnumber(L,ork::INT); lua_setfield(L,-2,"INT");
	lua_pushnumber(L,ork::HALF); lua_setfield(L,-2,"HALF");
	lua_pushnumber(L,ork::FLOAT); lua_setfield(L,-2,"FLOAT");
	lua_pushnumber(L,ork::UNSIGNED_BYTE_3_3_2); lua_setfield(L,-2,"UNSIGNED_BYTE_3_3_2");
	lua_pushnumber(L,ork::UNSIGNED_BYTE_2_3_3_REV); lua_setfield(L,-2,"UNSIGNED_BYTE_2_3_3_REV");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_5_6_5); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_5_6_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_5_6_5_REV");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_4_4_4_4); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_4_4_4_4_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_4_4_4_4_REV");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_5_5_5_1); lua_setfield(L,-2,"UNSIGNED_SHORT_5_5_5_1");
	lua_pushnumber(L,ork::UNSIGNED_SHORT_1_5_5_5_REV); lua_setfield(L,-2,"UNSIGNED_SHORT_1_5_5_5_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_8_8_8_8); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8");
	lua_pushnumber(L,ork::UNSIGNED_INT_8_8_8_8_REV); lua_setfield(L,-2,"UNSIGNED_INT_8_8_8_8_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_10_10_10_2); lua_setfield(L,-2,"UNSIGNED_INT_10_10_10_2");
	lua_pushnumber(L,ork::UNSIGNED_INT_2_10_10_10_REV); lua_setfield(L,-2,"UNSIGNED_INT_2_10_10_10_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_24_8); lua_setfield(L,-2,"UNSIGNED_INT_24_8");
	lua_pushnumber(L,ork::UNSIGNED_INT_10F_11F_11F_REV); lua_setfield(L,-2,"UNSIGNED_INT_10F_11F_11F_REV");
	lua_pushnumber(L,ork::UNSIGNED_INT_5_9_9_9_REV); lua_setfield(L,-2,"UNSIGNED_INT_5_9_9_9_REV");
	lua_pushnumber(L,ork::FLOAT_32_UNSIGNED_INT_24_8_REV); lua_setfield(L,-2,"FLOAT_32_UNSIGNED_INT_24_8_REV");


	lua_newtable(L); // enum TextureWrap

	lua_pushnumber(L,ork::CLAMP_TO_EDGE); lua_setfield(L,-2,"CLAMP_TO_EDGE");
	lua_pushnumber(L,ork::CLAMP_TO_BORDER); lua_setfield(L,-2,"CLAMP_TO_BORDER");
	lua_pushnumber(L,ork::REPEAT); lua_setfield(L,-2,"REPEAT");
	lua_pushnumber(L,ork::MIRRORED_REPEAT); lua_setfield(L,-2,"MIRRORED_REPEAT");

	lua_setfield(L,-2,"TextureWrap");

	lua_pushnumber(L,ork::CLAMP_TO_EDGE); lua_setfield(L,-2,"CLAMP_TO_EDGE");
	lua_pushnumber(L,ork::CLAMP_TO_BORDER); lua_setfield(L,-2,"CLAMP_TO_BORDER");
	lua_pushnumber(L,ork::REPEAT); lua_setfield(L,-2,"REPEAT");
	lua_pushnumber(L,ork::MIRRORED_REPEAT); lua_setfield(L,-2,"MIRRORED_REPEAT");


	lua_newtable(L); // enum TextureFilter

	lua_pushnumber(L,ork::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,ork::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,ork::NEAREST_MIPMAP_NEAREST); lua_setfield(L,-2,"NEAREST_MIPMAP_NEAREST");
	lua_pushnumber(L,ork::NEAREST_MIPMAP_LINEAR); lua_setfield(L,-2,"NEAREST_MIPMAP_LINEAR");
	lua_pushnumber(L,ork::LINEAR_MIPMAP_NEAREST); lua_setfield(L,-2,"LINEAR_MIPMAP_NEAREST");
	lua_pushnumber(L,ork::LINEAR_MIPMAP_LINEAR); lua_setfield(L,-2,"LINEAR_MIPMAP_LINEAR");

	lua_setfield(L,-2,"TextureFilter");

	lua_pushnumber(L,ork::NEAREST); lua_setfield(L,-2,"NEAREST");
	lua_pushnumber(L,ork::LINEAR); lua_setfield(L,-2,"LINEAR");
	lua_pushnumber(L,ork::NEAREST_MIPMAP_NEAREST); lua_setfield(L,-2,"NEAREST_MIPMAP_NEAREST");
	lua_pushnumber(L,ork::NEAREST_MIPMAP_LINEAR); lua_setfield(L,-2,"NEAREST_MIPMAP_LINEAR");
	lua_pushnumber(L,ork::LINEAR_MIPMAP_NEAREST); lua_setfield(L,-2,"LINEAR_MIPMAP_NEAREST");
	lua_pushnumber(L,ork::LINEAR_MIPMAP_LINEAR); lua_setfield(L,-2,"LINEAR_MIPMAP_LINEAR");


	lua_newtable(L); // enum Function

	lua_pushnumber(L,ork::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,ork::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,ork::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,ork::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,ork::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,ork::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,ork::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,ork::NEVER); lua_setfield(L,-2,"NEVER");

	lua_setfield(L,-2,"Function");

	lua_pushnumber(L,ork::LEQUAL); lua_setfield(L,-2,"LEQUAL");
	lua_pushnumber(L,ork::GEQUAL); lua_setfield(L,-2,"GEQUAL");
	lua_pushnumber(L,ork::LESS); lua_setfield(L,-2,"LESS");
	lua_pushnumber(L,ork::GREATER); lua_setfield(L,-2,"GREATER");
	lua_pushnumber(L,ork::EQUAL); lua_setfield(L,-2,"EQUAL");
	lua_pushnumber(L,ork::NOTEQUAL); lua_setfield(L,-2,"NOTEQUAL");
	lua_pushnumber(L,ork::ALWAYS); lua_setfield(L,-2,"ALWAYS");
	lua_pushnumber(L,ork::NEVER); lua_setfield(L,-2,"NEVER");


	lua_newtable(L); // enum BufferId

	lua_pushnumber(L,ork::COLOR0); lua_setfield(L,-2,"COLOR0");
	lua_pushnumber(L,ork::COLOR1); lua_setfield(L,-2,"COLOR1");
	lua_pushnumber(L,ork::COLOR2); lua_setfield(L,-2,"COLOR2");
	lua_pushnumber(L,ork::COLOR3); lua_setfield(L,-2,"COLOR3");
	lua_pushnumber(L,ork::COLOR4); lua_setfield(L,-2,"COLOR4");
	lua_pushnumber(L,ork::COLOR5); lua_setfield(L,-2,"COLOR5");
	lua_pushnumber(L,ork::COLOR6); lua_setfield(L,-2,"COLOR6");
	lua_pushnumber(L,ork::COLOR7); lua_setfield(L,-2,"COLOR7");
	lua_pushnumber(L,ork::STENCIL); lua_setfield(L,-2,"STENCIL");
	lua_pushnumber(L,ork::DEPTH); lua_setfield(L,-2,"DEPTH");

	lua_setfield(L,-2,"BufferId");

	lua_pushnumber(L,ork::COLOR0); lua_setfield(L,-2,"COLOR0");
	lua_pushnumber(L,ork::COLOR1); lua_setfield(L,-2,"COLOR1");
	lua_pushnumber(L,ork::COLOR2); lua_setfield(L,-2,"COLOR2");
	lua_pushnumber(L,ork::COLOR3); lua_setfield(L,-2,"COLOR3");
	lua_pushnumber(L,ork::COLOR4); lua_setfield(L,-2,"COLOR4");
	lua_pushnumber(L,ork::COLOR5); lua_setfield(L,-2,"COLOR5");
	lua_pushnumber(L,ork::COLOR6); lua_setfield(L,-2,"COLOR6");
	lua_pushnumber(L,ork::COLOR7); lua_setfield(L,-2,"COLOR7");
	lua_pushnumber(L,ork::STENCIL); lua_setfield(L,-2,"STENCIL");
	lua_pushnumber(L,ork::DEPTH); lua_setfield(L,-2,"DEPTH");


	lua_newtable(L); // enum PolygonMode

	lua_pushnumber(L,ork::CULL); lua_setfield(L,-2,"CULL");
	lua_pushnumber(L,ork::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,ork::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,ork::FILL); lua_setfield(L,-2,"FILL");

	lua_setfield(L,-2,"PolygonMode");

	lua_pushnumber(L,ork::CULL); lua_setfield(L,-2,"CULL");
	lua_pushnumber(L,ork::POINT); lua_setfield(L,-2,"POINT");
	lua_pushnumber(L,ork::LINE); lua_setfield(L,-2,"LINE");
	lua_pushnumber(L,ork::FILL); lua_setfield(L,-2,"FILL");


	lua_newtable(L); // enum StencilOperation

	lua_pushnumber(L,ork::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,ork::RESET); lua_setfield(L,-2,"RESET");
	lua_pushnumber(L,ork::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,ork::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,ork::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,ork::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,ork::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,ork::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");

	lua_setfield(L,-2,"StencilOperation");

	lua_pushnumber(L,ork::KEEP); lua_setfield(L,-2,"KEEP");
	lua_pushnumber(L,ork::RESET); lua_setfield(L,-2,"RESET");
	lua_pushnumber(L,ork::REPLACE); lua_setfield(L,-2,"REPLACE");
	lua_pushnumber(L,ork::INCR); lua_setfield(L,-2,"INCR");
	lua_pushnumber(L,ork::DECR); lua_setfield(L,-2,"DECR");
	lua_pushnumber(L,ork::INVERT); lua_setfield(L,-2,"INVERT");
	lua_pushnumber(L,ork::INCR_WRAP); lua_setfield(L,-2,"INCR_WRAP");
	lua_pushnumber(L,ork::DECR_WRAP); lua_setfield(L,-2,"DECR_WRAP");


	lua_newtable(L); // enum BlendEquation

	lua_pushnumber(L,ork::ADD); lua_setfield(L,-2,"ADD");
	lua_pushnumber(L,ork::SUBTRACT); lua_setfield(L,-2,"SUBTRACT");
	lua_pushnumber(L,ork::REVERSE_SUBTRACT); lua_setfield(L,-2,"REVERSE_SUBTRACT");
	lua_pushnumber(L,ork::MIN); lua_setfield(L,-2,"MIN");
	lua_pushnumber(L,ork::MAX); lua_setfield(L,-2,"MAX");

	lua_setfield(L,-2,"BlendEquation");

	lua_pushnumber(L,ork::ADD); lua_setfield(L,-2,"ADD");
	lua_pushnumber(L,ork::SUBTRACT); lua_setfield(L,-2,"SUBTRACT");
	lua_pushnumber(L,ork::REVERSE_SUBTRACT); lua_setfield(L,-2,"REVERSE_SUBTRACT");
	lua_pushnumber(L,ork::MIN); lua_setfield(L,-2,"MIN");
	lua_pushnumber(L,ork::MAX); lua_setfield(L,-2,"MAX");


	lua_newtable(L); // enum BlendArgument

	lua_pushnumber(L,ork::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,ork::ONE); lua_setfield(L,-2,"ONE");
	lua_pushnumber(L,ork::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,ork::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,ork::DST_COLOR); lua_setfield(L,-2,"DST_COLOR");
	lua_pushnumber(L,ork::ONE_MINUS_DST_COLOR); lua_setfield(L,-2,"ONE_MINUS_DST_COLOR");
	lua_pushnumber(L,ork::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,ork::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");
	lua_pushnumber(L,ork::DST_ALPHA); lua_setfield(L,-2,"DST_ALPHA");
	lua_pushnumber(L,ork::ONE_MINUS_DST_ALPHA); lua_setfield(L,-2,"ONE_MINUS_DST_ALPHA");
	lua_pushnumber(L,ork::CONSTANT_COLOR); lua_setfield(L,-2,"CONSTANT_COLOR");
	lua_pushnumber(L,ork::ONE_MINUS_CONSTANT_COLOR); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_COLOR");
	lua_pushnumber(L,ork::CONSTANT_ALPHA); lua_setfield(L,-2,"CONSTANT_ALPHA");
	lua_pushnumber(L,ork::ONE_MINUS_CONSTANT_ALPHA); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_ALPHA");

	lua_setfield(L,-2,"BlendArgument");

	lua_pushnumber(L,ork::ZERO); lua_setfield(L,-2,"ZERO");
	lua_pushnumber(L,ork::ONE); lua_setfield(L,-2,"ONE");
	lua_pushnumber(L,ork::SRC_COLOR); lua_setfield(L,-2,"SRC_COLOR");
	lua_pushnumber(L,ork::ONE_MINUS_SRC_COLOR); lua_setfield(L,-2,"ONE_MINUS_SRC_COLOR");
	lua_pushnumber(L,ork::DST_COLOR); lua_setfield(L,-2,"DST_COLOR");
	lua_pushnumber(L,ork::ONE_MINUS_DST_COLOR); lua_setfield(L,-2,"ONE_MINUS_DST_COLOR");
	lua_pushnumber(L,ork::SRC_ALPHA); lua_setfield(L,-2,"SRC_ALPHA");
	lua_pushnumber(L,ork::ONE_MINUS_SRC_ALPHA); lua_setfield(L,-2,"ONE_MINUS_SRC_ALPHA");
	lua_pushnumber(L,ork::DST_ALPHA); lua_setfield(L,-2,"DST_ALPHA");
	lua_pushnumber(L,ork::ONE_MINUS_DST_ALPHA); lua_setfield(L,-2,"ONE_MINUS_DST_ALPHA");
	lua_pushnumber(L,ork::CONSTANT_COLOR); lua_setfield(L,-2,"CONSTANT_COLOR");
	lua_pushnumber(L,ork::ONE_MINUS_CONSTANT_COLOR); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_COLOR");
	lua_pushnumber(L,ork::CONSTANT_ALPHA); lua_setfield(L,-2,"CONSTANT_ALPHA");
	lua_pushnumber(L,ork::ONE_MINUS_CONSTANT_ALPHA); lua_setfield(L,-2,"ONE_MINUS_CONSTANT_ALPHA");


	lua_newtable(L); // enum LogicOperation

	lua_pushnumber(L,ork::CLEAR); lua_setfield(L,-2,"CLEAR");
	lua_pushnumber(L,ork::AND); lua_setfield(L,-2,"AND");
	lua_pushnumber(L,ork::AND_REVERSE); lua_setfield(L,-2,"AND_REVERSE");
	lua_pushnumber(L,ork::COPY); lua_setfield(L,-2,"COPY");
	lua_pushnumber(L,ork::AND_INVERTED); lua_setfield(L,-2,"AND_INVERTED");
	lua_pushnumber(L,ork::NOOP); lua_setfield(L,-2,"NOOP");
	lua_pushnumber(L,ork::XOR); lua_setfield(L,-2,"XOR");
	lua_pushnumber(L,ork::OR); lua_setfield(L,-2,"OR");
	lua_pushnumber(L,ork::NOR); lua_setfield(L,-2,"NOR");
	lua_pushnumber(L,ork::EQUIV); lua_setfield(L,-2,"EQUIV");
	lua_pushnumber(L,ork::NOT); lua_setfield(L,-2,"NOT");
	lua_pushnumber(L,ork::OR_REVERSE); lua_setfield(L,-2,"OR_REVERSE");
	lua_pushnumber(L,ork::COPY_INVERTED); lua_setfield(L,-2,"COPY_INVERTED");
	lua_pushnumber(L,ork::OR_INVERTED); lua_setfield(L,-2,"OR_INVERTED");
	lua_pushnumber(L,ork::NAND); lua_setfield(L,-2,"NAND");
	lua_pushnumber(L,ork::SET); lua_setfield(L,-2,"SET");

	lua_setfield(L,-2,"LogicOperation");

	lua_pushnumber(L,ork::CLEAR); lua_setfield(L,-2,"CLEAR");
	lua_pushnumber(L,ork::AND); lua_setfield(L,-2,"AND");
	lua_pushnumber(L,ork::AND_REVERSE); lua_setfield(L,-2,"AND_REVERSE");
	lua_pushnumber(L,ork::COPY); lua_setfield(L,-2,"COPY");
	lua_pushnumber(L,ork::AND_INVERTED); lua_setfield(L,-2,"AND_INVERTED");
	lua_pushnumber(L,ork::NOOP); lua_setfield(L,-2,"NOOP");
	lua_pushnumber(L,ork::XOR); lua_setfield(L,-2,"XOR");
	lua_pushnumber(L,ork::OR); lua_setfield(L,-2,"OR");
	lua_pushnumber(L,ork::NOR); lua_setfield(L,-2,"NOR");
	lua_pushnumber(L,ork::EQUIV); lua_setfield(L,-2,"EQUIV");
	lua_pushnumber(L,ork::NOT); lua_setfield(L,-2,"NOT");
	lua_pushnumber(L,ork::OR_REVERSE); lua_setfield(L,-2,"OR_REVERSE");
	lua_pushnumber(L,ork::COPY_INVERTED); lua_setfield(L,-2,"COPY_INVERTED");
	lua_pushnumber(L,ork::OR_INVERTED); lua_setfield(L,-2,"OR_INVERTED");
	lua_pushnumber(L,ork::NAND); lua_setfield(L,-2,"NAND");
	lua_pushnumber(L,ork::SET); lua_setfield(L,-2,"SET");


	lua_newtable(L); // enum Stage

	lua_pushnumber(L,ork::VERTEX); lua_setfield(L,-2,"VERTEX");
	lua_pushnumber(L,ork::TESSELATION_CONTROL); lua_setfield(L,-2,"TESSELATION_CONTROL");
	lua_pushnumber(L,ork::TESSELATION_EVALUATION); lua_setfield(L,-2,"TESSELATION_EVALUATION");
	lua_pushnumber(L,ork::GEOMETRY); lua_setfield(L,-2,"GEOMETRY");
	lua_pushnumber(L,ork::FRAGMENT); lua_setfield(L,-2,"FRAGMENT");

	lua_setfield(L,-2,"Stage");

	lua_pushnumber(L,ork::VERTEX); lua_setfield(L,-2,"VERTEX");
	lua_pushnumber(L,ork::TESSELATION_CONTROL); lua_setfield(L,-2,"TESSELATION_CONTROL");
	lua_pushnumber(L,ork::TESSELATION_EVALUATION); lua_setfield(L,-2,"TESSELATION_EVALUATION");
	lua_pushnumber(L,ork::GEOMETRY); lua_setfield(L,-2,"GEOMETRY");
	lua_pushnumber(L,ork::FRAGMENT); lua_setfield(L,-2,"FRAGMENT");


	lua_newtable(L); // enum UniformType

	lua_pushnumber(L,ork::VEC1F); lua_setfield(L,-2,"VEC1F");
	lua_pushnumber(L,ork::VEC2F); lua_setfield(L,-2,"VEC2F");
	lua_pushnumber(L,ork::VEC3F); lua_setfield(L,-2,"VEC3F");
	lua_pushnumber(L,ork::VEC4F); lua_setfield(L,-2,"VEC4F");
	lua_pushnumber(L,ork::VEC1D); lua_setfield(L,-2,"VEC1D");
	lua_pushnumber(L,ork::VEC2D); lua_setfield(L,-2,"VEC2D");
	lua_pushnumber(L,ork::VEC3D); lua_setfield(L,-2,"VEC3D");
	lua_pushnumber(L,ork::VEC4D); lua_setfield(L,-2,"VEC4D");
	lua_pushnumber(L,ork::VEC1I); lua_setfield(L,-2,"VEC1I");
	lua_pushnumber(L,ork::VEC2I); lua_setfield(L,-2,"VEC2I");
	lua_pushnumber(L,ork::VEC3I); lua_setfield(L,-2,"VEC3I");
	lua_pushnumber(L,ork::VEC4I); lua_setfield(L,-2,"VEC4I");
	lua_pushnumber(L,ork::VEC1UI); lua_setfield(L,-2,"VEC1UI");
	lua_pushnumber(L,ork::VEC2UI); lua_setfield(L,-2,"VEC2UI");
	lua_pushnumber(L,ork::VEC3UI); lua_setfield(L,-2,"VEC3UI");
	lua_pushnumber(L,ork::VEC4UI); lua_setfield(L,-2,"VEC4UI");
	lua_pushnumber(L,ork::VEC1B); lua_setfield(L,-2,"VEC1B");
	lua_pushnumber(L,ork::VEC2B); lua_setfield(L,-2,"VEC2B");
	lua_pushnumber(L,ork::VEC3B); lua_setfield(L,-2,"VEC3B");
	lua_pushnumber(L,ork::VEC4B); lua_setfield(L,-2,"VEC4B");
	lua_pushnumber(L,ork::MAT2F); lua_setfield(L,-2,"MAT2F");
	lua_pushnumber(L,ork::MAT3F); lua_setfield(L,-2,"MAT3F");
	lua_pushnumber(L,ork::MAT4F); lua_setfield(L,-2,"MAT4F");
	lua_pushnumber(L,ork::MAT2x3F); lua_setfield(L,-2,"MAT2x3F");
	lua_pushnumber(L,ork::MAT2x4F); lua_setfield(L,-2,"MAT2x4F");
	lua_pushnumber(L,ork::MAT3x2F); lua_setfield(L,-2,"MAT3x2F");
	lua_pushnumber(L,ork::MAT3x4F); lua_setfield(L,-2,"MAT3x4F");
	lua_pushnumber(L,ork::MAT4x2F); lua_setfield(L,-2,"MAT4x2F");
	lua_pushnumber(L,ork::MAT4x3F); lua_setfield(L,-2,"MAT4x3F");
	lua_pushnumber(L,ork::MAT2D); lua_setfield(L,-2,"MAT2D");
	lua_pushnumber(L,ork::MAT3D); lua_setfield(L,-2,"MAT3D");
	lua_pushnumber(L,ork::MAT4D); lua_setfield(L,-2,"MAT4D");
	lua_pushnumber(L,ork::MAT2x3D); lua_setfield(L,-2,"MAT2x3D");
	lua_pushnumber(L,ork::MAT2x4D); lua_setfield(L,-2,"MAT2x4D");
	lua_pushnumber(L,ork::MAT3x2D); lua_setfield(L,-2,"MAT3x2D");
	lua_pushnumber(L,ork::MAT3x4D); lua_setfield(L,-2,"MAT3x4D");
	lua_pushnumber(L,ork::MAT4x2D); lua_setfield(L,-2,"MAT4x2D");
	lua_pushnumber(L,ork::MAT4x3D); lua_setfield(L,-2,"MAT4x3D");
	lua_pushnumber(L,ork::SAMPLER_1D); lua_setfield(L,-2,"SAMPLER_1D");
	lua_pushnumber(L,ork::SAMPLER_2D); lua_setfield(L,-2,"SAMPLER_2D");
	lua_pushnumber(L,ork::SAMPLER_3D); lua_setfield(L,-2,"SAMPLER_3D");
	lua_pushnumber(L,ork::SAMPLER_CUBE); lua_setfield(L,-2,"SAMPLER_CUBE");
	lua_pushnumber(L,ork::SAMPLER_1D_ARRAY); lua_setfield(L,-2,"SAMPLER_1D_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_2D_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,ork::SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_BUFFER); lua_setfield(L,-2,"SAMPLER_BUFFER");
	lua_pushnumber(L,ork::SAMPLER_2D_RECT); lua_setfield(L,-2,"SAMPLER_2D_RECT");
	lua_pushnumber(L,ork::INT_SAMPLER_1D); lua_setfield(L,-2,"INT_SAMPLER_1D");
	lua_pushnumber(L,ork::INT_SAMPLER_2D); lua_setfield(L,-2,"INT_SAMPLER_2D");
	lua_pushnumber(L,ork::INT_SAMPLER_3D); lua_setfield(L,-2,"INT_SAMPLER_3D");
	lua_pushnumber(L,ork::INT_SAMPLER_CUBE); lua_setfield(L,-2,"INT_SAMPLER_CUBE");
	lua_pushnumber(L,ork::INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_BUFFER); lua_setfield(L,-2,"INT_SAMPLER_BUFFER");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_1D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_3D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_3D");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_CUBE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_BUFFER); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_BUFFER");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,ork::SUBROUTINE); lua_setfield(L,-2,"SUBROUTINE");

	lua_setfield(L,-2,"UniformType");

	lua_pushnumber(L,ork::VEC1F); lua_setfield(L,-2,"VEC1F");
	lua_pushnumber(L,ork::VEC2F); lua_setfield(L,-2,"VEC2F");
	lua_pushnumber(L,ork::VEC3F); lua_setfield(L,-2,"VEC3F");
	lua_pushnumber(L,ork::VEC4F); lua_setfield(L,-2,"VEC4F");
	lua_pushnumber(L,ork::VEC1D); lua_setfield(L,-2,"VEC1D");
	lua_pushnumber(L,ork::VEC2D); lua_setfield(L,-2,"VEC2D");
	lua_pushnumber(L,ork::VEC3D); lua_setfield(L,-2,"VEC3D");
	lua_pushnumber(L,ork::VEC4D); lua_setfield(L,-2,"VEC4D");
	lua_pushnumber(L,ork::VEC1I); lua_setfield(L,-2,"VEC1I");
	lua_pushnumber(L,ork::VEC2I); lua_setfield(L,-2,"VEC2I");
	lua_pushnumber(L,ork::VEC3I); lua_setfield(L,-2,"VEC3I");
	lua_pushnumber(L,ork::VEC4I); lua_setfield(L,-2,"VEC4I");
	lua_pushnumber(L,ork::VEC1UI); lua_setfield(L,-2,"VEC1UI");
	lua_pushnumber(L,ork::VEC2UI); lua_setfield(L,-2,"VEC2UI");
	lua_pushnumber(L,ork::VEC3UI); lua_setfield(L,-2,"VEC3UI");
	lua_pushnumber(L,ork::VEC4UI); lua_setfield(L,-2,"VEC4UI");
	lua_pushnumber(L,ork::VEC1B); lua_setfield(L,-2,"VEC1B");
	lua_pushnumber(L,ork::VEC2B); lua_setfield(L,-2,"VEC2B");
	lua_pushnumber(L,ork::VEC3B); lua_setfield(L,-2,"VEC3B");
	lua_pushnumber(L,ork::VEC4B); lua_setfield(L,-2,"VEC4B");
	lua_pushnumber(L,ork::MAT2F); lua_setfield(L,-2,"MAT2F");
	lua_pushnumber(L,ork::MAT3F); lua_setfield(L,-2,"MAT3F");
	lua_pushnumber(L,ork::MAT4F); lua_setfield(L,-2,"MAT4F");
	lua_pushnumber(L,ork::MAT2x3F); lua_setfield(L,-2,"MAT2x3F");
	lua_pushnumber(L,ork::MAT2x4F); lua_setfield(L,-2,"MAT2x4F");
	lua_pushnumber(L,ork::MAT3x2F); lua_setfield(L,-2,"MAT3x2F");
	lua_pushnumber(L,ork::MAT3x4F); lua_setfield(L,-2,"MAT3x4F");
	lua_pushnumber(L,ork::MAT4x2F); lua_setfield(L,-2,"MAT4x2F");
	lua_pushnumber(L,ork::MAT4x3F); lua_setfield(L,-2,"MAT4x3F");
	lua_pushnumber(L,ork::MAT2D); lua_setfield(L,-2,"MAT2D");
	lua_pushnumber(L,ork::MAT3D); lua_setfield(L,-2,"MAT3D");
	lua_pushnumber(L,ork::MAT4D); lua_setfield(L,-2,"MAT4D");
	lua_pushnumber(L,ork::MAT2x3D); lua_setfield(L,-2,"MAT2x3D");
	lua_pushnumber(L,ork::MAT2x4D); lua_setfield(L,-2,"MAT2x4D");
	lua_pushnumber(L,ork::MAT3x2D); lua_setfield(L,-2,"MAT3x2D");
	lua_pushnumber(L,ork::MAT3x4D); lua_setfield(L,-2,"MAT3x4D");
	lua_pushnumber(L,ork::MAT4x2D); lua_setfield(L,-2,"MAT4x2D");
	lua_pushnumber(L,ork::MAT4x3D); lua_setfield(L,-2,"MAT4x3D");
	lua_pushnumber(L,ork::SAMPLER_1D); lua_setfield(L,-2,"SAMPLER_1D");
	lua_pushnumber(L,ork::SAMPLER_2D); lua_setfield(L,-2,"SAMPLER_2D");
	lua_pushnumber(L,ork::SAMPLER_3D); lua_setfield(L,-2,"SAMPLER_3D");
	lua_pushnumber(L,ork::SAMPLER_CUBE); lua_setfield(L,-2,"SAMPLER_CUBE");
	lua_pushnumber(L,ork::SAMPLER_1D_ARRAY); lua_setfield(L,-2,"SAMPLER_1D_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_2D_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,ork::SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,ork::SAMPLER_BUFFER); lua_setfield(L,-2,"SAMPLER_BUFFER");
	lua_pushnumber(L,ork::SAMPLER_2D_RECT); lua_setfield(L,-2,"SAMPLER_2D_RECT");
	lua_pushnumber(L,ork::INT_SAMPLER_1D); lua_setfield(L,-2,"INT_SAMPLER_1D");
	lua_pushnumber(L,ork::INT_SAMPLER_2D); lua_setfield(L,-2,"INT_SAMPLER_2D");
	lua_pushnumber(L,ork::INT_SAMPLER_3D); lua_setfield(L,-2,"INT_SAMPLER_3D");
	lua_pushnumber(L,ork::INT_SAMPLER_CUBE); lua_setfield(L,-2,"INT_SAMPLER_CUBE");
	lua_pushnumber(L,ork::INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,ork::INT_SAMPLER_BUFFER); lua_setfield(L,-2,"INT_SAMPLER_BUFFER");
	lua_pushnumber(L,ork::INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_1D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_3D); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_3D");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_CUBE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_1D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_1D_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_BUFFER); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_BUFFER");
	lua_pushnumber(L,ork::UNSIGNED_INT_SAMPLER_2D_RECT); lua_setfield(L,-2,"UNSIGNED_INT_SAMPLER_2D_RECT");
	lua_pushnumber(L,ork::SUBROUTINE); lua_setfield(L,-2,"SUBROUTINE");


	lua_newtable(L); // enum QueryType

	lua_pushnumber(L,ork::PRIMITIVES_GENERATED); lua_setfield(L,-2,"PRIMITIVES_GENERATED");
	lua_pushnumber(L,ork::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN); lua_setfield(L,-2,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	lua_pushnumber(L,ork::SAMPLES_PASSED); lua_setfield(L,-2,"SAMPLES_PASSED");
	lua_pushnumber(L,ork::ANY_SAMPLES_PASSED); lua_setfield(L,-2,"ANY_SAMPLES_PASSED");
	lua_pushnumber(L,ork::TIME_STAMP); lua_setfield(L,-2,"TIME_STAMP");

	lua_setfield(L,-2,"QueryType");

	lua_pushnumber(L,ork::PRIMITIVES_GENERATED); lua_setfield(L,-2,"PRIMITIVES_GENERATED");
	lua_pushnumber(L,ork::TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN); lua_setfield(L,-2,"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	lua_pushnumber(L,ork::SAMPLES_PASSED); lua_setfield(L,-2,"SAMPLES_PASSED");
	lua_pushnumber(L,ork::ANY_SAMPLES_PASSED); lua_setfield(L,-2,"ANY_SAMPLES_PASSED");
	lua_pushnumber(L,ork::TIME_STAMP); lua_setfield(L,-2,"TIME_STAMP");


	lua_newtable(L); // enum QueryMode

	lua_pushnumber(L,ork::WAIT); lua_setfield(L,-2,"WAIT");
	lua_pushnumber(L,ork::NO_WAIT); lua_setfield(L,-2,"NO_WAIT");
	lua_pushnumber(L,ork::REGION_WAIT); lua_setfield(L,-2,"REGION_WAIT");
	lua_pushnumber(L,ork::REGION_NO_WAIT); lua_setfield(L,-2,"REGION_NO_WAIT");

	lua_setfield(L,-2,"QueryMode");

	lua_pushnumber(L,ork::WAIT); lua_setfield(L,-2,"WAIT");
	lua_pushnumber(L,ork::NO_WAIT); lua_setfield(L,-2,"NO_WAIT");
	lua_pushnumber(L,ork::REGION_WAIT); lua_setfield(L,-2,"REGION_WAIT");
	lua_pushnumber(L,ork::REGION_NO_WAIT); lua_setfield(L,-2,"REGION_NO_WAIT");


}

#ifdef __cplusplus
}
#endif


