#ifndef _cef_SKELETONS_H_
#define _cef_SKELETONS_H_

class CefBase {
};

class CefRefCount {
};

class Traits {
};

namespace cef {
	class CEFManager: public CefBase {
	};

	class CEFViewBase: public CefBase {
	public:
	};

	class RenderTarget: public CefBase {
	};

	class DX9RenderTarget: public cef::RenderTarget {
	};

};


#endif
