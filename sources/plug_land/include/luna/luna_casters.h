#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<ork::FileLogger::File,dstType> {
	static inline dstType* cast(ork::FileLogger::File* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::half,dstType> {
	static inline dstType* cast(ork::half* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2h,dstType> {
	static inline dstType* cast(ork::vec2h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2f,dstType> {
	static inline dstType* cast(ork::vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2d,dstType> {
	static inline dstType* cast(ork::vec2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2i,dstType> {
	static inline dstType* cast(ork::vec2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3h,dstType> {
	static inline dstType* cast(ork::vec3h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3f,dstType> {
	static inline dstType* cast(ork::vec3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3d,dstType> {
	static inline dstType* cast(ork::vec3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3i,dstType> {
	static inline dstType* cast(ork::vec3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4h,dstType> {
	static inline dstType* cast(ork::vec4h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4f,dstType> {
	static inline dstType* cast(ork::vec4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4d,dstType> {
	static inline dstType* cast(ork::vec4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4i,dstType> {
	static inline dstType* cast(ork::vec4i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2f,dstType> {
	static inline dstType* cast(ork::box2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2d,dstType> {
	static inline dstType* cast(ork::box2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2i,dstType> {
	static inline dstType* cast(ork::box2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3f,dstType> {
	static inline dstType* cast(ork::box3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3d,dstType> {
	static inline dstType* cast(ork::box3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3i,dstType> {
	static inline dstType* cast(ork::box3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat2f,dstType> {
	static inline dstType* cast(ork::mat2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat2d,dstType> {
	static inline dstType* cast(ork::mat2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat3f,dstType> {
	static inline dstType* cast(ork::mat3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat3d,dstType> {
	static inline dstType* cast(ork::mat3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat4f,dstType> {
	static inline dstType* cast(ork::mat4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat4d,dstType> {
	static inline dstType* cast(ork::mat4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::quatf,dstType> {
	static inline dstType* cast(ork::quatf* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::quatd,dstType> {
	static inline dstType* cast(ork::quatd* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

