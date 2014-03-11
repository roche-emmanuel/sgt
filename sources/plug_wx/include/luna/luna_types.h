#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <wx/eventfilter.h>
#include <wx/object.h>
#include <wx/tracker.h>
#include <wx/event.h>
#include <wx/app.h>
#include <wx/aboutdlg.h>
#include <wx/accel.h>
#include <wx/affinematrix2d.h>
#include <wx/gdiobj.h>
#include <wx/animate.h>
#include <wx/window.h>
#include <wx/control.h>
#include <wx/anybutton.h>
#include <wx/apptrait.h>
#include <wx/arrstr.h>
#include <wx/artprov.h>
#include <wx/aui/auibar.h>
#include <wx/aui/dockart.h>
#include <wx/aui/framemanager.h>
#include <wx/withimages.h>
#include <wx/bookctrl.h>
#include <wx/aui/auibook.h>
#include <wx/bannerwindow.h>
#include <wx/bitmap.h>
#include <wx/button.h>
#include <wx/bmpbuttn.h>
#include <wx/ctrlsub.h>
#include <wx/textentry.h>
#include <wx/combobox.h>
#include <wx/bmpcbox.h>
#include <wx/dataobj.h>
#include <wx/tglbtn.h>
#include <wx/sizer.h>
#include <wx/brush.h>
#include <wx/utils.h>
#include <wx/busyinfo.h>
#include <wx/laywin.h>
#include <wx/calctrl.h>
#include <wx/dateevt.h>
#include <wx/caret.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/checklst.h>
#include <wx/choice.h>
#include <wx/choicebk.h>
#include <wx/ipc.h>
#include <wx/clntdata.h>
#include <wx/dc.h>
#include <wx/dcclient.h>
#include <wx/clipbrd.h>
#include <wx/cmdline.h>
#include <wx/collpane.h>
#include <wx/colour.h>
#include <wx/colourdata.h>
#include <wx/gdicmn.h>
#include <wx/nonownedwnd.h>
#include <wx/toplevel.h>
#include <wx/dialog.h>
#include <wx/colordlg.h>
#include <wx/pickerbase.h>
#include <wx/clrpicker.h>
#include <wx/combo.h>
#include <wx/cmdproc.h>
#include <wx/commandlinkbutton.h>
#include <wx/thread.h>
#include <wx/config.h>
#include <wx/ipcbase.h>
#include <wx/cshelp.h>
#include <wx/convauto.h>
#include <wx/stream.h>
#include <wx/strconv.h>
#include <wx/cursor.h>
#include <wx/socket.h>
#include <wx/datstrm.h>
#include <wx/dataview.h>
#include <wx/headercol.h>
#include <wx/datectrl.h>
#include <wx/datetime.h>
#include <wx/renderer.h>
#include <wx/dialup.h>
#include <wx/dir.h>
#include <wx/dirdlg.h>
#include <wx/filepicker.h>
#include <wx/display.h>
#include <wx/frame.h>
#include <wx/docview.h>
#include <wx/mdi.h>
#include <wx/docmdi.h>
#include <wx/dragimag.h>
#include <wx/dnd.h>
#include <wx/dynlib.h>
#include <wx/panel.h>
#include <wx/editlbox.h>
#include <wx/encconv.h>
#include <wx/evtloop.h>
#include <wx/help.h>
#include <wx/generic/helpext.h>
#include <wx/ffile.h>
#include <wx/wfstream.h>
#include <wx/file.h>
#include <wx/fileconf.h>
#include <wx/filectrl.h>
#include <wx/filedlg.h>
#include <wx/filehistory.h>
#include <wx/filename.h>
#include <wx/filesys.h>
#include <wx/fswatcher.h>
#include <wx/translation.h>
#include <wx/mimetype.h>
#include <wx/fdrepdlg.h>
#include <wx/validate.h>
#include <wx/font.h>
#include <wx/fontdata.h>
#include <wx/fontdlg.h>
#include <wx/fontenum.h>
#include <wx/fontmap.h>
#include <wx/fontpicker.h>
#include <wx/volume.h>
#include <wx/protocol/protocol.h>
#include <wx/protocol/ftp.h>
#include <wx/gauge.h>
#include <wx/gbsizer.h>
#include <wx/dcgraph.h>
#include <wx/dirctrl.h>
#include <wx/valgen.h>
#include <wx/glcanvas.h>
#include <wx/graphics.h>
#include <wx/scrolwin.h>
#include <wx/grid.h>
#include <wx/headerctrl.h>
#include <wx/vscroll.h>
#include <wx/html/htmlcell.h>
#include <wx/html/htmlwin.h>
#include <wx/html/htmprint.h>
#include <wx/html/htmlfilt.h>
#include <wx/html/helpctrl.h>
#include <wx/html/helpdata.h>
#include <wx/html/helpdlg.h>
#include <wx/html/helpfrm.h>
#include <wx/html/helpwnd.h>
#include <wx/vlbox.h>
#include <wx/htmllbox.h>
#include <wx/html/htmlpars.h>
#include <wx/print.h>
#include <wx/html/htmltag.h>
#include <wx/module.h>
#include <wx/html/winpars.h>
#include <wx/protocol/http.h>
#include <wx/hyperlink.h>
#include <wx/icon.h>
#include <wx/iconbndl.h>
#include <wx/iconloc.h>
#include <wx/windowid.h>
#include <wx/image.h>
#include <wx/imaglist.h>
#include <wx/layout.h>
#include <wx/infobar.h>
#include <wx/init.h>
#include <wx/joystick.h>
#include <wx/kbdstate.h>
#include <wx/intl.h>
#include <wx/platinfo.h>
#include <wx/listbook.h>
#include <wx/listctrl.h>
#include <wx/log.h>
#include <wx/longlong.h>
#include <wx/affinematrix2dbase.h>
#include <wx/mediactrl.h>
#include <wx/dcmemory.h>
#include <wx/fs_mem.h>
#include <wx/mstream.h>
#include <wx/menu.h>
#include <wx/menuitem.h>
#include <wx/msgdlg.h>
#include <wx/msgout.h>
#include <wx/metafile.h>
#include <wx/minifram.h>
#include <wx/dcmirror.h>
#include <wx/mousestate.h>
#include <wx/mousemanager.h>
#include <wx/choicdlg.h>
#include <wx/fontutil.h>
#include <wx/notebook.h>
#include <wx/numformatter.h>
#include <wx/odcombo.h>
#include <wx/printdlg.h>
#include <wx/cmndata.h>
#include <wx/palette.h>
#include <wx/textdlg.h>
#include <wx/filefn.h>
#include <wx/pen.h>
#include <wx/persist.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/editors.h>
#include <wx/propgrid/propgrid.h>
#include <wx/geometry.h>
#include <wx/popupwin.h>
#include <wx/position.h>
#include <wx/power.h>
#include <wx/dcprint.h>
#include <wx/process.h>
#include <wx/progdlg.h>
#include <wx/propgrid/propgridiface.h>
#include <wx/propgrid/propgridpagestate.h>
#include <wx/propgrid/manager.h>
#include <wx/propdlg.h>
#include <wx/protocol/log.h>
#include <wx/quantize.h>
#include <wx/radiobox.h>
#include <wx/radiobut.h>
#include <wx/rearrangectrl.h>
#include <wx/recguard.h>
#include <wx/msw/regconf.h>
#include <wx/regex.h>
#include <wx/region.h>
#include <wx/msw/registry.h>
#include <wx/ribbon/art.h>
#include <wx/ribbon/control.h>
#include <wx/ribbon/bar.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/gallery.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/panel.h>
#include <wx/ribbon/toolbar.h>
#include <wx/richmsgdlg.h>
#include <wx/richtext/richtextbuffer.h>
#include <wx/textctrl.h>
#include <wx/richtext/richtextstyles.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/richtext/richtextformatdlg.h>
#include <wx/richtext/richtextprint.h>
#include <wx/richtext/richtexthtml.h>
#include <wx/richtext/richtextstyledlg.h>
#include <wx/richtext/richtextxml.h>
#include <wx/richtooltip.h>
#include <wx/sashwin.h>
#include <wx/dcscreen.h>
#include <wx/scrolbar.h>
#include <wx/srchctrl.h>
#include <wx/snglinst.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_sizer.h>
#include <wx/slider.h>
#include <wx/sckstrm.h>
#include <wx/sound.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/splash.h>
#include <wx/splitter.h>
#include <wx/stackwalk.h>
#include <wx/stdpaths.h>
#include <wx/statbmp.h>
#include <wx/statbox.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/stdstream.h>
#include <wx/stopwatch.h>
#include <wx/string.h>
#include <wx/sstream.h>
#include <wx/tokenzr.h>
#include <wx/stc/stc.h>
#include <wx/dcsvg.h>
#include <wx/richtext/richtextsymboldlg.h>
#include <wx/sysopt.h>
#include <wx/settings.h>
#include <wx/tarstrm.h>
#include <wx/taskbar.h>
#include <wx/sckipc.h>
#include <wx/textcompleter.h>
#include <wx/textfile.h>
#include <wx/txtstrm.h>
#include <wx/valtext.h>
#include <wx/textwrapper.h>
#include <wx/timectrl.h>
#include <wx/timer.h>
#include <wx/tipdlg.h>
#include <wx/tipwin.h>
#include <wx/toolbar.h>
#include <wx/toolbook.h>
#include <wx/tooltip.h>
#include <wx/treebook.h>
#include <wx/treectrl.h>
#include <wx/treebase.h>
#include <wx/treelist.h>
#include <wx/uiaction.h>
#include <wx/unichar.h>
#include <wx/uri.h>
#include <wx/url.h>
#include <wx/ustring.h>
#include <wx/variant.h>
#include <wx/versioninfo.h>
#include <wx/vidmode.h>
#include <wx/wupdlock.h>
#include <wx/wizard.h>
#include <wx/wrapsizer.h>
#include <wx/xlocale.h>
#include <wx/xml/xml.h>
#include <wx/zipstrm.h>
#include <wx/zstream.h>

// Class: HWND
template<>
class LunaTraits< HWND > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static HWND* _bind_ctor(lua_State *L);
	static void _bind_dtor(HWND* obj);
	typedef HWND parent_t;
	typedef HWND base_t;
	static luna_ConverterType converters[];
};

// Class: wxEventFilter
template<>
class LunaTraits< wxEventFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEventFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEventFilter* obj);
	typedef wxEventFilter parent_t;
	typedef wxEventFilter base_t;
	static luna_ConverterType converters[];
};

// Class: wxObject
template<>
class LunaTraits< wxObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxObject* obj);
	typedef wxObject parent_t;
	typedef wxObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxTrackable
template<>
class LunaTraits< wxTrackable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTrackable* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTrackable* obj);
	typedef wxTrackable parent_t;
	typedef wxTrackable base_t;
	static luna_ConverterType converters[];
};

// Class: wxEvtHandler
template<>
class LunaTraits< wxEvtHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEvtHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEvtHandler* obj);
	typedef wxObject parent_t;
	typedef wxEvtHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxAppConsole
template<>
class LunaTraits< wxAppConsole > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAppConsole* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAppConsole* obj);
	typedef wxObject parent_t;
	typedef wxAppConsole base_t;
	static luna_ConverterType converters[];
};

// Class: wxApp
template<>
class LunaTraits< wxApp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxApp* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxApp* obj);
	typedef wxObject parent_t;
	typedef wxApp base_t;
	static luna_ConverterType converters[];
};

// Class: sgtApp
template<>
class LunaTraits< sgtApp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgtApp* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgtApp* obj);
	typedef wxObject parent_t;
	typedef sgtApp base_t;
	static luna_ConverterType converters[];
};

// Class: wxAboutDialogInfo
template<>
class LunaTraits< wxAboutDialogInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAboutDialogInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAboutDialogInfo* obj);
	typedef wxAboutDialogInfo parent_t;
	typedef wxAboutDialogInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxAcceleratorEntry
template<>
class LunaTraits< wxAcceleratorEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAcceleratorEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAcceleratorEntry* obj);
	typedef wxAcceleratorEntry parent_t;
	typedef wxAcceleratorEntry base_t;
	static luna_ConverterType converters[];
};

// Class: wxAcceleratorTable
template<>
class LunaTraits< wxAcceleratorTable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAcceleratorTable* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAcceleratorTable* obj);
	typedef wxObject parent_t;
	typedef wxAcceleratorTable base_t;
	static luna_ConverterType converters[];
};

// Class: wxEvent
template<>
class LunaTraits< wxEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEvent* obj);
	typedef wxObject parent_t;
	typedef wxEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxActivateEvent
template<>
class LunaTraits< wxActivateEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxActivateEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxActivateEvent* obj);
	typedef wxObject parent_t;
	typedef wxActivateEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxAffineMatrix2D
template<>
class LunaTraits< wxAffineMatrix2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAffineMatrix2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAffineMatrix2D* obj);
	typedef wxAffineMatrix2D parent_t;
	typedef wxAffineMatrix2D base_t;
	static luna_ConverterType converters[];
};

// Class: wxAffineMatrix2DBase
template<>
class LunaTraits< wxAffineMatrix2DBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAffineMatrix2DBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAffineMatrix2DBase* obj);
	typedef wxAffineMatrix2DBase parent_t;
	typedef wxAffineMatrix2DBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxGDIObject
template<>
class LunaTraits< wxGDIObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGDIObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGDIObject* obj);
	typedef wxObject parent_t;
	typedef wxGDIObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxAnimation
template<>
class LunaTraits< wxAnimation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAnimation* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAnimation* obj);
	typedef wxObject parent_t;
	typedef wxAnimation base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindow
template<>
class LunaTraits< wxWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindow* obj);
	typedef wxObject parent_t;
	typedef wxWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxControl
template<>
class LunaTraits< wxControl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxControl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxControl* obj);
	typedef wxObject parent_t;
	typedef wxControl base_t;
	static luna_ConverterType converters[];
};

// Class: wxAnimationCtrl
template<>
class LunaTraits< wxAnimationCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAnimationCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAnimationCtrl* obj);
	typedef wxObject parent_t;
	typedef wxAnimationCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxAnyButton
template<>
class LunaTraits< wxAnyButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAnyButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAnyButton* obj);
	typedef wxObject parent_t;
	typedef wxAnyButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxAppTraits
template<>
class LunaTraits< wxAppTraits > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAppTraits* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAppTraits* obj);
	typedef wxAppTraits parent_t;
	typedef wxAppTraits base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayDouble
template<>
class LunaTraits< wxArrayDouble > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayDouble* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayDouble* obj);
	typedef wxArrayDouble parent_t;
	typedef wxArrayDouble base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayInt
template<>
class LunaTraits< wxArrayInt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayInt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayInt* obj);
	typedef wxArrayInt parent_t;
	typedef wxArrayInt base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayLong
template<>
class LunaTraits< wxArrayLong > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayLong* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayLong* obj);
	typedef wxArrayLong parent_t;
	typedef wxArrayLong base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayPtrVoid
template<>
class LunaTraits< wxArrayPtrVoid > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayPtrVoid* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayPtrVoid* obj);
	typedef wxArrayPtrVoid parent_t;
	typedef wxArrayPtrVoid base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayShort
template<>
class LunaTraits< wxArrayShort > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayShort* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayShort* obj);
	typedef wxArrayShort parent_t;
	typedef wxArrayShort base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayString
template<>
class LunaTraits< wxArrayString > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayString* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayString* obj);
	typedef wxArrayString parent_t;
	typedef wxArrayString base_t;
	static luna_ConverterType converters[];
};

// Class: wxArrayTreeItemIds
template<>
class LunaTraits< wxArrayTreeItemIds > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayTreeItemIds* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayTreeItemIds* obj);
	typedef wxArrayTreeItemIds parent_t;
	typedef wxArrayTreeItemIds base_t;
	static luna_ConverterType converters[];
};

// Class: wxArtProvider
template<>
class LunaTraits< wxArtProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArtProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArtProvider* obj);
	typedef wxObject parent_t;
	typedef wxArtProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiToolBarArt
template<>
class LunaTraits< wxAuiToolBarArt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiToolBarArt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiToolBarArt* obj);
	typedef wxAuiToolBarArt parent_t;
	typedef wxAuiToolBarArt base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiDefaultToolBarArt
template<>
class LunaTraits< wxAuiDefaultToolBarArt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiDefaultToolBarArt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiDefaultToolBarArt* obj);
	typedef wxAuiToolBarArt parent_t;
	typedef wxAuiDefaultToolBarArt base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiDockArt
template<>
class LunaTraits< wxAuiDockArt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiDockArt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiDockArt* obj);
	typedef wxAuiDockArt parent_t;
	typedef wxAuiDockArt base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiManager
template<>
class LunaTraits< wxAuiManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiManager* obj);
	typedef wxObject parent_t;
	typedef wxAuiManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiManagerEvent
template<>
class LunaTraits< wxAuiManagerEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiManagerEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiManagerEvent* obj);
	typedef wxObject parent_t;
	typedef wxAuiManagerEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxWithImages
template<>
class LunaTraits< wxWithImages > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWithImages* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWithImages* obj);
	typedef wxWithImages parent_t;
	typedef wxWithImages base_t;
	static luna_ConverterType converters[];
};

// Class: wxBookCtrlBase
template<>
class LunaTraits< wxBookCtrlBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBookCtrlBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBookCtrlBase* obj);
	typedef wxObject parent_t;
	typedef wxBookCtrlBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiNotebook
template<>
class LunaTraits< wxAuiNotebook > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiNotebook* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiNotebook* obj);
	typedef wxObject parent_t;
	typedef wxAuiNotebook base_t;
	static luna_ConverterType converters[];
};

// Class: wxCommandEvent
template<>
class LunaTraits< wxCommandEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCommandEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCommandEvent* obj);
	typedef wxObject parent_t;
	typedef wxCommandEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxNotifyEvent
template<>
class LunaTraits< wxNotifyEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxNotifyEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxNotifyEvent* obj);
	typedef wxObject parent_t;
	typedef wxNotifyEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxBookCtrlEvent
template<>
class LunaTraits< wxBookCtrlEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBookCtrlEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBookCtrlEvent* obj);
	typedef wxObject parent_t;
	typedef wxBookCtrlEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiNotebookEvent
template<>
class LunaTraits< wxAuiNotebookEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiNotebookEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiNotebookEvent* obj);
	typedef wxObject parent_t;
	typedef wxAuiNotebookEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiNotebookPage
template<>
class LunaTraits< wxAuiNotebookPage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiNotebookPage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiNotebookPage* obj);
	typedef wxAuiNotebookPage parent_t;
	typedef wxAuiNotebookPage base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiNotebookPageArray
template<>
class LunaTraits< wxAuiNotebookPageArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiNotebookPageArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiNotebookPageArray* obj);
	typedef wxAuiNotebookPageArray parent_t;
	typedef wxAuiNotebookPageArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiPaneInfo
template<>
class LunaTraits< wxAuiPaneInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiPaneInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiPaneInfo* obj);
	typedef wxAuiPaneInfo parent_t;
	typedef wxAuiPaneInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiPaneInfoArray
template<>
class LunaTraits< wxAuiPaneInfoArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiPaneInfoArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiPaneInfoArray* obj);
	typedef wxAuiPaneInfoArray parent_t;
	typedef wxAuiPaneInfoArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiTabArt
template<>
class LunaTraits< wxAuiTabArt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiTabArt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiTabArt* obj);
	typedef wxAuiTabArt parent_t;
	typedef wxAuiTabArt base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiToolBar
template<>
class LunaTraits< wxAuiToolBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiToolBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiToolBar* obj);
	typedef wxObject parent_t;
	typedef wxAuiToolBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiToolBarEvent
template<>
class LunaTraits< wxAuiToolBarEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiToolBarEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiToolBarEvent* obj);
	typedef wxObject parent_t;
	typedef wxAuiToolBarEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiToolBarItem
template<>
class LunaTraits< wxAuiToolBarItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiToolBarItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiToolBarItem* obj);
	typedef wxAuiToolBarItem parent_t;
	typedef wxAuiToolBarItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxAuiToolBarItemArray
template<>
class LunaTraits< wxAuiToolBarItemArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxAuiToolBarItemArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxAuiToolBarItemArray* obj);
	typedef wxAuiToolBarItemArray parent_t;
	typedef wxAuiToolBarItemArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxBannerWindow
template<>
class LunaTraits< wxBannerWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBannerWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBannerWindow* obj);
	typedef wxObject parent_t;
	typedef wxBannerWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxBitmap
template<>
class LunaTraits< wxBitmap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBitmap* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBitmap* obj);
	typedef wxObject parent_t;
	typedef wxBitmap base_t;
	static luna_ConverterType converters[];
};

// Class: wxButton
template<>
class LunaTraits< wxButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxButton* obj);
	typedef wxObject parent_t;
	typedef wxButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxBitmapButton
template<>
class LunaTraits< wxBitmapButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBitmapButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBitmapButton* obj);
	typedef wxObject parent_t;
	typedef wxBitmapButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxItemContainerImmutable
template<>
class LunaTraits< wxItemContainerImmutable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxItemContainerImmutable* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxItemContainerImmutable* obj);
	typedef wxItemContainerImmutable parent_t;
	typedef wxItemContainerImmutable base_t;
	static luna_ConverterType converters[];
};

// Class: wxItemContainer
template<>
class LunaTraits< wxItemContainer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxItemContainer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxItemContainer* obj);
	typedef wxItemContainerImmutable parent_t;
	typedef wxItemContainer base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextEntry
template<>
class LunaTraits< wxTextEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextEntry* obj);
	typedef wxTextEntry parent_t;
	typedef wxTextEntry base_t;
	static luna_ConverterType converters[];
};

// Class: wxComboBox
template<>
class LunaTraits< wxComboBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxComboBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxComboBox* obj);
	typedef wxObject parent_t;
	typedef wxComboBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxBitmapComboBox
template<>
class LunaTraits< wxBitmapComboBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBitmapComboBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBitmapComboBox* obj);
	typedef wxObject parent_t;
	typedef wxBitmapComboBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataObject
template<>
class LunaTraits< wxDataObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataObject* obj);
	typedef wxDataObject parent_t;
	typedef wxDataObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataObjectSimple
template<>
class LunaTraits< wxDataObjectSimple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataObjectSimple* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataObjectSimple* obj);
	typedef wxDataObject parent_t;
	typedef wxDataObjectSimple base_t;
	static luna_ConverterType converters[];
};

// Class: wxBitmapDataObject
template<>
class LunaTraits< wxBitmapDataObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBitmapDataObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBitmapDataObject* obj);
	typedef wxDataObject parent_t;
	typedef wxBitmapDataObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxBitmapHandler
template<>
class LunaTraits< wxBitmapHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBitmapHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBitmapHandler* obj);
	typedef wxObject parent_t;
	typedef wxBitmapHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxToggleButton
template<>
class LunaTraits< wxToggleButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxToggleButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxToggleButton* obj);
	typedef wxObject parent_t;
	typedef wxToggleButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxBitmapToggleButton
template<>
class LunaTraits< wxBitmapToggleButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBitmapToggleButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBitmapToggleButton* obj);
	typedef wxObject parent_t;
	typedef wxBitmapToggleButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxSizer
template<>
class LunaTraits< wxSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSizer* obj);
	typedef wxObject parent_t;
	typedef wxSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxBoxSizer
template<>
class LunaTraits< wxBoxSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBoxSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBoxSizer* obj);
	typedef wxObject parent_t;
	typedef wxBoxSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxBrush
template<>
class LunaTraits< wxBrush > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBrush* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBrush* obj);
	typedef wxObject parent_t;
	typedef wxBrush base_t;
	static luna_ConverterType converters[];
};

// Class: wxList
template<>
class LunaTraits< wxList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxList* obj);
	typedef wxList parent_t;
	typedef wxList base_t;
	static luna_ConverterType converters[];
};

// Class: wxBrushList
template<>
class LunaTraits< wxBrushList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBrushList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBrushList* obj);
	typedef wxList parent_t;
	typedef wxBrushList base_t;
	static luna_ConverterType converters[];
};

// Class: wxBusyCursor
template<>
class LunaTraits< wxBusyCursor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBusyCursor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBusyCursor* obj);
	typedef wxBusyCursor parent_t;
	typedef wxBusyCursor base_t;
	static luna_ConverterType converters[];
};

// Class: wxBusyInfo
template<>
class LunaTraits< wxBusyInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxBusyInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxBusyInfo* obj);
	typedef wxBusyInfo parent_t;
	typedef wxBusyInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxCalculateLayoutEvent
template<>
class LunaTraits< wxCalculateLayoutEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCalculateLayoutEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCalculateLayoutEvent* obj);
	typedef wxObject parent_t;
	typedef wxCalculateLayoutEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxCalendarCtrl
template<>
class LunaTraits< wxCalendarCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCalendarCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCalendarCtrl* obj);
	typedef wxObject parent_t;
	typedef wxCalendarCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxCalendarDateAttr
template<>
class LunaTraits< wxCalendarDateAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCalendarDateAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCalendarDateAttr* obj);
	typedef wxCalendarDateAttr parent_t;
	typedef wxCalendarDateAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxDateEvent
template<>
class LunaTraits< wxDateEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDateEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDateEvent* obj);
	typedef wxObject parent_t;
	typedef wxDateEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxCalendarEvent
template<>
class LunaTraits< wxCalendarEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCalendarEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCalendarEvent* obj);
	typedef wxObject parent_t;
	typedef wxCalendarEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxCaret
template<>
class LunaTraits< wxCaret > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCaret* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCaret* obj);
	typedef wxCaret parent_t;
	typedef wxCaret base_t;
	static luna_ConverterType converters[];
};

// Class: wxCheckBox
template<>
class LunaTraits< wxCheckBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCheckBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCheckBox* obj);
	typedef wxObject parent_t;
	typedef wxCheckBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxControlWithItems
template<>
class LunaTraits< wxControlWithItems > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxControlWithItems* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxControlWithItems* obj);
	typedef wxObject parent_t;
	typedef wxControlWithItems base_t;
	static luna_ConverterType converters[];
};

// Class: wxListBox
template<>
class LunaTraits< wxListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListBox* obj);
	typedef wxObject parent_t;
	typedef wxListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxCheckListBox
template<>
class LunaTraits< wxCheckListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCheckListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCheckListBox* obj);
	typedef wxObject parent_t;
	typedef wxCheckListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxChildFocusEvent
template<>
class LunaTraits< wxChildFocusEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxChildFocusEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxChildFocusEvent* obj);
	typedef wxObject parent_t;
	typedef wxChildFocusEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxChoice
template<>
class LunaTraits< wxChoice > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxChoice* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxChoice* obj);
	typedef wxObject parent_t;
	typedef wxChoice base_t;
	static luna_ConverterType converters[];
};

// Class: wxChoicebook
template<>
class LunaTraits< wxChoicebook > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxChoicebook* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxChoicebook* obj);
	typedef wxObject parent_t;
	typedef wxChoicebook base_t;
	static luna_ConverterType converters[];
};

// Class: wxClassInfo
template<>
class LunaTraits< wxClassInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClassInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClassInfo* obj);
	typedef wxClassInfo parent_t;
	typedef wxClassInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxClient
template<>
class LunaTraits< wxClient > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClient* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClient* obj);
	typedef wxObject parent_t;
	typedef wxClient base_t;
	static luna_ConverterType converters[];
};

// Class: wxClientData
template<>
class LunaTraits< wxClientData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClientData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClientData* obj);
	typedef wxClientData parent_t;
	typedef wxClientData base_t;
	static luna_ConverterType converters[];
};

// Class: wxClientDataContainer
template<>
class LunaTraits< wxClientDataContainer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClientDataContainer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClientDataContainer* obj);
	typedef wxClientDataContainer parent_t;
	typedef wxClientDataContainer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDC
template<>
class LunaTraits< wxDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDC* obj);
	typedef wxObject parent_t;
	typedef wxDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindowDC
template<>
class LunaTraits< wxWindowDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowDC* obj);
	typedef wxObject parent_t;
	typedef wxWindowDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxClientDC
template<>
class LunaTraits< wxClientDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClientDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClientDC* obj);
	typedef wxObject parent_t;
	typedef wxClientDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxClipboard
template<>
class LunaTraits< wxClipboard > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClipboard* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClipboard* obj);
	typedef wxObject parent_t;
	typedef wxClipboard base_t;
	static luna_ConverterType converters[];
};

// Class: wxClipboardTextEvent
template<>
class LunaTraits< wxClipboardTextEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxClipboardTextEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxClipboardTextEvent* obj);
	typedef wxObject parent_t;
	typedef wxClipboardTextEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxCloseEvent
template<>
class LunaTraits< wxCloseEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCloseEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCloseEvent* obj);
	typedef wxObject parent_t;
	typedef wxCloseEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxCmdLineEntryDesc
template<>
class LunaTraits< wxCmdLineEntryDesc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCmdLineEntryDesc* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCmdLineEntryDesc* obj);
	typedef wxCmdLineEntryDesc parent_t;
	typedef wxCmdLineEntryDesc base_t;
	static luna_ConverterType converters[];
};

// Class: wxCmdLineParser
template<>
class LunaTraits< wxCmdLineParser > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCmdLineParser* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCmdLineParser* obj);
	typedef wxCmdLineParser parent_t;
	typedef wxCmdLineParser base_t;
	static luna_ConverterType converters[];
};

// Class: wxCollapsiblePane
template<>
class LunaTraits< wxCollapsiblePane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCollapsiblePane* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCollapsiblePane* obj);
	typedef wxObject parent_t;
	typedef wxCollapsiblePane base_t;
	static luna_ConverterType converters[];
};

// Class: wxCollapsiblePaneEvent
template<>
class LunaTraits< wxCollapsiblePaneEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCollapsiblePaneEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCollapsiblePaneEvent* obj);
	typedef wxObject parent_t;
	typedef wxCollapsiblePaneEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxColour
template<>
class LunaTraits< wxColour > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxColour* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxColour* obj);
	typedef wxObject parent_t;
	typedef wxColour base_t;
	static luna_ConverterType converters[];
};

// Class: wxColourData
template<>
class LunaTraits< wxColourData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxColourData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxColourData* obj);
	typedef wxObject parent_t;
	typedef wxColourData base_t;
	static luna_ConverterType converters[];
};

// Class: wxColourDatabase
template<>
class LunaTraits< wxColourDatabase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxColourDatabase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxColourDatabase* obj);
	typedef wxColourDatabase parent_t;
	typedef wxColourDatabase base_t;
	static luna_ConverterType converters[];
};

// Class: wxNonOwnedWindow
template<>
class LunaTraits< wxNonOwnedWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxNonOwnedWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxNonOwnedWindow* obj);
	typedef wxObject parent_t;
	typedef wxNonOwnedWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxTopLevelWindow
template<>
class LunaTraits< wxTopLevelWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTopLevelWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTopLevelWindow* obj);
	typedef wxObject parent_t;
	typedef wxTopLevelWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxDialog
template<>
class LunaTraits< wxDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDialog* obj);
	typedef wxObject parent_t;
	typedef wxDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxColourDialog
template<>
class LunaTraits< wxColourDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxColourDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxColourDialog* obj);
	typedef wxObject parent_t;
	typedef wxColourDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxPickerBase
template<>
class LunaTraits< wxPickerBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPickerBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPickerBase* obj);
	typedef wxObject parent_t;
	typedef wxPickerBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxColourPickerCtrl
template<>
class LunaTraits< wxColourPickerCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxColourPickerCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxColourPickerCtrl* obj);
	typedef wxObject parent_t;
	typedef wxColourPickerCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxColourPickerEvent
template<>
class LunaTraits< wxColourPickerEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxColourPickerEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxColourPickerEvent* obj);
	typedef wxObject parent_t;
	typedef wxColourPickerEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxComboCtrl
template<>
class LunaTraits< wxComboCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxComboCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxComboCtrl* obj);
	typedef wxObject parent_t;
	typedef wxComboCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxComboCtrlFeatures
template<>
class LunaTraits< wxComboCtrlFeatures > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxComboCtrlFeatures* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxComboCtrlFeatures* obj);
	typedef wxComboCtrlFeatures parent_t;
	typedef wxComboCtrlFeatures base_t;
	static luna_ConverterType converters[];
};

// Class: wxComboPopup
template<>
class LunaTraits< wxComboPopup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxComboPopup* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxComboPopup* obj);
	typedef wxComboPopup parent_t;
	typedef wxComboPopup base_t;
	static luna_ConverterType converters[];
};

// Class: wxCommand
template<>
class LunaTraits< wxCommand > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCommand* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCommand* obj);
	typedef wxObject parent_t;
	typedef wxCommand base_t;
	static luna_ConverterType converters[];
};

// Class: wxCommandLinkButton
template<>
class LunaTraits< wxCommandLinkButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCommandLinkButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCommandLinkButton* obj);
	typedef wxObject parent_t;
	typedef wxCommandLinkButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxCommandProcessor
template<>
class LunaTraits< wxCommandProcessor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCommandProcessor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCommandProcessor* obj);
	typedef wxObject parent_t;
	typedef wxCommandProcessor base_t;
	static luna_ConverterType converters[];
};

// Class: wxCondition
template<>
class LunaTraits< wxCondition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCondition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCondition* obj);
	typedef wxCondition parent_t;
	typedef wxCondition base_t;
	static luna_ConverterType converters[];
};

// Class: wxConfigBase
template<>
class LunaTraits< wxConfigBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxConfigBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxConfigBase* obj);
	typedef wxObject parent_t;
	typedef wxConfigBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxConfigPathChanger
template<>
class LunaTraits< wxConfigPathChanger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxConfigPathChanger* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxConfigPathChanger* obj);
	typedef wxConfigPathChanger parent_t;
	typedef wxConfigPathChanger base_t;
	static luna_ConverterType converters[];
};

// Class: wxConnection
template<>
class LunaTraits< wxConnection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxConnection* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxConnection* obj);
	typedef wxObject parent_t;
	typedef wxConnection base_t;
	static luna_ConverterType converters[];
};

// Class: wxConnectionBase
template<>
class LunaTraits< wxConnectionBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxConnectionBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxConnectionBase* obj);
	typedef wxObject parent_t;
	typedef wxConnectionBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxContextHelp
template<>
class LunaTraits< wxContextHelp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxContextHelp* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxContextHelp* obj);
	typedef wxObject parent_t;
	typedef wxContextHelp base_t;
	static luna_ConverterType converters[];
};

// Class: wxContextHelpButton
template<>
class LunaTraits< wxContextHelpButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxContextHelpButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxContextHelpButton* obj);
	typedef wxObject parent_t;
	typedef wxContextHelpButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxContextMenuEvent
template<>
class LunaTraits< wxContextMenuEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxContextMenuEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxContextMenuEvent* obj);
	typedef wxObject parent_t;
	typedef wxContextMenuEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxConvAuto
template<>
class LunaTraits< wxConvAuto > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxConvAuto* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxConvAuto* obj);
	typedef wxConvAuto parent_t;
	typedef wxConvAuto base_t;
	static luna_ConverterType converters[];
};

// Class: wxStreamBase
template<>
class LunaTraits< wxStreamBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStreamBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStreamBase* obj);
	typedef wxObject parent_t;
	typedef wxStreamBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxOutputStream
template<>
class LunaTraits< wxOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxCountingOutputStream
template<>
class LunaTraits< wxCountingOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCountingOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCountingOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxCountingOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxCriticalSection
template<>
class LunaTraits< wxCriticalSection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCriticalSection* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCriticalSection* obj);
	typedef wxCriticalSection parent_t;
	typedef wxCriticalSection base_t;
	static luna_ConverterType converters[];
};

// Class: wxCriticalSectionLocker
template<>
class LunaTraits< wxCriticalSectionLocker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCriticalSectionLocker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCriticalSectionLocker* obj);
	typedef wxCriticalSectionLocker parent_t;
	typedef wxCriticalSectionLocker base_t;
	static luna_ConverterType converters[];
};

// Class: wxCSConv
template<>
class LunaTraits< wxCSConv > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCSConv* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCSConv* obj);
	typedef wxCSConv parent_t;
	typedef wxCSConv base_t;
	static luna_ConverterType converters[];
};

// Class: wxCursor
template<>
class LunaTraits< wxCursor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCursor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCursor* obj);
	typedef wxObject parent_t;
	typedef wxCursor base_t;
	static luna_ConverterType converters[];
};

// Class: wxCustomDataObject
template<>
class LunaTraits< wxCustomDataObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxCustomDataObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxCustomDataObject* obj);
	typedef wxDataObject parent_t;
	typedef wxCustomDataObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataFormat
template<>
class LunaTraits< wxDataFormat > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataFormat* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataFormat* obj);
	typedef wxDataFormat parent_t;
	typedef wxDataFormat base_t;
	static luna_ConverterType converters[];
};

// Class: wxSocketBase
template<>
class LunaTraits< wxSocketBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSocketBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSocketBase* obj);
	typedef wxObject parent_t;
	typedef wxSocketBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxDatagramSocket
template<>
class LunaTraits< wxDatagramSocket > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDatagramSocket* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDatagramSocket* obj);
	typedef wxObject parent_t;
	typedef wxDatagramSocket base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataInputStream
template<>
class LunaTraits< wxDataInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataInputStream* obj);
	typedef wxDataInputStream parent_t;
	typedef wxDataInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataObjectBase
template<>
class LunaTraits< wxDataObjectBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataObjectBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataObjectBase* obj);
	typedef wxDataObjectBase parent_t;
	typedef wxDataObjectBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataObjectComposite
template<>
class LunaTraits< wxDataObjectComposite > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataObjectComposite* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataObjectComposite* obj);
	typedef wxDataObject parent_t;
	typedef wxDataObjectComposite base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataOutputStream
template<>
class LunaTraits< wxDataOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataOutputStream* obj);
	typedef wxDataOutputStream parent_t;
	typedef wxDataOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewRenderer
template<>
class LunaTraits< wxDataViewRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewBitmapRenderer
template<>
class LunaTraits< wxDataViewBitmapRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewBitmapRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewBitmapRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewBitmapRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewChoiceRenderer
template<>
class LunaTraits< wxDataViewChoiceRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewChoiceRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewChoiceRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewChoiceRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxHeaderColumn
template<>
class LunaTraits< wxHeaderColumn > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHeaderColumn* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHeaderColumn* obj);
	typedef wxHeaderColumn parent_t;
	typedef wxHeaderColumn base_t;
	static luna_ConverterType converters[];
};

// Class: wxSettableHeaderColumn
template<>
class LunaTraits< wxSettableHeaderColumn > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSettableHeaderColumn* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSettableHeaderColumn* obj);
	typedef wxHeaderColumn parent_t;
	typedef wxSettableHeaderColumn base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewColumn
template<>
class LunaTraits< wxDataViewColumn > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewColumn* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewColumn* obj);
	typedef wxHeaderColumn parent_t;
	typedef wxDataViewColumn base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewCtrl
template<>
class LunaTraits< wxDataViewCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewCtrl* obj);
	typedef wxObject parent_t;
	typedef wxDataViewCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewCustomRenderer
template<>
class LunaTraits< wxDataViewCustomRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewCustomRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewCustomRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewCustomRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewDateRenderer
template<>
class LunaTraits< wxDataViewDateRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewDateRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewDateRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewDateRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewEvent
template<>
class LunaTraits< wxDataViewEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewEvent* obj);
	typedef wxObject parent_t;
	typedef wxDataViewEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewIconText
template<>
class LunaTraits< wxDataViewIconText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewIconText* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewIconText* obj);
	typedef wxObject parent_t;
	typedef wxDataViewIconText base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewIconTextRenderer
template<>
class LunaTraits< wxDataViewIconTextRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewIconTextRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewIconTextRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewIconTextRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewModel
template<>
class LunaTraits< wxDataViewModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewModel* obj);
	typedef wxDataViewModel parent_t;
	typedef wxDataViewModel base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewListModel
template<>
class LunaTraits< wxDataViewListModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewListModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewListModel* obj);
	typedef wxDataViewModel parent_t;
	typedef wxDataViewListModel base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewIndexListModel
template<>
class LunaTraits< wxDataViewIndexListModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewIndexListModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewIndexListModel* obj);
	typedef wxDataViewModel parent_t;
	typedef wxDataViewIndexListModel base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewItem
template<>
class LunaTraits< wxDataViewItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewItem* obj);
	typedef wxDataViewItem parent_t;
	typedef wxDataViewItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewItemArray
template<>
class LunaTraits< wxDataViewItemArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewItemArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewItemArray* obj);
	typedef wxDataViewItemArray parent_t;
	typedef wxDataViewItemArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewItemAttr
template<>
class LunaTraits< wxDataViewItemAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewItemAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewItemAttr* obj);
	typedef wxDataViewItemAttr parent_t;
	typedef wxDataViewItemAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewListCtrl
template<>
class LunaTraits< wxDataViewListCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewListCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewListCtrl* obj);
	typedef wxObject parent_t;
	typedef wxDataViewListCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewListStore
template<>
class LunaTraits< wxDataViewListStore > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewListStore* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewListStore* obj);
	typedef wxDataViewModel parent_t;
	typedef wxDataViewListStore base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewModelNotifier
template<>
class LunaTraits< wxDataViewModelNotifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewModelNotifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewModelNotifier* obj);
	typedef wxDataViewModelNotifier parent_t;
	typedef wxDataViewModelNotifier base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewProgressRenderer
template<>
class LunaTraits< wxDataViewProgressRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewProgressRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewProgressRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewProgressRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewSpinRenderer
template<>
class LunaTraits< wxDataViewSpinRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewSpinRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewSpinRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewSpinRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewTextRenderer
template<>
class LunaTraits< wxDataViewTextRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewTextRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewTextRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewTextRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewToggleRenderer
template<>
class LunaTraits< wxDataViewToggleRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewToggleRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewToggleRenderer* obj);
	typedef wxObject parent_t;
	typedef wxDataViewToggleRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewTreeCtrl
template<>
class LunaTraits< wxDataViewTreeCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewTreeCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewTreeCtrl* obj);
	typedef wxObject parent_t;
	typedef wxDataViewTreeCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewTreeStore
template<>
class LunaTraits< wxDataViewTreeStore > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewTreeStore* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewTreeStore* obj);
	typedef wxDataViewModel parent_t;
	typedef wxDataViewTreeStore base_t;
	static luna_ConverterType converters[];
};

// Class: wxDataViewVirtualListModel
template<>
class LunaTraits< wxDataViewVirtualListModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDataViewVirtualListModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDataViewVirtualListModel* obj);
	typedef wxDataViewModel parent_t;
	typedef wxDataViewVirtualListModel base_t;
	static luna_ConverterType converters[];
};

// Class: wxDatePickerCtrl
template<>
class LunaTraits< wxDatePickerCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDatePickerCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDatePickerCtrl* obj);
	typedef wxObject parent_t;
	typedef wxDatePickerCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxDateSpan
template<>
class LunaTraits< wxDateSpan > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDateSpan* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDateSpan* obj);
	typedef wxDateSpan parent_t;
	typedef wxDateSpan base_t;
	static luna_ConverterType converters[];
};

// Class: wxDateTime
template<>
class LunaTraits< wxDateTime > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDateTime* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDateTime* obj);
	typedef wxDateTime parent_t;
	typedef wxDateTime base_t;
	static luna_ConverterType converters[];
};

// Class: wxDateTime::Tm
template<>
class LunaTraits< wxDateTime::Tm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDateTime::Tm* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDateTime::Tm* obj);
	typedef wxDateTime::Tm parent_t;
	typedef wxDateTime::Tm base_t;
	static luna_ConverterType converters[];
};

// Class: wxDateTimeHolidayAuthority
template<>
class LunaTraits< wxDateTimeHolidayAuthority > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDateTimeHolidayAuthority* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDateTimeHolidayAuthority* obj);
	typedef wxDateTimeHolidayAuthority parent_t;
	typedef wxDateTimeHolidayAuthority base_t;
	static luna_ConverterType converters[];
};

// Class: wxDateTimeWorkDays
template<>
class LunaTraits< wxDateTimeWorkDays > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDateTimeWorkDays* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDateTimeWorkDays* obj);
	typedef wxDateTimeWorkDays parent_t;
	typedef wxDateTimeWorkDays base_t;
	static luna_ConverterType converters[];
};

// Class: wxDCBrushChanger
template<>
class LunaTraits< wxDCBrushChanger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDCBrushChanger* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDCBrushChanger* obj);
	typedef wxDCBrushChanger parent_t;
	typedef wxDCBrushChanger base_t;
	static luna_ConverterType converters[];
};

// Class: wxDCClipper
template<>
class LunaTraits< wxDCClipper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDCClipper* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDCClipper* obj);
	typedef wxDCClipper parent_t;
	typedef wxDCClipper base_t;
	static luna_ConverterType converters[];
};

// Class: wxDCFontChanger
template<>
class LunaTraits< wxDCFontChanger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDCFontChanger* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDCFontChanger* obj);
	typedef wxDCFontChanger parent_t;
	typedef wxDCFontChanger base_t;
	static luna_ConverterType converters[];
};

// Class: wxDCPenChanger
template<>
class LunaTraits< wxDCPenChanger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDCPenChanger* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDCPenChanger* obj);
	typedef wxDCPenChanger parent_t;
	typedef wxDCPenChanger base_t;
	static luna_ConverterType converters[];
};

// Class: wxDCTextColourChanger
template<>
class LunaTraits< wxDCTextColourChanger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDCTextColourChanger* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDCTextColourChanger* obj);
	typedef wxDCTextColourChanger parent_t;
	typedef wxDCTextColourChanger base_t;
	static luna_ConverterType converters[];
};

// Class: wxRendererNative
template<>
class LunaTraits< wxRendererNative > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRendererNative* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRendererNative* obj);
	typedef wxRendererNative parent_t;
	typedef wxRendererNative base_t;
	static luna_ConverterType converters[];
};

// Class: wxDelegateRendererNative
template<>
class LunaTraits< wxDelegateRendererNative > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDelegateRendererNative* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDelegateRendererNative* obj);
	typedef wxRendererNative parent_t;
	typedef wxDelegateRendererNative base_t;
	static luna_ConverterType converters[];
};

// Class: wxDialogLayoutAdapter
template<>
class LunaTraits< wxDialogLayoutAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDialogLayoutAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDialogLayoutAdapter* obj);
	typedef wxDialogLayoutAdapter parent_t;
	typedef wxDialogLayoutAdapter base_t;
	static luna_ConverterType converters[];
};

// Class: wxDialUpEvent
template<>
class LunaTraits< wxDialUpEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDialUpEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDialUpEvent* obj);
	typedef wxObject parent_t;
	typedef wxDialUpEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxDialUpManager
template<>
class LunaTraits< wxDialUpManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDialUpManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDialUpManager* obj);
	typedef wxDialUpManager parent_t;
	typedef wxDialUpManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxDir
template<>
class LunaTraits< wxDir > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDir* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDir* obj);
	typedef wxDir parent_t;
	typedef wxDir base_t;
	static luna_ConverterType converters[];
};

// Class: wxDirDialog
template<>
class LunaTraits< wxDirDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDirDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDirDialog* obj);
	typedef wxObject parent_t;
	typedef wxDirDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxDirPickerCtrl
template<>
class LunaTraits< wxDirPickerCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDirPickerCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDirPickerCtrl* obj);
	typedef wxObject parent_t;
	typedef wxDirPickerCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxDirTraverser
template<>
class LunaTraits< wxDirTraverser > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDirTraverser* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDirTraverser* obj);
	typedef wxDirTraverser parent_t;
	typedef wxDirTraverser base_t;
	static luna_ConverterType converters[];
};

// Class: wxDisplay
template<>
class LunaTraits< wxDisplay > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDisplay* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDisplay* obj);
	typedef wxDisplay parent_t;
	typedef wxDisplay base_t;
	static luna_ConverterType converters[];
};

// Class: wxDisplayChangedEvent
template<>
class LunaTraits< wxDisplayChangedEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDisplayChangedEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDisplayChangedEvent* obj);
	typedef wxObject parent_t;
	typedef wxDisplayChangedEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxFrame
template<>
class LunaTraits< wxFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFrame* obj);
	typedef wxObject parent_t;
	typedef wxFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocChildFrame
template<>
class LunaTraits< wxDocChildFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocChildFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocChildFrame* obj);
	typedef wxObject parent_t;
	typedef wxDocChildFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocManager
template<>
class LunaTraits< wxDocManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocManager* obj);
	typedef wxObject parent_t;
	typedef wxDocManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxMDIChildFrame
template<>
class LunaTraits< wxMDIChildFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMDIChildFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMDIChildFrame* obj);
	typedef wxObject parent_t;
	typedef wxMDIChildFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocMDIChildFrame
template<>
class LunaTraits< wxDocMDIChildFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocMDIChildFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocMDIChildFrame* obj);
	typedef wxObject parent_t;
	typedef wxDocMDIChildFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxMDIParentFrame
template<>
class LunaTraits< wxMDIParentFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMDIParentFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMDIParentFrame* obj);
	typedef wxObject parent_t;
	typedef wxMDIParentFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocMDIParentFrame
template<>
class LunaTraits< wxDocMDIParentFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocMDIParentFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocMDIParentFrame* obj);
	typedef wxObject parent_t;
	typedef wxDocMDIParentFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocParentFrame
template<>
class LunaTraits< wxDocParentFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocParentFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocParentFrame* obj);
	typedef wxObject parent_t;
	typedef wxDocParentFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocTemplate
template<>
class LunaTraits< wxDocTemplate > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocTemplate* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocTemplate* obj);
	typedef wxObject parent_t;
	typedef wxDocTemplate base_t;
	static luna_ConverterType converters[];
};

// Class: wxDocument
template<>
class LunaTraits< wxDocument > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDocument* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDocument* obj);
	typedef wxObject parent_t;
	typedef wxDocument base_t;
	static luna_ConverterType converters[];
};

// Class: wxDragImage
template<>
class LunaTraits< wxDragImage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDragImage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDragImage* obj);
	typedef wxObject parent_t;
	typedef wxDragImage base_t;
	static luna_ConverterType converters[];
};

// Class: wxDropFilesEvent
template<>
class LunaTraits< wxDropFilesEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDropFilesEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDropFilesEvent* obj);
	typedef wxObject parent_t;
	typedef wxDropFilesEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxDropSource
template<>
class LunaTraits< wxDropSource > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDropSource* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDropSource* obj);
	typedef wxDropSource parent_t;
	typedef wxDropSource base_t;
	static luna_ConverterType converters[];
};

// Class: wxDropTarget
template<>
class LunaTraits< wxDropTarget > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDropTarget* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDropTarget* obj);
	typedef wxDropTarget parent_t;
	typedef wxDropTarget base_t;
	static luna_ConverterType converters[];
};

// Class: wxDynamicLibrary
template<>
class LunaTraits< wxDynamicLibrary > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDynamicLibrary* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDynamicLibrary* obj);
	typedef wxDynamicLibrary parent_t;
	typedef wxDynamicLibrary base_t;
	static luna_ConverterType converters[];
};

// Class: wxDynamicLibraryDetails
template<>
class LunaTraits< wxDynamicLibraryDetails > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDynamicLibraryDetails* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDynamicLibraryDetails* obj);
	typedef wxDynamicLibraryDetails parent_t;
	typedef wxDynamicLibraryDetails base_t;
	static luna_ConverterType converters[];
};

// Class: wxPanel
template<>
class LunaTraits< wxPanel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPanel* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPanel* obj);
	typedef wxObject parent_t;
	typedef wxPanel base_t;
	static luna_ConverterType converters[];
};

// Class: wxEditableListBox
template<>
class LunaTraits< wxEditableListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEditableListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEditableListBox* obj);
	typedef wxObject parent_t;
	typedef wxEditableListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxEncodingConverter
template<>
class LunaTraits< wxEncodingConverter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEncodingConverter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEncodingConverter* obj);
	typedef wxObject parent_t;
	typedef wxEncodingConverter base_t;
	static luna_ConverterType converters[];
};

// Class: wxEraseEvent
template<>
class LunaTraits< wxEraseEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEraseEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEraseEvent* obj);
	typedef wxObject parent_t;
	typedef wxEraseEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxEventBlocker
template<>
class LunaTraits< wxEventBlocker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEventBlocker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEventBlocker* obj);
	typedef wxObject parent_t;
	typedef wxEventBlocker base_t;
	static luna_ConverterType converters[];
};

// Class: wxEventLoopActivator
template<>
class LunaTraits< wxEventLoopActivator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEventLoopActivator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEventLoopActivator* obj);
	typedef wxEventLoopActivator parent_t;
	typedef wxEventLoopActivator base_t;
	static luna_ConverterType converters[];
};

// Class: wxEventLoopBase
template<>
class LunaTraits< wxEventLoopBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxEventLoopBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxEventLoopBase* obj);
	typedef wxEventLoopBase parent_t;
	typedef wxEventLoopBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxExecuteEnv
template<>
class LunaTraits< wxExecuteEnv > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxExecuteEnv* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxExecuteEnv* obj);
	typedef wxExecuteEnv parent_t;
	typedef wxExecuteEnv base_t;
	static luna_ConverterType converters[];
};

// Class: wxHelpController
template<>
class LunaTraits< wxHelpController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHelpController* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHelpController* obj);
	typedef wxHelpController parent_t;
	typedef wxHelpController base_t;
	static luna_ConverterType converters[];
};

// Class: wxExtHelpController
template<>
class LunaTraits< wxExtHelpController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxExtHelpController* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxExtHelpController* obj);
	typedef wxHelpController parent_t;
	typedef wxExtHelpController base_t;
	static luna_ConverterType converters[];
};

// Class: wxFFile
template<>
class LunaTraits< wxFFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFFile* obj);
	typedef wxFFile parent_t;
	typedef wxFFile base_t;
	static luna_ConverterType converters[];
};

// Class: wxInputStream
template<>
class LunaTraits< wxInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxInputStream* obj);
	typedef wxObject parent_t;
	typedef wxInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFFileInputStream
template<>
class LunaTraits< wxFFileInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFFileInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFFileInputStream* obj);
	typedef wxObject parent_t;
	typedef wxFFileInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFFileOutputStream
template<>
class LunaTraits< wxFFileOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFFileOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFFileOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxFFileOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFile
template<>
class LunaTraits< wxFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFile* obj);
	typedef wxFile parent_t;
	typedef wxFile base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileConfig
template<>
class LunaTraits< wxFileConfig > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileConfig* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileConfig* obj);
	typedef wxObject parent_t;
	typedef wxFileConfig base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileCtrl
template<>
class LunaTraits< wxFileCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileCtrl* obj);
	typedef wxObject parent_t;
	typedef wxFileCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileCtrlEvent
template<>
class LunaTraits< wxFileCtrlEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileCtrlEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileCtrlEvent* obj);
	typedef wxObject parent_t;
	typedef wxFileCtrlEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileDataObject
template<>
class LunaTraits< wxFileDataObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileDataObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileDataObject* obj);
	typedef wxDataObject parent_t;
	typedef wxFileDataObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileDialog
template<>
class LunaTraits< wxFileDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileDialog* obj);
	typedef wxObject parent_t;
	typedef wxFileDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileDirPickerEvent
template<>
class LunaTraits< wxFileDirPickerEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileDirPickerEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileDirPickerEvent* obj);
	typedef wxObject parent_t;
	typedef wxFileDirPickerEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileDropTarget
template<>
class LunaTraits< wxFileDropTarget > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileDropTarget* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileDropTarget* obj);
	typedef wxDropTarget parent_t;
	typedef wxFileDropTarget base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileHistory
template<>
class LunaTraits< wxFileHistory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileHistory* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileHistory* obj);
	typedef wxObject parent_t;
	typedef wxFileHistory base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileInputStream
template<>
class LunaTraits< wxFileInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileInputStream* obj);
	typedef wxObject parent_t;
	typedef wxFileInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileName
template<>
class LunaTraits< wxFileName > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileName* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileName* obj);
	typedef wxFileName parent_t;
	typedef wxFileName base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileOutputStream
template<>
class LunaTraits< wxFileOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxFileOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFilePickerCtrl
template<>
class LunaTraits< wxFilePickerCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFilePickerCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFilePickerCtrl* obj);
	typedef wxObject parent_t;
	typedef wxFilePickerCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileSystem
template<>
class LunaTraits< wxFileSystem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileSystem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileSystem* obj);
	typedef wxObject parent_t;
	typedef wxFileSystem base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileSystemHandler
template<>
class LunaTraits< wxFileSystemHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileSystemHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileSystemHandler* obj);
	typedef wxObject parent_t;
	typedef wxFileSystemHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileSystemWatcher
template<>
class LunaTraits< wxFileSystemWatcher > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileSystemWatcher* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileSystemWatcher* obj);
	typedef wxObject parent_t;
	typedef wxFileSystemWatcher base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileSystemWatcherEvent
template<>
class LunaTraits< wxFileSystemWatcherEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileSystemWatcherEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileSystemWatcherEvent* obj);
	typedef wxObject parent_t;
	typedef wxFileSystemWatcherEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTranslationsLoader
template<>
class LunaTraits< wxTranslationsLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTranslationsLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTranslationsLoader* obj);
	typedef wxTranslationsLoader parent_t;
	typedef wxTranslationsLoader base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileTranslationsLoader
template<>
class LunaTraits< wxFileTranslationsLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileTranslationsLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileTranslationsLoader* obj);
	typedef wxTranslationsLoader parent_t;
	typedef wxFileTranslationsLoader base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileType
template<>
class LunaTraits< wxFileType > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileType* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileType* obj);
	typedef wxFileType parent_t;
	typedef wxFileType base_t;
	static luna_ConverterType converters[];
};

// Class: wxFileTypeInfo
template<>
class LunaTraits< wxFileTypeInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFileTypeInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFileTypeInfo* obj);
	typedef wxFileTypeInfo parent_t;
	typedef wxFileTypeInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxFilterClassFactory
template<>
class LunaTraits< wxFilterClassFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFilterClassFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFilterClassFactory* obj);
	typedef wxObject parent_t;
	typedef wxFilterClassFactory base_t;
	static luna_ConverterType converters[];
};

// Class: wxFilterInputStream
template<>
class LunaTraits< wxFilterInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFilterInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFilterInputStream* obj);
	typedef wxObject parent_t;
	typedef wxFilterInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFilterOutputStream
template<>
class LunaTraits< wxFilterOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFilterOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFilterOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxFilterOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxFindReplaceData
template<>
class LunaTraits< wxFindReplaceData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFindReplaceData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFindReplaceData* obj);
	typedef wxObject parent_t;
	typedef wxFindReplaceData base_t;
	static luna_ConverterType converters[];
};

// Class: wxFindReplaceDialog
template<>
class LunaTraits< wxFindReplaceDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFindReplaceDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFindReplaceDialog* obj);
	typedef wxObject parent_t;
	typedef wxFindReplaceDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridSizer
template<>
class LunaTraits< wxGridSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridSizer* obj);
	typedef wxObject parent_t;
	typedef wxGridSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxFlexGridSizer
template<>
class LunaTraits< wxFlexGridSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFlexGridSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFlexGridSizer* obj);
	typedef wxObject parent_t;
	typedef wxFlexGridSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxValidator
template<>
class LunaTraits< wxValidator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxValidator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxValidator* obj);
	typedef wxObject parent_t;
	typedef wxValidator base_t;
	static luna_ConverterType converters[];
};

// Class: wxFocusEvent
template<>
class LunaTraits< wxFocusEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFocusEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFocusEvent* obj);
	typedef wxObject parent_t;
	typedef wxFocusEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxFont
template<>
class LunaTraits< wxFont > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFont* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFont* obj);
	typedef wxObject parent_t;
	typedef wxFont base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontData
template<>
class LunaTraits< wxFontData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontData* obj);
	typedef wxObject parent_t;
	typedef wxFontData base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontDialog
template<>
class LunaTraits< wxFontDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontDialog* obj);
	typedef wxObject parent_t;
	typedef wxFontDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontEnumerator
template<>
class LunaTraits< wxFontEnumerator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontEnumerator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontEnumerator* obj);
	typedef wxFontEnumerator parent_t;
	typedef wxFontEnumerator base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontList
template<>
class LunaTraits< wxFontList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontList* obj);
	typedef wxList parent_t;
	typedef wxFontList base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontMapper
template<>
class LunaTraits< wxFontMapper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontMapper* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontMapper* obj);
	typedef wxFontMapper parent_t;
	typedef wxFontMapper base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontMetrics
template<>
class LunaTraits< wxFontMetrics > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontMetrics* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontMetrics* obj);
	typedef wxFontMetrics parent_t;
	typedef wxFontMetrics base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontPickerCtrl
template<>
class LunaTraits< wxFontPickerCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontPickerCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontPickerCtrl* obj);
	typedef wxObject parent_t;
	typedef wxFontPickerCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxFontPickerEvent
template<>
class LunaTraits< wxFontPickerEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontPickerEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontPickerEvent* obj);
	typedef wxObject parent_t;
	typedef wxFontPickerEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxFSFile
template<>
class LunaTraits< wxFSFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFSFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFSFile* obj);
	typedef wxObject parent_t;
	typedef wxFSFile base_t;
	static luna_ConverterType converters[];
};

// Class: wxFSVolume
template<>
class LunaTraits< wxFSVolume > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFSVolume* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFSVolume* obj);
	typedef wxFSVolume parent_t;
	typedef wxFSVolume base_t;
	static luna_ConverterType converters[];
};

// Class: wxSocketClient
template<>
class LunaTraits< wxSocketClient > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSocketClient* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSocketClient* obj);
	typedef wxObject parent_t;
	typedef wxSocketClient base_t;
	static luna_ConverterType converters[];
};

// Class: wxProtocol
template<>
class LunaTraits< wxProtocol > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxProtocol* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxProtocol* obj);
	typedef wxObject parent_t;
	typedef wxProtocol base_t;
	static luna_ConverterType converters[];
};

// Class: wxFTP
template<>
class LunaTraits< wxFTP > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFTP* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFTP* obj);
	typedef wxObject parent_t;
	typedef wxFTP base_t;
	static luna_ConverterType converters[];
};

// Class: wxGauge
template<>
class LunaTraits< wxGauge > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGauge* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGauge* obj);
	typedef wxObject parent_t;
	typedef wxGauge base_t;
	static luna_ConverterType converters[];
};

// Class: wxGBPosition
template<>
class LunaTraits< wxGBPosition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGBPosition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGBPosition* obj);
	typedef wxGBPosition parent_t;
	typedef wxGBPosition base_t;
	static luna_ConverterType converters[];
};

// Class: wxSizerItem
template<>
class LunaTraits< wxSizerItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSizerItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSizerItem* obj);
	typedef wxObject parent_t;
	typedef wxSizerItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxGBSizerItem
template<>
class LunaTraits< wxGBSizerItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGBSizerItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGBSizerItem* obj);
	typedef wxObject parent_t;
	typedef wxGBSizerItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxGBSpan
template<>
class LunaTraits< wxGBSpan > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGBSpan* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGBSpan* obj);
	typedef wxGBSpan parent_t;
	typedef wxGBSpan base_t;
	static luna_ConverterType converters[];
};

// Class: wxGCDC
template<>
class LunaTraits< wxGCDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGCDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGCDC* obj);
	typedef wxObject parent_t;
	typedef wxGCDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxGenericDirCtrl
template<>
class LunaTraits< wxGenericDirCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGenericDirCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGenericDirCtrl* obj);
	typedef wxObject parent_t;
	typedef wxGenericDirCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxGenericValidator
template<>
class LunaTraits< wxGenericValidator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGenericValidator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGenericValidator* obj);
	typedef wxObject parent_t;
	typedef wxGenericValidator base_t;
	static luna_ConverterType converters[];
};

// Class: wxGLCanvas
template<>
class LunaTraits< wxGLCanvas > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGLCanvas* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGLCanvas* obj);
	typedef wxObject parent_t;
	typedef wxGLCanvas base_t;
	static luna_ConverterType converters[];
};

// Class: wxGLContext
template<>
class LunaTraits< wxGLContext > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGLContext* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGLContext* obj);
	typedef wxObject parent_t;
	typedef wxGLContext base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsObject
template<>
class LunaTraits< wxGraphicsObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsObject* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsBitmap
template<>
class LunaTraits< wxGraphicsBitmap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsBitmap* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsBitmap* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsBitmap base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsBrush
template<>
class LunaTraits< wxGraphicsBrush > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsBrush* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsBrush* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsBrush base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsContext
template<>
class LunaTraits< wxGraphicsContext > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsContext* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsContext* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsContext base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsFont
template<>
class LunaTraits< wxGraphicsFont > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsFont* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsFont* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsFont base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsGradientStop
template<>
class LunaTraits< wxGraphicsGradientStop > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsGradientStop* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsGradientStop* obj);
	typedef wxGraphicsGradientStop parent_t;
	typedef wxGraphicsGradientStop base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsGradientStops
template<>
class LunaTraits< wxGraphicsGradientStops > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsGradientStops* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsGradientStops* obj);
	typedef wxGraphicsGradientStops parent_t;
	typedef wxGraphicsGradientStops base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsMatrix
template<>
class LunaTraits< wxGraphicsMatrix > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsMatrix* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsMatrix* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsMatrix base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsPath
template<>
class LunaTraits< wxGraphicsPath > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsPath* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsPath* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsPath base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsPen
template<>
class LunaTraits< wxGraphicsPen > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsPen* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsPen* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsPen base_t;
	static luna_ConverterType converters[];
};

// Class: wxGraphicsRenderer
template<>
class LunaTraits< wxGraphicsRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGraphicsRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGraphicsRenderer* obj);
	typedef wxObject parent_t;
	typedef wxGraphicsRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxScrolledWindow
template<>
class LunaTraits< wxScrolledWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScrolledWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScrolledWindow* obj);
	typedef wxObject parent_t;
	typedef wxScrolledWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxGrid
template<>
class LunaTraits< wxGrid > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGrid* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGrid* obj);
	typedef wxObject parent_t;
	typedef wxGrid base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridBagSizer
template<>
class LunaTraits< wxGridBagSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridBagSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridBagSizer* obj);
	typedef wxObject parent_t;
	typedef wxGridBagSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellAttr
template<>
class LunaTraits< wxGridCellAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellAttr* obj);
	typedef wxGridCellAttr parent_t;
	typedef wxGridCellAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellAttrProvider
template<>
class LunaTraits< wxGridCellAttrProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellAttrProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellAttrProvider* obj);
	typedef wxClientDataContainer parent_t;
	typedef wxGridCellAttrProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellEditor
template<>
class LunaTraits< wxGridCellEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellTextEditor
template<>
class LunaTraits< wxGridCellTextEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellTextEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellTextEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellTextEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellAutoWrapStringEditor
template<>
class LunaTraits< wxGridCellAutoWrapStringEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellAutoWrapStringEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellAutoWrapStringEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellAutoWrapStringEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellRenderer
template<>
class LunaTraits< wxGridCellRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellStringRenderer
template<>
class LunaTraits< wxGridCellStringRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellStringRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellStringRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellStringRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellAutoWrapStringRenderer
template<>
class LunaTraits< wxGridCellAutoWrapStringRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellAutoWrapStringRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellAutoWrapStringRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellAutoWrapStringRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellBoolEditor
template<>
class LunaTraits< wxGridCellBoolEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellBoolEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellBoolEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellBoolEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellBoolRenderer
template<>
class LunaTraits< wxGridCellBoolRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellBoolRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellBoolRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellBoolRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellChoiceEditor
template<>
class LunaTraits< wxGridCellChoiceEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellChoiceEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellChoiceEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellChoiceEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellCoords
template<>
class LunaTraits< wxGridCellCoords > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellCoords* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellCoords* obj);
	typedef wxGridCellCoords parent_t;
	typedef wxGridCellCoords base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellDateTimeRenderer
template<>
class LunaTraits< wxGridCellDateTimeRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellDateTimeRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellDateTimeRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellDateTimeRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellEnumEditor
template<>
class LunaTraits< wxGridCellEnumEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellEnumEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellEnumEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellEnumEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellEnumRenderer
template<>
class LunaTraits< wxGridCellEnumRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellEnumRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellEnumRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellEnumRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellFloatEditor
template<>
class LunaTraits< wxGridCellFloatEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellFloatEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellFloatEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellFloatEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellFloatRenderer
template<>
class LunaTraits< wxGridCellFloatRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellFloatRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellFloatRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellFloatRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellNumberEditor
template<>
class LunaTraits< wxGridCellNumberEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellNumberEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellNumberEditor* obj);
	typedef wxGridCellEditor parent_t;
	typedef wxGridCellNumberEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCellNumberRenderer
template<>
class LunaTraits< wxGridCellNumberRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellNumberRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellNumberRenderer* obj);
	typedef wxGridCellRenderer parent_t;
	typedef wxGridCellNumberRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCornerHeaderRenderer
template<>
class LunaTraits< wxGridCornerHeaderRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCornerHeaderRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCornerHeaderRenderer* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridCornerHeaderRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridHeaderLabelsRenderer
template<>
class LunaTraits< wxGridHeaderLabelsRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridHeaderLabelsRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridHeaderLabelsRenderer* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridHeaderLabelsRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridColumnHeaderRenderer
template<>
class LunaTraits< wxGridColumnHeaderRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridColumnHeaderRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridColumnHeaderRenderer* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridColumnHeaderRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridColumnHeaderRendererDefault
template<>
class LunaTraits< wxGridColumnHeaderRendererDefault > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridColumnHeaderRendererDefault* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridColumnHeaderRendererDefault* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridColumnHeaderRendererDefault base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridCornerHeaderRendererDefault
template<>
class LunaTraits< wxGridCornerHeaderRendererDefault > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCornerHeaderRendererDefault* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCornerHeaderRendererDefault* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridCornerHeaderRendererDefault base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridEditorCreatedEvent
template<>
class LunaTraits< wxGridEditorCreatedEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridEditorCreatedEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridEditorCreatedEvent* obj);
	typedef wxObject parent_t;
	typedef wxGridEditorCreatedEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridEvent
template<>
class LunaTraits< wxGridEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridEvent* obj);
	typedef wxObject parent_t;
	typedef wxGridEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridRangeSelectEvent
template<>
class LunaTraits< wxGridRangeSelectEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridRangeSelectEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridRangeSelectEvent* obj);
	typedef wxObject parent_t;
	typedef wxGridRangeSelectEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridRowHeaderRenderer
template<>
class LunaTraits< wxGridRowHeaderRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridRowHeaderRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridRowHeaderRenderer* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridRowHeaderRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridRowHeaderRendererDefault
template<>
class LunaTraits< wxGridRowHeaderRendererDefault > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridRowHeaderRendererDefault* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridRowHeaderRendererDefault* obj);
	typedef wxGridCornerHeaderRenderer parent_t;
	typedef wxGridRowHeaderRendererDefault base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridSizeEvent
template<>
class LunaTraits< wxGridSizeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridSizeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridSizeEvent* obj);
	typedef wxObject parent_t;
	typedef wxGridSizeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridSizesInfo
template<>
class LunaTraits< wxGridSizesInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridSizesInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridSizesInfo* obj);
	typedef wxGridSizesInfo parent_t;
	typedef wxGridSizesInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridTableBase
template<>
class LunaTraits< wxGridTableBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridTableBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridTableBase* obj);
	typedef wxObject parent_t;
	typedef wxGridTableBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxGridUpdateLocker
template<>
class LunaTraits< wxGridUpdateLocker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridUpdateLocker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridUpdateLocker* obj);
	typedef wxGridUpdateLocker parent_t;
	typedef wxGridUpdateLocker base_t;
	static luna_ConverterType converters[];
};

// Class: wxHeaderButtonParams
template<>
class LunaTraits< wxHeaderButtonParams > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHeaderButtonParams* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHeaderButtonParams* obj);
	typedef wxHeaderButtonParams parent_t;
	typedef wxHeaderButtonParams base_t;
	static luna_ConverterType converters[];
};

// Class: wxHeaderColumnSimple
template<>
class LunaTraits< wxHeaderColumnSimple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHeaderColumnSimple* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHeaderColumnSimple* obj);
	typedef wxHeaderColumn parent_t;
	typedef wxHeaderColumnSimple base_t;
	static luna_ConverterType converters[];
};

// Class: wxHeaderCtrl
template<>
class LunaTraits< wxHeaderCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHeaderCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHeaderCtrl* obj);
	typedef wxObject parent_t;
	typedef wxHeaderCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxHeaderCtrlEvent
template<>
class LunaTraits< wxHeaderCtrlEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHeaderCtrlEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHeaderCtrlEvent* obj);
	typedef wxObject parent_t;
	typedef wxHeaderCtrlEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxHeaderCtrlSimple
template<>
class LunaTraits< wxHeaderCtrlSimple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHeaderCtrlSimple* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHeaderCtrlSimple* obj);
	typedef wxObject parent_t;
	typedef wxHeaderCtrlSimple base_t;
	static luna_ConverterType converters[];
};

// Class: wxHelpProvider
template<>
class LunaTraits< wxHelpProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHelpProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHelpProvider* obj);
	typedef wxHelpProvider parent_t;
	typedef wxHelpProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxSimpleHelpProvider
template<>
class LunaTraits< wxSimpleHelpProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSimpleHelpProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSimpleHelpProvider* obj);
	typedef wxHelpProvider parent_t;
	typedef wxSimpleHelpProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxHelpControllerHelpProvider
template<>
class LunaTraits< wxHelpControllerHelpProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHelpControllerHelpProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHelpControllerHelpProvider* obj);
	typedef wxHelpProvider parent_t;
	typedef wxHelpControllerHelpProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxHelpEvent
template<>
class LunaTraits< wxHelpEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHelpEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHelpEvent* obj);
	typedef wxObject parent_t;
	typedef wxHelpEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxVarScrollHelperBase
template<>
class LunaTraits< wxVarScrollHelperBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVarScrollHelperBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVarScrollHelperBase* obj);
	typedef wxVarScrollHelperBase parent_t;
	typedef wxVarScrollHelperBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxVarHScrollHelper
template<>
class LunaTraits< wxVarHScrollHelper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVarHScrollHelper* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVarHScrollHelper* obj);
	typedef wxVarScrollHelperBase parent_t;
	typedef wxVarHScrollHelper base_t;
	static luna_ConverterType converters[];
};

// Class: wxHScrolledWindow
template<>
class LunaTraits< wxHScrolledWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHScrolledWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHScrolledWindow* obj);
	typedef wxObject parent_t;
	typedef wxHScrolledWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlCell
template<>
class LunaTraits< wxHtmlCell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlCell* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlCell* obj);
	typedef wxObject parent_t;
	typedef wxHtmlCell base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlCellEvent
template<>
class LunaTraits< wxHtmlCellEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlCellEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlCellEvent* obj);
	typedef wxObject parent_t;
	typedef wxHtmlCellEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlColourCell
template<>
class LunaTraits< wxHtmlColourCell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlColourCell* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlColourCell* obj);
	typedef wxObject parent_t;
	typedef wxHtmlColourCell base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlContainerCell
template<>
class LunaTraits< wxHtmlContainerCell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlContainerCell* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlContainerCell* obj);
	typedef wxObject parent_t;
	typedef wxHtmlContainerCell base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlDCRenderer
template<>
class LunaTraits< wxHtmlDCRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlDCRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlDCRenderer* obj);
	typedef wxObject parent_t;
	typedef wxHtmlDCRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlEasyPrinting
template<>
class LunaTraits< wxHtmlEasyPrinting > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlEasyPrinting* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlEasyPrinting* obj);
	typedef wxObject parent_t;
	typedef wxHtmlEasyPrinting base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlFilter
template<>
class LunaTraits< wxHtmlFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlFilter* obj);
	typedef wxObject parent_t;
	typedef wxHtmlFilter base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlHelpController
template<>
class LunaTraits< wxHtmlHelpController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlHelpController* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlHelpController* obj);
	typedef wxHtmlHelpController parent_t;
	typedef wxHtmlHelpController base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlHelpData
template<>
class LunaTraits< wxHtmlHelpData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlHelpData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlHelpData* obj);
	typedef wxObject parent_t;
	typedef wxHtmlHelpData base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlHelpDialog
template<>
class LunaTraits< wxHtmlHelpDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlHelpDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlHelpDialog* obj);
	typedef wxObject parent_t;
	typedef wxHtmlHelpDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlHelpFrame
template<>
class LunaTraits< wxHtmlHelpFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlHelpFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlHelpFrame* obj);
	typedef wxObject parent_t;
	typedef wxHtmlHelpFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlHelpWindow
template<>
class LunaTraits< wxHtmlHelpWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlHelpWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlHelpWindow* obj);
	typedef wxObject parent_t;
	typedef wxHtmlHelpWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlLinkEvent
template<>
class LunaTraits< wxHtmlLinkEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlLinkEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlLinkEvent* obj);
	typedef wxObject parent_t;
	typedef wxHtmlLinkEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlLinkInfo
template<>
class LunaTraits< wxHtmlLinkInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlLinkInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlLinkInfo* obj);
	typedef wxObject parent_t;
	typedef wxHtmlLinkInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxVarVScrollHelper
template<>
class LunaTraits< wxVarVScrollHelper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVarVScrollHelper* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVarVScrollHelper* obj);
	typedef wxVarScrollHelperBase parent_t;
	typedef wxVarVScrollHelper base_t;
	static luna_ConverterType converters[];
};

// Class: wxVScrolledWindow
template<>
class LunaTraits< wxVScrolledWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVScrolledWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVScrolledWindow* obj);
	typedef wxObject parent_t;
	typedef wxVScrolledWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxVListBox
template<>
class LunaTraits< wxVListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVListBox* obj);
	typedef wxObject parent_t;
	typedef wxVListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlListBox
template<>
class LunaTraits< wxHtmlListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlListBox* obj);
	typedef wxObject parent_t;
	typedef wxHtmlListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlModalHelp
template<>
class LunaTraits< wxHtmlModalHelp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlModalHelp* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlModalHelp* obj);
	typedef wxHtmlModalHelp parent_t;
	typedef wxHtmlModalHelp base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlParser
template<>
class LunaTraits< wxHtmlParser > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlParser* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlParser* obj);
	typedef wxHtmlParser parent_t;
	typedef wxHtmlParser base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrintout
template<>
class LunaTraits< wxPrintout > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrintout* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrintout* obj);
	typedef wxObject parent_t;
	typedef wxPrintout base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlPrintout
template<>
class LunaTraits< wxHtmlPrintout > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlPrintout* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlPrintout* obj);
	typedef wxObject parent_t;
	typedef wxHtmlPrintout base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlRenderingInfo
template<>
class LunaTraits< wxHtmlRenderingInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlRenderingInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlRenderingInfo* obj);
	typedef wxHtmlRenderingInfo parent_t;
	typedef wxHtmlRenderingInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlRenderingStyle
template<>
class LunaTraits< wxHtmlRenderingStyle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlRenderingStyle* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlRenderingStyle* obj);
	typedef wxHtmlRenderingStyle parent_t;
	typedef wxHtmlRenderingStyle base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlTag
template<>
class LunaTraits< wxHtmlTag > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlTag* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlTag* obj);
	typedef wxHtmlTag parent_t;
	typedef wxHtmlTag base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlTagHandler
template<>
class LunaTraits< wxHtmlTagHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlTagHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlTagHandler* obj);
	typedef wxObject parent_t;
	typedef wxHtmlTagHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxModule
template<>
class LunaTraits< wxModule > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxModule* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxModule* obj);
	typedef wxObject parent_t;
	typedef wxModule base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlTagsModule
template<>
class LunaTraits< wxHtmlTagsModule > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlTagsModule* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlTagsModule* obj);
	typedef wxObject parent_t;
	typedef wxHtmlTagsModule base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlWidgetCell
template<>
class LunaTraits< wxHtmlWidgetCell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlWidgetCell* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlWidgetCell* obj);
	typedef wxObject parent_t;
	typedef wxHtmlWidgetCell base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlWindow
template<>
class LunaTraits< wxHtmlWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlWindow* obj);
	typedef wxObject parent_t;
	typedef wxHtmlWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlWinParser
template<>
class LunaTraits< wxHtmlWinParser > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlWinParser* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlWinParser* obj);
	typedef wxHtmlParser parent_t;
	typedef wxHtmlWinParser base_t;
	static luna_ConverterType converters[];
};

// Class: wxHtmlWinTagHandler
template<>
class LunaTraits< wxHtmlWinTagHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlWinTagHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlWinTagHandler* obj);
	typedef wxObject parent_t;
	typedef wxHtmlWinTagHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxHTTP
template<>
class LunaTraits< wxHTTP > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHTTP* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHTTP* obj);
	typedef wxObject parent_t;
	typedef wxHTTP base_t;
	static luna_ConverterType converters[];
};

// Class: wxHVScrolledWindow
template<>
class LunaTraits< wxHVScrolledWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHVScrolledWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHVScrolledWindow* obj);
	typedef wxObject parent_t;
	typedef wxHVScrolledWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxHyperlinkCtrl
template<>
class LunaTraits< wxHyperlinkCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHyperlinkCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHyperlinkCtrl* obj);
	typedef wxObject parent_t;
	typedef wxHyperlinkCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxHyperlinkEvent
template<>
class LunaTraits< wxHyperlinkEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHyperlinkEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHyperlinkEvent* obj);
	typedef wxObject parent_t;
	typedef wxHyperlinkEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxIcon
template<>
class LunaTraits< wxIcon > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIcon* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIcon* obj);
	typedef wxObject parent_t;
	typedef wxIcon base_t;
	static luna_ConverterType converters[];
};

// Class: wxIconBundle
template<>
class LunaTraits< wxIconBundle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIconBundle* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIconBundle* obj);
	typedef wxObject parent_t;
	typedef wxIconBundle base_t;
	static luna_ConverterType converters[];
};

// Class: wxIconizeEvent
template<>
class LunaTraits< wxIconizeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIconizeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIconizeEvent* obj);
	typedef wxObject parent_t;
	typedef wxIconizeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxIconLocation
template<>
class LunaTraits< wxIconLocation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIconLocation* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIconLocation* obj);
	typedef wxIconLocation parent_t;
	typedef wxIconLocation base_t;
	static luna_ConverterType converters[];
};

// Class: wxIdleEvent
template<>
class LunaTraits< wxIdleEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIdleEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIdleEvent* obj);
	typedef wxObject parent_t;
	typedef wxIdleEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxIdManager
template<>
class LunaTraits< wxIdManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIdManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIdManager* obj);
	typedef wxIdManager parent_t;
	typedef wxIdManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxImage
template<>
class LunaTraits< wxImage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxImage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxImage* obj);
	typedef wxObject parent_t;
	typedef wxImage base_t;
	static luna_ConverterType converters[];
};

// Class: wxImage::HSVValue
template<>
class LunaTraits< wxImage::HSVValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxImage::HSVValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxImage::HSVValue* obj);
	typedef wxImage::HSVValue parent_t;
	typedef wxImage::HSVValue base_t;
	static luna_ConverterType converters[];
};

// Class: wxImage::RGBValue
template<>
class LunaTraits< wxImage::RGBValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxImage::RGBValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxImage::RGBValue* obj);
	typedef wxImage::RGBValue parent_t;
	typedef wxImage::RGBValue base_t;
	static luna_ConverterType converters[];
};

// Class: wxImageHandler
template<>
class LunaTraits< wxImageHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxImageHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxImageHandler* obj);
	typedef wxObject parent_t;
	typedef wxImageHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxImageHistogram
template<>
class LunaTraits< wxImageHistogram > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxImageHistogram* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxImageHistogram* obj);
	typedef wxImageHistogram parent_t;
	typedef wxImageHistogram base_t;
	static luna_ConverterType converters[];
};

// Class: wxImageList
template<>
class LunaTraits< wxImageList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxImageList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxImageList* obj);
	typedef wxObject parent_t;
	typedef wxImageList base_t;
	static luna_ConverterType converters[];
};

// Class: wxIndividualLayoutConstraint
template<>
class LunaTraits< wxIndividualLayoutConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIndividualLayoutConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIndividualLayoutConstraint* obj);
	typedef wxObject parent_t;
	typedef wxIndividualLayoutConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: wxInfoBar
template<>
class LunaTraits< wxInfoBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxInfoBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxInfoBar* obj);
	typedef wxObject parent_t;
	typedef wxInfoBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxInitDialogEvent
template<>
class LunaTraits< wxInitDialogEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxInitDialogEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxInitDialogEvent* obj);
	typedef wxObject parent_t;
	typedef wxInitDialogEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxInitializer
template<>
class LunaTraits< wxInitializer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxInitializer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxInitializer* obj);
	typedef wxInitializer parent_t;
	typedef wxInitializer base_t;
	static luna_ConverterType converters[];
};

// Class: wxSockAddress
template<>
class LunaTraits< wxSockAddress > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSockAddress* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSockAddress* obj);
	typedef wxObject parent_t;
	typedef wxSockAddress base_t;
	static luna_ConverterType converters[];
};

// Class: wxIPaddress
template<>
class LunaTraits< wxIPaddress > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIPaddress* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIPaddress* obj);
	typedef wxObject parent_t;
	typedef wxIPaddress base_t;
	static luna_ConverterType converters[];
};

// Class: wxIPV4address
template<>
class LunaTraits< wxIPV4address > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxIPV4address* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxIPV4address* obj);
	typedef wxObject parent_t;
	typedef wxIPV4address base_t;
	static luna_ConverterType converters[];
};

// Class: wxJoystick
template<>
class LunaTraits< wxJoystick > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxJoystick* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxJoystick* obj);
	typedef wxObject parent_t;
	typedef wxJoystick base_t;
	static luna_ConverterType converters[];
};

// Class: wxJoystickEvent
template<>
class LunaTraits< wxJoystickEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxJoystickEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxJoystickEvent* obj);
	typedef wxObject parent_t;
	typedef wxJoystickEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxKeyboardState
template<>
class LunaTraits< wxKeyboardState > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxKeyboardState* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxKeyboardState* obj);
	typedef wxKeyboardState parent_t;
	typedef wxKeyboardState base_t;
	static luna_ConverterType converters[];
};

// Class: wxKeyEvent
template<>
class LunaTraits< wxKeyEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxKeyEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxKeyEvent* obj);
	typedef wxObject parent_t;
	typedef wxKeyEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxLanguageInfo
template<>
class LunaTraits< wxLanguageInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLanguageInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLanguageInfo* obj);
	typedef wxLanguageInfo parent_t;
	typedef wxLanguageInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxLayoutAlgorithm
template<>
class LunaTraits< wxLayoutAlgorithm > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLayoutAlgorithm* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLayoutAlgorithm* obj);
	typedef wxObject parent_t;
	typedef wxLayoutAlgorithm base_t;
	static luna_ConverterType converters[];
};

// Class: wxLayoutConstraints
template<>
class LunaTraits< wxLayoutConstraints > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLayoutConstraints* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLayoutConstraints* obj);
	typedef wxObject parent_t;
	typedef wxLayoutConstraints base_t;
	static luna_ConverterType converters[];
};

// Class: wxLinuxDistributionInfo
template<>
class LunaTraits< wxLinuxDistributionInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLinuxDistributionInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLinuxDistributionInfo* obj);
	typedef wxLinuxDistributionInfo parent_t;
	typedef wxLinuxDistributionInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxListbook
template<>
class LunaTraits< wxListbook > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListbook* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListbook* obj);
	typedef wxObject parent_t;
	typedef wxListbook base_t;
	static luna_ConverterType converters[];
};

// Class: wxListCtrl
template<>
class LunaTraits< wxListCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListCtrl* obj);
	typedef wxObject parent_t;
	typedef wxListCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxListEvent
template<>
class LunaTraits< wxListEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListEvent* obj);
	typedef wxObject parent_t;
	typedef wxListEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxListItem
template<>
class LunaTraits< wxListItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListItem* obj);
	typedef wxObject parent_t;
	typedef wxListItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxListItemAttr
template<>
class LunaTraits< wxListItemAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListItemAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListItemAttr* obj);
	typedef wxListItemAttr parent_t;
	typedef wxListItemAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxListView
template<>
class LunaTraits< wxListView > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxListView* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxListView* obj);
	typedef wxObject parent_t;
	typedef wxListView base_t;
	static luna_ConverterType converters[];
};

// Class: wxLocale
template<>
class LunaTraits< wxLocale > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLocale* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLocale* obj);
	typedef wxLocale parent_t;
	typedef wxLocale base_t;
	static luna_ConverterType converters[];
};

// Class: wxLog
template<>
class LunaTraits< wxLog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLog* obj);
	typedef wxLog parent_t;
	typedef wxLog base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogChain
template<>
class LunaTraits< wxLogChain > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogChain* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogChain* obj);
	typedef wxLog parent_t;
	typedef wxLogChain base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogGui
template<>
class LunaTraits< wxLogGui > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogGui* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogGui* obj);
	typedef wxLog parent_t;
	typedef wxLogGui base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogInterposer
template<>
class LunaTraits< wxLogInterposer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogInterposer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogInterposer* obj);
	typedef wxLog parent_t;
	typedef wxLogInterposer base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogInterposerTemp
template<>
class LunaTraits< wxLogInterposerTemp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogInterposerTemp* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogInterposerTemp* obj);
	typedef wxLog parent_t;
	typedef wxLogInterposerTemp base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogNull
template<>
class LunaTraits< wxLogNull > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogNull* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogNull* obj);
	typedef wxLogNull parent_t;
	typedef wxLogNull base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogRecordInfo
template<>
class LunaTraits< wxLogRecordInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogRecordInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogRecordInfo* obj);
	typedef wxLogRecordInfo parent_t;
	typedef wxLogRecordInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogStderr
template<>
class LunaTraits< wxLogStderr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogStderr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogStderr* obj);
	typedef wxLog parent_t;
	typedef wxLogStderr base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogStream
template<>
class LunaTraits< wxLogStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogStream* obj);
	typedef wxLog parent_t;
	typedef wxLogStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogTextCtrl
template<>
class LunaTraits< wxLogTextCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogTextCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogTextCtrl* obj);
	typedef wxLog parent_t;
	typedef wxLogTextCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxLogWindow
template<>
class LunaTraits< wxLogWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLogWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLogWindow* obj);
	typedef wxLog parent_t;
	typedef wxLogWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxLongLong
template<>
class LunaTraits< wxLongLong > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxLongLong* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxLongLong* obj);
	typedef wxLongLong parent_t;
	typedef wxLongLong base_t;
	static luna_ConverterType converters[];
};

// Class: wxMask
template<>
class LunaTraits< wxMask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMask* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMask* obj);
	typedef wxObject parent_t;
	typedef wxMask base_t;
	static luna_ConverterType converters[];
};

// Class: wxMatrix2D
template<>
class LunaTraits< wxMatrix2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMatrix2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMatrix2D* obj);
	typedef wxMatrix2D parent_t;
	typedef wxMatrix2D base_t;
	static luna_ConverterType converters[];
};

// Class: wxMaximizeEvent
template<>
class LunaTraits< wxMaximizeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMaximizeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMaximizeEvent* obj);
	typedef wxObject parent_t;
	typedef wxMaximizeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMDIClientWindow
template<>
class LunaTraits< wxMDIClientWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMDIClientWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMDIClientWindow* obj);
	typedef wxObject parent_t;
	typedef wxMDIClientWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxMediaCtrl
template<>
class LunaTraits< wxMediaCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMediaCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMediaCtrl* obj);
	typedef wxObject parent_t;
	typedef wxMediaCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxMediaEvent
template<>
class LunaTraits< wxMediaEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMediaEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMediaEvent* obj);
	typedef wxObject parent_t;
	typedef wxMediaEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMemoryDC
template<>
class LunaTraits< wxMemoryDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMemoryDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMemoryDC* obj);
	typedef wxObject parent_t;
	typedef wxMemoryDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxMemoryFSHandler
template<>
class LunaTraits< wxMemoryFSHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMemoryFSHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMemoryFSHandler* obj);
	typedef wxObject parent_t;
	typedef wxMemoryFSHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxMemoryInputStream
template<>
class LunaTraits< wxMemoryInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMemoryInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMemoryInputStream* obj);
	typedef wxObject parent_t;
	typedef wxMemoryInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxMemoryOutputStream
template<>
class LunaTraits< wxMemoryOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMemoryOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMemoryOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxMemoryOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxMenu
template<>
class LunaTraits< wxMenu > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMenu* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMenu* obj);
	typedef wxObject parent_t;
	typedef wxMenu base_t;
	static luna_ConverterType converters[];
};

// Class: wxMenuBar
template<>
class LunaTraits< wxMenuBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMenuBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMenuBar* obj);
	typedef wxObject parent_t;
	typedef wxMenuBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxMenuEvent
template<>
class LunaTraits< wxMenuEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMenuEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMenuEvent* obj);
	typedef wxObject parent_t;
	typedef wxMenuEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMenuItem
template<>
class LunaTraits< wxMenuItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMenuItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMenuItem* obj);
	typedef wxObject parent_t;
	typedef wxMenuItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxMessageDialog
template<>
class LunaTraits< wxMessageDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMessageDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMessageDialog* obj);
	typedef wxObject parent_t;
	typedef wxMessageDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxMessageOutput
template<>
class LunaTraits< wxMessageOutput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMessageOutput* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMessageOutput* obj);
	typedef wxMessageOutput parent_t;
	typedef wxMessageOutput base_t;
	static luna_ConverterType converters[];
};

// Class: wxMessageOutputStderr
template<>
class LunaTraits< wxMessageOutputStderr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMessageOutputStderr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMessageOutputStderr* obj);
	typedef wxMessageOutput parent_t;
	typedef wxMessageOutputStderr base_t;
	static luna_ConverterType converters[];
};

// Class: wxMessageOutputBest
template<>
class LunaTraits< wxMessageOutputBest > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMessageOutputBest* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMessageOutputBest* obj);
	typedef wxMessageOutput parent_t;
	typedef wxMessageOutputBest base_t;
	static luna_ConverterType converters[];
};

// Class: wxMessageOutputDebug
template<>
class LunaTraits< wxMessageOutputDebug > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMessageOutputDebug* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMessageOutputDebug* obj);
	typedef wxMessageOutput parent_t;
	typedef wxMessageOutputDebug base_t;
	static luna_ConverterType converters[];
};

// Class: wxMessageOutputMessageBox
template<>
class LunaTraits< wxMessageOutputMessageBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMessageOutputMessageBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMessageOutputMessageBox* obj);
	typedef wxMessageOutput parent_t;
	typedef wxMessageOutputMessageBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxMetafile
template<>
class LunaTraits< wxMetafile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMetafile* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMetafile* obj);
	typedef wxObject parent_t;
	typedef wxMetafile base_t;
	static luna_ConverterType converters[];
};

// Class: wxMetafileDC
template<>
class LunaTraits< wxMetafileDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMetafileDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMetafileDC* obj);
	typedef wxObject parent_t;
	typedef wxMetafileDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxMimeTypesManager
template<>
class LunaTraits< wxMimeTypesManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMimeTypesManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMimeTypesManager* obj);
	typedef wxMimeTypesManager parent_t;
	typedef wxMimeTypesManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxMiniFrame
template<>
class LunaTraits< wxMiniFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMiniFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMiniFrame* obj);
	typedef wxObject parent_t;
	typedef wxMiniFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxMirrorDC
template<>
class LunaTraits< wxMirrorDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMirrorDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMirrorDC* obj);
	typedef wxObject parent_t;
	typedef wxMirrorDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxMouseCaptureChangedEvent
template<>
class LunaTraits< wxMouseCaptureChangedEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMouseCaptureChangedEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMouseCaptureChangedEvent* obj);
	typedef wxObject parent_t;
	typedef wxMouseCaptureChangedEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMouseCaptureLostEvent
template<>
class LunaTraits< wxMouseCaptureLostEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMouseCaptureLostEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMouseCaptureLostEvent* obj);
	typedef wxObject parent_t;
	typedef wxMouseCaptureLostEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMouseState
template<>
class LunaTraits< wxMouseState > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMouseState* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMouseState* obj);
	typedef wxKeyboardState parent_t;
	typedef wxMouseState base_t;
	static luna_ConverterType converters[];
};

// Class: wxMouseEvent
template<>
class LunaTraits< wxMouseEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMouseEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMouseEvent* obj);
	typedef wxObject parent_t;
	typedef wxMouseEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMouseEventsManager
template<>
class LunaTraits< wxMouseEventsManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMouseEventsManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMouseEventsManager* obj);
	typedef wxObject parent_t;
	typedef wxMouseEventsManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxMoveEvent
template<>
class LunaTraits< wxMoveEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMoveEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMoveEvent* obj);
	typedef wxObject parent_t;
	typedef wxMoveEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxMsgCatalog
template<>
class LunaTraits< wxMsgCatalog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMsgCatalog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMsgCatalog* obj);
	typedef wxMsgCatalog parent_t;
	typedef wxMsgCatalog base_t;
	static luna_ConverterType converters[];
};

// Class: wxMultiChoiceDialog
template<>
class LunaTraits< wxMultiChoiceDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMultiChoiceDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMultiChoiceDialog* obj);
	typedef wxObject parent_t;
	typedef wxMultiChoiceDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxMutex
template<>
class LunaTraits< wxMutex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMutex* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMutex* obj);
	typedef wxMutex parent_t;
	typedef wxMutex base_t;
	static luna_ConverterType converters[];
};

// Class: wxMutexLocker
template<>
class LunaTraits< wxMutexLocker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMutexLocker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMutexLocker* obj);
	typedef wxMutexLocker parent_t;
	typedef wxMutexLocker base_t;
	static luna_ConverterType converters[];
};

// Class: wxNativeFontInfo
template<>
class LunaTraits< wxNativeFontInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxNativeFontInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxNativeFontInfo* obj);
	typedef wxNativeFontInfo parent_t;
	typedef wxNativeFontInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxNavigationKeyEvent
template<>
class LunaTraits< wxNavigationKeyEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxNavigationKeyEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxNavigationKeyEvent* obj);
	typedef wxObject parent_t;
	typedef wxNavigationKeyEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxNotebook
template<>
class LunaTraits< wxNotebook > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxNotebook* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxNotebook* obj);
	typedef wxObject parent_t;
	typedef wxNotebook base_t;
	static luna_ConverterType converters[];
};

// Class: wxNumberFormatter
template<>
class LunaTraits< wxNumberFormatter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxNumberFormatter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxNumberFormatter* obj);
	typedef wxNumberFormatter parent_t;
	typedef wxNumberFormatter base_t;
	static luna_ConverterType converters[];
};

// Class: wxObjectRefData
template<>
class LunaTraits< wxObjectRefData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxObjectRefData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxObjectRefData* obj);
	typedef wxObjectRefData parent_t;
	typedef wxObjectRefData base_t;
	static luna_ConverterType converters[];
};

// Class: wxOwnerDrawnComboBox
template<>
class LunaTraits< wxOwnerDrawnComboBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxOwnerDrawnComboBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxOwnerDrawnComboBox* obj);
	typedef wxObject parent_t;
	typedef wxOwnerDrawnComboBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxPageSetupDialog
template<>
class LunaTraits< wxPageSetupDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPageSetupDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPageSetupDialog* obj);
	typedef wxObject parent_t;
	typedef wxPageSetupDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxPageSetupDialogData
template<>
class LunaTraits< wxPageSetupDialogData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPageSetupDialogData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPageSetupDialogData* obj);
	typedef wxObject parent_t;
	typedef wxPageSetupDialogData base_t;
	static luna_ConverterType converters[];
};

// Class: wxPaintDC
template<>
class LunaTraits< wxPaintDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPaintDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPaintDC* obj);
	typedef wxObject parent_t;
	typedef wxPaintDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxPaintEvent
template<>
class LunaTraits< wxPaintEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPaintEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPaintEvent* obj);
	typedef wxObject parent_t;
	typedef wxPaintEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxPalette
template<>
class LunaTraits< wxPalette > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPalette* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPalette* obj);
	typedef wxObject parent_t;
	typedef wxPalette base_t;
	static luna_ConverterType converters[];
};

// Class: wxPaletteChangedEvent
template<>
class LunaTraits< wxPaletteChangedEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPaletteChangedEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPaletteChangedEvent* obj);
	typedef wxObject parent_t;
	typedef wxPaletteChangedEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextEntryDialog
template<>
class LunaTraits< wxTextEntryDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextEntryDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextEntryDialog* obj);
	typedef wxObject parent_t;
	typedef wxTextEntryDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxPasswordEntryDialog
template<>
class LunaTraits< wxPasswordEntryDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPasswordEntryDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPasswordEntryDialog* obj);
	typedef wxObject parent_t;
	typedef wxPasswordEntryDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxPathList
template<>
class LunaTraits< wxPathList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPathList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPathList* obj);
	typedef wxArrayString parent_t;
	typedef wxPathList base_t;
	static luna_ConverterType converters[];
};

// Class: wxPen
template<>
class LunaTraits< wxPen > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPen* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPen* obj);
	typedef wxObject parent_t;
	typedef wxPen base_t;
	static luna_ConverterType converters[];
};

// Class: wxPenList
template<>
class LunaTraits< wxPenList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPenList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPenList* obj);
	typedef wxPenList parent_t;
	typedef wxPenList base_t;
	static luna_ConverterType converters[];
};

// Class: wxPersistenceManager
template<>
class LunaTraits< wxPersistenceManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPersistenceManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPersistenceManager* obj);
	typedef wxPersistenceManager parent_t;
	typedef wxPersistenceManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxPersistentObject
template<>
class LunaTraits< wxPersistentObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPersistentObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPersistentObject* obj);
	typedef wxPersistentObject parent_t;
	typedef wxPersistentObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGCell
template<>
class LunaTraits< wxPGCell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGCell* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGCell* obj);
	typedef wxObject parent_t;
	typedef wxPGCell base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGChoiceEntry
template<>
class LunaTraits< wxPGChoiceEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGChoiceEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGChoiceEntry* obj);
	typedef wxObject parent_t;
	typedef wxPGChoiceEntry base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGChoices
template<>
class LunaTraits< wxPGChoices > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGChoices* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGChoices* obj);
	typedef wxPGChoices parent_t;
	typedef wxPGChoices base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGChoicesData
template<>
class LunaTraits< wxPGChoicesData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGChoicesData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGChoicesData* obj);
	typedef wxObjectRefData parent_t;
	typedef wxPGChoicesData base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGEditor
template<>
class LunaTraits< wxPGEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGEditor* obj);
	typedef wxObject parent_t;
	typedef wxPGEditor base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGMultiButton
template<>
class LunaTraits< wxPGMultiButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGMultiButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGMultiButton* obj);
	typedef wxObject parent_t;
	typedef wxPGMultiButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGProperty
template<>
class LunaTraits< wxPGProperty > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGProperty* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGProperty* obj);
	typedef wxObject parent_t;
	typedef wxPGProperty base_t;
	static luna_ConverterType converters[];
};

// Class: wxPGValidationInfo
template<>
class LunaTraits< wxPGValidationInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGValidationInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGValidationInfo* obj);
	typedef wxPGValidationInfo parent_t;
	typedef wxPGValidationInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxPlatformInfo
template<>
class LunaTraits< wxPlatformInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPlatformInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPlatformInfo* obj);
	typedef wxPlatformInfo parent_t;
	typedef wxPlatformInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxPoint
template<>
class LunaTraits< wxPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPoint* obj);
	typedef wxPoint parent_t;
	typedef wxPoint base_t;
	static luna_ConverterType converters[];
};

// Class: wxPoint2DDouble
template<>
class LunaTraits< wxPoint2DDouble > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPoint2DDouble* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPoint2DDouble* obj);
	typedef wxPoint2DDouble parent_t;
	typedef wxPoint2DDouble base_t;
	static luna_ConverterType converters[];
};

// Class: wxPoint2DInt
template<>
class LunaTraits< wxPoint2DInt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPoint2DInt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPoint2DInt* obj);
	typedef wxPoint2DInt parent_t;
	typedef wxPoint2DInt base_t;
	static luna_ConverterType converters[];
};

// Class: wxPointList
template<>
class LunaTraits< wxPointList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPointList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPointList* obj);
	typedef wxPointList parent_t;
	typedef wxPointList base_t;
	static luna_ConverterType converters[];
};

// Class: wxPopupWindow
template<>
class LunaTraits< wxPopupWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPopupWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPopupWindow* obj);
	typedef wxObject parent_t;
	typedef wxPopupWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxPopupTransientWindow
template<>
class LunaTraits< wxPopupTransientWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPopupTransientWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPopupTransientWindow* obj);
	typedef wxObject parent_t;
	typedef wxPopupTransientWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxPosition
template<>
class LunaTraits< wxPosition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPosition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPosition* obj);
	typedef wxPosition parent_t;
	typedef wxPosition base_t;
	static luna_ConverterType converters[];
};

// Class: wxPowerEvent
template<>
class LunaTraits< wxPowerEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPowerEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPowerEvent* obj);
	typedef wxObject parent_t;
	typedef wxPowerEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxPreviewCanvas
template<>
class LunaTraits< wxPreviewCanvas > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPreviewCanvas* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPreviewCanvas* obj);
	typedef wxObject parent_t;
	typedef wxPreviewCanvas base_t;
	static luna_ConverterType converters[];
};

// Class: wxPreviewControlBar
template<>
class LunaTraits< wxPreviewControlBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPreviewControlBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPreviewControlBar* obj);
	typedef wxObject parent_t;
	typedef wxPreviewControlBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxPreviewFrame
template<>
class LunaTraits< wxPreviewFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPreviewFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPreviewFrame* obj);
	typedef wxObject parent_t;
	typedef wxPreviewFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrintData
template<>
class LunaTraits< wxPrintData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrintData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrintData* obj);
	typedef wxObject parent_t;
	typedef wxPrintData base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrintDialog
template<>
class LunaTraits< wxPrintDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrintDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrintDialog* obj);
	typedef wxObject parent_t;
	typedef wxPrintDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrintDialogData
template<>
class LunaTraits< wxPrintDialogData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrintDialogData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrintDialogData* obj);
	typedef wxObject parent_t;
	typedef wxPrintDialogData base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrinter
template<>
class LunaTraits< wxPrinter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrinter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrinter* obj);
	typedef wxObject parent_t;
	typedef wxPrinter base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrinterDC
template<>
class LunaTraits< wxPrinterDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrinterDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrinterDC* obj);
	typedef wxObject parent_t;
	typedef wxPrinterDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxPrintPreview
template<>
class LunaTraits< wxPrintPreview > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPrintPreview* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPrintPreview* obj);
	typedef wxObject parent_t;
	typedef wxPrintPreview base_t;
	static luna_ConverterType converters[];
};

// Class: wxProcess
template<>
class LunaTraits< wxProcess > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxProcess* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxProcess* obj);
	typedef wxObject parent_t;
	typedef wxProcess base_t;
	static luna_ConverterType converters[];
};

// Class: wxProcessEvent
template<>
class LunaTraits< wxProcessEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxProcessEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxProcessEvent* obj);
	typedef wxObject parent_t;
	typedef wxProcessEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxProgressDialog
template<>
class LunaTraits< wxProgressDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxProgressDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxProgressDialog* obj);
	typedef wxObject parent_t;
	typedef wxProgressDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropagateOnce
template<>
class LunaTraits< wxPropagateOnce > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropagateOnce* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropagateOnce* obj);
	typedef wxPropagateOnce parent_t;
	typedef wxPropagateOnce base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropagationDisabler
template<>
class LunaTraits< wxPropagationDisabler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropagationDisabler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropagationDisabler* obj);
	typedef wxPropagationDisabler parent_t;
	typedef wxPropagationDisabler base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertyGridInterface
template<>
class LunaTraits< wxPropertyGridInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertyGridInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertyGridInterface* obj);
	typedef wxPropertyGridInterface parent_t;
	typedef wxPropertyGridInterface base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertyGrid
template<>
class LunaTraits< wxPropertyGrid > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertyGrid* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertyGrid* obj);
	typedef wxObject parent_t;
	typedef wxPropertyGrid base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertyGridEvent
template<>
class LunaTraits< wxPropertyGridEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertyGridEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertyGridEvent* obj);
	typedef wxObject parent_t;
	typedef wxPropertyGridEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertyGridHitTestResult
template<>
class LunaTraits< wxPropertyGridHitTestResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertyGridHitTestResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertyGridHitTestResult* obj);
	typedef wxPropertyGridHitTestResult parent_t;
	typedef wxPropertyGridHitTestResult base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertyGridManager
template<>
class LunaTraits< wxPropertyGridManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertyGridManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertyGridManager* obj);
	typedef wxObject parent_t;
	typedef wxPropertyGridManager base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertyGridPage
template<>
class LunaTraits< wxPropertyGridPage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertyGridPage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertyGridPage* obj);
	typedef wxObject parent_t;
	typedef wxPropertyGridPage base_t;
	static luna_ConverterType converters[];
};

// Class: wxPropertySheetDialog
template<>
class LunaTraits< wxPropertySheetDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPropertySheetDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPropertySheetDialog* obj);
	typedef wxObject parent_t;
	typedef wxPropertySheetDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxProtocolLog
template<>
class LunaTraits< wxProtocolLog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxProtocolLog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxProtocolLog* obj);
	typedef wxProtocolLog parent_t;
	typedef wxProtocolLog base_t;
	static luna_ConverterType converters[];
};

// Class: wxQuantize
template<>
class LunaTraits< wxQuantize > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxQuantize* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxQuantize* obj);
	typedef wxObject parent_t;
	typedef wxQuantize base_t;
	static luna_ConverterType converters[];
};

// Class: wxQueryLayoutInfoEvent
template<>
class LunaTraits< wxQueryLayoutInfoEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxQueryLayoutInfoEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxQueryLayoutInfoEvent* obj);
	typedef wxObject parent_t;
	typedef wxQueryLayoutInfoEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxQueryNewPaletteEvent
template<>
class LunaTraits< wxQueryNewPaletteEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxQueryNewPaletteEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxQueryNewPaletteEvent* obj);
	typedef wxObject parent_t;
	typedef wxQueryNewPaletteEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxRadioBox
template<>
class LunaTraits< wxRadioBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRadioBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRadioBox* obj);
	typedef wxObject parent_t;
	typedef wxRadioBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxRadioButton
template<>
class LunaTraits< wxRadioButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRadioButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRadioButton* obj);
	typedef wxObject parent_t;
	typedef wxRadioButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxRealPoint
template<>
class LunaTraits< wxRealPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRealPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRealPoint* obj);
	typedef wxRealPoint parent_t;
	typedef wxRealPoint base_t;
	static luna_ConverterType converters[];
};

// Class: wxRearrangeCtrl
template<>
class LunaTraits< wxRearrangeCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRearrangeCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRearrangeCtrl* obj);
	typedef wxRearrangeCtrl parent_t;
	typedef wxRearrangeCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxRearrangeDialog
template<>
class LunaTraits< wxRearrangeDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRearrangeDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRearrangeDialog* obj);
	typedef wxRearrangeDialog parent_t;
	typedef wxRearrangeDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxRearrangeList
template<>
class LunaTraits< wxRearrangeList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRearrangeList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRearrangeList* obj);
	typedef wxObject parent_t;
	typedef wxRearrangeList base_t;
	static luna_ConverterType converters[];
};

// Class: wxRect
template<>
class LunaTraits< wxRect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRect* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRect* obj);
	typedef wxRect parent_t;
	typedef wxRect base_t;
	static luna_ConverterType converters[];
};

// Class: wxRect2DDouble
template<>
class LunaTraits< wxRect2DDouble > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRect2DDouble* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRect2DDouble* obj);
	typedef wxRect2DDouble parent_t;
	typedef wxRect2DDouble base_t;
	static luna_ConverterType converters[];
};

// Class: wxRect2DInt
template<>
class LunaTraits< wxRect2DInt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRect2DInt* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRect2DInt* obj);
	typedef wxRect2DInt parent_t;
	typedef wxRect2DInt base_t;
	static luna_ConverterType converters[];
};

// Class: wxRecursionGuard
template<>
class LunaTraits< wxRecursionGuard > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRecursionGuard* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRecursionGuard* obj);
	typedef wxRecursionGuard parent_t;
	typedef wxRecursionGuard base_t;
	static luna_ConverterType converters[];
};

// Class: wxRecursionGuardFlag
template<>
class LunaTraits< wxRecursionGuardFlag > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRecursionGuardFlag* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRecursionGuardFlag* obj);
	typedef wxRecursionGuardFlag parent_t;
	typedef wxRecursionGuardFlag base_t;
	static luna_ConverterType converters[];
};

// Class: wxRegConfig
template<>
class LunaTraits< wxRegConfig > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRegConfig* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRegConfig* obj);
	typedef wxObject parent_t;
	typedef wxRegConfig base_t;
	static luna_ConverterType converters[];
};

// Class: wxRegEx
template<>
class LunaTraits< wxRegEx > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRegEx* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRegEx* obj);
	typedef wxRegEx parent_t;
	typedef wxRegEx base_t;
	static luna_ConverterType converters[];
};

// Class: wxRegion
template<>
class LunaTraits< wxRegion > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRegion* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRegion* obj);
	typedef wxObject parent_t;
	typedef wxRegion base_t;
	static luna_ConverterType converters[];
};

// Class: wxRegKey
template<>
class LunaTraits< wxRegKey > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRegKey* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRegKey* obj);
	typedef wxRegKey parent_t;
	typedef wxRegKey base_t;
	static luna_ConverterType converters[];
};

// Class: wxRendererVersion
template<>
class LunaTraits< wxRendererVersion > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRendererVersion* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRendererVersion* obj);
	typedef wxRendererVersion parent_t;
	typedef wxRendererVersion base_t;
	static luna_ConverterType converters[];
};

// Class: wxResourceTranslationsLoader
template<>
class LunaTraits< wxResourceTranslationsLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxResourceTranslationsLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxResourceTranslationsLoader* obj);
	typedef wxTranslationsLoader parent_t;
	typedef wxResourceTranslationsLoader base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonArtProvider
template<>
class LunaTraits< wxRibbonArtProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonArtProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonArtProvider* obj);
	typedef wxRibbonArtProvider parent_t;
	typedef wxRibbonArtProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonControl
template<>
class LunaTraits< wxRibbonControl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonControl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonControl* obj);
	typedef wxObject parent_t;
	typedef wxRibbonControl base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonBar
template<>
class LunaTraits< wxRibbonBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonBar* obj);
	typedef wxObject parent_t;
	typedef wxRibbonBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonBarEvent
template<>
class LunaTraits< wxRibbonBarEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonBarEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonBarEvent* obj);
	typedef wxObject parent_t;
	typedef wxRibbonBarEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonButtonBar
template<>
class LunaTraits< wxRibbonButtonBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonButtonBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonButtonBar* obj);
	typedef wxObject parent_t;
	typedef wxRibbonButtonBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonButtonBarButtonBase
template<>
class LunaTraits< wxRibbonButtonBarButtonBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonButtonBarButtonBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonButtonBarButtonBase* obj);
	typedef wxRibbonButtonBarButtonBase parent_t;
	typedef wxRibbonButtonBarButtonBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonButtonBarEvent
template<>
class LunaTraits< wxRibbonButtonBarEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonButtonBarEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonButtonBarEvent* obj);
	typedef wxObject parent_t;
	typedef wxRibbonButtonBarEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonGallery
template<>
class LunaTraits< wxRibbonGallery > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonGallery* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonGallery* obj);
	typedef wxObject parent_t;
	typedef wxRibbonGallery base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonGalleryEvent
template<>
class LunaTraits< wxRibbonGalleryEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonGalleryEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonGalleryEvent* obj);
	typedef wxObject parent_t;
	typedef wxRibbonGalleryEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonGalleryItem
template<>
class LunaTraits< wxRibbonGalleryItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonGalleryItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonGalleryItem* obj);
	typedef wxRibbonGalleryItem parent_t;
	typedef wxRibbonGalleryItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonPage
template<>
class LunaTraits< wxRibbonPage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonPage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonPage* obj);
	typedef wxObject parent_t;
	typedef wxRibbonPage base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonPageTabInfo
template<>
class LunaTraits< wxRibbonPageTabInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonPageTabInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonPageTabInfo* obj);
	typedef wxRibbonPageTabInfo parent_t;
	typedef wxRibbonPageTabInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonPageTabInfoArray
template<>
class LunaTraits< wxRibbonPageTabInfoArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonPageTabInfoArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonPageTabInfoArray* obj);
	typedef wxRibbonPageTabInfoArray parent_t;
	typedef wxRibbonPageTabInfoArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonPanel
template<>
class LunaTraits< wxRibbonPanel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonPanel* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonPanel* obj);
	typedef wxObject parent_t;
	typedef wxRibbonPanel base_t;
	static luna_ConverterType converters[];
};

// Class: wxRibbonToolBar
template<>
class LunaTraits< wxRibbonToolBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonToolBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonToolBar* obj);
	typedef wxObject parent_t;
	typedef wxRibbonToolBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichMessageDialog
template<>
class LunaTraits< wxRichMessageDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichMessageDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichMessageDialog* obj);
	typedef wxRichMessageDialog parent_t;
	typedef wxRichMessageDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextAction
template<>
class LunaTraits< wxRichTextAction > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextAction* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextAction* obj);
	typedef wxObject parent_t;
	typedef wxRichTextAction base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttr
template<>
class LunaTraits< wxTextAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttr* obj);
	typedef wxTextAttr parent_t;
	typedef wxTextAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextAttr
template<>
class LunaTraits< wxRichTextAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextAttr* obj);
	typedef wxTextAttr parent_t;
	typedef wxRichTextAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextObject
template<>
class LunaTraits< wxRichTextObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextObject* obj);
	typedef wxObject parent_t;
	typedef wxRichTextObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextCompositeObject
template<>
class LunaTraits< wxRichTextCompositeObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextCompositeObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextCompositeObject* obj);
	typedef wxObject parent_t;
	typedef wxRichTextCompositeObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextParagraphLayoutBox
template<>
class LunaTraits< wxRichTextParagraphLayoutBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextParagraphLayoutBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextParagraphLayoutBox* obj);
	typedef wxObject parent_t;
	typedef wxRichTextParagraphLayoutBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextBox
template<>
class LunaTraits< wxRichTextBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextBox* obj);
	typedef wxObject parent_t;
	typedef wxRichTextBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextCell
template<>
class LunaTraits< wxRichTextCell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextCell* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextCell* obj);
	typedef wxObject parent_t;
	typedef wxRichTextCell base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStyleDefinition
template<>
class LunaTraits< wxRichTextStyleDefinition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStyleDefinition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStyleDefinition* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStyleDefinition base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextCharacterStyleDefinition
template<>
class LunaTraits< wxRichTextCharacterStyleDefinition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextCharacterStyleDefinition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextCharacterStyleDefinition* obj);
	typedef wxObject parent_t;
	typedef wxRichTextCharacterStyleDefinition base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextCommand
template<>
class LunaTraits< wxRichTextCommand > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextCommand* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextCommand* obj);
	typedef wxObject parent_t;
	typedef wxRichTextCommand base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextContextMenuPropertiesInfo
template<>
class LunaTraits< wxRichTextContextMenuPropertiesInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextContextMenuPropertiesInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextContextMenuPropertiesInfo* obj);
	typedef wxRichTextContextMenuPropertiesInfo parent_t;
	typedef wxRichTextContextMenuPropertiesInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextCtrl
template<>
class LunaTraits< wxRichTextCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextCtrl* obj);
	typedef wxObject parent_t;
	typedef wxRichTextCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextEvent
template<>
class LunaTraits< wxRichTextEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextEvent* obj);
	typedef wxObject parent_t;
	typedef wxRichTextEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextFileHandler
template<>
class LunaTraits< wxRichTextFileHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextFileHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextFileHandler* obj);
	typedef wxObject parent_t;
	typedef wxRichTextFileHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextFloatCollector
template<>
class LunaTraits< wxRichTextFloatCollector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextFloatCollector* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextFloatCollector* obj);
	typedef wxRichTextFloatCollector parent_t;
	typedef wxRichTextFloatCollector base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextFontTable
template<>
class LunaTraits< wxRichTextFontTable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextFontTable* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextFontTable* obj);
	typedef wxObject parent_t;
	typedef wxRichTextFontTable base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextFormattingDialog
template<>
class LunaTraits< wxRichTextFormattingDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextFormattingDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextFormattingDialog* obj);
	typedef wxObject parent_t;
	typedef wxRichTextFormattingDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextFormattingDialogFactory
template<>
class LunaTraits< wxRichTextFormattingDialogFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextFormattingDialogFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextFormattingDialogFactory* obj);
	typedef wxObject parent_t;
	typedef wxRichTextFormattingDialogFactory base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextHeaderFooterData
template<>
class LunaTraits< wxRichTextHeaderFooterData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextHeaderFooterData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextHeaderFooterData* obj);
	typedef wxObject parent_t;
	typedef wxRichTextHeaderFooterData base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextHTMLHandler
template<>
class LunaTraits< wxRichTextHTMLHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextHTMLHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextHTMLHandler* obj);
	typedef wxObject parent_t;
	typedef wxRichTextHTMLHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextImage
template<>
class LunaTraits< wxRichTextImage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextImage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextImage* obj);
	typedef wxObject parent_t;
	typedef wxRichTextImage base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextImageBlock
template<>
class LunaTraits< wxRichTextImageBlock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextImageBlock* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextImageBlock* obj);
	typedef wxObject parent_t;
	typedef wxRichTextImageBlock base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextLine
template<>
class LunaTraits< wxRichTextLine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextLine* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextLine* obj);
	typedef wxRichTextLine parent_t;
	typedef wxRichTextLine base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextParagraphStyleDefinition
template<>
class LunaTraits< wxRichTextParagraphStyleDefinition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextParagraphStyleDefinition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextParagraphStyleDefinition* obj);
	typedef wxObject parent_t;
	typedef wxRichTextParagraphStyleDefinition base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextListStyleDefinition
template<>
class LunaTraits< wxRichTextListStyleDefinition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextListStyleDefinition* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextListStyleDefinition* obj);
	typedef wxObject parent_t;
	typedef wxRichTextListStyleDefinition base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextObjectAddress
template<>
class LunaTraits< wxRichTextObjectAddress > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextObjectAddress* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextObjectAddress* obj);
	typedef wxRichTextObjectAddress parent_t;
	typedef wxRichTextObjectAddress base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextParagraph
template<>
class LunaTraits< wxRichTextParagraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextParagraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextParagraph* obj);
	typedef wxObject parent_t;
	typedef wxRichTextParagraph base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextPlainText
template<>
class LunaTraits< wxRichTextPlainText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextPlainText* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextPlainText* obj);
	typedef wxObject parent_t;
	typedef wxRichTextPlainText base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextPlainTextHandler
template<>
class LunaTraits< wxRichTextPlainTextHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextPlainTextHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextPlainTextHandler* obj);
	typedef wxObject parent_t;
	typedef wxRichTextPlainTextHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextPrinting
template<>
class LunaTraits< wxRichTextPrinting > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextPrinting* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextPrinting* obj);
	typedef wxObject parent_t;
	typedef wxRichTextPrinting base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextPrintout
template<>
class LunaTraits< wxRichTextPrintout > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextPrintout* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextPrintout* obj);
	typedef wxObject parent_t;
	typedef wxRichTextPrintout base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextProperties
template<>
class LunaTraits< wxRichTextProperties > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextProperties* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextProperties* obj);
	typedef wxObject parent_t;
	typedef wxRichTextProperties base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextRange
template<>
class LunaTraits< wxRichTextRange > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextRange* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextRange* obj);
	typedef wxRichTextRange parent_t;
	typedef wxRichTextRange base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextRangeArray
template<>
class LunaTraits< wxRichTextRangeArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextRangeArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextRangeArray* obj);
	typedef wxRichTextRangeArray parent_t;
	typedef wxRichTextRangeArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextRenderer
template<>
class LunaTraits< wxRichTextRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextRenderer* obj);
	typedef wxObject parent_t;
	typedef wxRichTextRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextSelection
template<>
class LunaTraits< wxRichTextSelection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextSelection* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextSelection* obj);
	typedef wxRichTextSelection parent_t;
	typedef wxRichTextSelection base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStdRenderer
template<>
class LunaTraits< wxRichTextStdRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStdRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStdRenderer* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStdRenderer base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStyleComboCtrl
template<>
class LunaTraits< wxRichTextStyleComboCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStyleComboCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStyleComboCtrl* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStyleComboCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStyleListBox
template<>
class LunaTraits< wxRichTextStyleListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStyleListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStyleListBox* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStyleListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStyleListCtrl
template<>
class LunaTraits< wxRichTextStyleListCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStyleListCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStyleListCtrl* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStyleListCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStyleOrganiserDialog
template<>
class LunaTraits< wxRichTextStyleOrganiserDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStyleOrganiserDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStyleOrganiserDialog* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStyleOrganiserDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextStyleSheet
template<>
class LunaTraits< wxRichTextStyleSheet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextStyleSheet* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextStyleSheet* obj);
	typedef wxObject parent_t;
	typedef wxRichTextStyleSheet base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextTable
template<>
class LunaTraits< wxRichTextTable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextTable* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextTable* obj);
	typedef wxObject parent_t;
	typedef wxRichTextTable base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextVariantArray
template<>
class LunaTraits< wxRichTextVariantArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextVariantArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextVariantArray* obj);
	typedef wxRichTextVariantArray parent_t;
	typedef wxRichTextVariantArray base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichTextXMLHandler
template<>
class LunaTraits< wxRichTextXMLHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichTextXMLHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichTextXMLHandler* obj);
	typedef wxObject parent_t;
	typedef wxRichTextXMLHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxRichToolTip
template<>
class LunaTraits< wxRichToolTip > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRichToolTip* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRichToolTip* obj);
	typedef wxRichToolTip parent_t;
	typedef wxRichToolTip base_t;
	static luna_ConverterType converters[];
};

// Class: wxSashEvent
template<>
class LunaTraits< wxSashEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSashEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSashEvent* obj);
	typedef wxObject parent_t;
	typedef wxSashEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSashWindow
template<>
class LunaTraits< wxSashWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSashWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSashWindow* obj);
	typedef wxObject parent_t;
	typedef wxSashWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxSashLayoutWindow
template<>
class LunaTraits< wxSashLayoutWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSashLayoutWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSashLayoutWindow* obj);
	typedef wxObject parent_t;
	typedef wxSashLayoutWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxScreenDC
template<>
class LunaTraits< wxScreenDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScreenDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScreenDC* obj);
	typedef wxObject parent_t;
	typedef wxScreenDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxScrollBar
template<>
class LunaTraits< wxScrollBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScrollBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScrollBar* obj);
	typedef wxObject parent_t;
	typedef wxScrollBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxScrolledCanvas
template<>
class LunaTraits< wxScrolledCanvas > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScrolledCanvas* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScrolledCanvas* obj);
	typedef wxObject parent_t;
	typedef wxScrolledCanvas base_t;
	static luna_ConverterType converters[];
};

// Class: wxScrollEvent
template<>
class LunaTraits< wxScrollEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScrollEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScrollEvent* obj);
	typedef wxObject parent_t;
	typedef wxScrollEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxScrollWinEvent
template<>
class LunaTraits< wxScrollWinEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScrollWinEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScrollWinEvent* obj);
	typedef wxObject parent_t;
	typedef wxScrollWinEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextCtrl
template<>
class LunaTraits< wxTextCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextCtrl* obj);
	typedef wxObject parent_t;
	typedef wxTextCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxSearchCtrl
template<>
class LunaTraits< wxSearchCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSearchCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSearchCtrl* obj);
	typedef wxObject parent_t;
	typedef wxSearchCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxSemaphore
template<>
class LunaTraits< wxSemaphore > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSemaphore* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSemaphore* obj);
	typedef wxSemaphore parent_t;
	typedef wxSemaphore base_t;
	static luna_ConverterType converters[];
};

// Class: wxServer
template<>
class LunaTraits< wxServer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxServer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxServer* obj);
	typedef wxServer parent_t;
	typedef wxServer base_t;
	static luna_ConverterType converters[];
};

// Class: wxSetCursorEvent
template<>
class LunaTraits< wxSetCursorEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSetCursorEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSetCursorEvent* obj);
	typedef wxObject parent_t;
	typedef wxSetCursorEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxShowEvent
template<>
class LunaTraits< wxShowEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxShowEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxShowEvent* obj);
	typedef wxObject parent_t;
	typedef wxShowEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSimpleHtmlListBox
template<>
class LunaTraits< wxSimpleHtmlListBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSimpleHtmlListBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSimpleHtmlListBox* obj);
	typedef wxObject parent_t;
	typedef wxSimpleHtmlListBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxSingleChoiceDialog
template<>
class LunaTraits< wxSingleChoiceDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSingleChoiceDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSingleChoiceDialog* obj);
	typedef wxObject parent_t;
	typedef wxSingleChoiceDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxSingleInstanceChecker
template<>
class LunaTraits< wxSingleInstanceChecker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSingleInstanceChecker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSingleInstanceChecker* obj);
	typedef wxSingleInstanceChecker parent_t;
	typedef wxSingleInstanceChecker base_t;
	static luna_ConverterType converters[];
};

// Class: wxSize
template<>
class LunaTraits< wxSize > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSize* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSize* obj);
	typedef wxSize parent_t;
	typedef wxSize base_t;
	static luna_ConverterType converters[];
};

// Class: wxSizeEvent
template<>
class LunaTraits< wxSizeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSizeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSizeEvent* obj);
	typedef wxObject parent_t;
	typedef wxSizeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSizerFlags
template<>
class LunaTraits< wxSizerFlags > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSizerFlags* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSizerFlags* obj);
	typedef wxSizerFlags parent_t;
	typedef wxSizerFlags base_t;
	static luna_ConverterType converters[];
};

// Class: wxXmlResourceHandler
template<>
class LunaTraits< wxXmlResourceHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxXmlResourceHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxXmlResourceHandler* obj);
	typedef wxObject parent_t;
	typedef wxXmlResourceHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxSizerXmlHandler
template<>
class LunaTraits< wxSizerXmlHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSizerXmlHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSizerXmlHandler* obj);
	typedef wxObject parent_t;
	typedef wxSizerXmlHandler base_t;
	static luna_ConverterType converters[];
};

// Class: wxSlider
template<>
class LunaTraits< wxSlider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSlider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSlider* obj);
	typedef wxObject parent_t;
	typedef wxSlider base_t;
	static luna_ConverterType converters[];
};

// Class: wxSocketEvent
template<>
class LunaTraits< wxSocketEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSocketEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSocketEvent* obj);
	typedef wxObject parent_t;
	typedef wxSocketEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSocketInputStream
template<>
class LunaTraits< wxSocketInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSocketInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSocketInputStream* obj);
	typedef wxObject parent_t;
	typedef wxSocketInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxSocketOutputStream
template<>
class LunaTraits< wxSocketOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSocketOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSocketOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxSocketOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxSocketServer
template<>
class LunaTraits< wxSocketServer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSocketServer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSocketServer* obj);
	typedef wxObject parent_t;
	typedef wxSocketServer base_t;
	static luna_ConverterType converters[];
};

// Class: wxSortedArrayString
template<>
class LunaTraits< wxSortedArrayString > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSortedArrayString* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSortedArrayString* obj);
	typedef wxArrayString parent_t;
	typedef wxSortedArrayString base_t;
	static luna_ConverterType converters[];
};

// Class: wxSound
template<>
class LunaTraits< wxSound > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSound* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSound* obj);
	typedef wxObject parent_t;
	typedef wxSound base_t;
	static luna_ConverterType converters[];
};

// Class: wxSpinButton
template<>
class LunaTraits< wxSpinButton > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSpinButton* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSpinButton* obj);
	typedef wxObject parent_t;
	typedef wxSpinButton base_t;
	static luna_ConverterType converters[];
};

// Class: wxSpinCtrl
template<>
class LunaTraits< wxSpinCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSpinCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSpinCtrl* obj);
	typedef wxObject parent_t;
	typedef wxSpinCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxSpinCtrlDouble
template<>
class LunaTraits< wxSpinCtrlDouble > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSpinCtrlDouble* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSpinCtrlDouble* obj);
	typedef wxObject parent_t;
	typedef wxSpinCtrlDouble base_t;
	static luna_ConverterType converters[];
};

// Class: wxSpinDoubleEvent
template<>
class LunaTraits< wxSpinDoubleEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSpinDoubleEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSpinDoubleEvent* obj);
	typedef wxObject parent_t;
	typedef wxSpinDoubleEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSpinEvent
template<>
class LunaTraits< wxSpinEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSpinEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSpinEvent* obj);
	typedef wxObject parent_t;
	typedef wxSpinEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSplashScreen
template<>
class LunaTraits< wxSplashScreen > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSplashScreen* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSplashScreen* obj);
	typedef wxObject parent_t;
	typedef wxSplashScreen base_t;
	static luna_ConverterType converters[];
};

// Class: wxSplitterEvent
template<>
class LunaTraits< wxSplitterEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSplitterEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSplitterEvent* obj);
	typedef wxObject parent_t;
	typedef wxSplitterEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSplitterRenderParams
template<>
class LunaTraits< wxSplitterRenderParams > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSplitterRenderParams* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSplitterRenderParams* obj);
	typedef wxSplitterRenderParams parent_t;
	typedef wxSplitterRenderParams base_t;
	static luna_ConverterType converters[];
};

// Class: wxSplitterWindow
template<>
class LunaTraits< wxSplitterWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSplitterWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSplitterWindow* obj);
	typedef wxObject parent_t;
	typedef wxSplitterWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxStackFrame
template<>
class LunaTraits< wxStackFrame > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStackFrame* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStackFrame* obj);
	typedef wxStackFrame parent_t;
	typedef wxStackFrame base_t;
	static luna_ConverterType converters[];
};

// Class: wxStackWalker
template<>
class LunaTraits< wxStackWalker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStackWalker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStackWalker* obj);
	typedef wxStackWalker parent_t;
	typedef wxStackWalker base_t;
	static luna_ConverterType converters[];
};

// Class: wxStandardPaths
template<>
class LunaTraits< wxStandardPaths > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStandardPaths* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStandardPaths* obj);
	typedef wxStandardPaths parent_t;
	typedef wxStandardPaths base_t;
	static luna_ConverterType converters[];
};

// Class: wxStaticBitmap
template<>
class LunaTraits< wxStaticBitmap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStaticBitmap* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStaticBitmap* obj);
	typedef wxObject parent_t;
	typedef wxStaticBitmap base_t;
	static luna_ConverterType converters[];
};

// Class: wxStaticBox
template<>
class LunaTraits< wxStaticBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStaticBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStaticBox* obj);
	typedef wxObject parent_t;
	typedef wxStaticBox base_t;
	static luna_ConverterType converters[];
};

// Class: wxStaticBoxSizer
template<>
class LunaTraits< wxStaticBoxSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStaticBoxSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStaticBoxSizer* obj);
	typedef wxObject parent_t;
	typedef wxStaticBoxSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxStaticLine
template<>
class LunaTraits< wxStaticLine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStaticLine* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStaticLine* obj);
	typedef wxObject parent_t;
	typedef wxStaticLine base_t;
	static luna_ConverterType converters[];
};

// Class: wxStaticText
template<>
class LunaTraits< wxStaticText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStaticText* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStaticText* obj);
	typedef wxObject parent_t;
	typedef wxStaticText base_t;
	static luna_ConverterType converters[];
};

// Class: wxStatusBar
template<>
class LunaTraits< wxStatusBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStatusBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStatusBar* obj);
	typedef wxObject parent_t;
	typedef wxStatusBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxStatusBarPane
template<>
class LunaTraits< wxStatusBarPane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStatusBarPane* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStatusBarPane* obj);
	typedef wxStatusBarPane parent_t;
	typedef wxStatusBarPane base_t;
	static luna_ConverterType converters[];
};

// Class: wxStdDialogButtonSizer
template<>
class LunaTraits< wxStdDialogButtonSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStdDialogButtonSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStdDialogButtonSizer* obj);
	typedef wxObject parent_t;
	typedef wxStdDialogButtonSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxStdInputStream
template<>
class LunaTraits< wxStdInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStdInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStdInputStream* obj);
	typedef wxStdInputStream parent_t;
	typedef wxStdInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxStdOutputStream
template<>
class LunaTraits< wxStdOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStdOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStdOutputStream* obj);
	typedef wxStdOutputStream parent_t;
	typedef wxStdOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxStopWatch
template<>
class LunaTraits< wxStopWatch > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStopWatch* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStopWatch* obj);
	typedef wxStopWatch parent_t;
	typedef wxStopWatch base_t;
	static luna_ConverterType converters[];
};

// Class: wxStreamToTextRedirector
template<>
class LunaTraits< wxStreamToTextRedirector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStreamToTextRedirector* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStreamToTextRedirector* obj);
	typedef wxStreamToTextRedirector parent_t;
	typedef wxStreamToTextRedirector base_t;
	static luna_ConverterType converters[];
};

// Class: wxString
template<>
class LunaTraits< wxString > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxString* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxString* obj);
	typedef wxString parent_t;
	typedef wxString base_t;
	static luna_ConverterType converters[];
};

// Class: wxStringClientData
template<>
class LunaTraits< wxStringClientData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStringClientData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStringClientData* obj);
	typedef wxClientData parent_t;
	typedef wxStringClientData base_t;
	static luna_ConverterType converters[];
};

// Class: wxStringInputStream
template<>
class LunaTraits< wxStringInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStringInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStringInputStream* obj);
	typedef wxObject parent_t;
	typedef wxStringInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxStringOutputStream
template<>
class LunaTraits< wxStringOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStringOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStringOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxStringOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxStringTokenizer
template<>
class LunaTraits< wxStringTokenizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStringTokenizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStringTokenizer* obj);
	typedef wxObject parent_t;
	typedef wxStringTokenizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxStyledTextCtrl
template<>
class LunaTraits< wxStyledTextCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStyledTextCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStyledTextCtrl* obj);
	typedef wxObject parent_t;
	typedef wxStyledTextCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxStyledTextEvent
template<>
class LunaTraits< wxStyledTextEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxStyledTextEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxStyledTextEvent* obj);
	typedef wxObject parent_t;
	typedef wxStyledTextEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSVGFileDC
template<>
class LunaTraits< wxSVGFileDC > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSVGFileDC* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSVGFileDC* obj);
	typedef wxObject parent_t;
	typedef wxSVGFileDC base_t;
	static luna_ConverterType converters[];
};

// Class: wxSymbolPickerDialog
template<>
class LunaTraits< wxSymbolPickerDialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSymbolPickerDialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSymbolPickerDialog* obj);
	typedef wxObject parent_t;
	typedef wxSymbolPickerDialog base_t;
	static luna_ConverterType converters[];
};

// Class: wxSysColourChangedEvent
template<>
class LunaTraits< wxSysColourChangedEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSysColourChangedEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSysColourChangedEvent* obj);
	typedef wxObject parent_t;
	typedef wxSysColourChangedEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxSystemOptions
template<>
class LunaTraits< wxSystemOptions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSystemOptions* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSystemOptions* obj);
	typedef wxObject parent_t;
	typedef wxSystemOptions base_t;
	static luna_ConverterType converters[];
};

// Class: wxSystemSettings
template<>
class LunaTraits< wxSystemSettings > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSystemSettings* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSystemSettings* obj);
	typedef wxObject parent_t;
	typedef wxSystemSettings base_t;
	static luna_ConverterType converters[];
};

// Class: wxTarClassFactory
template<>
class LunaTraits< wxTarClassFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTarClassFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTarClassFactory* obj);
	typedef wxTarClassFactory parent_t;
	typedef wxTarClassFactory base_t;
	static luna_ConverterType converters[];
};

// Class: wxTarEntry
template<>
class LunaTraits< wxTarEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTarEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTarEntry* obj);
	typedef wxTarEntry parent_t;
	typedef wxTarEntry base_t;
	static luna_ConverterType converters[];
};

// Class: wxTarInputStream
template<>
class LunaTraits< wxTarInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTarInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTarInputStream* obj);
	typedef wxTarInputStream parent_t;
	typedef wxTarInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxTarOutputStream
template<>
class LunaTraits< wxTarOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTarOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTarOutputStream* obj);
	typedef wxTarOutputStream parent_t;
	typedef wxTarOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxTaskBarIcon
template<>
class LunaTraits< wxTaskBarIcon > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTaskBarIcon* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTaskBarIcon* obj);
	typedef wxObject parent_t;
	typedef wxTaskBarIcon base_t;
	static luna_ConverterType converters[];
};

// Class: wxTaskBarIconEvent
template<>
class LunaTraits< wxTaskBarIconEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTaskBarIconEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTaskBarIconEvent* obj);
	typedef wxObject parent_t;
	typedef wxTaskBarIconEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTCPClient
template<>
class LunaTraits< wxTCPClient > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTCPClient* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTCPClient* obj);
	typedef wxObject parent_t;
	typedef wxTCPClient base_t;
	static luna_ConverterType converters[];
};

// Class: wxTCPConnection
template<>
class LunaTraits< wxTCPConnection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTCPConnection* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTCPConnection* obj);
	typedef wxObject parent_t;
	typedef wxTCPConnection base_t;
	static luna_ConverterType converters[];
};

// Class: wxTCPServer
template<>
class LunaTraits< wxTCPServer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTCPServer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTCPServer* obj);
	typedef wxObject parent_t;
	typedef wxTCPServer base_t;
	static luna_ConverterType converters[];
};

// Class: wxTempFile
template<>
class LunaTraits< wxTempFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTempFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTempFile* obj);
	typedef wxTempFile parent_t;
	typedef wxTempFile base_t;
	static luna_ConverterType converters[];
};

// Class: wxTempFileOutputStream
template<>
class LunaTraits< wxTempFileOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTempFileOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTempFileOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxTempFileOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttrBorder
template<>
class LunaTraits< wxTextAttrBorder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttrBorder* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttrBorder* obj);
	typedef wxTextAttrBorder parent_t;
	typedef wxTextAttrBorder base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttrBorders
template<>
class LunaTraits< wxTextAttrBorders > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttrBorders* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttrBorders* obj);
	typedef wxTextAttrBorders parent_t;
	typedef wxTextAttrBorders base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttrDimension
template<>
class LunaTraits< wxTextAttrDimension > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttrDimension* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttrDimension* obj);
	typedef wxTextAttrDimension parent_t;
	typedef wxTextAttrDimension base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttrDimensionConverter
template<>
class LunaTraits< wxTextAttrDimensionConverter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttrDimensionConverter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttrDimensionConverter* obj);
	typedef wxTextAttrDimensionConverter parent_t;
	typedef wxTextAttrDimensionConverter base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttrDimensions
template<>
class LunaTraits< wxTextAttrDimensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttrDimensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttrDimensions* obj);
	typedef wxTextAttrDimensions parent_t;
	typedef wxTextAttrDimensions base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextAttrSize
template<>
class LunaTraits< wxTextAttrSize > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextAttrSize* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextAttrSize* obj);
	typedef wxTextAttrSize parent_t;
	typedef wxTextAttrSize base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextBoxAttr
template<>
class LunaTraits< wxTextBoxAttr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextBoxAttr* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextBoxAttr* obj);
	typedef wxTextBoxAttr parent_t;
	typedef wxTextBoxAttr base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextCompleter
template<>
class LunaTraits< wxTextCompleter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextCompleter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextCompleter* obj);
	typedef wxTextCompleter parent_t;
	typedef wxTextCompleter base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextCompleterSimple
template<>
class LunaTraits< wxTextCompleterSimple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextCompleterSimple* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextCompleterSimple* obj);
	typedef wxTextCompleter parent_t;
	typedef wxTextCompleterSimple base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextDataObject
template<>
class LunaTraits< wxTextDataObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextDataObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextDataObject* obj);
	typedef wxDataObject parent_t;
	typedef wxTextDataObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextDropTarget
template<>
class LunaTraits< wxTextDropTarget > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextDropTarget* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextDropTarget* obj);
	typedef wxDropTarget parent_t;
	typedef wxTextDropTarget base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextFile
template<>
class LunaTraits< wxTextFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextFile* obj);
	typedef wxTextFile parent_t;
	typedef wxTextFile base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextInputStream
template<>
class LunaTraits< wxTextInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextInputStream* obj);
	typedef wxTextInputStream parent_t;
	typedef wxTextInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextOutputStream
template<>
class LunaTraits< wxTextOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextOutputStream* obj);
	typedef wxTextOutputStream parent_t;
	typedef wxTextOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextValidator
template<>
class LunaTraits< wxTextValidator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextValidator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextValidator* obj);
	typedef wxObject parent_t;
	typedef wxTextValidator base_t;
	static luna_ConverterType converters[];
};

// Class: wxTextWrapper
template<>
class LunaTraits< wxTextWrapper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTextWrapper* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTextWrapper* obj);
	typedef wxTextWrapper parent_t;
	typedef wxTextWrapper base_t;
	static luna_ConverterType converters[];
};

// Class: wxThread
template<>
class LunaTraits< wxThread > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxThread* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxThread* obj);
	typedef wxThread parent_t;
	typedef wxThread base_t;
	static luna_ConverterType converters[];
};

// Class: wxThreadEvent
template<>
class LunaTraits< wxThreadEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxThreadEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxThreadEvent* obj);
	typedef wxObject parent_t;
	typedef wxThreadEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxThreadHelper
template<>
class LunaTraits< wxThreadHelper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxThreadHelper* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxThreadHelper* obj);
	typedef wxThreadHelper parent_t;
	typedef wxThreadHelper base_t;
	static luna_ConverterType converters[];
};

// Class: wxTimePickerCtrl
template<>
class LunaTraits< wxTimePickerCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTimePickerCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTimePickerCtrl* obj);
	typedef wxObject parent_t;
	typedef wxTimePickerCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxTimer
template<>
class LunaTraits< wxTimer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTimer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTimer* obj);
	typedef wxObject parent_t;
	typedef wxTimer base_t;
	static luna_ConverterType converters[];
};

// Class: wxTimerEvent
template<>
class LunaTraits< wxTimerEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTimerEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTimerEvent* obj);
	typedef wxObject parent_t;
	typedef wxTimerEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTimerRunner
template<>
class LunaTraits< wxTimerRunner > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTimerRunner* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTimerRunner* obj);
	typedef wxTimerRunner parent_t;
	typedef wxTimerRunner base_t;
	static luna_ConverterType converters[];
};

// Class: wxTimeSpan
template<>
class LunaTraits< wxTimeSpan > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTimeSpan* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTimeSpan* obj);
	typedef wxTimeSpan parent_t;
	typedef wxTimeSpan base_t;
	static luna_ConverterType converters[];
};

// Class: wxTipProvider
template<>
class LunaTraits< wxTipProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTipProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTipProvider* obj);
	typedef wxTipProvider parent_t;
	typedef wxTipProvider base_t;
	static luna_ConverterType converters[];
};

// Class: wxTipWindow
template<>
class LunaTraits< wxTipWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTipWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTipWindow* obj);
	typedef wxObject parent_t;
	typedef wxTipWindow base_t;
	static luna_ConverterType converters[];
};

// Class: wxToolBar
template<>
class LunaTraits< wxToolBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxToolBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxToolBar* obj);
	typedef wxObject parent_t;
	typedef wxToolBar base_t;
	static luna_ConverterType converters[];
};

// Class: wxToolBarToolBase
template<>
class LunaTraits< wxToolBarToolBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxToolBarToolBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxToolBarToolBase* obj);
	typedef wxToolBarToolBase parent_t;
	typedef wxToolBarToolBase base_t;
	static luna_ConverterType converters[];
};

// Class: wxToolbook
template<>
class LunaTraits< wxToolbook > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxToolbook* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxToolbook* obj);
	typedef wxObject parent_t;
	typedef wxToolbook base_t;
	static luna_ConverterType converters[];
};

// Class: wxToolTip
template<>
class LunaTraits< wxToolTip > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxToolTip* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxToolTip* obj);
	typedef wxObject parent_t;
	typedef wxToolTip base_t;
	static luna_ConverterType converters[];
};

// Class: wxTransform2D
template<>
class LunaTraits< wxTransform2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTransform2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTransform2D* obj);
	typedef wxTransform2D parent_t;
	typedef wxTransform2D base_t;
	static luna_ConverterType converters[];
};

// Class: wxTranslations
template<>
class LunaTraits< wxTranslations > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTranslations* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTranslations* obj);
	typedef wxTranslations parent_t;
	typedef wxTranslations base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreebook
template<>
class LunaTraits< wxTreebook > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreebook* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreebook* obj);
	typedef wxObject parent_t;
	typedef wxTreebook base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeCtrl
template<>
class LunaTraits< wxTreeCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeCtrl* obj);
	typedef wxObject parent_t;
	typedef wxTreeCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeEvent
template<>
class LunaTraits< wxTreeEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeEvent* obj);
	typedef wxObject parent_t;
	typedef wxTreeEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeItemData
template<>
class LunaTraits< wxTreeItemData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeItemData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeItemData* obj);
	typedef wxClientData parent_t;
	typedef wxTreeItemData base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeItemId
template<>
class LunaTraits< wxTreeItemId > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeItemId* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeItemId* obj);
	typedef wxTreeItemId parent_t;
	typedef wxTreeItemId base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeItemIdValue
template<>
class LunaTraits< wxTreeItemIdValue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeItemIdValue* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeItemIdValue* obj);
	typedef wxTreeItemIdValue parent_t;
	typedef wxTreeItemIdValue base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeListCtrl
template<>
class LunaTraits< wxTreeListCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeListCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeListCtrl* obj);
	typedef wxObject parent_t;
	typedef wxTreeListCtrl base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeListEvent
template<>
class LunaTraits< wxTreeListEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeListEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeListEvent* obj);
	typedef wxObject parent_t;
	typedef wxTreeListEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeListItem
template<>
class LunaTraits< wxTreeListItem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeListItem* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeListItem* obj);
	typedef wxTreeListItem parent_t;
	typedef wxTreeListItem base_t;
	static luna_ConverterType converters[];
};

// Class: wxTreeListItemComparator
template<>
class LunaTraits< wxTreeListItemComparator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTreeListItemComparator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTreeListItemComparator* obj);
	typedef wxTreeListItemComparator parent_t;
	typedef wxTreeListItemComparator base_t;
	static luna_ConverterType converters[];
};

// Class: wxUIActionSimulator
template<>
class LunaTraits< wxUIActionSimulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxUIActionSimulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxUIActionSimulator* obj);
	typedef wxUIActionSimulator parent_t;
	typedef wxUIActionSimulator base_t;
	static luna_ConverterType converters[];
};

// Class: wxULongLong
template<>
class LunaTraits< wxULongLong > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxULongLong* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxULongLong* obj);
	typedef wxULongLong parent_t;
	typedef wxULongLong base_t;
	static luna_ConverterType converters[];
};

// Class: wxUniChar
template<>
class LunaTraits< wxUniChar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxUniChar* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxUniChar* obj);
	typedef wxUniChar parent_t;
	typedef wxUniChar base_t;
	static luna_ConverterType converters[];
};

// Class: wxUniCharRef
template<>
class LunaTraits< wxUniCharRef > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxUniCharRef* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxUniCharRef* obj);
	typedef wxUniCharRef parent_t;
	typedef wxUniCharRef base_t;
	static luna_ConverterType converters[];
};

// Class: wxUpdateUIEvent
template<>
class LunaTraits< wxUpdateUIEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxUpdateUIEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxUpdateUIEvent* obj);
	typedef wxObject parent_t;
	typedef wxUpdateUIEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxURI
template<>
class LunaTraits< wxURI > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxURI* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxURI* obj);
	typedef wxObject parent_t;
	typedef wxURI base_t;
	static luna_ConverterType converters[];
};

// Class: wxURL
template<>
class LunaTraits< wxURL > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxURL* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxURL* obj);
	typedef wxObject parent_t;
	typedef wxURL base_t;
	static luna_ConverterType converters[];
};

// Class: wxURLDataObject
template<>
class LunaTraits< wxURLDataObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxURLDataObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxURLDataObject* obj);
	typedef wxDataObject parent_t;
	typedef wxURLDataObject base_t;
	static luna_ConverterType converters[];
};

// Class: wxUString
template<>
class LunaTraits< wxUString > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxUString* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxUString* obj);
	typedef wxUString parent_t;
	typedef wxUString base_t;
	static luna_ConverterType converters[];
};

// Class: wxVariant
template<>
class LunaTraits< wxVariant > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVariant* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVariant* obj);
	typedef wxObject parent_t;
	typedef wxVariant base_t;
	static luna_ConverterType converters[];
};

// Class: wxVariantData
template<>
class LunaTraits< wxVariantData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVariantData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVariantData* obj);
	typedef wxObjectRefData parent_t;
	typedef wxVariantData base_t;
	static luna_ConverterType converters[];
};

// Class: wxVersionInfo
template<>
class LunaTraits< wxVersionInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVersionInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVersionInfo* obj);
	typedef wxVersionInfo parent_t;
	typedef wxVersionInfo base_t;
	static luna_ConverterType converters[];
};

// Class: wxVideoMode
template<>
class LunaTraits< wxVideoMode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVideoMode* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVideoMode* obj);
	typedef wxVideoMode parent_t;
	typedef wxVideoMode base_t;
	static luna_ConverterType converters[];
};

// Class: wxView
template<>
class LunaTraits< wxView > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxView* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxView* obj);
	typedef wxObject parent_t;
	typedef wxView base_t;
	static luna_ConverterType converters[];
};

// Class: wxVisualAttributes
template<>
class LunaTraits< wxVisualAttributes > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVisualAttributes* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVisualAttributes* obj);
	typedef wxVisualAttributes parent_t;
	typedef wxVisualAttributes base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindowCreateEvent
template<>
class LunaTraits< wxWindowCreateEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowCreateEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowCreateEvent* obj);
	typedef wxObject parent_t;
	typedef wxWindowCreateEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindowDestroyEvent
template<>
class LunaTraits< wxWindowDestroyEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowDestroyEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowDestroyEvent* obj);
	typedef wxObject parent_t;
	typedef wxWindowDestroyEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindowDisabler
template<>
class LunaTraits< wxWindowDisabler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowDisabler* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowDisabler* obj);
	typedef wxWindowDisabler parent_t;
	typedef wxWindowDisabler base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindowModalDialogEvent
template<>
class LunaTraits< wxWindowModalDialogEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowModalDialogEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowModalDialogEvent* obj);
	typedef wxObject parent_t;
	typedef wxWindowModalDialogEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxWindowUpdateLocker
template<>
class LunaTraits< wxWindowUpdateLocker > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowUpdateLocker* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowUpdateLocker* obj);
	typedef wxWindowUpdateLocker parent_t;
	typedef wxWindowUpdateLocker base_t;
	static luna_ConverterType converters[];
};

// Class: wxWizard
template<>
class LunaTraits< wxWizard > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWizard* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWizard* obj);
	typedef wxObject parent_t;
	typedef wxWizard base_t;
	static luna_ConverterType converters[];
};

// Class: wxWizardEvent
template<>
class LunaTraits< wxWizardEvent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWizardEvent* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWizardEvent* obj);
	typedef wxObject parent_t;
	typedef wxWizardEvent base_t;
	static luna_ConverterType converters[];
};

// Class: wxWizardPage
template<>
class LunaTraits< wxWizardPage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWizardPage* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWizardPage* obj);
	typedef wxObject parent_t;
	typedef wxWizardPage base_t;
	static luna_ConverterType converters[];
};

// Class: wxWizardPageSimple
template<>
class LunaTraits< wxWizardPageSimple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWizardPageSimple* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWizardPageSimple* obj);
	typedef wxObject parent_t;
	typedef wxWizardPageSimple base_t;
	static luna_ConverterType converters[];
};

// Class: wxWrapSizer
template<>
class LunaTraits< wxWrapSizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWrapSizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWrapSizer* obj);
	typedef wxObject parent_t;
	typedef wxWrapSizer base_t;
	static luna_ConverterType converters[];
};

// Class: wxXLocale
template<>
class LunaTraits< wxXLocale > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxXLocale* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxXLocale* obj);
	typedef wxXLocale parent_t;
	typedef wxXLocale base_t;
	static luna_ConverterType converters[];
};

// Class: wxXmlAttribute
template<>
class LunaTraits< wxXmlAttribute > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxXmlAttribute* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxXmlAttribute* obj);
	typedef wxXmlAttribute parent_t;
	typedef wxXmlAttribute base_t;
	static luna_ConverterType converters[];
};

// Class: wxXmlDocument
template<>
class LunaTraits< wxXmlDocument > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxXmlDocument* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxXmlDocument* obj);
	typedef wxObject parent_t;
	typedef wxXmlDocument base_t;
	static luna_ConverterType converters[];
};

// Class: wxXmlNode
template<>
class LunaTraits< wxXmlNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxXmlNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxXmlNode* obj);
	typedef wxXmlNode parent_t;
	typedef wxXmlNode base_t;
	static luna_ConverterType converters[];
};

// Class: wxXmlResource
template<>
class LunaTraits< wxXmlResource > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxXmlResource* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxXmlResource* obj);
	typedef wxObject parent_t;
	typedef wxXmlResource base_t;
	static luna_ConverterType converters[];
};

// Class: wxZipClassFactory
template<>
class LunaTraits< wxZipClassFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZipClassFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZipClassFactory* obj);
	typedef wxZipClassFactory parent_t;
	typedef wxZipClassFactory base_t;
	static luna_ConverterType converters[];
};

// Class: wxZipEntry
template<>
class LunaTraits< wxZipEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZipEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZipEntry* obj);
	typedef wxZipEntry parent_t;
	typedef wxZipEntry base_t;
	static luna_ConverterType converters[];
};

// Class: wxZipInputStream
template<>
class LunaTraits< wxZipInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZipInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZipInputStream* obj);
	typedef wxZipInputStream parent_t;
	typedef wxZipInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxZipNotifier
template<>
class LunaTraits< wxZipNotifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZipNotifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZipNotifier* obj);
	typedef wxZipNotifier parent_t;
	typedef wxZipNotifier base_t;
	static luna_ConverterType converters[];
};

// Class: wxZipOutputStream
template<>
class LunaTraits< wxZipOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZipOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZipOutputStream* obj);
	typedef wxZipOutputStream parent_t;
	typedef wxZipOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxZlibInputStream
template<>
class LunaTraits< wxZlibInputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZlibInputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZlibInputStream* obj);
	typedef wxObject parent_t;
	typedef wxZlibInputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxZlibOutputStream
template<>
class LunaTraits< wxZlibOutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxZlibOutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxZlibOutputStream* obj);
	typedef wxObject parent_t;
	typedef wxZlibOutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: wxVector< wxTreeListItem >
template<>
class LunaTraits< wxVector< wxTreeListItem > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxVector< wxTreeListItem >* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxVector< wxTreeListItem >* obj);
	typedef wxVector< wxTreeListItem > parent_t;
	typedef wxVector< wxTreeListItem > base_t;
	static luna_ConverterType converters[];
};


// Mapped type: wxWindowList
template<>
class LunaTraits< wxWindowList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxWindowList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxWindowList* obj);
	typedef wxWindowList parent_t;
	typedef wxWindowList base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxTimerImpl
template<>
class LunaTraits< wxTimerImpl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxTimerImpl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxTimerImpl* obj);
	typedef wxTimerImpl parent_t;
	typedef wxTimerImpl base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxSizerItemList
template<>
class LunaTraits< wxSizerItemList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSizerItemList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSizerItemList* obj);
	typedef wxSizerItemList parent_t;
	typedef wxSizerItemList base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxArrayVideoModes
template<>
class LunaTraits< wxArrayVideoModes > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxArrayVideoModes* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxArrayVideoModes* obj);
	typedef wxArrayVideoModes parent_t;
	typedef wxArrayVideoModes base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxMDIClientWindowBase
template<>
class LunaTraits< wxMDIClientWindowBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMDIClientWindowBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMDIClientWindowBase* obj);
	typedef wxMDIClientWindowBase parent_t;
	typedef wxMDIClientWindowBase base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxDynamicLibraryDetailsArray
template<>
class LunaTraits< wxDynamicLibraryDetailsArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDynamicLibraryDetailsArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDynamicLibraryDetailsArray* obj);
	typedef wxDynamicLibraryDetailsArray parent_t;
	typedef wxDynamicLibraryDetailsArray base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxFontEncodingArray
template<>
class LunaTraits< wxFontEncodingArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxFontEncodingArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxFontEncodingArray* obj);
	typedef wxFontEncodingArray parent_t;
	typedef wxFontEncodingArray base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxDirFilterListCtrl
template<>
class LunaTraits< wxDirFilterListCtrl > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxDirFilterListCtrl* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxDirFilterListCtrl* obj);
	typedef wxDirFilterListCtrl parent_t;
	typedef wxDirFilterListCtrl base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxGridCellCoordsArray
template<>
class LunaTraits< wxGridCellCoordsArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxGridCellCoordsArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxGridCellCoordsArray* obj);
	typedef wxGridCellCoordsArray parent_t;
	typedef wxGridCellCoordsArray base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxHtmlBookRecArray
template<>
class LunaTraits< wxHtmlBookRecArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlBookRecArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlBookRecArray* obj);
	typedef wxHtmlBookRecArray parent_t;
	typedef wxHtmlBookRecArray base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxHtmlHelpDataItems
template<>
class LunaTraits< wxHtmlHelpDataItems > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlHelpDataItems* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlHelpDataItems* obj);
	typedef wxHtmlHelpDataItems parent_t;
	typedef wxHtmlHelpDataItems base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxHtmlRenderingState
template<>
class LunaTraits< wxHtmlRenderingState > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxHtmlRenderingState* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxHtmlRenderingState* obj);
	typedef wxHtmlRenderingState parent_t;
	typedef wxHtmlRenderingState base_t;
	static luna_ConverterType converters[];
};

// Mapped type: sockaddr
template<>
class LunaTraits< sockaddr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sockaddr* _bind_ctor(lua_State *L);
	static void _bind_dtor(sockaddr* obj);
	typedef sockaddr parent_t;
	typedef sockaddr base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxMenuItemList
template<>
class LunaTraits< wxMenuItemList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxMenuItemList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxMenuItemList* obj);
	typedef wxMenuItemList parent_t;
	typedef wxMenuItemList base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxScopedCharTypeBuffer< char >
template<>
class LunaTraits< wxScopedCharTypeBuffer< char > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxScopedCharTypeBuffer< char >* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxScopedCharTypeBuffer< char >* obj);
	typedef wxScopedCharTypeBuffer< char > parent_t;
	typedef wxScopedCharTypeBuffer< char > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxPGCellData
template<>
class LunaTraits< wxPGCellData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGCellData* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGCellData* obj);
	typedef wxPGCellData parent_t;
	typedef wxPGCellData base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxPGWindowList
template<>
class LunaTraits< wxPGWindowList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGWindowList* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGWindowList* obj);
	typedef wxPGWindowList parent_t;
	typedef wxPGWindowList base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxPGCellRenderer
template<>
class LunaTraits< wxPGCellRenderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGCellRenderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGCellRenderer* obj);
	typedef wxPGCellRenderer parent_t;
	typedef wxPGCellRenderer base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxPGEditorDialogAdapter
template<>
class LunaTraits< wxPGEditorDialogAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxPGEditorDialogAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxPGEditorDialogAdapter* obj);
	typedef wxPGEditorDialogAdapter parent_t;
	typedef wxPGEditorDialogAdapter base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxRibbonToolBarToolBase
template<>
class LunaTraits< wxRibbonToolBarToolBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxRibbonToolBarToolBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxRibbonToolBarToolBase* obj);
	typedef wxRibbonToolBarToolBase parent_t;
	typedef wxRibbonToolBarToolBase base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxSplashScreenWindow
template<>
class LunaTraits< wxSplashScreenWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxSplashScreenWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxSplashScreenWindow* obj);
	typedef wxSplashScreenWindow parent_t;
	typedef wxSplashScreenWindow base_t;
	static luna_ConverterType converters[];
};

// Mapped type: wxToolBarBase
template<>
class LunaTraits< wxToolBarBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static wxToolBarBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(wxToolBarBase* obj);
	typedef wxToolBarBase parent_t;
	typedef wxToolBarBase base_t;
	static luna_ConverterType converters[];
};


// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< int >
template<>
class LunaTraits< std::vector< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< int >* obj);
	typedef std::vector< int > parent_t;
	typedef std::vector< int > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: sgt::LogManager::LogHandler
template<>
class LunaTraits< sgt::LogManager::LogHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::LogManager::LogHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::LogManager::LogHandler* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::LogManager::LogHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 2231045 > {
public:
	typedef HWND type;
	
};

template<>
class LunaType< 81056638 > {
public:
	typedef wxEventFilter type;
	
};

template<>
class LunaType< 56813631 > {
public:
	typedef wxObject type;
	
};

template<>
class LunaType< 53506535 > {
public:
	typedef wxTrackable type;
	
};

template<>
class LunaType< 34636380 > {
public:
	typedef wxAboutDialogInfo type;
	
};

template<>
class LunaType< 8554277 > {
public:
	typedef wxAcceleratorEntry type;
	
};

template<>
class LunaType< 87852021 > {
public:
	typedef wxAffineMatrix2D type;
	
};

template<>
class LunaType< 74549152 > {
public:
	typedef wxAffineMatrix2DBase type;
	
};

template<>
class LunaType< 89440075 > {
public:
	typedef wxAppTraits type;
	
};

template<>
class LunaType< 25535502 > {
public:
	typedef wxArrayDouble type;
	
};

template<>
class LunaType< 47342076 > {
public:
	typedef wxArrayInt type;
	
};

template<>
class LunaType< 67694453 > {
public:
	typedef wxArrayLong type;
	
};

template<>
class LunaType< 81664985 > {
public:
	typedef wxArrayPtrVoid type;
	
};

template<>
class LunaType< 4785319 > {
public:
	typedef wxArrayShort type;
	
};

template<>
class LunaType< 59507769 > {
public:
	typedef wxArrayString type;
	
};

template<>
class LunaType< 99349677 > {
public:
	typedef wxArrayTreeItemIds type;
	
};

template<>
class LunaType< 19206291 > {
public:
	typedef wxAuiToolBarArt type;
	
};

template<>
class LunaType< 55065598 > {
public:
	typedef wxAuiDockArt type;
	
};

template<>
class LunaType< 14187710 > {
public:
	typedef wxWithImages type;
	
};

template<>
class LunaType< 43006525 > {
public:
	typedef wxAuiNotebookPage type;
	
};

template<>
class LunaType< 39809356 > {
public:
	typedef wxAuiNotebookPageArray type;
	
};

template<>
class LunaType< 42930508 > {
public:
	typedef wxAuiPaneInfo type;
	
};

template<>
class LunaType< 87205471 > {
public:
	typedef wxAuiPaneInfoArray type;
	
};

template<>
class LunaType< 24264105 > {
public:
	typedef wxAuiTabArt type;
	
};

template<>
class LunaType< 95634835 > {
public:
	typedef wxAuiToolBarItem type;
	
};

template<>
class LunaType< 29562974 > {
public:
	typedef wxAuiToolBarItemArray type;
	
};

template<>
class LunaType< 69784830 > {
public:
	typedef wxItemContainerImmutable type;
	
};

template<>
class LunaType< 54144136 > {
public:
	typedef wxTextEntry type;
	
};

template<>
class LunaType< 55398761 > {
public:
	typedef wxDataObject type;
	
};

template<>
class LunaType< 20060012 > {
public:
	typedef wxList type;
	
};

template<>
class LunaType< 96774859 > {
public:
	typedef wxBusyCursor type;
	
};

template<>
class LunaType< 71864441 > {
public:
	typedef wxBusyInfo type;
	
};

template<>
class LunaType< 34465170 > {
public:
	typedef wxCalendarDateAttr type;
	
};

template<>
class LunaType< 13309003 > {
public:
	typedef wxCaret type;
	
};

template<>
class LunaType< 96106697 > {
public:
	typedef wxClassInfo type;
	
};

template<>
class LunaType< 50457573 > {
public:
	typedef wxClientData type;
	
};

template<>
class LunaType< 96494917 > {
public:
	typedef wxClientDataContainer type;
	
};

template<>
class LunaType< 62727294 > {
public:
	typedef wxCmdLineEntryDesc type;
	
};

template<>
class LunaType< 87987501 > {
public:
	typedef wxCmdLineParser type;
	
};

template<>
class LunaType< 52531141 > {
public:
	typedef wxColourDatabase type;
	
};

template<>
class LunaType< 62870644 > {
public:
	typedef wxComboCtrlFeatures type;
	
};

template<>
class LunaType< 7956593 > {
public:
	typedef wxComboPopup type;
	
};

template<>
class LunaType< 34092478 > {
public:
	typedef wxCondition type;
	
};

template<>
class LunaType< 70518091 > {
public:
	typedef wxConfigPathChanger type;
	
};

template<>
class LunaType< 13306988 > {
public:
	typedef wxConvAuto type;
	
};

template<>
class LunaType< 50835119 > {
public:
	typedef wxCriticalSection type;
	
};

template<>
class LunaType< 74790888 > {
public:
	typedef wxCriticalSectionLocker type;
	
};

template<>
class LunaType< 98259140 > {
public:
	typedef wxCSConv type;
	
};

template<>
class LunaType< 9988153 > {
public:
	typedef wxDataFormat type;
	
};

template<>
class LunaType< 72882318 > {
public:
	typedef wxDataInputStream type;
	
};

template<>
class LunaType< 14563958 > {
public:
	typedef wxDataObjectBase type;
	
};

template<>
class LunaType< 26887015 > {
public:
	typedef wxDataOutputStream type;
	
};

template<>
class LunaType< 185523 > {
public:
	typedef wxHeaderColumn type;
	
};

template<>
class LunaType< 66533182 > {
public:
	typedef wxDataViewModel type;
	
};

template<>
class LunaType< 11709329 > {
public:
	typedef wxDataViewItem type;
	
};

template<>
class LunaType< 60705462 > {
public:
	typedef wxDataViewItemArray type;
	
};

template<>
class LunaType< 11637659 > {
public:
	typedef wxDataViewItemAttr type;
	
};

template<>
class LunaType< 90806294 > {
public:
	typedef wxDataViewModelNotifier type;
	
};

template<>
class LunaType< 57474092 > {
public:
	typedef wxDateSpan type;
	
};

template<>
class LunaType< 57497519 > {
public:
	typedef wxDateTime type;
	
};

template<>
class LunaType< 62164632 > {
public:
	typedef wxDateTime::Tm type;
	
};

template<>
class LunaType< 6204115 > {
public:
	typedef wxDateTimeHolidayAuthority type;
	
};

template<>
class LunaType< 97008810 > {
public:
	typedef wxDateTimeWorkDays type;
	
};

template<>
class LunaType< 15629306 > {
public:
	typedef wxDCBrushChanger type;
	
};

template<>
class LunaType< 36406952 > {
public:
	typedef wxDCClipper type;
	
};

template<>
class LunaType< 98089914 > {
public:
	typedef wxDCFontChanger type;
	
};

template<>
class LunaType< 9382812 > {
public:
	typedef wxDCPenChanger type;
	
};

template<>
class LunaType< 42501466 > {
public:
	typedef wxDCTextColourChanger type;
	
};

template<>
class LunaType< 18398493 > {
public:
	typedef wxRendererNative type;
	
};

template<>
class LunaType< 64729109 > {
public:
	typedef wxDialogLayoutAdapter type;
	
};

template<>
class LunaType< 12907201 > {
public:
	typedef wxDialUpManager type;
	
};

template<>
class LunaType< 13542631 > {
public:
	typedef wxDir type;
	
};

template<>
class LunaType< 40425950 > {
public:
	typedef wxDirTraverser type;
	
};

template<>
class LunaType< 7734307 > {
public:
	typedef wxDisplay type;
	
};

template<>
class LunaType< 78094326 > {
public:
	typedef wxDropSource type;
	
};

template<>
class LunaType< 93694316 > {
public:
	typedef wxDropTarget type;
	
};

template<>
class LunaType< 46471472 > {
public:
	typedef wxDynamicLibrary type;
	
};

template<>
class LunaType< 26609032 > {
public:
	typedef wxDynamicLibraryDetails type;
	
};

template<>
class LunaType< 91195009 > {
public:
	typedef wxEventLoopActivator type;
	
};

template<>
class LunaType< 77241040 > {
public:
	typedef wxEventLoopBase type;
	
};

template<>
class LunaType< 57480074 > {
public:
	typedef wxExecuteEnv type;
	
};

template<>
class LunaType< 15941327 > {
public:
	typedef wxHelpController type;
	
};

template<>
class LunaType< 15266762 > {
public:
	typedef wxFFile type;
	
};

template<>
class LunaType< 19881034 > {
public:
	typedef wxFile type;
	
};

template<>
class LunaType< 53530938 > {
public:
	typedef wxFileName type;
	
};

template<>
class LunaType< 42502497 > {
public:
	typedef wxTranslationsLoader type;
	
};

template<>
class LunaType< 53732841 > {
public:
	typedef wxFileType type;
	
};

template<>
class LunaType< 3858360 > {
public:
	typedef wxFileTypeInfo type;
	
};

template<>
class LunaType< 75930373 > {
public:
	typedef wxFontEnumerator type;
	
};

template<>
class LunaType< 98248934 > {
public:
	typedef wxFontMapper type;
	
};

template<>
class LunaType< 63990346 > {
public:
	typedef wxFontMetrics type;
	
};

template<>
class LunaType< 8757657 > {
public:
	typedef wxFSVolume type;
	
};

template<>
class LunaType< 3425779 > {
public:
	typedef wxGBPosition type;
	
};

template<>
class LunaType< 97553085 > {
public:
	typedef wxGBSpan type;
	
};

template<>
class LunaType< 48683754 > {
public:
	typedef wxGraphicsGradientStop type;
	
};

template<>
class LunaType< 9196144 > {
public:
	typedef wxGraphicsGradientStops type;
	
};

template<>
class LunaType< 25758569 > {
public:
	typedef wxGridCellAttr type;
	
};

template<>
class LunaType< 53399133 > {
public:
	typedef wxGridCellEditor type;
	
};

template<>
class LunaType< 96062845 > {
public:
	typedef wxGridCellRenderer type;
	
};

template<>
class LunaType< 6476046 > {
public:
	typedef wxGridCellCoords type;
	
};

template<>
class LunaType< 29503865 > {
public:
	typedef wxGridCornerHeaderRenderer type;
	
};

template<>
class LunaType< 73467241 > {
public:
	typedef wxGridSizesInfo type;
	
};

template<>
class LunaType< 17833639 > {
public:
	typedef wxGridUpdateLocker type;
	
};

template<>
class LunaType< 67488995 > {
public:
	typedef wxHeaderButtonParams type;
	
};

template<>
class LunaType< 7267466 > {
public:
	typedef wxHelpProvider type;
	
};

template<>
class LunaType< 94004845 > {
public:
	typedef wxVarScrollHelperBase type;
	
};

template<>
class LunaType< 14199711 > {
public:
	typedef wxHtmlHelpController type;
	
};

template<>
class LunaType< 51847095 > {
public:
	typedef wxHtmlModalHelp type;
	
};

template<>
class LunaType< 65918681 > {
public:
	typedef wxHtmlParser type;
	
};

template<>
class LunaType< 10696080 > {
public:
	typedef wxHtmlRenderingInfo type;
	
};

template<>
class LunaType< 41010643 > {
public:
	typedef wxHtmlRenderingStyle type;
	
};

template<>
class LunaType< 66986009 > {
public:
	typedef wxHtmlTag type;
	
};

template<>
class LunaType< 82682189 > {
public:
	typedef wxIconLocation type;
	
};

template<>
class LunaType< 71701647 > {
public:
	typedef wxIdManager type;
	
};

template<>
class LunaType< 41631892 > {
public:
	typedef wxImage::HSVValue type;
	
};

template<>
class LunaType< 45106465 > {
public:
	typedef wxImage::RGBValue type;
	
};

template<>
class LunaType< 75442299 > {
public:
	typedef wxImageHistogram type;
	
};

template<>
class LunaType< 56719609 > {
public:
	typedef wxInitializer type;
	
};

template<>
class LunaType< 92036952 > {
public:
	typedef wxKeyboardState type;
	
};

template<>
class LunaType< 23681138 > {
public:
	typedef wxLanguageInfo type;
	
};

template<>
class LunaType< 82275018 > {
public:
	typedef wxLinuxDistributionInfo type;
	
};

template<>
class LunaType< 87674876 > {
public:
	typedef wxListItemAttr type;
	
};

template<>
class LunaType< 82719842 > {
public:
	typedef wxLocale type;
	
};

template<>
class LunaType< 13550494 > {
public:
	typedef wxLog type;
	
};

template<>
class LunaType< 67451906 > {
public:
	typedef wxLogNull type;
	
};

template<>
class LunaType< 82105951 > {
public:
	typedef wxLogRecordInfo type;
	
};

template<>
class LunaType< 13282555 > {
public:
	typedef wxLongLong type;
	
};

template<>
class LunaType< 83648097 > {
public:
	typedef wxMatrix2D type;
	
};

template<>
class LunaType< 42086186 > {
public:
	typedef wxMessageOutput type;
	
};

template<>
class LunaType< 28045951 > {
public:
	typedef wxMimeTypesManager type;
	
};

template<>
class LunaType< 16122349 > {
public:
	typedef wxMsgCatalog type;
	
};

template<>
class LunaType< 23141959 > {
public:
	typedef wxMutex type;
	
};

template<>
class LunaType< 30993614 > {
public:
	typedef wxMutexLocker type;
	
};

template<>
class LunaType< 26059272 > {
public:
	typedef wxNativeFontInfo type;
	
};

template<>
class LunaType< 27021326 > {
public:
	typedef wxNumberFormatter type;
	
};

template<>
class LunaType< 60960840 > {
public:
	typedef wxObjectRefData type;
	
};

template<>
class LunaType< 37568612 > {
public:
	typedef wxPenList type;
	
};

template<>
class LunaType< 61208595 > {
public:
	typedef wxPersistenceManager type;
	
};

template<>
class LunaType< 84824132 > {
public:
	typedef wxPersistentObject type;
	
};

template<>
class LunaType< 69274883 > {
public:
	typedef wxPGChoices type;
	
};

template<>
class LunaType< 78254748 > {
public:
	typedef wxPGValidationInfo type;
	
};

template<>
class LunaType< 92430623 > {
public:
	typedef wxPlatformInfo type;
	
};

template<>
class LunaType< 25723480 > {
public:
	typedef wxPoint type;
	
};

template<>
class LunaType< 87062627 > {
public:
	typedef wxPoint2DDouble type;
	
};

template<>
class LunaType< 81619599 > {
public:
	typedef wxPoint2DInt type;
	
};

template<>
class LunaType< 74412068 > {
public:
	typedef wxPointList type;
	
};

template<>
class LunaType< 9908765 > {
public:
	typedef wxPosition type;
	
};

template<>
class LunaType< 54533430 > {
public:
	typedef wxPropagateOnce type;
	
};

template<>
class LunaType< 49411923 > {
public:
	typedef wxPropagationDisabler type;
	
};

template<>
class LunaType< 61417741 > {
public:
	typedef wxPropertyGridInterface type;
	
};

template<>
class LunaType< 65784637 > {
public:
	typedef wxPropertyGridHitTestResult type;
	
};

template<>
class LunaType< 45711597 > {
public:
	typedef wxProtocolLog type;
	
};

template<>
class LunaType< 40755714 > {
public:
	typedef wxRealPoint type;
	
};

template<>
class LunaType< 9606071 > {
public:
	typedef wxRearrangeCtrl type;
	
};

template<>
class LunaType< 49400246 > {
public:
	typedef wxRearrangeDialog type;
	
};

template<>
class LunaType< 20234418 > {
public:
	typedef wxRect type;
	
};

template<>
class LunaType< 21099623 > {
public:
	typedef wxRect2DDouble type;
	
};

template<>
class LunaType< 15778700 > {
public:
	typedef wxRect2DInt type;
	
};

template<>
class LunaType< 25025537 > {
public:
	typedef wxRecursionGuard type;
	
};

template<>
class LunaType< 7196007 > {
public:
	typedef wxRecursionGuardFlag type;
	
};

template<>
class LunaType< 27269423 > {
public:
	typedef wxRegEx type;
	
};

template<>
class LunaType< 45357347 > {
public:
	typedef wxRegKey type;
	
};

template<>
class LunaType< 83336883 > {
public:
	typedef wxRendererVersion type;
	
};

template<>
class LunaType< 48201749 > {
public:
	typedef wxRibbonArtProvider type;
	
};

template<>
class LunaType< 11008561 > {
public:
	typedef wxRibbonButtonBarButtonBase type;
	
};

template<>
class LunaType< 56057674 > {
public:
	typedef wxRibbonGalleryItem type;
	
};

template<>
class LunaType< 51496344 > {
public:
	typedef wxRibbonPageTabInfo type;
	
};

template<>
class LunaType< 76085772 > {
public:
	typedef wxRibbonPageTabInfoArray type;
	
};

template<>
class LunaType< 86910257 > {
public:
	typedef wxRichMessageDialog type;
	
};

template<>
class LunaType< 37117058 > {
public:
	typedef wxTextAttr type;
	
};

template<>
class LunaType< 98505670 > {
public:
	typedef wxRichTextContextMenuPropertiesInfo type;
	
};

template<>
class LunaType< 98441097 > {
public:
	typedef wxRichTextFloatCollector type;
	
};

template<>
class LunaType< 86518173 > {
public:
	typedef wxRichTextLine type;
	
};

template<>
class LunaType< 94771900 > {
public:
	typedef wxRichTextObjectAddress type;
	
};

template<>
class LunaType< 87365934 > {
public:
	typedef wxRichTextRange type;
	
};

template<>
class LunaType< 79991100 > {
public:
	typedef wxRichTextRangeArray type;
	
};

template<>
class LunaType< 72599091 > {
public:
	typedef wxRichTextSelection type;
	
};

template<>
class LunaType< 31601295 > {
public:
	typedef wxRichTextVariantArray type;
	
};

template<>
class LunaType< 32152960 > {
public:
	typedef wxRichToolTip type;
	
};

template<>
class LunaType< 96188030 > {
public:
	typedef wxSemaphore type;
	
};

template<>
class LunaType< 74355515 > {
public:
	typedef wxServer type;
	
};

template<>
class LunaType< 83137266 > {
public:
	typedef wxSingleInstanceChecker type;
	
};

template<>
class LunaType< 20268751 > {
public:
	typedef wxSize type;
	
};

template<>
class LunaType< 85412581 > {
public:
	typedef wxSizerFlags type;
	
};

template<>
class LunaType< 3273090 > {
public:
	typedef wxSplitterRenderParams type;
	
};

template<>
class LunaType< 95458903 > {
public:
	typedef wxStackFrame type;
	
};

template<>
class LunaType< 30547185 > {
public:
	typedef wxStackWalker type;
	
};

template<>
class LunaType< 90497708 > {
public:
	typedef wxStandardPaths type;
	
};

template<>
class LunaType< 24000996 > {
public:
	typedef wxStatusBarPane type;
	
};

template<>
class LunaType< 37809017 > {
public:
	typedef wxStdInputStream type;
	
};

template<>
class LunaType< 63608358 > {
public:
	typedef wxStdOutputStream type;
	
};

template<>
class LunaType< 66515423 > {
public:
	typedef wxStopWatch type;
	
};

template<>
class LunaType< 62616014 > {
public:
	typedef wxStreamToTextRedirector type;
	
};

template<>
class LunaType< 88196105 > {
public:
	typedef wxString type;
	
};

template<>
class LunaType< 61702490 > {
public:
	typedef wxTarClassFactory type;
	
};

template<>
class LunaType< 73261869 > {
public:
	typedef wxTarEntry type;
	
};

template<>
class LunaType< 47912811 > {
public:
	typedef wxTarInputStream type;
	
};

template<>
class LunaType< 35730089 > {
public:
	typedef wxTarOutputStream type;
	
};

template<>
class LunaType< 18640466 > {
public:
	typedef wxTempFile type;
	
};

template<>
class LunaType< 59699915 > {
public:
	typedef wxTextAttrBorder type;
	
};

template<>
class LunaType< 50697174 > {
public:
	typedef wxTextAttrBorders type;
	
};

template<>
class LunaType< 25580455 > {
public:
	typedef wxTextAttrDimension type;
	
};

template<>
class LunaType< 6148370 > {
public:
	typedef wxTextAttrDimensionConverter type;
	
};

template<>
class LunaType< 92994080 > {
public:
	typedef wxTextAttrDimensions type;
	
};

template<>
class LunaType< 81312281 > {
public:
	typedef wxTextAttrSize type;
	
};

template<>
class LunaType< 860077 > {
public:
	typedef wxTextBoxAttr type;
	
};

template<>
class LunaType< 92690309 > {
public:
	typedef wxTextCompleter type;
	
};

template<>
class LunaType< 37255181 > {
public:
	typedef wxTextFile type;
	
};

template<>
class LunaType< 88780389 > {
public:
	typedef wxTextInputStream type;
	
};

template<>
class LunaType< 48327447 > {
public:
	typedef wxTextOutputStream type;
	
};

template<>
class LunaType< 4477471 > {
public:
	typedef wxTextWrapper type;
	
};

template<>
class LunaType< 5738746 > {
public:
	typedef wxThread type;
	
};

template<>
class LunaType< 76382729 > {
public:
	typedef wxThreadHelper type;
	
};

template<>
class LunaType< 59614077 > {
public:
	typedef wxTimerRunner type;
	
};

template<>
class LunaType< 58889849 > {
public:
	typedef wxTimeSpan type;
	
};

template<>
class LunaType< 98652564 > {
public:
	typedef wxTipProvider type;
	
};

template<>
class LunaType< 49669417 > {
public:
	typedef wxToolBarToolBase type;
	
};

template<>
class LunaType< 13863894 > {
public:
	typedef wxTransform2D type;
	
};

template<>
class LunaType< 55781891 > {
public:
	typedef wxTranslations type;
	
};

template<>
class LunaType< 28400299 > {
public:
	typedef wxTreeItemId type;
	
};

template<>
class LunaType< 24465332 > {
public:
	typedef wxTreeItemIdValue type;
	
};

template<>
class LunaType< 75268455 > {
public:
	typedef wxTreeListItem type;
	
};

template<>
class LunaType< 87583976 > {
public:
	typedef wxTreeListItemComparator type;
	
};

template<>
class LunaType< 96229975 > {
public:
	typedef wxUIActionSimulator type;
	
};

template<>
class LunaType< 888873 > {
public:
	typedef wxULongLong type;
	
};

template<>
class LunaType< 27861770 > {
public:
	typedef wxUniChar type;
	
};

template<>
class LunaType< 29988470 > {
public:
	typedef wxUniCharRef type;
	
};

template<>
class LunaType< 66435026 > {
public:
	typedef wxUString type;
	
};

template<>
class LunaType< 72816518 > {
public:
	typedef wxVersionInfo type;
	
};

template<>
class LunaType< 44802589 > {
public:
	typedef wxVideoMode type;
	
};

template<>
class LunaType< 97172082 > {
public:
	typedef wxVisualAttributes type;
	
};

template<>
class LunaType< 851961 > {
public:
	typedef wxWindowDisabler type;
	
};

template<>
class LunaType< 69362373 > {
public:
	typedef wxWindowUpdateLocker type;
	
};

template<>
class LunaType< 23469565 > {
public:
	typedef wxXLocale type;
	
};

template<>
class LunaType< 23837631 > {
public:
	typedef wxXmlAttribute type;
	
};

template<>
class LunaType< 64848530 > {
public:
	typedef wxXmlNode type;
	
};

template<>
class LunaType< 19869602 > {
public:
	typedef wxZipClassFactory type;
	
};

template<>
class LunaType< 91704129 > {
public:
	typedef wxZipEntry type;
	
};

template<>
class LunaType< 91321549 > {
public:
	typedef wxZipInputStream type;
	
};

template<>
class LunaType< 49666072 > {
public:
	typedef wxZipNotifier type;
	
};

template<>
class LunaType< 22640587 > {
public:
	typedef wxZipOutputStream type;
	
};

template<>
class LunaType< 33321875 > {
public:
	typedef wxTreeListItems type;
	
};

template<>
class LunaType< 5676023 > {
public:
	typedef wxVector< wxTreeListItem > type;
	
};

template<>
class LunaType< 85025491 > {
public:
	typedef wxWindowList type;
	
};

template<>
class LunaType< 53064125 > {
public:
	typedef wxTimerImpl type;
	
};

template<>
class LunaType< 82729955 > {
public:
	typedef wxSizerItemList type;
	
};

template<>
class LunaType< 4284904 > {
public:
	typedef wxArrayVideoModes type;
	
};

template<>
class LunaType< 44808876 > {
public:
	typedef wxMDIClientWindowBase type;
	
};

template<>
class LunaType< 75547918 > {
public:
	typedef wxDynamicLibraryDetailsArray type;
	
};

template<>
class LunaType< 713228 > {
public:
	typedef wxFontEncodingArray type;
	
};

template<>
class LunaType< 63024827 > {
public:
	typedef wxDirFilterListCtrl type;
	
};

template<>
class LunaType< 30821760 > {
public:
	typedef wxGridCellCoordsArray type;
	
};

template<>
class LunaType< 30920503 > {
public:
	typedef wxHtmlBookRecArray type;
	
};

template<>
class LunaType< 74292895 > {
public:
	typedef wxHtmlHelpDataItems type;
	
};

template<>
class LunaType< 40987827 > {
public:
	typedef wxHtmlRenderingState type;
	
};

template<>
class LunaType< 99456016 > {
public:
	typedef sockaddr type;
	
};

template<>
class LunaType< 4556242 > {
public:
	typedef wxMenuItemList type;
	
};

template<>
class LunaType< 59324013 > {
public:
	typedef wxScopedCharTypeBuffer< char > type;
	
};

template<>
class LunaType< 966244 > {
public:
	typedef wxPGCellData type;
	
};

template<>
class LunaType< 58315813 > {
public:
	typedef wxPGWindowList type;
	
};

template<>
class LunaType< 7175101 > {
public:
	typedef wxPGCellRenderer type;
	
};

template<>
class LunaType< 86435384 > {
public:
	typedef wxPGEditorDialogAdapter type;
	
};

template<>
class LunaType< 53514976 > {
public:
	typedef wxRibbonToolBarToolBase type;
	
};

template<>
class LunaType< 86566893 > {
public:
	typedef wxSplashScreenWindow type;
	
};

template<>
class LunaType< 72996730 > {
public:
	typedef wxToolBarBase type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 92299338 > {
public:
	typedef std::vector< int > type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 84005267 > {
public:
	typedef sgt::LogManager::LogHandler type;
	
};


#endif

