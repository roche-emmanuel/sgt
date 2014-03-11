#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "LuaEventHandler.h"
#include <wx/statusbr.h>

/** LUNA_CLASS_EXTENSION */
int GetX(wxPoint* point);

/** LUNA_CLASS_EXTENSION */
int GetY(wxPoint* point);

/** LUNA_CLASS_EXTENSION */
bool disconnect(wxEvtHandler* handler, int id, int id2, int eventType);

/** LUNA_CLASS_EXTENSION */
bool disconnect(wxEvtHandler* handler, int id, int eventType);

/** LUNA_CLASS_EXTENSION */
bool disconnect(wxEvtHandler* handler, int eventType);

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int id, int id2, int eventType, lua_Function* dummy, lua_State* L);

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int id, int eventType, lua_Function* dummy, lua_State* L);

/** LUNA_CLASS_EXTENSION */
int connect(wxEvtHandler* handler, int eventType, lua_Function* dummy, lua_State* L);

enum ImageCorner {
	CORNER_BOTTOM_RIGHT,
	CORNER_BOTTOM_LEFT,
	CORNER_TOP_LEFT,
	CORNER_TOP_RIGHT
};

/** LUNA_CLASS_EXTENSION */
void composeWith(wxImage* mainImg, wxImage* subImg, int corner = CORNER_BOTTOM_RIGHT);

/** LUNA_CLASS_EXTENSION */
inline void setFieldsCountVector(wxStatusBar* bar, std::vector<int>* widths) {
	bar->SetFieldsCount(widths->size(),&(*widths)[0]);
};

/** LUNA_CLASS_EXTENSION */
inline void setStatusWidthsVector(wxStatusBar* bar, std::vector<int>* widths) {
	bar->SetStatusWidths(widths->size(),&(*widths)[0]);
};

/** LUNA_CLASS_EXTENSION */
inline void setStatusStylesVector(wxStatusBar* bar, std::vector<int>* styles) {
	bar->SetStatusStyles(styles->size(),&(*styles)[0]);
};

sgt::LogManager::LogHandler* createWxLogHandler(wxEvtHandler* handler);

#endif
