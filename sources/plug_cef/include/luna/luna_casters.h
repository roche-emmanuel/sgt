#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<CefRefCount,dstType> {
	static inline dstType* cast(CefRefCount* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<cef::CEFViewBase::Traits,dstType> {
	static inline dstType* cast(cef::CEFViewBase::Traits* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif
