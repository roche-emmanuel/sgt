
enum wxAcceleratorEntryFlags
{
    wxACCEL_NORMAL  = 0x0000,   // no modifiers
    wxACCEL_ALT     = 0x0001,   // hold Alt key down
    wxACCEL_CTRL    = 0x0002,   // hold Ctrl key down
    wxACCEL_SHIFT   = 0x0004,   // hold Shift key down
#if defined(__WXMAC__) || defined(__WXCOCOA__)
    wxACCEL_RAW_CTRL= 0x0008,   // 
#else
    wxACCEL_RAW_CTRL= wxACCEL_CTRL,
#endif
    wxACCEL_CMD     = wxACCEL_CTRL
};


enum wxAnimationDisposal
{
    // No disposal specified. The decoder is not required to take any action.
    wxANIM_UNSPECIFIED = -1,

    // Do not dispose. The graphic is to be left in place.
    wxANIM_DONOTREMOVE = 0,

    // Restore to background color. The area used by the graphic must be
    // restored to the background color.
    wxANIM_TOBACKGROUND = 1,

    // Restore to previous. The decoder is required to restore the area
    // overwritten by the graphic with what was there prior to rendering the graphic.
    wxANIM_TOPREVIOUS = 2
};


enum wxAnimationType
{
    wxANIMATION_TYPE_INVALID,
    wxANIMATION_TYPE_GIF,
    wxANIMATION_TYPE_ANI,

    wxANIMATION_TYPE_ANY
};


enum
{
    WX_ANY_VALUE_BUFFER_SIZE = 16
};


enum
{
    wxPRINT_WINDOWS = 1,
    wxPRINT_POSTSCRIPT = 2
};


enum wxAuiToolBarStyle
{
    wxAUI_TB_TEXT          = 1 << 0,
    wxAUI_TB_NO_TOOLTIPS   = 1 << 1,
    wxAUI_TB_NO_AUTORESIZE = 1 << 2,
    wxAUI_TB_GRIPPER       = 1 << 3,
    wxAUI_TB_OVERFLOW      = 1 << 4,
    // using this style forces the toolbar to be vertical and
    // be only dockable to the left or right sides of the window
    // whereas by default it can be horizontal or vertical and
    // be docked anywhere
    wxAUI_TB_VERTICAL      = 1 << 5,
    wxAUI_TB_HORZ_LAYOUT   = 1 << 6,
    // analogous to wxAUI_TB_VERTICAL, but forces the toolbar
    // to be horizontal
    wxAUI_TB_HORIZONTAL    = 1 << 7,
    wxAUI_TB_HORZ_TEXT     = (wxAUI_TB_HORZ_LAYOUT | wxAUI_TB_TEXT),
    wxAUI_ORIENTATION_MASK = (wxAUI_TB_VERTICAL | wxAUI_TB_HORIZONTAL),
    wxAUI_TB_DEFAULT_STYLE = 0
};


enum wxAuiToolBarArtSetting
{
    wxAUI_TBART_SEPARATOR_SIZE = 0,
    wxAUI_TBART_GRIPPER_SIZE = 1,
    wxAUI_TBART_OVERFLOW_SIZE = 2
};


enum wxAuiToolBarToolTextOrientation
{
    wxAUI_TBTOOL_TEXT_LEFT = 0,     // unused/unimplemented
    wxAUI_TBTOOL_TEXT_RIGHT = 1,
    wxAUI_TBTOOL_TEXT_TOP = 2,      // unused/unimplemented
    wxAUI_TBTOOL_TEXT_BOTTOM = 3
};


enum wxAuiNotebookOption
{
    wxAUI_NB_TOP                 = 1 << 0,
    wxAUI_NB_LEFT                = 1 << 1,  // not implemented yet
    wxAUI_NB_RIGHT               = 1 << 2,  // not implemented yet
    wxAUI_NB_BOTTOM              = 1 << 3,
    wxAUI_NB_TAB_SPLIT           = 1 << 4,
    wxAUI_NB_TAB_MOVE            = 1 << 5,
    wxAUI_NB_TAB_EXTERNAL_MOVE   = 1 << 6,
    wxAUI_NB_TAB_FIXED_WIDTH     = 1 << 7,
    wxAUI_NB_SCROLL_BUTTONS      = 1 << 8,
    wxAUI_NB_WINDOWLIST_BUTTON   = 1 << 9,
    wxAUI_NB_CLOSE_BUTTON        = 1 << 10,
    wxAUI_NB_CLOSE_ON_ACTIVE_TAB = 1 << 11,
    wxAUI_NB_CLOSE_ON_ALL_TABS   = 1 << 12,
    wxAUI_NB_MIDDLE_CLICK_CLOSE  = 1 << 13,

    wxAUI_NB_DEFAULT_STYLE = wxAUI_NB_TOP |
                             wxAUI_NB_TAB_SPLIT |
                             wxAUI_NB_TAB_MOVE |
                             wxAUI_NB_SCROLL_BUTTONS |
                             wxAUI_NB_CLOSE_ON_ACTIVE_TAB |
                             wxAUI_NB_MIDDLE_CLICK_CLOSE
};


enum wxAuiManagerDock
{
    wxAUI_DOCK_NONE = 0,
    wxAUI_DOCK_TOP = 1,
    wxAUI_DOCK_RIGHT = 2,
    wxAUI_DOCK_BOTTOM = 3,
    wxAUI_DOCK_LEFT = 4,
    wxAUI_DOCK_CENTER = 5,
    wxAUI_DOCK_CENTRE = wxAUI_DOCK_CENTER
};


enum wxAuiManagerOption
{
    wxAUI_MGR_ALLOW_FLOATING           = 1 << 0,
    wxAUI_MGR_ALLOW_ACTIVE_PANE        = 1 << 1,
    wxAUI_MGR_TRANSPARENT_DRAG         = 1 << 2,
    wxAUI_MGR_TRANSPARENT_HINT         = 1 << 3,
    wxAUI_MGR_VENETIAN_BLINDS_HINT     = 1 << 4,
    wxAUI_MGR_RECTANGLE_HINT           = 1 << 5,
    wxAUI_MGR_HINT_FADE                = 1 << 6,
    wxAUI_MGR_NO_VENETIAN_BLINDS_FADE  = 1 << 7,
    wxAUI_MGR_LIVE_RESIZE              = 1 << 8,

    wxAUI_MGR_DEFAULT = wxAUI_MGR_ALLOW_FLOATING |
                        wxAUI_MGR_TRANSPARENT_HINT |
                        wxAUI_MGR_HINT_FADE |
                        wxAUI_MGR_NO_VENETIAN_BLINDS_FADE
};


enum wxAuiPaneDockArtSetting
{
    wxAUI_DOCKART_SASH_SIZE = 0,
    wxAUI_DOCKART_CAPTION_SIZE = 1,
    wxAUI_DOCKART_GRIPPER_SIZE = 2,
    wxAUI_DOCKART_PANE_BORDER_SIZE = 3,
    wxAUI_DOCKART_PANE_BUTTON_SIZE = 4,
    wxAUI_DOCKART_BACKGROUND_COLOUR = 5,
    wxAUI_DOCKART_SASH_COLOUR = 6,
    wxAUI_DOCKART_ACTIVE_CAPTION_COLOUR = 7,
    wxAUI_DOCKART_ACTIVE_CAPTION_GRADIENT_COLOUR = 8,
    wxAUI_DOCKART_INACTIVE_CAPTION_COLOUR = 9,
    wxAUI_DOCKART_INACTIVE_CAPTION_GRADIENT_COLOUR = 10,
    wxAUI_DOCKART_ACTIVE_CAPTION_TEXT_COLOUR = 11,
    wxAUI_DOCKART_INACTIVE_CAPTION_TEXT_COLOUR = 12,
    wxAUI_DOCKART_BORDER_COLOUR = 13,
    wxAUI_DOCKART_GRIPPER_COLOUR = 14,
    wxAUI_DOCKART_CAPTION_FONT = 15,
    wxAUI_DOCKART_GRADIENT_TYPE = 16
};


enum wxAuiPaneDockArtGradients
{
    wxAUI_GRADIENT_NONE = 0,
    wxAUI_GRADIENT_VERTICAL = 1,
    wxAUI_GRADIENT_HORIZONTAL = 2
};


enum wxAuiPaneButtonState
{
    wxAUI_BUTTON_STATE_NORMAL   = 0,
    wxAUI_BUTTON_STATE_HOVER    = 1 << 1,
    wxAUI_BUTTON_STATE_PRESSED  = 1 << 2,
    wxAUI_BUTTON_STATE_DISABLED = 1 << 3,
    wxAUI_BUTTON_STATE_HIDDEN   = 1 << 4,
    wxAUI_BUTTON_STATE_CHECKED  = 1 << 5
};


enum wxAuiButtonId
{
    wxAUI_BUTTON_CLOSE = 101,
    wxAUI_BUTTON_MAXIMIZE_RESTORE = 102,
    wxAUI_BUTTON_MINIMIZE = 103,
    wxAUI_BUTTON_PIN = 104,
    wxAUI_BUTTON_OPTIONS = 105,
    wxAUI_BUTTON_WINDOWLIST = 106,
    wxAUI_BUTTON_LEFT = 107,
    wxAUI_BUTTON_RIGHT = 108,
    wxAUI_BUTTON_UP = 109,
    wxAUI_BUTTON_DOWN = 110,
    wxAUI_BUTTON_CUSTOM1 = 201,
    wxAUI_BUTTON_CUSTOM2 = 202,
    wxAUI_BUTTON_CUSTOM3 = 203
};


enum wxAuiPaneInsertLevel
{
    wxAUI_INSERT_PANE = 0,
    wxAUI_INSERT_ROW = 1,
    wxAUI_INSERT_DOCK = 2
};


enum wxBase64DecodeMode
{
    // normal behaviour: stop at any invalid characters
    wxBase64DecodeMode_Strict,

    // skip whitespace characters
    wxBase64DecodeMode_SkipWS,

    // the most lenient behaviour: simply ignore all invalid characters
    wxBase64DecodeMode_Relaxed
};


enum
{
    wxBK_HITTEST_NOWHERE = 1,   // not on tab
    wxBK_HITTEST_ONICON  = 2,   // on icon
    wxBK_HITTEST_ONLABEL = 4,   // on label
    wxBK_HITTEST_ONITEM  = wxBK_HITTEST_ONICON | wxBK_HITTEST_ONLABEL,
    wxBK_HITTEST_ONPAGE  = 8    // not on tab control, but over the selected page
};


enum wxBrushStyle
{
    wxBRUSHSTYLE_INVALID = -1,

    wxBRUSHSTYLE_SOLID = wxSOLID,
    wxBRUSHSTYLE_TRANSPARENT = wxTRANSPARENT,
    wxBRUSHSTYLE_STIPPLE_MASK_OPAQUE = wxSTIPPLE_MASK_OPAQUE,
    wxBRUSHSTYLE_STIPPLE_MASK = wxSTIPPLE_MASK,
    wxBRUSHSTYLE_STIPPLE = wxSTIPPLE,
    wxBRUSHSTYLE_BDIAGONAL_HATCH = wxBDIAGONAL_HATCH,
    wxBRUSHSTYLE_CROSSDIAG_HATCH = wxCROSSDIAG_HATCH,
    wxBRUSHSTYLE_FDIAGONAL_HATCH = wxFDIAGONAL_HATCH,
    wxBRUSHSTYLE_CROSS_HATCH = wxCROSS_HATCH,
    wxBRUSHSTYLE_HORIZONTAL_HATCH = wxHORIZONTAL_HATCH,
    wxBRUSHSTYLE_VERTICAL_HATCH = wxVERTICAL_HATCH,
    wxBRUSHSTYLE_FIRST_HATCH = wxFIRST_HATCH,
    wxBRUSHSTYLE_LAST_HATCH = wxLAST_HATCH
};


enum
{
    // show Sunday as the first day of the week (default)
    wxCAL_SUNDAY_FIRST               = 0x0000,

    // show Monday as the first day of the week
    wxCAL_MONDAY_FIRST               = 0x0001,

    // highlight holidays
    wxCAL_SHOW_HOLIDAYS              = 0x0002,

    // disable the year change control, show only the month change one
    // deprecated
    wxCAL_NO_YEAR_CHANGE             = 0x0004,

    // don't allow changing neither month nor year (implies
    // wxCAL_NO_YEAR_CHANGE)
    wxCAL_NO_MONTH_CHANGE            = 0x000c,

    // use MS-style month-selection instead of combo-spin combination
    wxCAL_SEQUENTIAL_MONTH_SELECTION = 0x0010,

    // show the neighbouring weeks in the previous and next month
    wxCAL_SHOW_SURROUNDING_WEEKS     = 0x0020,

    // show week numbers on the left side of the calendar.
    wxCAL_SHOW_WEEK_NUMBERS          = 0x0040
};


enum wxCalendarHitTestResult
{
    wxCAL_HITTEST_NOWHERE,      // outside of anything
    wxCAL_HITTEST_HEADER,       // on the header (weekdays)
    wxCAL_HITTEST_DAY,          // on a day in the calendar
    wxCAL_HITTEST_INCMONTH,
    wxCAL_HITTEST_DECMONTH,
    wxCAL_HITTEST_SURROUNDING_WEEK,
    wxCAL_HITTEST_WEEK
};


enum wxCalendarDateBorder
{
    wxCAL_BORDER_NONE,          // no border (default)
    wxCAL_BORDER_SQUARE,        // a rectangular border
    wxCAL_BORDER_ROUND          // a round border
};


enum wxClientDataType
{
    wxClientData_None,    // we don't know yet because we don't have it at all
    wxClientData_Object,  // our client data is typed and we own it
    wxClientData_Void     // client data is untyped and we don't own it
};


enum wxCmdLineEntryFlags
{
    wxCMD_LINE_OPTION_MANDATORY = 0x01, // this option must be given
    wxCMD_LINE_PARAM_OPTIONAL   = 0x02, // the parameter may be omitted
    wxCMD_LINE_PARAM_MULTIPLE   = 0x04, // the parameter may be repeated
    wxCMD_LINE_OPTION_HELP      = 0x08, // this option is a help request
    wxCMD_LINE_NEEDS_SEPARATOR  = 0x10, // must have sep before the value
    wxCMD_LINE_SWITCH_NEGATABLE = 0x20  // this switch can be negated (e.g. /S-)
};


enum wxCmdLineParamType
{
    wxCMD_LINE_VAL_STRING,  // should be 0 (default)
    wxCMD_LINE_VAL_NUMBER,
    wxCMD_LINE_VAL_DATE,
    wxCMD_LINE_VAL_DOUBLE,
    wxCMD_LINE_VAL_NONE
};


enum wxCmdLineEntryType
{
    wxCMD_LINE_SWITCH,
    wxCMD_LINE_OPTION,
    wxCMD_LINE_PARAM,
    wxCMD_LINE_USAGE_TEXT,
    wxCMD_LINE_NONE         // to terminate the list
};


enum wxCmdLineSwitchState
{
    wxCMD_SWITCH_OFF = -1,  // Found but turned off/negated.
    wxCMD_SWITCH_NOT_FOUND, // Not found at all.
    wxCMD_SWITCH_ON         // Found in normal state.
};


enum wxPrintBin
{
    wxPRINTBIN_DEFAULT,

    wxPRINTBIN_ONLYONE,
    wxPRINTBIN_LOWER,
    wxPRINTBIN_MIDDLE,
    wxPRINTBIN_MANUAL,
    wxPRINTBIN_ENVELOPE,
    wxPRINTBIN_ENVMANUAL,
    wxPRINTBIN_AUTO,
    wxPRINTBIN_TRACTOR,
    wxPRINTBIN_SMALLFMT,
    wxPRINTBIN_LARGEFMT,
    wxPRINTBIN_LARGECAPACITY,
    wxPRINTBIN_CASSETTE,
    wxPRINTBIN_FORMSOURCE,

    wxPRINTBIN_USER
};


enum {
    wxC2S_NAME             = 1,   // return colour name, when possible
    wxC2S_CSS_SYNTAX       = 2,   // return colour in rgb(r,g,b) syntax
    wxC2S_HTML_SYNTAX      = 4    // return colour in #rrggbb syntax
};


enum
{
    // Double-clicking a read-only combo triggers call to popup's OnComboPopup.
    // In wxOwnerDrawnComboBox, for instance, it cycles item.
    wxCC_SPECIAL_DCLICK             = 0x0100,

    // Dropbutton acts like standard push button.
    wxCC_STD_BUTTON                 = 0x0200
};


enum
{
    // First those that can be passed to Customize.
    // It is Windows style for all flags to be clear.

    // Button is preferred outside the border (GTK style)
    wxCC_BUTTON_OUTSIDE_BORDER      = 0x0001,
    // Show popup on mouse up instead of mouse down (which is the Windows style)
    wxCC_POPUP_ON_MOUSE_UP          = 0x0002,
    // All text is not automatically selected on click
    wxCC_NO_TEXT_AUTO_SELECT        = 0x0004,
    // Drop-button stays down as long as popup is displayed.
    wxCC_BUTTON_STAYS_DOWN          = 0x0008,
    // Drop-button covers the entire control.
    wxCC_FULL_BUTTON                = 0x0010,
    // Drop-button goes over the custom-border (used under WinVista).
    wxCC_BUTTON_COVERS_BORDER       = 0x0020,

    // Internal use: signals creation is complete
    wxCC_IFLAG_CREATED              = 0x0100,
    // Internal use: really put button outside
    wxCC_IFLAG_BUTTON_OUTSIDE       = 0x0200,
    // Internal use: SetMargins has been successfully called
    wxCC_IFLAG_LEFT_MARGIN_SET      = 0x0400,
    // Internal use: Set wxTAB_TRAVERSAL to parent when popup is dismissed
    wxCC_IFLAG_PARENT_TAB_TRAVERSAL = 0x0800,
    // Internal use: Secondary popup window type should be used (if available).
    wxCC_IFLAG_USE_ALT_POPUP        = 0x1000,
    // Internal use: Skip popup animation.
    wxCC_IFLAG_DISABLE_POPUP_ANIM   = 0x2000,
    // Internal use: Drop-button is a bitmap button or has non-default size
    // (but can still be on either side of the control), regardless whether
    // specified by the platform or the application.
    wxCC_IFLAG_HAS_NONSTANDARD_BUTTON   = 0x4000
};


enum
{
    wxCC_MF_ON_BUTTON               =   0x0001, // cursor is on dropbutton area
    wxCC_MF_ON_CLICK_AREA           =   0x0002  // cursor is on dropbutton or other area
                                                // that can be clicked to show the popup.
};


enum
{
    wxCP_IFLAG_CREATED      = 0x0001 // Set by wxComboCtrlBase after Create is called
};


enum
{
    wxCONFIG_USE_LOCAL_FILE = 1,
    wxCONFIG_USE_GLOBAL_FILE = 2,
    wxCONFIG_USE_RELATIVE_PATH = 4,
    wxCONFIG_USE_NO_ESCAPE_CHARACTERS = 8,
    wxCONFIG_USE_SUBDIR = 16
};


enum wxEllipsizeFlags
{
    wxELLIPSIZE_FLAGS_NONE = 0,
    wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS = 1,
    wxELLIPSIZE_FLAGS_EXPAND_TABS = 2,

    wxELLIPSIZE_FLAGS_DEFAULT = wxELLIPSIZE_FLAGS_PROCESS_MNEMONICS |
                                wxELLIPSIZE_FLAGS_EXPAND_TABS
};


enum wxEllipsizeMode
{
    wxELLIPSIZE_NONE,
    wxELLIPSIZE_START,
    wxELLIPSIZE_MIDDLE,
    wxELLIPSIZE_END
};


enum wxBOM
{
    wxBOM_Unknown = -1,
    wxBOM_None,
    wxBOM_UTF32BE,
    wxBOM_UTF32LE,
    wxBOM_UTF16BE,
    wxBOM_UTF16LE,
    wxBOM_UTF8
};


enum wxDataViewColumnFlags
{
    wxDATAVIEW_COL_RESIZABLE     = wxCOL_RESIZABLE,
    wxDATAVIEW_COL_SORTABLE      = wxCOL_SORTABLE,
    wxDATAVIEW_COL_REORDERABLE   = wxCOL_REORDERABLE,
    wxDATAVIEW_COL_HIDDEN        = wxCOL_HIDDEN
};


enum
{
    // default style on this platform, either wxDP_SPIN or wxDP_DROPDOWN
    wxDP_DEFAULT = 0,

    // a spin control-like date picker (not supported in generic version)
    wxDP_SPIN = 1,

    // a combobox-like date picker (not supported in mac version)
    wxDP_DROPDOWN = 2,

    // always show century in the default date display (otherwise it depends on
    // the system date format which may include the century or not)
    wxDP_SHOWCENTURY = 4,

    // allow not having any valid date in the control (by default it always has
    // some date, today initially if no valid date specified in ctor)
    wxDP_ALLOWNONE = 8
};


enum wxFloodFillStyle
{
    wxFLOOD_SURFACE = 1,
    wxFLOOD_BORDER
};


enum wxMappingMode
{
    wxMM_TEXT = 1,
    wxMM_METRIC,
    wxMM_LOMETRIC,
    wxMM_TWIPS,
    wxMM_POINTS
};


enum {  wxDefaultCoord = -1 };


enum wxGeometryCentre
{
    wxCENTRE                  = 0x0001,
    wxCENTER                  = wxCENTRE
};


enum wxOrientation
{
    /* don't change the values of these elements, they are used elsewhere */
    wxHORIZONTAL              = 0x0004,
    wxVERTICAL                = 0x0008,

    wxBOTH                    = wxVERTICAL | wxHORIZONTAL,

    /*  a mask to extract orientation from the combination of flags */
    wxORIENTATION_MASK        = wxBOTH
};


enum wxDirection
{
    wxLEFT                    = 0x0010,
    wxRIGHT                   = 0x0020,
    wxUP                      = 0x0040,
    wxDOWN                    = 0x0080,

    wxTOP                     = wxUP,
    wxBOTTOM                  = wxDOWN,

    wxNORTH                   = wxUP,
    wxSOUTH                   = wxDOWN,
    wxWEST                    = wxLEFT,
    wxEAST                    = wxRIGHT,

    wxALL                     = (wxUP | wxDOWN | wxRIGHT | wxLEFT),

    /*  a mask to extract direction from the combination of flags */
    wxDIRECTION_MASK           = wxALL
};


enum wxAlignment
{
    /*
        0 is a valid wxAlignment value (both wxALIGN_LEFT and wxALIGN_TOP
        use it) so define a symbolic name for an invalid alignment value
        which can be assumed to be different from anything else
     */
    wxALIGN_INVALID           = -1,

    wxALIGN_NOT               = 0x0000,
    wxALIGN_CENTER_HORIZONTAL = 0x0100,
    wxALIGN_CENTRE_HORIZONTAL = wxALIGN_CENTER_HORIZONTAL,
    wxALIGN_LEFT              = wxALIGN_NOT,
    wxALIGN_TOP               = wxALIGN_NOT,
    wxALIGN_RIGHT             = 0x0200,
    wxALIGN_BOTTOM            = 0x0400,
    wxALIGN_CENTER_VERTICAL   = 0x0800,
    wxALIGN_CENTRE_VERTICAL   = wxALIGN_CENTER_VERTICAL,

    wxALIGN_CENTER            = (wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL),
    wxALIGN_CENTRE            = wxALIGN_CENTER,

    /*  a mask to extract alignment from the combination of flags */
    wxALIGN_MASK              = 0x0f00
};


enum wxSizerFlagBits
{
    /*
        wxADJUST_MINSIZE doesn't do anything any more but we still define
        it for compatibility. Notice that it may be also predefined (as 0,
        hopefully) in the user code in order to use it even in
        !WXWIN_COMPATIBILITY_2_8 builds so don't redefine it in such case.
     */
#if WXWIN_COMPATIBILITY_2_8 && !defined(wxADJUST_MINSIZE)
    wxADJUST_MINSIZE               = 0,
#endif
    wxFIXED_MINSIZE                = 0x8000,
    wxRESERVE_SPACE_EVEN_IF_HIDDEN = 0x0002,

    /*  a mask to extract wxSizerFlagBits from combination of flags */
    wxSIZER_FLAG_BITS_MASK         = 0x8002
};


enum wxStretch
{
    wxSTRETCH_NOT             = 0x0000,
    wxSHRINK                  = 0x1000,
    wxGROW                    = 0x2000,
    wxEXPAND                  = wxGROW,
    wxSHAPED                  = 0x4000,
    wxTILE                    = wxSHAPED | wxFIXED_MINSIZE,

    /*  a mask to extract stretch from the combination of flags */
    wxSTRETCH_MASK            = 0x7000 /* sans wxTILE */
};


enum wxBorder
{
    /*  this is different from wxBORDER_NONE as by default the controls do have */
    /*  border */
    wxBORDER_DEFAULT = 0,

    wxBORDER_NONE   = 0x00200000,
    wxBORDER_STATIC = 0x01000000,
    wxBORDER_SIMPLE = 0x02000000,
    wxBORDER_RAISED = 0x04000000,
    wxBORDER_SUNKEN = 0x08000000,
    wxBORDER_DOUBLE = 0x10000000, /* deprecated */
    wxBORDER_THEME  = wxBORDER_DOUBLE,

    /*  a mask to extract border style from the combination of flags */
    wxBORDER_MASK   = 0x1f200000
};


enum wxBackgroundStyle
{
    /*
        background is erased in the EVT_ERASE_BACKGROUND handler or using
        the system default background if no such handler is defined (this
        is the default style)
     */
    wxBG_STYLE_ERASE,

    /*
        background is erased by the system, no EVT_ERASE_BACKGROUND event
        is generated at all
     */
    wxBG_STYLE_SYSTEM,

    /*
        background is erased in EVT_PAINT handler and not erased at all
        before it, this should be used if the paint handler paints over
        the entire window to avoid flicker
     */
    wxBG_STYLE_PAINT,


    /* this is a Mac-only style, don't use in portable code */
    wxBG_STYLE_TRANSPARENT,

    /* this style is deprecated and doesn't do anything, don't use */
    wxBG_STYLE_COLOUR,

    /*
        this style is deprecated and is synonymous with
        wxBG_STYLE_PAINT, use the new name
     */
    wxBG_STYLE_CUSTOM = wxBG_STYLE_PAINT
};


enum wxKeyType
{
    wxKEY_NONE,
    wxKEY_INTEGER,
    wxKEY_STRING
};


enum wxStandardID
{
    /*
       These ids delimit the range used by automatically-generated ids
       (i.e. those used when wxID_ANY is specified during construction).
     */
#if defined(__WXMSW__) || wxUSE_AUTOID_MANAGEMENT
    /*
       On MSW the range is always restricted no matter if id management
       is used or not because the native window ids are limited to short
       range.  On other platforms the range is only restricted if id
       management is used so the reference count buffer won't be so big.
     */
    wxID_AUTO_LOWEST = -32000,
    wxID_AUTO_HIGHEST = -2000,
#else
    wxID_AUTO_LOWEST = -1000000,
    wxID_AUTO_HIGHEST = -2000,
#endif

    /* no id matches this one when compared to it */
    wxID_NONE = -3,

    /*  id for a separator line in the menu (invalid for normal item) */
    wxID_SEPARATOR = -2,

    /* any id: means that we don't care about the id, whether when installing
     * an event handler or when creating a new window */
    wxID_ANY = -1,


    /* all predefined ids are between wxID_LOWEST and wxID_HIGHEST */
    wxID_LOWEST = 4999,

    wxID_OPEN,
    wxID_CLOSE,
    wxID_NEW,
    wxID_SAVE,
    wxID_SAVEAS,
    wxID_REVERT,
    wxID_EXIT,
    wxID_UNDO,
    wxID_REDO,
    wxID_HELP,
    wxID_PRINT,
    wxID_PRINT_SETUP,
    wxID_PAGE_SETUP,
    wxID_PREVIEW,
    wxID_ABOUT,
    wxID_HELP_CONTENTS,
    wxID_HELP_INDEX,
    wxID_HELP_SEARCH,
    wxID_HELP_COMMANDS,
    wxID_HELP_PROCEDURES,
    wxID_HELP_CONTEXT,
    wxID_CLOSE_ALL,
    wxID_PREFERENCES,

    wxID_EDIT = 5030,
    wxID_CUT,
    wxID_COPY,
    wxID_PASTE,
    wxID_CLEAR,
    wxID_FIND,
    wxID_DUPLICATE,
    wxID_SELECTALL,
    wxID_DELETE,
    wxID_REPLACE,
    wxID_REPLACE_ALL,
    wxID_PROPERTIES,

    wxID_VIEW_DETAILS,
    wxID_VIEW_LARGEICONS,
    wxID_VIEW_SMALLICONS,
    wxID_VIEW_LIST,
    wxID_VIEW_SORTDATE,
    wxID_VIEW_SORTNAME,
    wxID_VIEW_SORTSIZE,
    wxID_VIEW_SORTTYPE,

    wxID_FILE = 5050,
    wxID_FILE1,
    wxID_FILE2,
    wxID_FILE3,
    wxID_FILE4,
    wxID_FILE5,
    wxID_FILE6,
    wxID_FILE7,
    wxID_FILE8,
    wxID_FILE9,

    /*  Standard button and menu IDs */
    wxID_OK = 5100,
    wxID_CANCEL,
    wxID_APPLY,
    wxID_YES,
    wxID_NO,
    wxID_STATIC,
    wxID_FORWARD,
    wxID_BACKWARD,
    wxID_DEFAULT,
    wxID_MORE,
    wxID_SETUP,
    wxID_RESET,
    wxID_CONTEXT_HELP,
    wxID_YESTOALL,
    wxID_NOTOALL,
    wxID_ABORT,
    wxID_RETRY,
    wxID_IGNORE,
    wxID_ADD,
    wxID_REMOVE,

    wxID_UP,
    wxID_DOWN,
    wxID_HOME,
    wxID_REFRESH,
    wxID_STOP,
    wxID_INDEX,

    wxID_BOLD,
    wxID_ITALIC,
    wxID_JUSTIFY_CENTER,
    wxID_JUSTIFY_FILL,
    wxID_JUSTIFY_RIGHT,
    wxID_JUSTIFY_LEFT,
    wxID_UNDERLINE,
    wxID_INDENT,
    wxID_UNINDENT,
    wxID_ZOOM_100,
    wxID_ZOOM_FIT,
    wxID_ZOOM_IN,
    wxID_ZOOM_OUT,
    wxID_UNDELETE,
    wxID_REVERT_TO_SAVED,
    wxID_CDROM,
    wxID_CONVERT,
    wxID_EXECUTE,
    wxID_FLOPPY,
    wxID_HARDDISK,
    wxID_BOTTOM,
    wxID_FIRST,
    wxID_LAST,
    wxID_TOP,
    wxID_INFO,
    wxID_JUMP_TO,
    wxID_NETWORK,
    wxID_SELECT_COLOR,
    wxID_SELECT_FONT,
    wxID_SORT_ASCENDING,
    wxID_SORT_DESCENDING,
    wxID_SPELL_CHECK,
    wxID_STRIKETHROUGH,

    /*  System menu IDs (used by wxUniv): */
    wxID_SYSTEM_MENU = 5200,
    wxID_CLOSE_FRAME,
    wxID_MOVE_FRAME,
    wxID_RESIZE_FRAME,
    wxID_MAXIMIZE_FRAME,
    wxID_ICONIZE_FRAME,
    wxID_RESTORE_FRAME,

    /* MDI window menu ids */
    wxID_MDI_WINDOW_FIRST = 5230,
    wxID_MDI_WINDOW_CASCADE = wxID_MDI_WINDOW_FIRST,
    wxID_MDI_WINDOW_TILE_HORZ,
    wxID_MDI_WINDOW_TILE_VERT,
    wxID_MDI_WINDOW_ARRANGE_ICONS,
    wxID_MDI_WINDOW_PREV,
    wxID_MDI_WINDOW_NEXT,
    wxID_MDI_WINDOW_LAST = wxID_MDI_WINDOW_NEXT,

    /* OS X system menu ids */
    wxID_OSX_MENU_FIRST = 5250,
    wxID_OSX_HIDE = wxID_OSX_MENU_FIRST,
    wxID_OSX_HIDEOTHERS,
    wxID_OSX_SHOWALL,
    wxID_OSX_MENU_LAST = wxID_OSX_SHOWALL,
    
    /*  IDs used by generic file dialog (13 consecutive starting from this value) */
    wxID_FILEDLGG = 5900,

    /*  IDs used by generic file ctrl (4 consecutive starting from this value) */
    wxID_FILECTRL = 5950,

    wxID_HIGHEST = 5999
};


enum wxItemKind
{
    wxITEM_SEPARATOR = -1,
    wxITEM_NORMAL,
    wxITEM_CHECK,
    wxITEM_RADIO,
    wxITEM_DROPDOWN,
    wxITEM_MAX
};


enum wxCheckBoxState
{
    wxCHK_UNCHECKED,
    wxCHK_CHECKED,
    wxCHK_UNDETERMINED /* 3-state checkbox only */
};


enum wxDeprecatedGUIConstants
{
    /*  Text font families */
    wxDEFAULT    = 70,
    wxDECORATIVE,
    wxROMAN,
    wxSCRIPT,
    wxSWISS,
    wxMODERN,
    wxTELETYPE,  /* @@@@ */

    /*  Proportional or Fixed width fonts (not yet used) */
    wxVARIABLE   = 80,
    wxFIXED,

    wxNORMAL     = 90,
    wxLIGHT,
    wxBOLD,
    /*  Also wxNORMAL for normal (non-italic text) */
    wxITALIC,
    wxSLANT,

    /*  Pen styles */
    wxSOLID      =   100,
    wxDOT,
    wxLONG_DASH,
    wxSHORT_DASH,
    wxDOT_DASH,
    wxUSER_DASH,

    wxTRANSPARENT,

    /*  Brush & Pen Stippling. Note that a stippled pen cannot be dashed!! */
    /*  Note also that stippling a Pen IS meaningful, because a Line is */
    wxSTIPPLE_MASK_OPAQUE, /* mask is used for blitting monochrome using text fore and back ground colors */
    wxSTIPPLE_MASK,        /* mask is used for masking areas in the stipple bitmap (TO DO) */
    /*  drawn with a Pen, and without any Brush -- and it can be stippled. */
    wxSTIPPLE =          110,

    wxBDIAGONAL_HATCH,     /* In wxWidgets < 2.6 use WX_HATCH macro  */
    wxCROSSDIAG_HATCH,     /* to verify these wx*_HATCH are in style */
    wxFDIAGONAL_HATCH,     /* of wxBrush. In wxWidgets >= 2.6 use    */
    wxCROSS_HATCH,         /* wxBrush::IsHatch() instead.            */
    wxHORIZONTAL_HATCH,
    wxVERTICAL_HATCH,
    wxFIRST_HATCH = wxBDIAGONAL_HATCH,
    wxLAST_HATCH = wxVERTICAL_HATCH
};


enum
{
    wxTOOL_TOP = 1,
    wxTOOL_BOTTOM,
    wxTOOL_LEFT,
    wxTOOL_RIGHT
};


enum wxDataFormatId
{
    wxDF_INVALID =          0,
    wxDF_TEXT =             1,  /* CF_TEXT */
    wxDF_BITMAP =           2,  /* CF_BITMAP */
    wxDF_METAFILE =         3,  /* CF_METAFILEPICT */
    wxDF_SYLK =             4,
    wxDF_DIF =              5,
    wxDF_TIFF =             6,
    wxDF_OEMTEXT =          7,  /* CF_OEMTEXT */
    wxDF_DIB =              8,  /* CF_DIB */
    wxDF_PALETTE =          9,
    wxDF_PENDATA =          10,
    wxDF_RIFF =             11,
    wxDF_WAVE =             12,
    wxDF_UNICODETEXT =      13,
    wxDF_ENHMETAFILE =      14,
    wxDF_FILENAME =         15, /* CF_HDROP */
    wxDF_LOCALE =           16,
    wxDF_PRIVATE =          20,
    wxDF_HTML =             30, /* Note: does not correspond to CF_ constant */
    wxDF_MAX
};


enum wxKeyCode
{
    WXK_NONE    =    0,

    WXK_CONTROL_A = 1,
    WXK_CONTROL_B,
    WXK_CONTROL_C,
    WXK_CONTROL_D,
    WXK_CONTROL_E,
    WXK_CONTROL_F,
    WXK_CONTROL_G,
    WXK_CONTROL_H,
    WXK_CONTROL_I,
    WXK_CONTROL_J,
    WXK_CONTROL_K,
    WXK_CONTROL_L,
    WXK_CONTROL_M,
    WXK_CONTROL_N,
    WXK_CONTROL_O,
    WXK_CONTROL_P,
    WXK_CONTROL_Q,
    WXK_CONTROL_R,
    WXK_CONTROL_S,
    WXK_CONTROL_T,
    WXK_CONTROL_U,
    WXK_CONTROL_V,
    WXK_CONTROL_W,
    WXK_CONTROL_X,
    WXK_CONTROL_Y,
    WXK_CONTROL_Z,

    WXK_BACK    =    8, /* backspace */
    WXK_TAB     =    9,
    WXK_RETURN  =    13,
    WXK_ESCAPE  =    27,

    /* values from 33 to 126 are reserved for the standard ASCII characters */

    WXK_SPACE   =    32,
    WXK_DELETE  =    127,

    /* values from 128 to 255 are reserved for ASCII extended characters
       (note that there isn't a single fixed standard for the meaning
       of these values; avoid them in portable apps!) */

    /* These are not compatible with unicode characters.
       If you want to get a unicode character from a key event, use
       wxKeyEvent::GetUnicodeKey                                    */
    WXK_START   = 300,
    WXK_LBUTTON,
    WXK_RBUTTON,
    WXK_CANCEL,
    WXK_MBUTTON,
    WXK_CLEAR,
    WXK_SHIFT,
    WXK_ALT,
    WXK_CONTROL,
    WXK_MENU,
    WXK_PAUSE,
    WXK_CAPITAL,
    WXK_END,
    WXK_HOME,
    WXK_LEFT,
    WXK_UP,
    WXK_RIGHT,
    WXK_DOWN,
    WXK_SELECT,
    WXK_PRINT,
    WXK_EXECUTE,
    WXK_SNAPSHOT,
    WXK_INSERT,
    WXK_HELP,
    WXK_NUMPAD0,
    WXK_NUMPAD1,
    WXK_NUMPAD2,
    WXK_NUMPAD3,
    WXK_NUMPAD4,
    WXK_NUMPAD5,
    WXK_NUMPAD6,
    WXK_NUMPAD7,
    WXK_NUMPAD8,
    WXK_NUMPAD9,
    WXK_MULTIPLY,
    WXK_ADD,
    WXK_SEPARATOR,
    WXK_SUBTRACT,
    WXK_DECIMAL,
    WXK_DIVIDE,
    WXK_F1,
    WXK_F2,
    WXK_F3,
    WXK_F4,
    WXK_F5,
    WXK_F6,
    WXK_F7,
    WXK_F8,
    WXK_F9,
    WXK_F10,
    WXK_F11,
    WXK_F12,
    WXK_F13,
    WXK_F14,
    WXK_F15,
    WXK_F16,
    WXK_F17,
    WXK_F18,
    WXK_F19,
    WXK_F20,
    WXK_F21,
    WXK_F22,
    WXK_F23,
    WXK_F24,
    WXK_NUMLOCK,
    WXK_SCROLL,
    WXK_PAGEUP,
    WXK_PAGEDOWN,
#if WXWIN_COMPATIBILITY_2_6
    WXK_PRIOR = WXK_PAGEUP,
    WXK_NEXT  = WXK_PAGEDOWN,
#endif

    WXK_NUMPAD_SPACE,
    WXK_NUMPAD_TAB,
    WXK_NUMPAD_ENTER,
    WXK_NUMPAD_F1,
    WXK_NUMPAD_F2,
    WXK_NUMPAD_F3,
    WXK_NUMPAD_F4,
    WXK_NUMPAD_HOME,
    WXK_NUMPAD_LEFT,
    WXK_NUMPAD_UP,
    WXK_NUMPAD_RIGHT,
    WXK_NUMPAD_DOWN,
    WXK_NUMPAD_PAGEUP,
    WXK_NUMPAD_PAGEDOWN,
#if WXWIN_COMPATIBILITY_2_6
    WXK_NUMPAD_PRIOR = WXK_NUMPAD_PAGEUP,
    WXK_NUMPAD_NEXT  = WXK_NUMPAD_PAGEDOWN,
#endif
    WXK_NUMPAD_END,
    WXK_NUMPAD_BEGIN,
    WXK_NUMPAD_INSERT,
    WXK_NUMPAD_DELETE,
    WXK_NUMPAD_EQUAL,
    WXK_NUMPAD_MULTIPLY,
    WXK_NUMPAD_ADD,
    WXK_NUMPAD_SEPARATOR,
    WXK_NUMPAD_SUBTRACT,
    WXK_NUMPAD_DECIMAL,
    WXK_NUMPAD_DIVIDE,

    WXK_WINDOWS_LEFT,
    WXK_WINDOWS_RIGHT,
    WXK_WINDOWS_MENU ,
#ifdef __WXOSX__
    WXK_RAW_CONTROL,
#else
    WXK_RAW_CONTROL = WXK_CONTROL,
#endif
    WXK_COMMAND = WXK_CONTROL,

    /* Hardware-specific buttons */
    WXK_SPECIAL1 = 193,
    WXK_SPECIAL2,
    WXK_SPECIAL3,
    WXK_SPECIAL4,
    WXK_SPECIAL5,
    WXK_SPECIAL6,
    WXK_SPECIAL7,
    WXK_SPECIAL8,
    WXK_SPECIAL9,
    WXK_SPECIAL10,
    WXK_SPECIAL11,
    WXK_SPECIAL12,
    WXK_SPECIAL13,
    WXK_SPECIAL14,
    WXK_SPECIAL15,
    WXK_SPECIAL16,
    WXK_SPECIAL17,
    WXK_SPECIAL18,
    WXK_SPECIAL19,
    WXK_SPECIAL20
};


enum wxKeyModifier
{
    wxMOD_NONE      = 0x0000,
    wxMOD_ALT       = 0x0001,
    wxMOD_CONTROL   = 0x0002,
    wxMOD_ALTGR     = wxMOD_ALT | wxMOD_CONTROL,
    wxMOD_SHIFT     = 0x0004,
    wxMOD_META      = 0x0008,
    wxMOD_WIN       = wxMOD_META,
#if defined(__WXMAC__) || defined(__WXCOCOA__)
    wxMOD_RAW_CONTROL = 0x0010,
#else
    wxMOD_RAW_CONTROL = wxMOD_CONTROL,
#endif
    wxMOD_CMD       = wxMOD_CONTROL,
    wxMOD_ALL       = 0xffff
};


enum wxPrintOrientation
{
   wxPORTRAIT = 1,
   wxLANDSCAPE
};


enum wxDuplexMode
{
    wxDUPLEX_SIMPLEX, /*  Non-duplex */
    wxDUPLEX_HORIZONTAL,
    wxDUPLEX_VERTICAL
};


enum wxPrintMode
{
    wxPRINT_MODE_NONE =    0,
    wxPRINT_MODE_PREVIEW = 1,   /*  Preview in external application */
    wxPRINT_MODE_FILE =    2,   /*  Print to file */
    wxPRINT_MODE_PRINTER = 3,   /*  Send to printer */
    wxPRINT_MODE_STREAM =  4    /*  Send postscript data into a stream */
};


enum wxUpdateUI
{
    wxUPDATE_UI_NONE          = 0x0000,
    wxUPDATE_UI_RECURSE       = 0x0001,
    wxUPDATE_UI_FROMIDLE      = 0x0002 /*  Invoked from On(Internal)Idle */
};


enum wxDialogLayoutAdaptationMode
{
    wxDIALOG_ADAPTATION_MODE_DEFAULT = 0,   // use global adaptation enabled status
    wxDIALOG_ADAPTATION_MODE_ENABLED = 1,   // enable this dialog overriding global status
    wxDIALOG_ADAPTATION_MODE_DISABLED = 2   // disable this dialog overriding global status
};


enum wxDialogModality
{
    wxDIALOG_MODALITY_NONE = 0,
    wxDIALOG_MODALITY_WINDOW_MODAL = 1,
    wxDIALOG_MODALITY_APP_MODAL = 2
};


enum wxDirFlags
{
    wxDIR_FILES     = 0x0001,       // include files
    wxDIR_DIRS      = 0x0002,       // include directories
    wxDIR_HIDDEN    = 0x0004,       // include hidden files
    wxDIR_DOTDOT    = 0x0008,       // include '.' and '..'

    // by default, enumerate everything except '.' and '..'
    wxDIR_DEFAULT   = wxDIR_FILES | wxDIR_DIRS | wxDIR_HIDDEN
};


enum wxDirTraverseResult
{
    wxDIR_IGNORE = -1,      // ignore this directory but continue with others
    wxDIR_STOP,             // stop traversing
    wxDIR_CONTINUE          // continue into this directory
};


enum
{
    wxDrag_CopyOnly    = 0, // allow only copying
    wxDrag_AllowMove   = 1, // allow moving (copying is always allowed)
    wxDrag_DefaultMove = 3  // the default operation is move, not copy
};


enum wxDragResult
{
    wxDragError,    // error prevented the d&d operation from completing
    wxDragNone,     // drag target didn't accept the data
    wxDragCopy,     // the data was successfully copied
    wxDragMove,     // the data was successfully moved (MSW only)
    wxDragLink,     // operation is a drag-link
    wxDragCancel    // the operation was cancelled by user (not an error)
};


enum
{
    wxDOC_NEW    = 1,
    wxDOC_SILENT = 2
};


enum
{
    wxTEMPLATE_VISIBLE = 1,
    wxTEMPLATE_INVISIBLE = 2,
    wxDEFAULT_TEMPLATE_FLAGS = wxTEMPLATE_VISIBLE
};


enum
{
    wxDOC_SDI = 1,
    wxDOC_MDI,
    wxDEFAULT_DOCMAN_FLAGS = wxDOC_SDI
};


enum wxDataViewCellMode
{
    wxDATAVIEW_CELL_INERT,
    wxDATAVIEW_CELL_ACTIVATABLE,
    wxDATAVIEW_CELL_EDITABLE
};


enum wxDataViewCellRenderState
{
    wxDATAVIEW_CELL_SELECTED    = 1,
    wxDATAVIEW_CELL_PRELIT      = 2,
    wxDATAVIEW_CELL_INSENSITIVE = 4,
    wxDATAVIEW_CELL_FOCUSED     = 8
};


enum wxDLFlags
{
    wxDL_LAZY       = 0x00000001,   // resolve undefined symbols at first use
                                    // (only works on some Unix versions)
    wxDL_NOW        = 0x00000002,   // resolve undefined symbols on load
                                    // (default, always the case under Win32)
    wxDL_GLOBAL     = 0x00000004,   // export extern symbols to subsequently
                                    // loaded libs.
    wxDL_VERBATIM   = 0x00000008,   // attempt to load the supplied library
                                    // name without appending the usual dll
                                    // filename extension.

    // this flag is obsolete, don't use
    wxDL_NOSHARE    = 0x00000010,   // load new DLL, don't reuse already loaded
                                    // (only for wxPluginManager)

    wxDL_QUIET      = 0x00000020,   // don't log an error if failed to load

    // this flag is dangerous, for internal use of wxMSW only, don't use at all
    // and especially don't use directly, use wxLoadedDLL instead if you really
    // do need it
    wxDL_GET_LOADED = 0x00000040,   // Win32 only: return handle of already
                                    // loaded DLL or NULL otherwise; Unload()
                                    // should not be called so don't forget to
                                    // Detach() if you use this function

    wxDL_DEFAULT    = wxDL_NOW      // default flags correspond to Win32
};


enum wxDynamicLibraryCategory
{
    wxDL_LIBRARY,       // standard library
    wxDL_MODULE         // loadable module/plugin
};


enum wxPluginCategory
{
    wxDL_PLUGIN_GUI,    // plugin that uses GUI classes
    wxDL_PLUGIN_BASE    // wxBase-only plugin
};


enum
{
    wxCONVERT_STRICT,
    wxCONVERT_SUBSTITUTE
};


enum
{
    wxPLATFORM_CURRENT = -1,

    wxPLATFORM_UNIX = 0,
    wxPLATFORM_WINDOWS,
    wxPLATFORM_OS2,
    wxPLATFORM_MAC
};


enum wxEventPropagation
{
    // don't propagate it at all
    wxEVENT_PROPAGATE_NONE = 0,

    // propagate it until it is processed
    wxEVENT_PROPAGATE_MAX = INT_MAX
};


enum wxEventCategory
{
    // this is the category for those events which are generated to update
    // the appearance of the GUI but which (usually) do not comport data
    // processing, i.e. which do not provide input or output data
    // (e.g. size events, scroll events, etc).
    // They are events NOT directly generated by the user's input devices.
    wxEVT_CATEGORY_UI = 1,

    // this category groups those events which are generated directly from the
    // user through input devices like mouse and keyboard and usually result in
    // data to be processed from the application.
    // (e.g. mouse clicks, key presses, etc)
    wxEVT_CATEGORY_USER_INPUT = 2,

    // this category is for wxSocketEvent
    wxEVT_CATEGORY_SOCKET = 4,

    // this category is for wxTimerEvent
    wxEVT_CATEGORY_TIMER = 8,

    // this category is for any event used to send notifications from the
    // secondary threads to the main one or in general for notifications among
    // different threads (which may or may not be user-generated)
    wxEVT_CATEGORY_THREAD = 16,


    // implementation only

    // used in the implementations of wxEventLoopBase::YieldFor
    wxEVT_CATEGORY_UNKNOWN = 32,

    // a special category used as an argument to wxEventLoopBase::YieldFor to indicate that
    // Yield() should leave all wxEvents on the queue while emptying the native event queue
    // (native events will be processed but the wxEvents they generate will be queued)
    wxEVT_CATEGORY_CLIPBOARD = 64,


    // shortcut masks

    // this category groups those events which are emitted in response to
    // events of the native toolkit and which typically are not-"delayable".
    wxEVT_CATEGORY_NATIVE_EVENTS = wxEVT_CATEGORY_UI|wxEVT_CATEGORY_USER_INPUT,

    // used in wxEventLoopBase::YieldFor to specify all event categories should be processed:
    wxEVT_CATEGORY_ALL =
        wxEVT_CATEGORY_UI|wxEVT_CATEGORY_USER_INPUT|wxEVT_CATEGORY_SOCKET| \
        wxEVT_CATEGORY_TIMER|wxEVT_CATEGORY_THREAD|wxEVT_CATEGORY_UNKNOWN| \
        wxEVT_CATEGORY_CLIPBOARD
};


enum wxIdleMode
{
        // Send idle events to all windows
    wxIDLE_PROCESS_ALL,

        // Send idle events to windows that have
        // the wxWS_EX_PROCESS_IDLE flag specified
    wxIDLE_PROCESS_SPECIFIED
};


enum wxKeyCategoryFlags
{
    // arrow keys, on and off numeric keypads
    WXK_CATEGORY_ARROW  = 1,

    // page up and page down keys, on and off numeric keypads
    WXK_CATEGORY_PAGING = 2,

    // home and end keys, on and off numeric keypads
    WXK_CATEGORY_JUMP   = 4,

    // tab key, on and off numeric keypads
    WXK_CATEGORY_TAB    = 8,

    // backspace and delete keys, on and off numeric keypads
    WXK_CATEGORY_CUT    = 16,

    // all keys usually used for navigation
    WXK_CATEGORY_NAVIGATION = WXK_CATEGORY_ARROW |
                              WXK_CATEGORY_PAGING |
                              WXK_CATEGORY_JUMP
};


enum
{
    wxJOYSTICK1,
    wxJOYSTICK2
};


enum
{
    wxJOY_BUTTON_ANY = -1,
    wxJOY_BUTTON1    = 1,
    wxJOY_BUTTON2    = 2,
    wxJOY_BUTTON3    = 4,
    wxJOY_BUTTON4    = 8
};


enum wxUpdateUIMode
{
        // Send UI update events to all windows
    wxUPDATE_UI_PROCESS_ALL,

        // Send UI update events to windows that have
        // the wxWS_EX_PROCESS_UI_UPDATES flag specified
    wxUPDATE_UI_PROCESS_SPECIFIED
};


enum wxFindReplaceFlags
{
    // downward search/replace selected (otherwise - upwards)
    wxFR_DOWN       = 1,

    // whole word search/replace selected
    wxFR_WHOLEWORD  = 2,

    // case sensitive search/replace selected (otherwise - case insensitive)
    wxFR_MATCHCASE  = 4
};


enum wxFindReplaceDialogStyles
{
    // replace dialog (otherwise find dialog)
    wxFR_REPLACEDIALOG = 1,

    // don't allow changing the search direction
    wxFR_NOUPDOWN      = 2,

    // don't allow case sensitive searching
    wxFR_NOMATCHCASE   = 4,

    // don't allow whole word searching
    wxFR_NOWHOLEWORD   = 8
};


enum
{
    wxFC_OPEN              = 0x0001,
    wxFC_SAVE              = 0x0002,
    wxFC_MULTIPLE          = 0x0004,
    wxFC_NOSHOWHIDDEN      = 0x0008
};


enum
{
    wxFD_OPEN              = 0x0001,
    wxFD_SAVE              = 0x0002,
    wxFD_OVERWRITE_PROMPT  = 0x0004,
    wxFD_FILE_MUST_EXIST   = 0x0010,
    wxFD_MULTIPLE          = 0x0020,
    wxFD_CHANGE_DIR        = 0x0080,
    wxFD_PREVIEW           = 0x0100
};


enum wxSeekMode
{
  wxFromStart,
  wxFromCurrent,
  wxFromEnd
};


enum wxFileKind
{
  wxFILE_KIND_UNKNOWN,
  wxFILE_KIND_DISK,     // a file supporting seeking to arbitrary offsets
  wxFILE_KIND_TERMINAL, // a tty
  wxFILE_KIND_PIPE      // a pipe
};


enum wxPosixPermissions
{
    // standard Posix names for these permission flags:
    wxS_IRUSR = 00400,
    wxS_IWUSR = 00200,
    wxS_IXUSR = 00100,

    wxS_IRGRP = 00040,
    wxS_IWGRP = 00020,
    wxS_IXGRP = 00010,

    wxS_IROTH = 00004,
    wxS_IWOTH = 00002,
    wxS_IXOTH = 00001,

    // longer but more readable synonyms for the constants above:
    wxPOSIX_USER_READ = wxS_IRUSR,
    wxPOSIX_USER_WRITE = wxS_IWUSR,
    wxPOSIX_USER_EXECUTE = wxS_IXUSR,

    wxPOSIX_GROUP_READ = wxS_IRGRP,
    wxPOSIX_GROUP_WRITE = wxS_IWGRP,
    wxPOSIX_GROUP_EXECUTE = wxS_IXGRP,

    wxPOSIX_OTHERS_READ = wxS_IROTH,
    wxPOSIX_OTHERS_WRITE = wxS_IWOTH,
    wxPOSIX_OTHERS_EXECUTE = wxS_IXOTH,

    // default mode for the new files: allow reading/writing them to everybody but
    // the effective file mode will be set after anding this value with umask and
    // so won't include wxS_IW{GRP,OTH} for the default 022 umask value
    wxS_DEFAULT = (wxPOSIX_USER_READ | wxPOSIX_USER_WRITE | \
                   wxPOSIX_GROUP_READ | wxPOSIX_GROUP_WRITE | \
                   wxPOSIX_OTHERS_READ | wxPOSIX_OTHERS_WRITE),

    // default mode for the new directories (see wxFileName::Mkdir): allow
    // reading/writing/executing them to everybody, but just like wxS_DEFAULT
    // the effective directory mode will be set after anding this value with umask
    wxS_DIR_DEFAULT = (wxPOSIX_USER_READ | wxPOSIX_USER_WRITE | wxPOSIX_USER_EXECUTE | \
                       wxPOSIX_GROUP_READ | wxPOSIX_GROUP_WRITE | wxPOSIX_GROUP_EXECUTE | \
                       wxPOSIX_OTHERS_READ | wxPOSIX_OTHERS_WRITE | wxPOSIX_OTHERS_EXECUTE)
};


enum wxPathFormat
{
    wxPATH_NATIVE = 0,      // the path format for the current platform
    wxPATH_UNIX,
    wxPATH_BEOS = wxPATH_UNIX,
    wxPATH_MAC,
    wxPATH_DOS,
    wxPATH_WIN = wxPATH_DOS,
    wxPATH_OS2 = wxPATH_DOS,
    wxPATH_VMS,

    wxPATH_MAX // Not a valid value for specifying path format
};


enum wxSizeConvention
{
    wxSIZE_CONV_TRADITIONAL,  // 1024 bytes = 1 KB
    wxSIZE_CONV_IEC,          // 1024 bytes = 1 KiB
    wxSIZE_CONV_SI            // 1000 bytes = 1 KB
};


enum wxPathNormalize
{
    wxPATH_NORM_ENV_VARS = 0x0001,  // replace env vars with their values
    wxPATH_NORM_DOTS     = 0x0002,  // squeeze all .. and .
    wxPATH_NORM_TILDE    = 0x0004,  // Unix only: replace ~ and ~user
    wxPATH_NORM_CASE     = 0x0008,  // if case insensitive => tolower
    wxPATH_NORM_ABSOLUTE = 0x0010,  // make the path absolute
    wxPATH_NORM_LONG =     0x0020,  // make the path the long form
    wxPATH_NORM_SHORTCUT = 0x0040,  // resolve the shortcut, if it is a shortcut
    wxPATH_NORM_ALL      = 0x00ff & ~wxPATH_NORM_CASE
};


enum
{
    wxPATH_NO_SEPARATOR  = 0x0000,  // for symmetry with wxPATH_GET_SEPARATOR
    wxPATH_GET_VOLUME    = 0x0001,  // include the volume if applicable
    wxPATH_GET_SEPARATOR = 0x0002   // terminate the path with the separator
};


enum
{
    wxPATH_MKDIR_FULL    = 0x0001   // create directories recursively
};


enum
{
    wxPATH_RMDIR_FULL       = 0x0001,  // delete with subdirectories if empty
    wxPATH_RMDIR_RECURSIVE  = 0x0002   // delete all recursively (dangerous!)
};


enum wxFileSystemOpenFlags
{
    wxFS_READ = 1,      // Open for reading
    wxFS_SEEKABLE = 4   // Returned stream will be seekable
};


enum wxFontFamily
{
    wxFONTFAMILY_DEFAULT = wxDEFAULT,
    wxFONTFAMILY_DECORATIVE = wxDECORATIVE,
    wxFONTFAMILY_ROMAN = wxROMAN,
    wxFONTFAMILY_SCRIPT = wxSCRIPT,
    wxFONTFAMILY_SWISS = wxSWISS,
    wxFONTFAMILY_MODERN = wxMODERN,
    wxFONTFAMILY_TELETYPE = wxTELETYPE,
    wxFONTFAMILY_MAX,
    wxFONTFAMILY_UNKNOWN = wxFONTFAMILY_MAX
};


enum wxFontStyle
{
    wxFONTSTYLE_NORMAL = wxNORMAL,
    wxFONTSTYLE_ITALIC = wxITALIC,
    wxFONTSTYLE_SLANT = wxSLANT,
    wxFONTSTYLE_MAX
};


enum wxFontWeight
{
    wxFONTWEIGHT_NORMAL = wxNORMAL,
    wxFONTWEIGHT_LIGHT = wxLIGHT,
    wxFONTWEIGHT_BOLD = wxBOLD,
    wxFONTWEIGHT_MAX
};


enum wxFontSymbolicSize
{
    wxFONTSIZE_XX_SMALL = -3,
    wxFONTSIZE_X_SMALL,
    wxFONTSIZE_SMALL,
    wxFONTSIZE_MEDIUM,
    wxFONTSIZE_LARGE,
    wxFONTSIZE_X_LARGE,
    wxFONTSIZE_XX_LARGE
};


enum wxFontFlag
{
    // no special flags: font with default weight/slant/anti-aliasing
    wxFONTFLAG_DEFAULT          = 0,

    // slant flags (default: no slant)
    wxFONTFLAG_ITALIC           = 1 << 0,
    wxFONTFLAG_SLANT            = 1 << 1,

    // weight flags (default: medium)
    wxFONTFLAG_LIGHT            = 1 << 2,
    wxFONTFLAG_BOLD             = 1 << 3,

    // anti-aliasing flag: force on or off (default: the current system default)
    wxFONTFLAG_ANTIALIASED      = 1 << 4,
    wxFONTFLAG_NOT_ANTIALIASED  = 1 << 5,

    // underlined/strikethrough flags (default: no lines)
    wxFONTFLAG_UNDERLINED       = 1 << 6,
    wxFONTFLAG_STRIKETHROUGH    = 1 << 7,

    // the mask of all currently used flags
    wxFONTFLAG_MASK = wxFONTFLAG_ITALIC             |
                      wxFONTFLAG_SLANT              |
                      wxFONTFLAG_LIGHT              |
                      wxFONTFLAG_BOLD               |
                      wxFONTFLAG_ANTIALIASED        |
                      wxFONTFLAG_NOT_ANTIALIASED    |
                      wxFONTFLAG_UNDERLINED         |
                      wxFONTFLAG_STRIKETHROUGH
};


enum wxFontEncoding
{
    wxFONTENCODING_SYSTEM = -1,     // system default
    wxFONTENCODING_DEFAULT,         // current default encoding

    // ISO8859 standard defines a number of single-byte charsets
    wxFONTENCODING_ISO8859_1,       // West European (Latin1)
    wxFONTENCODING_ISO8859_2,       // Central and East European (Latin2)
    wxFONTENCODING_ISO8859_3,       // Esperanto (Latin3)
    wxFONTENCODING_ISO8859_4,       // Baltic (old) (Latin4)
    wxFONTENCODING_ISO8859_5,       // Cyrillic
    wxFONTENCODING_ISO8859_6,       // Arabic
    wxFONTENCODING_ISO8859_7,       // Greek
    wxFONTENCODING_ISO8859_8,       // Hebrew
    wxFONTENCODING_ISO8859_9,       // Turkish (Latin5)
    wxFONTENCODING_ISO8859_10,      // Variation of Latin4 (Latin6)
    wxFONTENCODING_ISO8859_11,      // Thai
    wxFONTENCODING_ISO8859_12,      // doesn't exist currently, but put it
                                    // here anyhow to make all ISO8859
                                    // consecutive numbers
    wxFONTENCODING_ISO8859_13,      // Baltic (Latin7)
    wxFONTENCODING_ISO8859_14,      // Latin8
    wxFONTENCODING_ISO8859_15,      // Latin9 (a.k.a. Latin0, includes euro)
    wxFONTENCODING_ISO8859_MAX,

    // Cyrillic charset soup (see http://czyborra.com/charsets/cyrillic.html)
    wxFONTENCODING_KOI8,            // KOI8 Russian
    wxFONTENCODING_KOI8_U,          // KOI8 Ukrainian
    wxFONTENCODING_ALTERNATIVE,     // same as MS-DOS CP866
    wxFONTENCODING_BULGARIAN,       // used under Linux in Bulgaria

    // what would we do without Microsoft? They have their own encodings
        // for DOS
    wxFONTENCODING_CP437,           // original MS-DOS codepage
    wxFONTENCODING_CP850,           // CP437 merged with Latin1
    wxFONTENCODING_CP852,           // CP437 merged with Latin2
    wxFONTENCODING_CP855,           // another cyrillic encoding
    wxFONTENCODING_CP866,           // and another one
        // and for Windows
    wxFONTENCODING_CP874,           // WinThai
    wxFONTENCODING_CP932,           // Japanese (shift-JIS)
    wxFONTENCODING_CP936,           // Chinese simplified (GB)
    wxFONTENCODING_CP949,           // Korean (Hangul charset, a.k.a. EUC-KR)
    wxFONTENCODING_CP950,           // Chinese (traditional - Big5)
    wxFONTENCODING_CP1250,          // WinLatin2
    wxFONTENCODING_CP1251,          // WinCyrillic
    wxFONTENCODING_CP1252,          // WinLatin1
    wxFONTENCODING_CP1253,          // WinGreek (8859-7)
    wxFONTENCODING_CP1254,          // WinTurkish
    wxFONTENCODING_CP1255,          // WinHebrew
    wxFONTENCODING_CP1256,          // WinArabic
    wxFONTENCODING_CP1257,          // WinBaltic (same as Latin 7)
    wxFONTENCODING_CP12_MAX,

    wxFONTENCODING_UTF7,            // UTF-7 Unicode encoding
    wxFONTENCODING_UTF8,            // UTF-8 Unicode encoding
    wxFONTENCODING_EUC_JP,          // Extended Unix Codepage for Japanese
    wxFONTENCODING_UTF16BE,         // UTF-16 Big Endian Unicode encoding
    wxFONTENCODING_UTF16LE,         // UTF-16 Little Endian Unicode encoding
    wxFONTENCODING_UTF32BE,         // UTF-32 Big Endian Unicode encoding
    wxFONTENCODING_UTF32LE,         // UTF-32 Little Endian Unicode encoding

    wxFONTENCODING_MACROMAN,        // the standard mac encodings
    wxFONTENCODING_MACJAPANESE,
    wxFONTENCODING_MACCHINESETRAD,
    wxFONTENCODING_MACKOREAN,
    wxFONTENCODING_MACARABIC,
    wxFONTENCODING_MACHEBREW,
    wxFONTENCODING_MACGREEK,
    wxFONTENCODING_MACCYRILLIC,
    wxFONTENCODING_MACDEVANAGARI,
    wxFONTENCODING_MACGURMUKHI,
    wxFONTENCODING_MACGUJARATI,
    wxFONTENCODING_MACORIYA,
    wxFONTENCODING_MACBENGALI,
    wxFONTENCODING_MACTAMIL,
    wxFONTENCODING_MACTELUGU,
    wxFONTENCODING_MACKANNADA,
    wxFONTENCODING_MACMALAJALAM,
    wxFONTENCODING_MACSINHALESE,
    wxFONTENCODING_MACBURMESE,
    wxFONTENCODING_MACKHMER,
    wxFONTENCODING_MACTHAI,
    wxFONTENCODING_MACLAOTIAN,
    wxFONTENCODING_MACGEORGIAN,
    wxFONTENCODING_MACARMENIAN,
    wxFONTENCODING_MACCHINESESIMP,
    wxFONTENCODING_MACTIBETAN,
    wxFONTENCODING_MACMONGOLIAN,
    wxFONTENCODING_MACETHIOPIC,
    wxFONTENCODING_MACCENTRALEUR,
    wxFONTENCODING_MACVIATNAMESE,
    wxFONTENCODING_MACARABICEXT,
    wxFONTENCODING_MACSYMBOL,
    wxFONTENCODING_MACDINGBATS,
    wxFONTENCODING_MACTURKISH,
    wxFONTENCODING_MACCROATIAN,
    wxFONTENCODING_MACICELANDIC,
    wxFONTENCODING_MACROMANIAN,
    wxFONTENCODING_MACCELTIC,
    wxFONTENCODING_MACGAELIC,
    wxFONTENCODING_MACKEYBOARD,

    // more CJK encodings (for historical reasons some are already declared
    // above)
    wxFONTENCODING_ISO2022_JP,      // ISO-2022-JP JIS encoding

    wxFONTENCODING_MAX,             // highest enumerated encoding value

    wxFONTENCODING_MACMIN = wxFONTENCODING_MACROMAN ,
    wxFONTENCODING_MACMAX = wxFONTENCODING_MACKEYBOARD ,

    // aliases for endian-dependent UTF encodings
#ifdef WORDS_BIGENDIAN
    wxFONTENCODING_UTF16 = wxFONTENCODING_UTF16BE,  // native UTF-16
    wxFONTENCODING_UTF32 = wxFONTENCODING_UTF32BE,  // native UTF-32
#else // WORDS_BIGENDIAN
    wxFONTENCODING_UTF16 = wxFONTENCODING_UTF16LE,  // native UTF-16
    wxFONTENCODING_UTF32 = wxFONTENCODING_UTF32LE,  // native UTF-32
#endif // WORDS_BIGENDIAN

    // alias for the native Unicode encoding on this platform
    // (this is used by wxEncodingConverter and wxUTFFile only for now)
#if SIZEOF_WCHAR_T == 2
    wxFONTENCODING_UNICODE = wxFONTENCODING_UTF16,
#else // SIZEOF_WCHAR_T == 4
    wxFONTENCODING_UNICODE = wxFONTENCODING_UTF32,
#endif

    // alternative names for Far Eastern encodings
        // Chinese
    wxFONTENCODING_GB2312 = wxFONTENCODING_CP936, // Simplified Chinese
    wxFONTENCODING_BIG5 = wxFONTENCODING_CP950,   // Traditional Chinese

        // Japanese (see http://zsigri.tripod.com/fontboard/cjk/jis.html)
    wxFONTENCODING_SHIFT_JIS = wxFONTENCODING_CP932, // Shift JIS

        // Korean (CP 949 not actually the same but close enough)
    wxFONTENCODING_EUC_KR = wxFONTENCODING_CP949
};


enum
{
    wxFSW_EVENT_CREATE = 0x01,
    wxFSW_EVENT_DELETE = 0x02,
    wxFSW_EVENT_RENAME = 0x04,
    wxFSW_EVENT_MODIFY = 0x08,
    wxFSW_EVENT_ACCESS = 0x10,

    // error events
    wxFSW_EVENT_WARNING = 0x20,
    wxFSW_EVENT_ERROR = 0x40,

    wxFSW_EVENT_ALL = wxFSW_EVENT_CREATE | wxFSW_EVENT_DELETE |
                         wxFSW_EVENT_RENAME | wxFSW_EVENT_MODIFY |
                         wxFSW_EVENT_ACCESS |
                         wxFSW_EVENT_WARNING | wxFSW_EVENT_ERROR
};


enum wxFSWPathType
{
    wxFSWPath_None,     // Invalid value for an initialized watch.
    wxFSWPath_File,     // Plain file.
    wxFSWPath_Dir,      // Watch a directory and the files in it.
    wxFSWPath_Tree      // Watch a directory and all its children recursively.
};


enum wxBitmapType
{
    wxBITMAP_TYPE_INVALID,          // should be == 0 for compatibility!
    wxBITMAP_TYPE_BMP,
    wxBITMAP_TYPE_BMP_RESOURCE,
    wxBITMAP_TYPE_RESOURCE = wxBITMAP_TYPE_BMP_RESOURCE,
    wxBITMAP_TYPE_ICO,
    wxBITMAP_TYPE_ICO_RESOURCE,
    wxBITMAP_TYPE_CUR,
    wxBITMAP_TYPE_CUR_RESOURCE,
    wxBITMAP_TYPE_XBM,
    wxBITMAP_TYPE_XBM_DATA,
    wxBITMAP_TYPE_XPM,
    wxBITMAP_TYPE_XPM_DATA,
    wxBITMAP_TYPE_TIFF,
    wxBITMAP_TYPE_TIF = wxBITMAP_TYPE_TIFF,
    wxBITMAP_TYPE_TIFF_RESOURCE,
    wxBITMAP_TYPE_TIF_RESOURCE = wxBITMAP_TYPE_TIFF_RESOURCE,
    wxBITMAP_TYPE_GIF,
    wxBITMAP_TYPE_GIF_RESOURCE,
    wxBITMAP_TYPE_PNG,
    wxBITMAP_TYPE_PNG_RESOURCE,
    wxBITMAP_TYPE_JPEG,
    wxBITMAP_TYPE_JPEG_RESOURCE,
    wxBITMAP_TYPE_PNM,
    wxBITMAP_TYPE_PNM_RESOURCE,
    wxBITMAP_TYPE_PCX,
    wxBITMAP_TYPE_PCX_RESOURCE,
    wxBITMAP_TYPE_PICT,
    wxBITMAP_TYPE_PICT_RESOURCE,
    wxBITMAP_TYPE_ICON,
    wxBITMAP_TYPE_ICON_RESOURCE,
    wxBITMAP_TYPE_ANI,
    wxBITMAP_TYPE_IFF,
    wxBITMAP_TYPE_TGA,
    wxBITMAP_TYPE_MACCURSOR,
    wxBITMAP_TYPE_MACCURSOR_RESOURCE,

    wxBITMAP_TYPE_MAX,
    wxBITMAP_TYPE_ANY = 50
};


enum wxPolygonFillMode
{
    wxODDEVEN_RULE = 1,
    wxWINDING_RULE
};


enum wxStockCursor
{
    wxCURSOR_NONE,          // should be 0
    wxCURSOR_ARROW,
    wxCURSOR_RIGHT_ARROW,
    wxCURSOR_BULLSEYE,
    wxCURSOR_CHAR,
    wxCURSOR_CROSS,
    wxCURSOR_HAND,
    wxCURSOR_IBEAM,
    wxCURSOR_LEFT_BUTTON,
    wxCURSOR_MAGNIFIER,
    wxCURSOR_MIDDLE_BUTTON,
    wxCURSOR_NO_ENTRY,
    wxCURSOR_PAINT_BRUSH,
    wxCURSOR_PENCIL,
    wxCURSOR_POINT_LEFT,
    wxCURSOR_POINT_RIGHT,
    wxCURSOR_QUESTION_ARROW,
    wxCURSOR_RIGHT_BUTTON,
    wxCURSOR_SIZENESW,
    wxCURSOR_SIZENS,
    wxCURSOR_SIZENWSE,
    wxCURSOR_SIZEWE,
    wxCURSOR_SIZING,
    wxCURSOR_SPRAYCAN,
    wxCURSOR_WAIT,
    wxCURSOR_WATCH,
    wxCURSOR_BLANK,
#ifdef __WXGTK__
    wxCURSOR_DEFAULT, // standard X11 cursor
#endif
#ifdef __WXMAC__
    wxCURSOR_COPY_ARROW , // MacOS Theme Plus arrow
#endif
#ifdef __X__
    // Not yet implemented for Windows
    wxCURSOR_CROSS_REVERSE,
    wxCURSOR_DOUBLE_ARROW,
    wxCURSOR_BASED_ARROW_UP,
    wxCURSOR_BASED_ARROW_DOWN,
#endif // X11
    wxCURSOR_ARROWWAIT,
#ifdef __WXMAC__
    wxCURSOR_OPEN_HAND,
    wxCURSOR_CLOSED_HAND,
#endif

    wxCURSOR_MAX
};


enum wxGridDirection
{
    wxGRID_COLUMN,
    wxGRID_ROW
};


enum wxGridTableRequest
{
    wxGRIDTABLE_REQUEST_VIEW_GET_VALUES = 2000,
    wxGRIDTABLE_REQUEST_VIEW_SEND_VALUES,
    wxGRIDTABLE_NOTIFY_ROWS_INSERTED,
    wxGRIDTABLE_NOTIFY_ROWS_APPENDED,
    wxGRIDTABLE_NOTIFY_ROWS_DELETED,
    wxGRIDTABLE_NOTIFY_COLS_INSERTED,
    wxGRIDTABLE_NOTIFY_COLS_APPENDED,
    wxGRIDTABLE_NOTIFY_COLS_DELETED
};


enum wxGridCellFloatFormat
{
    // Decimal floating point (%f)
    wxGRID_FLOAT_FORMAT_FIXED      = 0x0010,

    // Scientific notation (mantise/exponent) using e character (%e)
    wxGRID_FLOAT_FORMAT_SCIENTIFIC = 0x0020,

    // Use the shorter of %e or %f (%g)
    wxGRID_FLOAT_FORMAT_COMPACT    = 0x0040,

    // To use in combination with one of the above formats (%F/%E/%G)
    wxGRID_FLOAT_FORMAT_UPPER      = 0x0080,

    // Format used by default.
    wxGRID_FLOAT_FORMAT_DEFAULT    = wxGRID_FLOAT_FORMAT_FIXED,

    // A mask to extract format from the combination of flags.
    wxGRID_FLOAT_FORMAT_MASK       = wxGRID_FLOAT_FORMAT_FIXED |
                                     wxGRID_FLOAT_FORMAT_SCIENTIFIC |
                                     wxGRID_FLOAT_FORMAT_COMPACT |
                                     wxGRID_FLOAT_FORMAT_UPPER
};


enum wxLayoutOrientation
{
    wxLAYOUT_HORIZONTAL,
    wxLAYOUT_VERTICAL
};


enum wxLayoutAlignment
{
    wxLAYOUT_NONE,
    wxLAYOUT_TOP,
    wxLAYOUT_LEFT,
    wxLAYOUT_RIGHT,
    wxLAYOUT_BOTTOM
};


enum wxPropertySheetDialogFlags
{
    // Use the platform default
    wxPROPSHEET_DEFAULT = 0x0001,

    // Use a notebook
    wxPROPSHEET_NOTEBOOK = 0x0002,

    // Use a toolbook
    wxPROPSHEET_TOOLBOOK = 0x0004,

    // Use a choicebook
    wxPROPSHEET_CHOICEBOOK = 0x0008,

    // Use a listbook
    wxPROPSHEET_LISTBOOK = 0x0010,

    // Use a wxButtonToolBar toolbook
    wxPROPSHEET_BUTTONTOOLBOOK = 0x0020,

    // Use a treebook
    wxPROPSHEET_TREEBOOK = 0x0040,

    // Shrink dialog to fit current page
    wxPROPSHEET_SHRINKTOFIT = 0x0100
};


enum wxSashEdgePosition {
    wxSASH_TOP = 0,
    wxSASH_RIGHT,
    wxSASH_BOTTOM,
    wxSASH_LEFT,
    wxSASH_NONE = 100
};


enum wxSashDragStatus
{
    wxSASH_STATUS_OK,
    wxSASH_STATUS_OUT_OF_RANGE
};


enum wxOutCode
{
    wxInside = 0x00 ,
    wxOutLeft = 0x01 ,
    wxOutRight = 0x02 ,
    wxOutTop = 0x08 ,
    wxOutBottom = 0x04
};


enum wxGIFErrorCode
{
    wxGIF_OK = 0,                   // everything was OK
    wxGIF_INVFORMAT,                // error in GIF header
    wxGIF_MEMERR,                   // error allocating memory
    wxGIF_TRUNCATED                 // file appears to be truncated
};


enum
{
    WX_GL_RGBA = 1,        // use true color palette (on if no attrs specified)
    WX_GL_BUFFER_SIZE,     // bits for buffer if not WX_GL_RGBA
    WX_GL_LEVEL,           // 0 for main buffer, >0 for overlay, <0 for underlay
    WX_GL_DOUBLEBUFFER,    // use double buffering (on if no attrs specified)
    WX_GL_STEREO,          // use stereoscopic display
    WX_GL_AUX_BUFFERS,     // number of auxiliary buffers
    WX_GL_MIN_RED,         // use red buffer with most bits (> MIN_RED bits)
    WX_GL_MIN_GREEN,       // use green buffer with most bits (> MIN_GREEN bits)
    WX_GL_MIN_BLUE,        // use blue buffer with most bits (> MIN_BLUE bits)
    WX_GL_MIN_ALPHA,       // use alpha buffer with most bits (> MIN_ALPHA bits)
    WX_GL_DEPTH_SIZE,      // bits for Z-buffer (0,16,32)
    WX_GL_STENCIL_SIZE,    // bits for stencil buffer
    WX_GL_MIN_ACCUM_RED,   // use red accum buffer with most bits (> MIN_ACCUM_RED bits)
    WX_GL_MIN_ACCUM_GREEN, // use green buffer with most bits (> MIN_ACCUM_GREEN bits)
    WX_GL_MIN_ACCUM_BLUE,  // use blue buffer with most bits (> MIN_ACCUM_BLUE bits)
    WX_GL_MIN_ACCUM_ALPHA, // use alpha buffer with most bits (> MIN_ACCUM_ALPHA bits)
    WX_GL_SAMPLE_BUFFERS,  // 1 for multisampling support (antialiasing)
    WX_GL_SAMPLES          // 4 for 2x2 antialiasing supersampling on most graphics cards
};


enum wxAntialiasMode
{
    wxANTIALIAS_NONE, // should be 0
    wxANTIALIAS_DEFAULT
};


enum wxInterpolationQuality
{
    // default interpolation
    wxINTERPOLATION_DEFAULT,
    // no interpolation
    wxINTERPOLATION_NONE, 
    // fast interpolation, suited for interactivity
    wxINTERPOLATION_FAST,
    // better quality
    wxINTERPOLATION_GOOD,
    // best quality, not suited for interactivity
    wxINTERPOLATION_BEST
};


enum wxCompositionMode
{
    // R = Result, S = Source, D = Destination, premultiplied with alpha
    // Ra, Sa, Da their alpha components

    // classic Porter-Duff compositions
    // http://keithp.com/~keithp/porterduff/p253-porter.pdf

    wxCOMPOSITION_INVALID = -1, /* indicates invalid/unsupported mode */
    wxCOMPOSITION_CLEAR, /* R = 0 */
    wxCOMPOSITION_SOURCE, /* R = S */
    wxCOMPOSITION_OVER, /* R = S + D*(1 - Sa) */
    wxCOMPOSITION_IN, /* R = S*Da */
    wxCOMPOSITION_OUT, /* R = S*(1 - Da) */
    wxCOMPOSITION_ATOP, /* R = S*Da + D*(1 - Sa) */

    wxCOMPOSITION_DEST, /* R = D, essentially a noop */
    wxCOMPOSITION_DEST_OVER, /* R = S*(1 - Da) + D */
    wxCOMPOSITION_DEST_IN, /* R = D*Sa */
    wxCOMPOSITION_DEST_OUT, /* R = D*(1 - Sa) */
    wxCOMPOSITION_DEST_ATOP, /* R = S*(1 - Da) + D*Sa */
    wxCOMPOSITION_XOR, /* R = S*(1 - Da) + D*(1 - Sa) */

    // mathematical compositions
    wxCOMPOSITION_ADD /* R = S + D */
};


enum
{
    // special value for column width meaning unspecified/default
    wxCOL_WIDTH_DEFAULT = -1,

    // size the column automatically to fit all values
    wxCOL_WIDTH_AUTOSIZE = -2
};


enum
{
    // column can be resized (included in default flags)
    wxCOL_RESIZABLE   = 1,

    // column can be clicked to toggle the sort order by its contents
    wxCOL_SORTABLE    = 2,

    // column can be dragged to change its order (included in default)
    wxCOL_REORDERABLE = 4,

    // column is not shown at all
    wxCOL_HIDDEN      = 8,

    // default flags for wxHeaderColumn ctor
    wxCOL_DEFAULT_FLAGS = wxCOL_RESIZABLE | wxCOL_REORDERABLE
};


enum
{
    // allow column drag and drop
    wxHD_ALLOW_REORDER = 0x0001,

    // allow hiding (and showing back) the columns using the menu shown by
    // right clicking the header
    wxHD_ALLOW_HIDE = 0x0002,

    // style used by default when creating the control
    wxHD_DEFAULT_STYLE = wxHD_ALLOW_REORDER
};


enum wxHelpSearchMode
{
    wxHELP_SEARCH_INDEX,
    wxHELP_SEARCH_ALL
};


enum
{
    //wxID_HTML_HELPFRAME = wxID_HIGHEST + 1,
    wxID_HTML_PANEL = wxID_HIGHEST + 2,
    wxID_HTML_BACK,
    wxID_HTML_FORWARD,
    wxID_HTML_UPNODE,
    wxID_HTML_UP,
    wxID_HTML_DOWN,
    wxID_HTML_PRINT,
    wxID_HTML_OPENFILE,
    wxID_HTML_OPTIONS,
    wxID_HTML_BOOKMARKSLIST,
    wxID_HTML_BOOKMARKSADD,
    wxID_HTML_BOOKMARKSREMOVE,
    wxID_HTML_TREECTRL,
    wxID_HTML_INDEXPAGE,
    wxID_HTML_INDEXLIST,
    wxID_HTML_INDEXTEXT,
    wxID_HTML_INDEXBUTTON,
    wxID_HTML_INDEXBUTTONALL,
    wxID_HTML_NOTEBOOK,
    wxID_HTML_SEARCHPAGE,
    wxID_HTML_SEARCHTEXT,
    wxID_HTML_SEARCHLIST,
    wxID_HTML_SEARCHBUTTON,
    wxID_HTML_SEARCHCHOICE,
    wxID_HTML_COUNTINFO
};


enum wxHtmlSelectionState
{
    wxHTML_SEL_OUT,     // currently rendered cell is outside the selection
    wxHTML_SEL_IN,      // ... is inside selection
    wxHTML_SEL_CHANGING // ... is the cell on which selection state changes
};


enum
{
    wxHTML_FIND_EXACT             = 1,
    wxHTML_FIND_NEAREST_BEFORE    = 2,
    wxHTML_FIND_NEAREST_AFTER     = 4
};


enum wxHtmlScriptMode
{
    wxHTML_SCRIPT_NORMAL,
    wxHTML_SCRIPT_SUB,
    wxHTML_SCRIPT_SUP
};


enum wxHtmlURLType
{
    wxHTML_URL_PAGE,
    wxHTML_URL_IMAGE,
    wxHTML_URL_OTHER
};


enum
{
    wxHTML_PRIORITY_DONTCARE = 128, // if the order doesn't matter, use this
                                    // priority
    wxHTML_PRIORITY_SYSTEM   = 256  // >=256 is only for wxHTML's internals
};


enum wxHtmlOpeningStatus
{
    /// Open the requested URL
    wxHTML_OPEN,
    /// Do not open the URL
    wxHTML_BLOCK,
    /// Redirect to another URL (returned from OnOpeningURL)
    wxHTML_REDIRECT
};


enum {
    wxPAGE_ODD,
    wxPAGE_EVEN,
    wxPAGE_ALL
};


enum
{
    wxBMP_24BPP        = 24, // default, do not need to set
    //wxBMP_16BPP      = 16, // wxQuantize can only do 236 colors?
    wxBMP_8BPP         =  8, // 8bpp, quantized colors
    wxBMP_8BPP_GREY    =  9, // 8bpp, rgb averaged to greys
    wxBMP_8BPP_GRAY    =  wxBMP_8BPP_GREY,
    wxBMP_8BPP_RED     = 10, // 8bpp, red used as greyscale
    wxBMP_8BPP_PALETTE = 11, // 8bpp, use the wxImage's palette
    wxBMP_4BPP         =  4, // 4bpp, quantized colors
    wxBMP_1BPP         =  1, // 1bpp, quantized "colors"
    wxBMP_1BPP_BW      =  2  // 1bpp, black & white from red
};


enum wxImageResolution
{
    // Resolution not specified
    wxIMAGE_RESOLUTION_NONE = 0,

    // Resolution specified in inches
    wxIMAGE_RESOLUTION_INCHES = 1,

    // Resolution specified in centimeters
    wxIMAGE_RESOLUTION_CM = 2
};


enum wxImageResizeQuality
{
    // different image resizing algorithms used by Scale() and Rescale()
    wxIMAGE_QUALITY_NEAREST = 0,
    wxIMAGE_QUALITY_BILINEAR = 1,
    wxIMAGE_QUALITY_BICUBIC = 2,
    wxIMAGE_QUALITY_BOX_AVERAGE = 3,

    // default quality is low (but fast)
    wxIMAGE_QUALITY_NORMAL = wxIMAGE_QUALITY_NEAREST,

    // highest (but best) quality
    wxIMAGE_QUALITY_HIGH
};


enum
{
    wxIMAGE_LIST_NORMAL, // Normal icons
    wxIMAGE_LIST_SMALL,  // Small icons
    wxIMAGE_LIST_STATE   // State icons: unimplemented (see WIN32 documentation)
};


enum
{
    wxPNG_TYPE_COLOUR = 0,
    wxPNG_TYPE_GREY = 2,
    wxPNG_TYPE_GREY_RED = 3,
    wxPNG_TYPE_PALETTE = 4
};


enum wxLayoutDirection
{
    wxLayout_Default,
    wxLayout_LeftToRight,
    wxLayout_RightToLeft
};


enum wxLocaleCategory
{
    // (any) numbers
    wxLOCALE_CAT_NUMBER,

    // date/time
    wxLOCALE_CAT_DATE,

    // monetary value
    wxLOCALE_CAT_MONEY,

    // default category for wxLocaleInfo values which only apply to a single
    // category (e.g. wxLOCALE_SHORT_DATE_FMT)
    wxLOCALE_CAT_DEFAULT,

    wxLOCALE_CAT_MAX
};


enum wxLocaleInfo
{
    // the thousands separator (for wxLOCALE_CAT_NUMBER or MONEY)
    wxLOCALE_THOUSANDS_SEP,

    // the character used as decimal point (for wxLOCALE_CAT_NUMBER or MONEY)
    wxLOCALE_DECIMAL_POINT,

    // the stftime()-formats used for short/long date and time representations
    // (under some platforms short and long date formats are the same)
    //
    // NB: these elements should appear in this order, code in GetInfo() relies
    //     on it
    wxLOCALE_SHORT_DATE_FMT,
    wxLOCALE_LONG_DATE_FMT,
    wxLOCALE_DATE_TIME_FMT,
    wxLOCALE_TIME_FMT

};


enum wxLocaleInitFlags
{
    wxLOCALE_DONT_LOAD_DEFAULT = 0x0000,     // don't load wxwin.mo
    wxLOCALE_LOAD_DEFAULT      = 0x0001      // load wxwin.mo?
#if WXWIN_COMPATIBILITY_2_8
   ,wxLOCALE_CONV_ENCODING     = 0x0002      // no longer used, simply remove
                                             // it from the existing code
#endif
};


enum wxIPCFormat
{
  wxIPC_INVALID =          0,
  wxIPC_TEXT =             1,  /* CF_TEXT */
  wxIPC_BITMAP =           2,  /* CF_BITMAP */
  wxIPC_METAFILE =         3,  /* CF_METAFILEPICT */
  wxIPC_SYLK =             4,
  wxIPC_DIF =              5,
  wxIPC_TIFF =             6,
  wxIPC_OEMTEXT =          7,  /* CF_OEMTEXT */
  wxIPC_DIB =              8,  /* CF_DIB */
  wxIPC_PALETTE =          9,
  wxIPC_PENDATA =          10,
  wxIPC_RIFF =             11,
  wxIPC_WAVE =             12,
  wxIPC_UTF16TEXT =        13, /* CF_UNICODE */
  wxIPC_ENHMETAFILE =      14,
  wxIPC_FILENAME =         15, /* CF_HDROP */
  wxIPC_LOCALE =           16,
  wxIPC_UTF8TEXT =         17,
  wxIPC_UTF32TEXT =        18,
#if SIZEOF_WCHAR_T == 2
  wxIPC_UNICODETEXT = wxIPC_UTF16TEXT,
#elif SIZEOF_WCHAR_T == 4
  wxIPC_UNICODETEXT = wxIPC_UTF32TEXT,
#else
#  error "Unknown wchar_t size"
#endif
  wxIPC_PRIVATE =          20
};


enum wxLanguage
{
    /// User's default/preffered language as got from OS.
    wxLANGUAGE_DEFAULT,

    /// Unknown language, returned if wxLocale::GetSystemLanguage fails.
    wxLANGUAGE_UNKNOWN,

    wxLANGUAGE_ABKHAZIAN,
    wxLANGUAGE_AFAR,
    wxLANGUAGE_AFRIKAANS,
    wxLANGUAGE_ALBANIAN,
    wxLANGUAGE_AMHARIC,
    wxLANGUAGE_ARABIC,
    wxLANGUAGE_ARABIC_ALGERIA,
    wxLANGUAGE_ARABIC_BAHRAIN,
    wxLANGUAGE_ARABIC_EGYPT,
    wxLANGUAGE_ARABIC_IRAQ,
    wxLANGUAGE_ARABIC_JORDAN,
    wxLANGUAGE_ARABIC_KUWAIT,
    wxLANGUAGE_ARABIC_LEBANON,
    wxLANGUAGE_ARABIC_LIBYA,
    wxLANGUAGE_ARABIC_MOROCCO,
    wxLANGUAGE_ARABIC_OMAN,
    wxLANGUAGE_ARABIC_QATAR,
    wxLANGUAGE_ARABIC_SAUDI_ARABIA,
    wxLANGUAGE_ARABIC_SUDAN,
    wxLANGUAGE_ARABIC_SYRIA,
    wxLANGUAGE_ARABIC_TUNISIA,
    wxLANGUAGE_ARABIC_UAE,
    wxLANGUAGE_ARABIC_YEMEN,
    wxLANGUAGE_ARMENIAN,
    wxLANGUAGE_ASSAMESE,
    wxLANGUAGE_ASTURIAN,
    wxLANGUAGE_AYMARA,
    wxLANGUAGE_AZERI,
    wxLANGUAGE_AZERI_CYRILLIC,
    wxLANGUAGE_AZERI_LATIN,
    wxLANGUAGE_BASHKIR,
    wxLANGUAGE_BASQUE,
    wxLANGUAGE_BELARUSIAN,
    wxLANGUAGE_BENGALI,
    wxLANGUAGE_BHUTANI,
    wxLANGUAGE_BIHARI,
    wxLANGUAGE_BISLAMA,
    wxLANGUAGE_BOSNIAN,
    wxLANGUAGE_BRETON,
    wxLANGUAGE_BULGARIAN,
    wxLANGUAGE_BURMESE,
    wxLANGUAGE_CAMBODIAN,
    wxLANGUAGE_CATALAN,
    wxLANGUAGE_CHINESE,
    wxLANGUAGE_CHINESE_SIMPLIFIED,
    wxLANGUAGE_CHINESE_TRADITIONAL,
    wxLANGUAGE_CHINESE_HONGKONG,
    wxLANGUAGE_CHINESE_MACAU,
    wxLANGUAGE_CHINESE_SINGAPORE,
    wxLANGUAGE_CHINESE_TAIWAN,
    wxLANGUAGE_CORSICAN,
    wxLANGUAGE_CROATIAN,
    wxLANGUAGE_CZECH,
    wxLANGUAGE_DANISH,
    wxLANGUAGE_DUTCH,
    wxLANGUAGE_DUTCH_BELGIAN,
    wxLANGUAGE_ENGLISH,
    wxLANGUAGE_ENGLISH_UK,
    wxLANGUAGE_ENGLISH_US,
    wxLANGUAGE_ENGLISH_AUSTRALIA,
    wxLANGUAGE_ENGLISH_BELIZE,
    wxLANGUAGE_ENGLISH_BOTSWANA,
    wxLANGUAGE_ENGLISH_CANADA,
    wxLANGUAGE_ENGLISH_CARIBBEAN,
    wxLANGUAGE_ENGLISH_DENMARK,
    wxLANGUAGE_ENGLISH_EIRE,
    wxLANGUAGE_ENGLISH_JAMAICA,
    wxLANGUAGE_ENGLISH_NEW_ZEALAND,
    wxLANGUAGE_ENGLISH_PHILIPPINES,
    wxLANGUAGE_ENGLISH_SOUTH_AFRICA,
    wxLANGUAGE_ENGLISH_TRINIDAD,
    wxLANGUAGE_ENGLISH_ZIMBABWE,
    wxLANGUAGE_ESPERANTO,
    wxLANGUAGE_ESTONIAN,
    wxLANGUAGE_FAEROESE,
    wxLANGUAGE_FARSI,
    wxLANGUAGE_FIJI,
    wxLANGUAGE_FINNISH,
    wxLANGUAGE_FRENCH,
    wxLANGUAGE_FRENCH_BELGIAN,
    wxLANGUAGE_FRENCH_CANADIAN,
    wxLANGUAGE_FRENCH_LUXEMBOURG,
    wxLANGUAGE_FRENCH_MONACO,
    wxLANGUAGE_FRENCH_SWISS,
    wxLANGUAGE_FRISIAN,
    wxLANGUAGE_GALICIAN,
    wxLANGUAGE_GEORGIAN,
    wxLANGUAGE_GERMAN,
    wxLANGUAGE_GERMAN_AUSTRIAN,
    wxLANGUAGE_GERMAN_BELGIUM,
    wxLANGUAGE_GERMAN_LIECHTENSTEIN,
    wxLANGUAGE_GERMAN_LUXEMBOURG,
    wxLANGUAGE_GERMAN_SWISS,
    wxLANGUAGE_GREEK,
    wxLANGUAGE_GREENLANDIC,
    wxLANGUAGE_GUARANI,
    wxLANGUAGE_GUJARATI,
    wxLANGUAGE_HAUSA,
    wxLANGUAGE_HEBREW,
    wxLANGUAGE_HINDI,
    wxLANGUAGE_HUNGARIAN,
    wxLANGUAGE_ICELANDIC,
    wxLANGUAGE_INDONESIAN,
    wxLANGUAGE_INTERLINGUA,
    wxLANGUAGE_INTERLINGUE,
    wxLANGUAGE_INUKTITUT,
    wxLANGUAGE_INUPIAK,
    wxLANGUAGE_IRISH,
    wxLANGUAGE_ITALIAN,
    wxLANGUAGE_ITALIAN_SWISS,
    wxLANGUAGE_JAPANESE,
    wxLANGUAGE_JAVANESE,
    wxLANGUAGE_KANNADA,
    wxLANGUAGE_KASHMIRI,
    wxLANGUAGE_KASHMIRI_INDIA,
    wxLANGUAGE_KAZAKH,
    wxLANGUAGE_KERNEWEK,
    wxLANGUAGE_KINYARWANDA,
    wxLANGUAGE_KIRGHIZ,
    wxLANGUAGE_KIRUNDI,
    wxLANGUAGE_KONKANI,
    wxLANGUAGE_KOREAN,
    wxLANGUAGE_KURDISH,
    wxLANGUAGE_LAOTHIAN,
    wxLANGUAGE_LATIN,
    wxLANGUAGE_LATVIAN,
    wxLANGUAGE_LINGALA,
    wxLANGUAGE_LITHUANIAN,
    wxLANGUAGE_MACEDONIAN,
    wxLANGUAGE_MALAGASY,
    wxLANGUAGE_MALAY,
    wxLANGUAGE_MALAYALAM,
    wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM,
    wxLANGUAGE_MALAY_MALAYSIA,
    wxLANGUAGE_MALTESE,
    wxLANGUAGE_MANIPURI,
    wxLANGUAGE_MAORI,
    wxLANGUAGE_MARATHI,
    wxLANGUAGE_MOLDAVIAN,
    wxLANGUAGE_MONGOLIAN,
    wxLANGUAGE_NAURU,
    wxLANGUAGE_NEPALI,
    wxLANGUAGE_NEPALI_INDIA,
    wxLANGUAGE_NORWEGIAN_BOKMAL,
    wxLANGUAGE_NORWEGIAN_NYNORSK,
    wxLANGUAGE_OCCITAN,
    wxLANGUAGE_ORIYA,
    wxLANGUAGE_OROMO,
    wxLANGUAGE_PASHTO,
    wxLANGUAGE_POLISH,
    wxLANGUAGE_PORTUGUESE,
    wxLANGUAGE_PORTUGUESE_BRAZILIAN,
    wxLANGUAGE_PUNJABI,
    wxLANGUAGE_QUECHUA,
    wxLANGUAGE_RHAETO_ROMANCE,
    wxLANGUAGE_ROMANIAN,
    wxLANGUAGE_RUSSIAN,
    wxLANGUAGE_RUSSIAN_UKRAINE,
    wxLANGUAGE_SAMI,
    wxLANGUAGE_SAMOAN,
    wxLANGUAGE_SANGHO,
    wxLANGUAGE_SANSKRIT,
    wxLANGUAGE_SCOTS_GAELIC,
    wxLANGUAGE_SERBIAN,
    wxLANGUAGE_SERBIAN_CYRILLIC,
    wxLANGUAGE_SERBIAN_LATIN,
    wxLANGUAGE_SERBO_CROATIAN,
    wxLANGUAGE_SESOTHO,
    wxLANGUAGE_SETSWANA,
    wxLANGUAGE_SHONA,
    wxLANGUAGE_SINDHI,
    wxLANGUAGE_SINHALESE,
    wxLANGUAGE_SISWATI,
    wxLANGUAGE_SLOVAK,
    wxLANGUAGE_SLOVENIAN,
    wxLANGUAGE_SOMALI,
    wxLANGUAGE_SPANISH,
    wxLANGUAGE_SPANISH_ARGENTINA,
    wxLANGUAGE_SPANISH_BOLIVIA,
    wxLANGUAGE_SPANISH_CHILE,
    wxLANGUAGE_SPANISH_COLOMBIA,
    wxLANGUAGE_SPANISH_COSTA_RICA,
    wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC,
    wxLANGUAGE_SPANISH_ECUADOR,
    wxLANGUAGE_SPANISH_EL_SALVADOR,
    wxLANGUAGE_SPANISH_GUATEMALA,
    wxLANGUAGE_SPANISH_HONDURAS,
    wxLANGUAGE_SPANISH_MEXICAN,
    wxLANGUAGE_SPANISH_MODERN,
    wxLANGUAGE_SPANISH_NICARAGUA,
    wxLANGUAGE_SPANISH_PANAMA,
    wxLANGUAGE_SPANISH_PARAGUAY,
    wxLANGUAGE_SPANISH_PERU,
    wxLANGUAGE_SPANISH_PUERTO_RICO,
    wxLANGUAGE_SPANISH_URUGUAY,
    wxLANGUAGE_SPANISH_US,
    wxLANGUAGE_SPANISH_VENEZUELA,
    wxLANGUAGE_SUNDANESE,
    wxLANGUAGE_SWAHILI,
    wxLANGUAGE_SWEDISH,
    wxLANGUAGE_SWEDISH_FINLAND,
    wxLANGUAGE_TAGALOG,
    wxLANGUAGE_TAJIK,
    wxLANGUAGE_TAMIL,
    wxLANGUAGE_TATAR,
    wxLANGUAGE_TELUGU,
    wxLANGUAGE_THAI,
    wxLANGUAGE_TIBETAN,
    wxLANGUAGE_TIGRINYA,
    wxLANGUAGE_TONGA,
    wxLANGUAGE_TSONGA,
    wxLANGUAGE_TURKISH,
    wxLANGUAGE_TURKMEN,
    wxLANGUAGE_TWI,
    wxLANGUAGE_UIGHUR,
    wxLANGUAGE_UKRAINIAN,
    wxLANGUAGE_URDU,
    wxLANGUAGE_URDU_INDIA,
    wxLANGUAGE_URDU_PAKISTAN,
    wxLANGUAGE_UZBEK,
    wxLANGUAGE_UZBEK_CYRILLIC,
    wxLANGUAGE_UZBEK_LATIN,
    wxLANGUAGE_VALENCIAN,
    wxLANGUAGE_VIETNAMESE,
    wxLANGUAGE_VOLAPUK,
    wxLANGUAGE_WELSH,
    wxLANGUAGE_WOLOF,
    wxLANGUAGE_XHOSA,
    wxLANGUAGE_YIDDISH,
    wxLANGUAGE_YORUBA,
    wxLANGUAGE_ZHUANG,
    wxLANGUAGE_ZULU,

    /// For custom, user-defined languages.
    wxLANGUAGE_USER_DEFINED
};


enum wxEdge
{
    wxLeft, wxTop, wxRight, wxBottom, wxWidth, wxHeight,
    wxCentre, wxCenter = wxCentre, wxCentreX, wxCentreY
};


enum wxRelationship
{
    wxUnconstrained = 0,
    wxAsIs,
    wxPercentOf,
    wxAbove,
    wxBelow,
    wxLeftOf,
    wxRightOf,
    wxSameAs,
    wxAbsolute
};


enum
{
    wxLIST_NEXT_ABOVE,          // Searches for an item above the specified item
    wxLIST_NEXT_ALL,            // Searches for subsequent item by index
    wxLIST_NEXT_BELOW,          // Searches for an item below the specified item
    wxLIST_NEXT_LEFT,           // Searches for an item to the left of the specified item
    wxLIST_NEXT_RIGHT           // Searches for an item to the right of the specified item
};


enum
{
    wxLIST_ALIGN_DEFAULT,
    wxLIST_ALIGN_LEFT,
    wxLIST_ALIGN_TOP,
    wxLIST_ALIGN_SNAP_TO_GRID
};


enum wxListColumnFormat
{
    wxLIST_FORMAT_LEFT,
    wxLIST_FORMAT_RIGHT,
    wxLIST_FORMAT_CENTRE,
    wxLIST_FORMAT_CENTER = wxLIST_FORMAT_CENTRE
};


enum
{
    wxLIST_AUTOSIZE = -1,
    wxLIST_AUTOSIZE_USEHEADER = -2      // partly supported by generic version
};


enum
{
    wxLIST_RECT_BOUNDS,
    wxLIST_RECT_ICON,
    wxLIST_RECT_LABEL
};


enum
{
    wxLIST_FIND_UP,
    wxLIST_FIND_DOWN,
    wxLIST_FIND_LEFT,
    wxLIST_FIND_RIGHT
};


enum wxLogLevelValues
{
    wxLOG_FatalError, // program can't continue, abort immediately
    wxLOG_Error,      // a serious error, user must be informed about it
    wxLOG_Warning,    // user is normally informed about it but may be ignored
    wxLOG_Message,    // normal message (i.e. normal output of a non GUI app)
    wxLOG_Status,     // informational: might go to the status line of GUI app
    wxLOG_Info,       // informational message (a.k.a. 'Verbose')
    wxLOG_Debug,      // never shown to the user, disabled in release mode
    wxLOG_Trace,      // trace messages are also only enabled in debug mode
    wxLOG_Progress,   // used for progress indicator (not yet)
    wxLOG_User = 100, // user defined levels start here
    wxLOG_Max = 10000
};


enum wxMediaState
{
    wxMEDIASTATE_STOPPED,
    wxMEDIASTATE_PAUSED,
    wxMEDIASTATE_PLAYING
};


enum wxMediaCtrlPlayerControls
{
    wxMEDIACTRLPLAYERCONTROLS_NONE           =   0,
    //Step controls like fastforward, step one frame etc.
    wxMEDIACTRLPLAYERCONTROLS_STEP           =   1 << 0,
    //Volume controls like the speaker icon, volume slider, etc.
    wxMEDIACTRLPLAYERCONTROLS_VOLUME         =   1 << 1,
    wxMEDIACTRLPLAYERCONTROLS_DEFAULT        =
                    wxMEDIACTRLPLAYERCONTROLS_STEP |
                    wxMEDIACTRLPLAYERCONTROLS_VOLUME
};


enum wxMailcapStyle
{
    wxMAILCAP_STANDARD = 1,
    wxMAILCAP_NETSCAPE = 2,
    wxMAILCAP_KDE = 4,
    wxMAILCAP_GNOME = 8,

    wxMAILCAP_ALL = 15
};


enum wxMouseButton
{
    wxMOUSE_BTN_ANY     = -1,
    wxMOUSE_BTN_NONE    = 0,
    wxMOUSE_BTN_LEFT    = 1,
    wxMOUSE_BTN_MIDDLE  = 2,
    wxMOUSE_BTN_RIGHT   = 3,
    wxMOUSE_BTN_AUX1    = 4,
    wxMOUSE_BTN_AUX2    = 5,
    wxMOUSE_BTN_MAX
};


enum wxMessageOutputFlags
{
    wxMSGOUT_PREFER_STDERR = 0, // use stderr if available (this is the default)
    wxMSGOUT_PREFER_MSGBOX = 1  // always use message box if available
};


enum wxMessageQueueError
{
    wxMSGQUEUE_NO_ERROR = 0, // operation completed successfully
    wxMSGQUEUE_TIMEOUT,      // no messages received before timeout expired
    wxMSGQUEUE_MISC_ERROR    // some unexpected (and fatal) error has occurred
};


enum wxBitmapTransparency
{
  wxBitmapTransparency_Auto,    // default: copy alpha if the source has it
  wxBitmapTransparency_None,    // never create alpha
  wxBitmapTransparency_Always   // always use alpha
};


enum wxAutomationInstanceFlags
{
    // Only use the existing instance, never create a new one.
    wxAutomationInstance_UseExistingOnly = 0,

    // Create a new instance if there are no existing ones.
    wxAutomationInstance_CreateIfNeeded = 1,

    // Do not log errors if we failed to get the existing instance because none
    // is available.
    wxAutomationInstance_SilentIfNone = 2
};


enum
{
    wxNB_HITTEST_NOWHERE = wxBK_HITTEST_NOWHERE,
    wxNB_HITTEST_ONICON  = wxBK_HITTEST_ONICON,
    wxNB_HITTEST_ONLABEL = wxBK_HITTEST_ONLABEL,
    wxNB_HITTEST_ONITEM  = wxBK_HITTEST_ONITEM,
    wxNB_HITTEST_ONPAGE  = wxBK_HITTEST_ONPAGE
};


enum
{
    // Double-clicking cycles item if wxCB_READONLY is also used.
    wxODCB_DCLICK_CYCLES            = wxCC_SPECIAL_DCLICK,

    // If used, control itself is not custom paint using callback.
    // Even if this is not used, writable combo is never custom paint
    // until SetCustomPaintWidth is called
    wxODCB_STD_CONTROL_PAINT        = 0x1000
};


enum wxOwnerDrawnComboBoxPaintingFlags
{
    // when set, we are painting the selected item in control,
    // not in the popup
    wxODCB_PAINTING_CONTROL         = 0x0001,


    // when set, we are painting an item which should have
    // focus rectangle painted in the background. Text colour
    // and clipping region are then appropriately set in
    // the default OnDrawBackground implementation.
    wxODCB_PAINTING_SELECTED        = 0x0002
};


enum wxPenStyle
{
    wxPENSTYLE_INVALID = -1,

    wxPENSTYLE_SOLID = wxSOLID,
    wxPENSTYLE_DOT = wxDOT,
    wxPENSTYLE_LONG_DASH = wxLONG_DASH,
    wxPENSTYLE_SHORT_DASH = wxSHORT_DASH,
    wxPENSTYLE_DOT_DASH = wxDOT_DASH,
    wxPENSTYLE_USER_DASH = wxUSER_DASH,

    wxPENSTYLE_TRANSPARENT = wxTRANSPARENT,

    wxPENSTYLE_STIPPLE_MASK_OPAQUE = wxSTIPPLE_MASK_OPAQUE,
    wxPENSTYLE_STIPPLE_MASK = wxSTIPPLE_MASK,
    wxPENSTYLE_STIPPLE = wxSTIPPLE,

    wxPENSTYLE_BDIAGONAL_HATCH = wxBDIAGONAL_HATCH,
    wxPENSTYLE_CROSSDIAG_HATCH = wxCROSSDIAG_HATCH,
    wxPENSTYLE_FDIAGONAL_HATCH = wxFDIAGONAL_HATCH,
    wxPENSTYLE_CROSS_HATCH = wxCROSS_HATCH,
    wxPENSTYLE_HORIZONTAL_HATCH = wxHORIZONTAL_HATCH,
    wxPENSTYLE_VERTICAL_HATCH = wxVERTICAL_HATCH,

    wxPENSTYLE_FIRST_HATCH = wxFIRST_HATCH,
    wxPENSTYLE_LAST_HATCH = wxLAST_HATCH
};


enum wxPenJoin
{
    wxJOIN_INVALID = -1,

    wxJOIN_BEVEL = 120,
    wxJOIN_MITER,
    wxJOIN_ROUND
};


enum wxPenCap
{
    wxCAP_INVALID = -1,

    wxCAP_ROUND = 130,
    wxCAP_PROJECTING,
    wxCAP_BUTT
};


enum wxOperatingSystemId
{
    wxOS_UNKNOWN = 0,                 // returned on error

    wxOS_MAC_OS         = 1 << 0,     // Apple Mac OS 8/9/X with Mac paths
    wxOS_MAC_OSX_DARWIN = 1 << 1,     // Apple Mac OS X with Unix paths
    wxOS_MAC = wxOS_MAC_OS|wxOS_MAC_OSX_DARWIN,

    wxOS_WINDOWS_9X     = 1 << 2,     // Windows 9x family (95/98/ME)
    wxOS_WINDOWS_NT     = 1 << 3,     // Windows NT family (NT/2000/XP)
    wxOS_WINDOWS_MICRO  = 1 << 4,     // MicroWindows
    wxOS_WINDOWS_CE     = 1 << 5,     // Windows CE (Window Mobile)
    wxOS_WINDOWS = wxOS_WINDOWS_9X      |
                   wxOS_WINDOWS_NT      |
                   wxOS_WINDOWS_MICRO   |
                   wxOS_WINDOWS_CE,

    wxOS_UNIX_LINUX     = 1 << 6,       // Linux
    wxOS_UNIX_FREEBSD   = 1 << 7,       // FreeBSD
    wxOS_UNIX_OPENBSD   = 1 << 8,       // OpenBSD
    wxOS_UNIX_NETBSD    = 1 << 9,       // NetBSD
    wxOS_UNIX_SOLARIS   = 1 << 10,      // SunOS
    wxOS_UNIX_AIX       = 1 << 11,      // AIX
    wxOS_UNIX_HPUX      = 1 << 12,      // HP/UX
    wxOS_UNIX = wxOS_UNIX_LINUX     |
                wxOS_UNIX_FREEBSD   |
                wxOS_UNIX_OPENBSD   |
                wxOS_UNIX_NETBSD    |
                wxOS_UNIX_SOLARIS   |
                wxOS_UNIX_AIX       |
                wxOS_UNIX_HPUX,

    // 1<<13 and 1<<14 available for other Unix flavours

    wxOS_DOS            = 1 << 15,      // Microsoft DOS
    wxOS_OS2            = 1 << 16,       // OS/2

    wxOS_PALM_OS        = 1 << 17,       // Pure Palm OS
    wxOS_PALM_LINUX     = 1 << 18,       // Palm over linux
    wxOS_PALM = wxOS_PALM_OS | wxOS_PALM_LINUX
};


enum wxPortId
{
    wxPORT_UNKNOWN  = 0,            // returned on error

    wxPORT_BASE     = 1 << 0,       // wxBase, no native toolkit used

    wxPORT_MSW      = 1 << 1,       // wxMSW, native toolkit is Windows API
    wxPORT_MOTIF    = 1 << 2,       // wxMotif, using [Open]Motif or Lesstif
    wxPORT_GTK      = 1 << 3,       // wxGTK, using GTK+ 1.x, 2.x, GPE or Maemo
    wxPORT_MGL      = 1 << 4,       // wxMGL, using wxUniversal
    wxPORT_X11      = 1 << 5,       // wxX11, using wxUniversal
    wxPORT_PM       = 1 << 6,       // wxOS2, using OS/2 Presentation Manager
    wxPORT_OS2      = wxPORT_PM,    // wxOS2, using OS/2 Presentation Manager
    wxPORT_MAC      = 1 << 7,       // wxOSX (former wxMac), using Cocoa, Carbon or iPhone API
    wxPORT_OSX      = wxPORT_MAC,   // wxOSX, using Cocoa, Carbon or iPhone API
    wxPORT_COCOA    = 1 << 8,       // wxCocoa, using Cocoa NextStep/Mac API
    wxPORT_WINCE    = 1 << 9,       // wxWinCE, toolkit is WinCE SDK API
    wxPORT_PALMOS   = 1 << 10,      // wxPalmOS, toolkit is PalmOS API
    wxPORT_DFB      = 1 << 11       // wxDFB, using wxUniversal
};


enum wxArchitecture
{
    wxARCH_INVALID = -1,        // returned on error

    wxARCH_32,                  // 32 bit
    wxARCH_64,

    wxARCH_MAX
};


enum wxEndianness
{
    wxENDIAN_INVALID = -1,      // returned on error

    wxENDIAN_BIG,               // 4321
    wxENDIAN_LITTLE,            // 1234
    wxENDIAN_PDP,               // 3412

    wxENDIAN_MAX
};


enum wxPowerType
{
    wxPOWER_SOCKET,
    wxPOWER_BATTERY,
    wxPOWER_UNKNOWN
};


enum wxBatteryState
{
    wxBATTERY_NORMAL_STATE,    // system is fully usable
    wxBATTERY_LOW_STATE,       // start to worry
    wxBATTERY_CRITICAL_STATE,  // save quickly
    wxBATTERY_SHUTDOWN_STATE,  // too late
    wxBATTERY_UNKNOWN_STATE
};


enum wxPrinterError
{
    wxPRINTER_NO_ERROR = 0,
    wxPRINTER_CANCELLED,
    wxPRINTER_ERROR
};


enum wxPreviewFrameModalityKind
{
    // Disable all the other top level windows while the preview is shown.
    wxPreviewFrame_AppModal,

    // Disable only the parent window while the preview is shown.
    wxPreviewFrame_WindowModal,

    // Don't disable any windows.
    wxPreviewFrame_NonModal
};


enum
{
    // no redirection
    wxPROCESS_DEFAULT = 0,

    // redirect the IO of the child process
    wxPROCESS_REDIRECT = 1
};


enum wxPGPropertyFlags
{

/** Indicates bold font.
*/
wxPG_PROP_MODIFIED                  = 0x0001,

/** Disables ('greyed' text and editor does not activate) property.
*/
wxPG_PROP_DISABLED                  = 0x0002,

/** Hider button will hide this property.
*/
wxPG_PROP_HIDDEN                    = 0x0004,

/** This property has custom paint image just in front of its value.
    If property only draws custom images into a popup list, then this
    flag should not be set.
*/
wxPG_PROP_CUSTOMIMAGE               = 0x0008,

/** Do not create text based editor for this property (but button-triggered
    dialog and choice are ok).
*/
wxPG_PROP_NOEDITOR                  = 0x0010,

/** Property is collapsed, ie. it's children are hidden.
*/
wxPG_PROP_COLLAPSED                 = 0x0020,

/**
    If property is selected, then indicates that validation failed for pending
    value.

    If property is not selected, that indicates that the actual property
    value has failed validation (NB: this behaviour is not currently supported,
    but may be used in future).
*/
wxPG_PROP_INVALID_VALUE             = 0x0040,

// 0x0080,

/** Switched via SetWasModified(). Temporary flag - only used when
    setting/changing property value.
*/
wxPG_PROP_WAS_MODIFIED              = 0x0200,

/**
    If set, then child properties (if any) are private, and should be
    "invisible" to the application.
*/
wxPG_PROP_AGGREGATE                 = 0x0400,

/** If set, then child properties (if any) are copies and should not
    be deleted in dtor.
*/
wxPG_PROP_CHILDREN_ARE_COPIES       = 0x0800,

/**
    Classifies this item as a non-category.

    Used for faster item type identification.
*/
wxPG_PROP_PROPERTY                  = 0x1000,

/**
    Classifies this item as a category.

    Used for faster item type identification.
*/
wxPG_PROP_CATEGORY                  = 0x2000,

/** Classifies this item as a property that has children, but is not aggregate
    (ie children are not private).
*/
wxPG_PROP_MISC_PARENT               = 0x4000,

/** Property is read-only. Editor is still created for wxTextCtrl-based
    property editors. For others, editor is not usually created because
    they do implement wxTE_READONLY style or equivalent.
*/
wxPG_PROP_READONLY                  = 0x8000,

//
// NB: FLAGS ABOVE 0x8000 CANNOT BE USED WITH PROPERTY ITERATORS
//

/** Property's value is composed from values of child properties.
    @remarks
    This flag cannot be used with property iterators.
*/
wxPG_PROP_COMPOSED_VALUE            = 0x00010000,

/** Common value of property is selectable in editor.
    @remarks
    This flag cannot be used with property iterators.
*/
wxPG_PROP_USES_COMMON_VALUE         = 0x00020000,

/** Property can be set to unspecified value via editor.
    Currently, this applies to following properties:
    - wxIntProperty, wxUIntProperty, wxFloatProperty, wxEditEnumProperty:
      Clear the text field

    @remarks
    This flag cannot be used with property iterators.

    @see wxPGProperty::SetAutoUnspecified()
*/
wxPG_PROP_AUTO_UNSPECIFIED          = 0x00040000,

/** Indicates the bit useable by derived properties.
*/
wxPG_PROP_CLASS_SPECIFIC_1          = 0x00080000,

/** Indicates the bit useable by derived properties.
*/
wxPG_PROP_CLASS_SPECIFIC_2          = 0x00100000,

/** Indicates that the property is being deleted and should be ignored.
*/
wxPG_PROP_BEING_DELETED             = 0x00200000

};


enum wxPG_GETPROPERTYVALUES_FLAGS
{

/** Flags for wxPropertyGridInterface::GetPropertyValues */
wxPG_KEEP_STRUCTURE               = 0x00000010,

/** Flags for wxPropertyGrid::SetPropertyAttribute() etc */
wxPG_RECURSE                      = 0x00000020,

/** Include attributes for GetPropertyValues. */
wxPG_INC_ATTRIBUTES               = 0x00000040,

/** Used when first starting recursion. */
wxPG_RECURSE_STARTS               = 0x00000080,

/** Force value change. */
wxPG_FORCE                        = 0x00000100,

/** Only sort categories and their immediate children.
    Sorting done by wxPG_AUTO_SORT option uses this.
*/
wxPG_SORT_TOP_LEVEL_ONLY          = 0x00000200

};


enum wxPG_MISC_ARG_FLAGS
{
    // Get/Store full value instead of displayed value.
    wxPG_FULL_VALUE                     = 0x00000001,

    wxPG_REPORT_ERROR                   = 0x00000002,

    wxPG_PROPERTY_SPECIFIC              = 0x00000004,

    // Get/Store editable value instead of displayed one (should only be
    // different in the case of common values)
    wxPG_EDITABLE_VALUE                 = 0x00000008,

    // Used when dealing with fragments of composite string value
    wxPG_COMPOSITE_FRAGMENT             = 0x00000010,

    // Means property for which final string value is for cannot really be
    // edited.
    wxPG_UNEDITABLE_COMPOSITE_FRAGMENT  = 0x00000020,

    // ValueToString() called from GetValueAsString()
    // (guarantees that input wxVariant value is current own value)
    wxPG_VALUE_IS_CURRENT               = 0x00000040,

    // Value is being set programmatically (ie. not by user)
    wxPG_PROGRAMMATIC_VALUE             = 0x00000080
};


enum wxPG_SETVALUE_FLAGS
{
    wxPG_SETVAL_REFRESH_EDITOR      = 0x0001,
    wxPG_SETVAL_AGGREGATED          = 0x0002,
    wxPG_SETVAL_FROM_PARENT         = 0x0004,
    wxPG_SETVAL_BY_USER             = 0x0008  // Set if value changed by user
};


enum wxPGNumericValidationConstants
{
    /** Instead of modifying the value, show an error message.
    */
    wxPG_PROPERTY_VALIDATION_ERROR_MESSAGE      = 0,

    /** Modify value, but stick with the limitations.
    */
    wxPG_PROPERTY_VALIDATION_SATURATE           = 1,

    /** Modify value, wrap around on overflow.
    */
    wxPG_PROPERTY_VALIDATION_WRAP               = 2
};


enum
{
    // use extended regex syntax
    wxRE_EXTENDED = 0,

    // use advanced RE syntax (built-in regex only)
#ifdef wxHAS_REGEX_ADVANCED
    wxRE_ADVANCED = 1,
#endif

    // use basic RE syntax
    wxRE_BASIC    = 2,

    // ignore case in match
    wxRE_ICASE    = 4,

    // only check match, don't set back references
    wxRE_NOSUB    = 8,

    // if not set, treat '\n' as an ordinary character, otherwise it is
    // special: it is not matched by '.' and '^' and '$' always match
    // after/before it regardless of the setting of wxRE_NOT[BE]OL
    wxRE_NEWLINE  = 16,

    // default flags
    wxRE_DEFAULT  = wxRE_EXTENDED
};


enum
{
    // '^' doesn't match at the start of line
    wxRE_NOTBOL = 32,

    // '$' doesn't match at the end of line
    wxRE_NOTEOL = 64
};


enum wxRegionContain
{
    wxOutRegion = 0,
    wxPartRegion = 1,
    wxInRegion = 2
};


enum wxRegionOp
{
    // Creates the intersection of the two combined regions.
    wxRGN_AND,

    // Creates a copy of the region
    wxRGN_COPY,

    // Combines the parts of first region that are not in the second one
    wxRGN_DIFF,

    // Creates the union of two combined regions.
    wxRGN_OR,

    // Creates the union of two regions except for any overlapping areas.
    wxRGN_XOR
};


enum
{
    wxCONTROL_DISABLED   = 0x00000001,  // control is disabled
    wxCONTROL_FOCUSED    = 0x00000002,  // currently has keyboard focus
    wxCONTROL_PRESSED    = 0x00000004,  // (button) is pressed
    wxCONTROL_SPECIAL    = 0x00000008,  // control-specific bit:
    wxCONTROL_ISDEFAULT  = wxCONTROL_SPECIAL, // only for the buttons
    wxCONTROL_ISSUBMENU  = wxCONTROL_SPECIAL, // only for the menu items
    wxCONTROL_EXPANDED   = wxCONTROL_SPECIAL, // only for the tree items
    wxCONTROL_SIZEGRIP   = wxCONTROL_SPECIAL, // only for the status bar panes
    wxCONTROL_FLAT       = wxCONTROL_SPECIAL, // checkboxes only: flat border
    wxCONTROL_CURRENT    = 0x00000010,  // mouse is currently over the control
    wxCONTROL_SELECTED   = 0x00000020,  // selected item in e.g. listbox
    wxCONTROL_CHECKED    = 0x00000040,  // (check/radio button) is checked
    wxCONTROL_CHECKABLE  = 0x00000080,  // (menu) item can be checked
    wxCONTROL_UNDETERMINED = wxCONTROL_CHECKABLE, // (check) undetermined state

    wxCONTROL_FLAGS_MASK = 0x000000ff,

    // this is a pseudo flag not used directly by wxRenderer but rather by some
    // controls internally
    wxCONTROL_DIRTY      = 0x80000000
};


enum wxTitleBarButton
{
    wxTITLEBAR_BUTTON_CLOSE    = 0x01000000,
    wxTITLEBAR_BUTTON_MAXIMIZE = 0x02000000,
    wxTITLEBAR_BUTTON_ICONIZE  = 0x04000000,
    wxTITLEBAR_BUTTON_RESTORE  = 0x08000000,
    wxTITLEBAR_BUTTON_HELP     = 0x10000000
};


enum wxHeaderSortIconType
{
    wxHDR_SORT_ICON_NONE,        // Header button has no sort arrow
    wxHDR_SORT_ICON_UP,          // Header button an up sort arrow icon
    wxHDR_SORT_ICON_DOWN         // Header button a down sort arrow icon
};


enum wxRibbonArtSetting
{
    wxRIBBON_ART_TAB_SEPARATION_SIZE,
    wxRIBBON_ART_PAGE_BORDER_LEFT_SIZE,
    wxRIBBON_ART_PAGE_BORDER_TOP_SIZE,
    wxRIBBON_ART_PAGE_BORDER_RIGHT_SIZE,
    wxRIBBON_ART_PAGE_BORDER_BOTTOM_SIZE,
    wxRIBBON_ART_PANEL_X_SEPARATION_SIZE,
    wxRIBBON_ART_PANEL_Y_SEPARATION_SIZE,
    wxRIBBON_ART_TOOL_GROUP_SEPARATION_SIZE,
    wxRIBBON_ART_GALLERY_BITMAP_PADDING_LEFT_SIZE,
    wxRIBBON_ART_GALLERY_BITMAP_PADDING_RIGHT_SIZE,
    wxRIBBON_ART_GALLERY_BITMAP_PADDING_TOP_SIZE,
    wxRIBBON_ART_GALLERY_BITMAP_PADDING_BOTTOM_SIZE,
    wxRIBBON_ART_PANEL_LABEL_FONT,
    wxRIBBON_ART_BUTTON_BAR_LABEL_FONT,
    wxRIBBON_ART_TAB_LABEL_FONT,
    wxRIBBON_ART_BUTTON_BAR_LABEL_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_HOVER_BORDER_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_HOVER_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_ACTIVE_BORDER_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_COLOUR,
    wxRIBBON_ART_BUTTON_BAR_ACTIVE_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_GALLERY_BORDER_COLOUR,
    wxRIBBON_ART_GALLERY_HOVER_BACKGROUND_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_FACE_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_HOVER_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_HOVER_FACE_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_ACTIVE_FACE_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_DISABLED_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_GALLERY_BUTTON_DISABLED_FACE_COLOUR,
    wxRIBBON_ART_GALLERY_ITEM_BORDER_COLOUR,
    wxRIBBON_ART_TAB_LABEL_COLOUR,
    wxRIBBON_ART_TAB_SEPARATOR_COLOUR,
    wxRIBBON_ART_TAB_SEPARATOR_GRADIENT_COLOUR,
    wxRIBBON_ART_TAB_CTRL_BACKGROUND_COLOUR,
    wxRIBBON_ART_TAB_CTRL_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_TAB_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_TAB_HOVER_BACKGROUND_COLOUR,
    wxRIBBON_ART_TAB_HOVER_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_COLOUR,
    wxRIBBON_ART_TAB_ACTIVE_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_TAB_BORDER_COLOUR,
    wxRIBBON_ART_PANEL_BORDER_COLOUR,
    wxRIBBON_ART_PANEL_BORDER_GRADIENT_COLOUR,
    wxRIBBON_ART_PANEL_MINIMISED_BORDER_COLOUR,
    wxRIBBON_ART_PANEL_MINIMISED_BORDER_GRADIENT_COLOUR,
    wxRIBBON_ART_PANEL_LABEL_BACKGROUND_COLOUR,
    wxRIBBON_ART_PANEL_LABEL_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_PANEL_LABEL_COLOUR,
    wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_COLOUR,
    wxRIBBON_ART_PANEL_HOVER_LABEL_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_PANEL_HOVER_LABEL_COLOUR,
    wxRIBBON_ART_PANEL_MINIMISED_LABEL_COLOUR,
    wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_COLOUR,
    wxRIBBON_ART_PANEL_ACTIVE_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_PAGE_BORDER_COLOUR,
    wxRIBBON_ART_PAGE_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_PAGE_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_PAGE_BACKGROUND_COLOUR,
    wxRIBBON_ART_PAGE_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_PAGE_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_PAGE_HOVER_BACKGROUND_COLOUR,
    wxRIBBON_ART_PAGE_HOVER_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_TOOLBAR_BORDER_COLOUR,
    wxRIBBON_ART_TOOLBAR_HOVER_BORDER_COLOUR,
    wxRIBBON_ART_TOOLBAR_FACE_COLOUR,
    wxRIBBON_ART_TOOL_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_TOOL_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_TOOL_BACKGROUND_COLOUR,
    wxRIBBON_ART_TOOL_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_TOOL_HOVER_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_TOOL_HOVER_BACKGROUND_COLOUR,
    wxRIBBON_ART_TOOL_HOVER_BACKGROUND_GRADIENT_COLOUR,
    wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_COLOUR,
    wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_TOP_GRADIENT_COLOUR,
    wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_COLOUR,
    wxRIBBON_ART_TOOL_ACTIVE_BACKGROUND_GRADIENT_COLOUR
};


enum wxRibbonScrollButtonStyle
{
    wxRIBBON_SCROLL_BTN_LEFT = 0,
    wxRIBBON_SCROLL_BTN_RIGHT = 1,
    wxRIBBON_SCROLL_BTN_UP = 2,
    wxRIBBON_SCROLL_BTN_DOWN = 3,

    wxRIBBON_SCROLL_BTN_DIRECTION_MASK = 3,

    wxRIBBON_SCROLL_BTN_NORMAL = 0,
    wxRIBBON_SCROLL_BTN_HOVERED = 4,
    wxRIBBON_SCROLL_BTN_ACTIVE = 8,

    wxRIBBON_SCROLL_BTN_STATE_MASK = 12,

    wxRIBBON_SCROLL_BTN_FOR_OTHER = 0,
    wxRIBBON_SCROLL_BTN_FOR_TABS = 16,
    wxRIBBON_SCROLL_BTN_FOR_PAGE = 32,

    wxRIBBON_SCROLL_BTN_FOR_MASK = 48
};


enum wxRibbonButtonKind
{
    wxRIBBON_BUTTON_NORMAL    = 1 << 0,
    wxRIBBON_BUTTON_DROPDOWN  = 1 << 1,
    wxRIBBON_BUTTON_HYBRID    = wxRIBBON_BUTTON_NORMAL | wxRIBBON_BUTTON_DROPDOWN,
    wxRIBBON_BUTTON_TOGGLE    = 1 << 2
};


enum wxRibbonButtonBarButtonState
{
    wxRIBBON_BUTTONBAR_BUTTON_SMALL     = 0 << 0,
    wxRIBBON_BUTTONBAR_BUTTON_MEDIUM    = 1 << 0,
    wxRIBBON_BUTTONBAR_BUTTON_LARGE     = 2 << 0,
    wxRIBBON_BUTTONBAR_BUTTON_SIZE_MASK = 3 << 0,

    wxRIBBON_BUTTONBAR_BUTTON_NORMAL_HOVERED    = 1 << 3,
    wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_HOVERED  = 1 << 4,
    wxRIBBON_BUTTONBAR_BUTTON_HOVER_MASK        = wxRIBBON_BUTTONBAR_BUTTON_NORMAL_HOVERED | wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_HOVERED,
    wxRIBBON_BUTTONBAR_BUTTON_NORMAL_ACTIVE     = 1 << 5,
    wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_ACTIVE   = 1 << 6,
    wxRIBBON_BUTTONBAR_BUTTON_ACTIVE_MASK       = wxRIBBON_BUTTONBAR_BUTTON_NORMAL_ACTIVE | wxRIBBON_BUTTONBAR_BUTTON_DROPDOWN_ACTIVE,
    wxRIBBON_BUTTONBAR_BUTTON_DISABLED          = 1 << 7,
    wxRIBBON_BUTTONBAR_BUTTON_TOGGLED           = 1 << 8,
    wxRIBBON_BUTTONBAR_BUTTON_STATE_MASK        = 0x1F8
};


enum wxRibbonGalleryButtonState
{
    wxRIBBON_GALLERY_BUTTON_NORMAL,
    wxRIBBON_GALLERY_BUTTON_HOVERED,
    wxRIBBON_GALLERY_BUTTON_ACTIVE,
    wxRIBBON_GALLERY_BUTTON_DISABLED
};


enum wxRibbonBarOption
{
    wxRIBBON_BAR_SHOW_PAGE_LABELS    = 1 << 0,
    wxRIBBON_BAR_SHOW_PAGE_ICONS    = 1 << 1,
    wxRIBBON_BAR_FLOW_HORIZONTAL    = 0,
    wxRIBBON_BAR_FLOW_VERTICAL        = 1 << 2,
    wxRIBBON_BAR_SHOW_PANEL_EXT_BUTTONS = 1 << 3,
    wxRIBBON_BAR_SHOW_PANEL_MINIMISE_BUTTONS = 1 << 4,
    wxRIBBON_BAR_ALWAYS_SHOW_TABS = 1 << 5,

    wxRIBBON_BAR_DEFAULT_STYLE =  wxRIBBON_BAR_FLOW_HORIZONTAL
                                | wxRIBBON_BAR_SHOW_PAGE_LABELS
                                | wxRIBBON_BAR_SHOW_PANEL_EXT_BUTTONS,

    wxRIBBON_BAR_FOLDBAR_STYLE =  wxRIBBON_BAR_FLOW_VERTICAL
                                | wxRIBBON_BAR_SHOW_PAGE_ICONS
                                | wxRIBBON_BAR_SHOW_PANEL_EXT_BUTTONS
                                | wxRIBBON_BAR_SHOW_PANEL_MINIMISE_BUTTONS
};


enum wxRibbonPanelOption
{
    wxRIBBON_PANEL_NO_AUTO_MINIMISE    = 1 << 0,
    wxRIBBON_PANEL_EXT_BUTTON        = 1 << 3,
    wxRIBBON_PANEL_MINIMISE_BUTTON    = 1 << 4,

    wxRIBBON_PANEL_DEFAULT_STYLE = 0
};


enum wxRibbonToolBarToolState
{
    wxRIBBON_TOOLBAR_TOOL_FIRST             = 1 << 0,
    wxRIBBON_TOOLBAR_TOOL_LAST              = 1 << 1,
    wxRIBBON_TOOLBAR_TOOL_POSITION_MASK     = wxRIBBON_TOOLBAR_TOOL_FIRST | wxRIBBON_TOOLBAR_TOOL_LAST,

    wxRIBBON_TOOLBAR_TOOL_NORMAL_HOVERED    = 1 << 3,
    wxRIBBON_TOOLBAR_TOOL_DROPDOWN_HOVERED  = 1 << 4,
    wxRIBBON_TOOLBAR_TOOL_HOVER_MASK        = wxRIBBON_TOOLBAR_TOOL_NORMAL_HOVERED | wxRIBBON_TOOLBAR_TOOL_DROPDOWN_HOVERED,
    wxRIBBON_TOOLBAR_TOOL_NORMAL_ACTIVE     = 1 << 5,
    wxRIBBON_TOOLBAR_TOOL_DROPDOWN_ACTIVE   = 1 << 6,
    wxRIBBON_TOOLBAR_TOOL_ACTIVE_MASK       = wxRIBBON_TOOLBAR_TOOL_NORMAL_ACTIVE | wxRIBBON_TOOLBAR_TOOL_DROPDOWN_ACTIVE,
    wxRIBBON_TOOLBAR_TOOL_DISABLED          = 1 << 7,
    wxRIBBON_TOOLBAR_TOOL_STATE_MASK        = 0xF8
};


enum wxRichTextFileType
{
    wxRICHTEXT_TYPE_ANY = 0,
    wxRICHTEXT_TYPE_TEXT,
    wxRICHTEXT_TYPE_XML,
    wxRICHTEXT_TYPE_HTML,
    wxRICHTEXT_TYPE_RTF,
    wxRICHTEXT_TYPE_PDF
};


enum wxRichTextHitTestFlags
{
    // The point was not on this object
    wxRICHTEXT_HITTEST_NONE =    0x01,

    // The point was before the position returned from HitTest
    wxRICHTEXT_HITTEST_BEFORE =  0x02,

    // The point was after the position returned from HitTest
    wxRICHTEXT_HITTEST_AFTER =   0x04,

    // The point was on the position returned from HitTest
    wxRICHTEXT_HITTEST_ON =      0x08,

    // The point was on space outside content
    wxRICHTEXT_HITTEST_OUTSIDE = 0x10,

    // Only do hit-testing at the current level (don't traverse into top-level objects)
    wxRICHTEXT_HITTEST_NO_NESTED_OBJECTS = 0x20,

    // Ignore floating objects
    wxRICHTEXT_HITTEST_NO_FLOATING_OBJECTS = 0x40
};


enum wxTextBoxAttrFlags
{
    wxTEXT_BOX_ATTR_FLOAT                   = 0x00000001,
    wxTEXT_BOX_ATTR_CLEAR                   = 0x00000002,
    wxTEXT_BOX_ATTR_COLLAPSE_BORDERS        = 0x00000004,
    wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT      = 0x00000008
};


enum wxTextAttrValueFlags
{
    wxTEXT_ATTR_VALUE_VALID               = 0x1000,
    wxTEXT_ATTR_VALUE_VALID_MASK          = 0x1000
};


enum wxTextAttrUnits
{
    wxTEXT_ATTR_UNITS_TENTHS_MM             = 0x0001,
    wxTEXT_ATTR_UNITS_PIXELS                = 0x0002,
    wxTEXT_ATTR_UNITS_PERCENTAGE            = 0x0004,
    wxTEXT_ATTR_UNITS_POINTS                = 0x0008,

    wxTEXT_ATTR_UNITS_MASK                  = 0x000F
};


enum wxTextBoxAttrPosition
{
    wxTEXT_BOX_ATTR_POSITION_STATIC         = 0x0000, // Default is static, i.e. as per normal layout
    wxTEXT_BOX_ATTR_POSITION_RELATIVE       = 0x0010, // Relative to the relevant edge
    wxTEXT_BOX_ATTR_POSITION_ABSOLUTE       = 0x0020,

    wxTEXT_BOX_ATTR_POSITION_MASK           = 0x00F0
};


enum wxTextAttrBorderStyle
{
    wxTEXT_BOX_ATTR_BORDER_NONE             = 0,
    wxTEXT_BOX_ATTR_BORDER_SOLID            = 1,
    wxTEXT_BOX_ATTR_BORDER_DOTTED           = 2,
    wxTEXT_BOX_ATTR_BORDER_DASHED           = 3,
    wxTEXT_BOX_ATTR_BORDER_DOUBLE           = 4,
    wxTEXT_BOX_ATTR_BORDER_GROOVE           = 5,
    wxTEXT_BOX_ATTR_BORDER_RIDGE            = 6,
    wxTEXT_BOX_ATTR_BORDER_INSET            = 7,
    wxTEXT_BOX_ATTR_BORDER_OUTSET           = 8
};


enum wxTextAttrBorderFlags
{
    wxTEXT_BOX_ATTR_BORDER_STYLE            = 0x0001,
    wxTEXT_BOX_ATTR_BORDER_COLOUR           = 0x0002
};


enum wxTextAttrBorderWidth
{
    wxTEXT_BOX_ATTR_BORDER_THIN             = -1,
    wxTEXT_BOX_ATTR_BORDER_MEDIUM           = -2,
    wxTEXT_BOX_ATTR_BORDER_THICK            = -3
};


enum wxTextBoxAttrFloatStyle
{
    wxTEXT_BOX_ATTR_FLOAT_NONE              = 0,
    wxTEXT_BOX_ATTR_FLOAT_LEFT              = 1,
    wxTEXT_BOX_ATTR_FLOAT_RIGHT             = 2
};


enum wxTextBoxAttrClearStyle
{
    wxTEXT_BOX_ATTR_CLEAR_NONE              = 0,
    wxTEXT_BOX_ATTR_CLEAR_LEFT              = 1,
    wxTEXT_BOX_ATTR_CLEAR_RIGHT             = 2,
    wxTEXT_BOX_ATTR_CLEAR_BOTH              = 3
};


enum wxTextBoxAttrCollapseMode
{
    wxTEXT_BOX_ATTR_COLLAPSE_NONE           = 0,
    wxTEXT_BOX_ATTR_COLLAPSE_FULL           = 1
};


enum wxTextBoxAttrVerticalAlignment
{
    wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_NONE =       0,
    wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_TOP  =       1,
    wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_CENTRE =     2,
    wxTEXT_BOX_ATTR_VERTICAL_ALIGNMENT_BOTTOM  =    3
};


enum wxRichTextCommandId
{
    wxRICHTEXT_INSERT,
    wxRICHTEXT_DELETE,
    wxRICHTEXT_CHANGE_ATTRIBUTES,
    wxRICHTEXT_CHANGE_STYLE,
    wxRICHTEXT_CHANGE_OBJECT
};


enum wxRichTextCtrlSelectionState
{
    wxRichTextCtrlSelectionState_Normal,
    wxRichTextCtrlSelectionState_CommonAncestor
};


enum {
    wxRICHTEXT_BULLETINDEX_NONE = 0,
    wxRICHTEXT_BULLETINDEX_ARABIC,
    wxRICHTEXT_BULLETINDEX_UPPER_CASE,
    wxRICHTEXT_BULLETINDEX_LOWER_CASE,
    wxRICHTEXT_BULLETINDEX_UPPER_CASE_ROMAN,
    wxRICHTEXT_BULLETINDEX_LOWER_CASE_ROMAN,
    wxRICHTEXT_BULLETINDEX_OUTLINE,
    wxRICHTEXT_BULLETINDEX_SYMBOL,
    wxRICHTEXT_BULLETINDEX_BITMAP,
    wxRICHTEXT_BULLETINDEX_STANDARD
};


enum wxRichTextOddEvenPage {
    wxRICHTEXT_PAGE_ODD,
    wxRICHTEXT_PAGE_EVEN,
    wxRICHTEXT_PAGE_ALL
};


enum wxRichTextPageLocation {
    wxRICHTEXT_PAGE_LEFT,
    wxRICHTEXT_PAGE_CENTRE,
    wxRICHTEXT_PAGE_RIGHT
};


enum wxTipKind
{
    wxTipKind_None,
    wxTipKind_TopLeft,
    wxTipKind_Top,
    wxTipKind_TopRight,
    wxTipKind_BottomLeft,
    wxTipKind_Bottom,
    wxTipKind_BottomRight,
    wxTipKind_Auto
};


enum wxScrollbarVisibility
{
    wxSHOW_SB_NEVER = -1,   // never show the scrollbar at all
    wxSHOW_SB_DEFAULT,      // show scrollbar only if it is needed
    wxSHOW_SB_ALWAYS        // always show scrollbar, even if not needed
};


enum wxSystemFont
{
    wxSYS_OEM_FIXED_FONT = 10,
    wxSYS_ANSI_FIXED_FONT,
    wxSYS_ANSI_VAR_FONT,
    wxSYS_SYSTEM_FONT,
    wxSYS_DEVICE_DEFAULT_FONT,

    // don't use: this is here just to make the values of enum elements
    // coincide with the corresponding MSW constants
    wxSYS_DEFAULT_PALETTE,

    // don't use: MSDN says that this is a stock object provided only
    // for compatibility with 16-bit Windows versions earlier than 3.0!
    wxSYS_SYSTEM_FIXED_FONT,

    wxSYS_DEFAULT_GUI_FONT,

    // this was just a temporary aberration, do not use it any more
    wxSYS_ICONTITLE_FONT = wxSYS_DEFAULT_GUI_FONT
};


enum wxSystemColour
{
    wxSYS_COLOUR_SCROLLBAR,
    wxSYS_COLOUR_DESKTOP,
    wxSYS_COLOUR_ACTIVECAPTION,
    wxSYS_COLOUR_INACTIVECAPTION,
    wxSYS_COLOUR_MENU,
    wxSYS_COLOUR_WINDOW,
    wxSYS_COLOUR_WINDOWFRAME,
    wxSYS_COLOUR_MENUTEXT,
    wxSYS_COLOUR_WINDOWTEXT,
    wxSYS_COLOUR_CAPTIONTEXT,
    wxSYS_COLOUR_ACTIVEBORDER,
    wxSYS_COLOUR_INACTIVEBORDER,
    wxSYS_COLOUR_APPWORKSPACE,
    wxSYS_COLOUR_HIGHLIGHT,
    wxSYS_COLOUR_HIGHLIGHTTEXT,
    wxSYS_COLOUR_BTNFACE,
    wxSYS_COLOUR_BTNSHADOW,
    wxSYS_COLOUR_GRAYTEXT,
    wxSYS_COLOUR_BTNTEXT,
    wxSYS_COLOUR_INACTIVECAPTIONTEXT,
    wxSYS_COLOUR_BTNHIGHLIGHT,
    wxSYS_COLOUR_3DDKSHADOW,
    wxSYS_COLOUR_3DLIGHT,
    wxSYS_COLOUR_INFOTEXT,
    wxSYS_COLOUR_INFOBK,
    wxSYS_COLOUR_LISTBOX,
    wxSYS_COLOUR_HOTLIGHT,
    wxSYS_COLOUR_GRADIENTACTIVECAPTION,
    wxSYS_COLOUR_GRADIENTINACTIVECAPTION,
    wxSYS_COLOUR_MENUHILIGHT,
    wxSYS_COLOUR_MENUBAR,
    wxSYS_COLOUR_LISTBOXTEXT,
    wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT,

    wxSYS_COLOUR_MAX,

    // synonyms
    wxSYS_COLOUR_BACKGROUND = wxSYS_COLOUR_DESKTOP,
    wxSYS_COLOUR_3DFACE = wxSYS_COLOUR_BTNFACE,
    wxSYS_COLOUR_3DSHADOW = wxSYS_COLOUR_BTNSHADOW,
    wxSYS_COLOUR_BTNHILIGHT = wxSYS_COLOUR_BTNHIGHLIGHT,
    wxSYS_COLOUR_3DHIGHLIGHT = wxSYS_COLOUR_BTNHIGHLIGHT,
    wxSYS_COLOUR_3DHILIGHT = wxSYS_COLOUR_BTNHIGHLIGHT,
    wxSYS_COLOUR_FRAMEBK = wxSYS_COLOUR_BTNFACE
};


enum wxSystemMetric
{
    wxSYS_MOUSE_BUTTONS = 1,
    wxSYS_BORDER_X,
    wxSYS_BORDER_Y,
    wxSYS_CURSOR_X,
    wxSYS_CURSOR_Y,
    wxSYS_DCLICK_X,
    wxSYS_DCLICK_Y,
    wxSYS_DRAG_X,
    wxSYS_DRAG_Y,
    wxSYS_EDGE_X,
    wxSYS_EDGE_Y,
    wxSYS_HSCROLL_ARROW_X,
    wxSYS_HSCROLL_ARROW_Y,
    wxSYS_HTHUMB_X,
    wxSYS_ICON_X,
    wxSYS_ICON_Y,
    wxSYS_ICONSPACING_X,
    wxSYS_ICONSPACING_Y,
    wxSYS_WINDOWMIN_X,
    wxSYS_WINDOWMIN_Y,
    wxSYS_SCREEN_X,
    wxSYS_SCREEN_Y,
    wxSYS_FRAMESIZE_X,
    wxSYS_FRAMESIZE_Y,
    wxSYS_SMALLICON_X,
    wxSYS_SMALLICON_Y,
    wxSYS_HSCROLL_Y,
    wxSYS_VSCROLL_X,
    wxSYS_VSCROLL_ARROW_X,
    wxSYS_VSCROLL_ARROW_Y,
    wxSYS_VTHUMB_Y,
    wxSYS_CAPTION_Y,
    wxSYS_MENU_Y,
    wxSYS_NETWORK_PRESENT,
    wxSYS_PENWINDOWS_PRESENT,
    wxSYS_SHOW_SOUNDS,
    wxSYS_SWAP_BUTTONS,
    wxSYS_DCLICK_MSEC
};


enum wxSystemFeature
{
    wxSYS_CAN_DRAW_FRAME_DECORATIONS = 1,
    wxSYS_CAN_ICONIZE_FRAME,
    wxSYS_TABLET_PRESENT
};


enum wxSystemScreenType
{
    wxSYS_SCREEN_NONE = 0,  //   not yet defined

    wxSYS_SCREEN_TINY,      //   <
    wxSYS_SCREEN_PDA,       //   >= 320x240
    wxSYS_SCREEN_SMALL,     //   >= 640x480
    wxSYS_SCREEN_DESKTOP    //   >= 800x600
};


enum wxFlexSizerGrowMode
{
    // don't resize the cells in non-flexible direction at all
    wxFLEX_GROWMODE_NONE,

    // uniformly resize only the specified ones (default)
    wxFLEX_GROWMODE_SPECIFIED,

    // uniformly resize all cells
    wxFLEX_GROWMODE_ALL
};


enum wxSocketNotify
{
    wxSOCKET_INPUT,
    wxSOCKET_OUTPUT,
    wxSOCKET_CONNECTION,
    wxSOCKET_LOST
};


enum
{
    wxSOCKET_INPUT_FLAG = 1 << wxSOCKET_INPUT,
    wxSOCKET_OUTPUT_FLAG = 1 << wxSOCKET_OUTPUT,
    wxSOCKET_CONNECTION_FLAG = 1 << wxSOCKET_CONNECTION,
    wxSOCKET_LOST_FLAG = 1 << wxSOCKET_LOST
};


enum wxSocketError
{
    wxSOCKET_NOERROR = 0,
    wxSOCKET_INVOP,
    wxSOCKET_IOERR,
    wxSOCKET_INVADDR,
    wxSOCKET_INVSOCK,
    wxSOCKET_NOHOST,
    wxSOCKET_INVPORT,
    wxSOCKET_WOULDBLOCK,
    wxSOCKET_TIMEDOUT,
    wxSOCKET_MEMERR,
    wxSOCKET_OPTERR
};


enum
{
    wxSOCKET_NONE = 0,
    wxSOCKET_NOWAIT = 1,
    wxSOCKET_WAITALL = 2,
    wxSOCKET_BLOCK = 4,
    wxSOCKET_REUSEADDR = 8,
    wxSOCKET_BROADCAST = 16,
    wxSOCKET_NOBIND = 32
};


enum wxSocketType
{
    wxSOCKET_UNINIT,
    wxSOCKET_CLIENT,
    wxSOCKET_SERVER,
    wxSOCKET_BASE,
    wxSOCKET_DATAGRAM
};


enum wxStockLabelQueryFlag
{
    wxSTOCK_NOFLAGS = 0,

    wxSTOCK_WITH_MNEMONIC = 1,
    wxSTOCK_WITH_ACCELERATOR = 2,

    // by default, stock items text is returned with ellipsis, if appropriate,
    // this flag allows to avoid having it
    wxSTOCK_WITHOUT_ELLIPSIS = 4,

    // return label for button, not menu item: buttons should always use
    // mnemonics and never use ellipsis
    wxSTOCK_FOR_BUTTON = wxSTOCK_WITHOUT_ELLIPSIS | wxSTOCK_WITH_MNEMONIC
};


enum wxStockHelpStringClient
{
    wxSTOCK_MENU        // help string to use for menu items
};


enum wxStreamError
{
    wxSTREAM_NO_ERROR = 0,      // stream is in good state
    wxSTREAM_EOF,               // EOF reached in Read() or similar
    wxSTREAM_WRITE_ERROR,       // generic write error
    wxSTREAM_READ_ERROR         // generic read error
};


enum wxStreamProtocolType
{
    wxSTREAM_PROTOCOL,  // wxFileSystem protocol (should be only one)
    wxSTREAM_MIMETYPE,  // MIME types the stream handles
    wxSTREAM_ENCODING,  // The HTTP Content-Encodings the stream handles
    wxSTREAM_FILEEXT    // File extensions the stream handles
};


enum wxTarType
{
    wxTAR_REGTYPE   = '0',      // regular file
    wxTAR_LNKTYPE   = '1',      // hard link
    wxTAR_SYMTYPE   = '2',      // symbolic link
    wxTAR_CHRTYPE   = '3',      // character special
    wxTAR_BLKTYPE   = '4',      // block special
    wxTAR_DIRTYPE   = '5',      // directory
    wxTAR_FIFOTYPE  = '6',      // named pipe
    wxTAR_CONTTYPE  = '7'       // contiguous file
};


enum wxTarFormat
{
    wxTAR_USTAR,                // POSIX.1-1990 tar format
    wxTAR_PAX                   // POSIX.1-2001 tar format
};


enum wxToolBarToolStyle
{
    wxTOOL_STYLE_BUTTON    = 1,
    wxTOOL_STYLE_SEPARATOR = 2,
    wxTOOL_STYLE_CONTROL
};


enum wxTextFileType
{
    wxTextFileType_None,  // incomplete (the last line of the file only)
    wxTextFileType_Unix,  // line is terminated with 'LF' = 0xA = 10 = '\n'
    wxTextFileType_Dos,   //                         'CR' 'LF'
    wxTextFileType_Mac,   //                         'CR' = 0xD = 13 = '\r'
    wxTextFileType_Os2    //                         'CR' 'LF'
};


enum wxTextCtrlHitTestResult
{
    wxTE_HT_UNKNOWN = -2,   // this means HitTest() is simply not implemented
    wxTE_HT_BEFORE,         // either to the left or upper
    wxTE_HT_ON_TEXT,        // directly on
    wxTE_HT_BELOW,          // below [the last line]
    wxTE_HT_BEYOND          // after [the end of line]
};


enum wxTextAttrAlignment
{
    wxTEXT_ALIGNMENT_DEFAULT,
    wxTEXT_ALIGNMENT_LEFT,
    wxTEXT_ALIGNMENT_CENTRE,
    wxTEXT_ALIGNMENT_CENTER = wxTEXT_ALIGNMENT_CENTRE,
    wxTEXT_ALIGNMENT_RIGHT,
    wxTEXT_ALIGNMENT_JUSTIFIED
};


enum wxTextAttrFlags
{
    wxTEXT_ATTR_TEXT_COLOUR          = 0x00000001,
    wxTEXT_ATTR_BACKGROUND_COLOUR    = 0x00000002,

    wxTEXT_ATTR_FONT_FACE            = 0x00000004,
    wxTEXT_ATTR_FONT_SIZE            = 0x00000008,
    wxTEXT_ATTR_FONT_WEIGHT          = 0x00000010,
    wxTEXT_ATTR_FONT_ITALIC          = 0x00000020,
    wxTEXT_ATTR_FONT_UNDERLINE       = 0x00000040,
    wxTEXT_ATTR_FONT_ENCODING        = 0x02000000,
    wxTEXT_ATTR_FONT_FAMILY          = 0x04000000,
    wxTEXT_ATTR_FONT = \
        ( wxTEXT_ATTR_FONT_FACE | wxTEXT_ATTR_FONT_SIZE | wxTEXT_ATTR_FONT_WEIGHT | \
            wxTEXT_ATTR_FONT_ITALIC | wxTEXT_ATTR_FONT_UNDERLINE | wxTEXT_ATTR_FONT_ENCODING | wxTEXT_ATTR_FONT_FAMILY ),

    wxTEXT_ATTR_ALIGNMENT            = 0x00000080,
    wxTEXT_ATTR_LEFT_INDENT          = 0x00000100,
    wxTEXT_ATTR_RIGHT_INDENT         = 0x00000200,
    wxTEXT_ATTR_TABS                 = 0x00000400,
    wxTEXT_ATTR_PARA_SPACING_AFTER   = 0x00000800,
    wxTEXT_ATTR_PARA_SPACING_BEFORE  = 0x00001000,
    wxTEXT_ATTR_LINE_SPACING         = 0x00002000,
    wxTEXT_ATTR_CHARACTER_STYLE_NAME = 0x00004000,
    wxTEXT_ATTR_PARAGRAPH_STYLE_NAME = 0x00008000,
    wxTEXT_ATTR_LIST_STYLE_NAME      = 0x00010000,

    wxTEXT_ATTR_BULLET_STYLE         = 0x00020000,
    wxTEXT_ATTR_BULLET_NUMBER        = 0x00040000,
    wxTEXT_ATTR_BULLET_TEXT          = 0x00080000,
    wxTEXT_ATTR_BULLET_NAME          = 0x00100000,

    wxTEXT_ATTR_BULLET = \
        ( wxTEXT_ATTR_BULLET_STYLE | wxTEXT_ATTR_BULLET_NUMBER | wxTEXT_ATTR_BULLET_TEXT | \
          wxTEXT_ATTR_BULLET_NAME ),


    wxTEXT_ATTR_URL                  = 0x00200000,
    wxTEXT_ATTR_PAGE_BREAK           = 0x00400000,
    wxTEXT_ATTR_EFFECTS              = 0x00800000,
    wxTEXT_ATTR_OUTLINE_LEVEL        = 0x01000000,

    /*!
    * Character and paragraph combined styles
    */

    wxTEXT_ATTR_CHARACTER = \
        (wxTEXT_ATTR_FONT|wxTEXT_ATTR_EFFECTS| \
            wxTEXT_ATTR_BACKGROUND_COLOUR|wxTEXT_ATTR_TEXT_COLOUR|wxTEXT_ATTR_CHARACTER_STYLE_NAME|wxTEXT_ATTR_URL),

    wxTEXT_ATTR_PARAGRAPH = \
        (wxTEXT_ATTR_ALIGNMENT|wxTEXT_ATTR_LEFT_INDENT|wxTEXT_ATTR_RIGHT_INDENT|wxTEXT_ATTR_TABS|\
            wxTEXT_ATTR_PARA_SPACING_BEFORE|wxTEXT_ATTR_PARA_SPACING_AFTER|wxTEXT_ATTR_LINE_SPACING|\
            wxTEXT_ATTR_BULLET|wxTEXT_ATTR_PARAGRAPH_STYLE_NAME|wxTEXT_ATTR_LIST_STYLE_NAME|wxTEXT_ATTR_OUTLINE_LEVEL|wxTEXT_ATTR_PAGE_BREAK),

    wxTEXT_ATTR_ALL = (wxTEXT_ATTR_CHARACTER|wxTEXT_ATTR_PARAGRAPH)
};


enum wxTextAttrBulletStyle
{
    wxTEXT_ATTR_BULLET_STYLE_NONE            = 0x00000000,
    wxTEXT_ATTR_BULLET_STYLE_ARABIC          = 0x00000001,
    wxTEXT_ATTR_BULLET_STYLE_LETTERS_UPPER   = 0x00000002,
    wxTEXT_ATTR_BULLET_STYLE_LETTERS_LOWER   = 0x00000004,
    wxTEXT_ATTR_BULLET_STYLE_ROMAN_UPPER     = 0x00000008,
    wxTEXT_ATTR_BULLET_STYLE_ROMAN_LOWER     = 0x00000010,
    wxTEXT_ATTR_BULLET_STYLE_SYMBOL          = 0x00000020,
    wxTEXT_ATTR_BULLET_STYLE_BITMAP          = 0x00000040,
    wxTEXT_ATTR_BULLET_STYLE_PARENTHESES     = 0x00000080,
    wxTEXT_ATTR_BULLET_STYLE_PERIOD          = 0x00000100,
    wxTEXT_ATTR_BULLET_STYLE_STANDARD        = 0x00000200,
    wxTEXT_ATTR_BULLET_STYLE_RIGHT_PARENTHESIS = 0x00000400,
    wxTEXT_ATTR_BULLET_STYLE_OUTLINE         = 0x00000800,

    wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT      = 0x00000000,
    wxTEXT_ATTR_BULLET_STYLE_ALIGN_RIGHT     = 0x00001000,
    wxTEXT_ATTR_BULLET_STYLE_ALIGN_CENTRE    = 0x00002000
};


enum wxTextAttrEffects
{
    wxTEXT_ATTR_EFFECT_NONE                  = 0x00000000,
    wxTEXT_ATTR_EFFECT_CAPITALS              = 0x00000001,
    wxTEXT_ATTR_EFFECT_SMALL_CAPITALS        = 0x00000002,
    wxTEXT_ATTR_EFFECT_STRIKETHROUGH         = 0x00000004,
    wxTEXT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH  = 0x00000008,
    wxTEXT_ATTR_EFFECT_SHADOW                = 0x00000010,
    wxTEXT_ATTR_EFFECT_EMBOSS                = 0x00000020,
    wxTEXT_ATTR_EFFECT_OUTLINE               = 0x00000040,
    wxTEXT_ATTR_EFFECT_ENGRAVE               = 0x00000080,
    wxTEXT_ATTR_EFFECT_SUPERSCRIPT           = 0x00000100,
    wxTEXT_ATTR_EFFECT_SUBSCRIPT             = 0x00000200
};


enum wxTextAttrLineSpacing
{
    wxTEXT_ATTR_LINE_SPACING_NORMAL         = 10,
    wxTEXT_ATTR_LINE_SPACING_HALF           = 15,
    wxTEXT_ATTR_LINE_SPACING_TWICE          = 20
};


enum wxMutexError
{
    wxMUTEX_NO_ERROR = 0,   // operation completed successfully
    wxMUTEX_INVALID,        // mutex hasn't been initialized
    wxMUTEX_DEAD_LOCK,      // mutex is already locked by the calling thread
    wxMUTEX_BUSY,           // mutex is already locked by another thread
    wxMUTEX_UNLOCKED,       // attempt to unlock a mutex which is not locked
    wxMUTEX_TIMEOUT,        // LockTimeout() has timed out
    wxMUTEX_MISC_ERROR      // any other error
};


enum wxCondError
{
    wxCOND_NO_ERROR = 0,
    wxCOND_INVALID,
    wxCOND_TIMEOUT,         // WaitTimeout() has timed out
    wxCOND_MISC_ERROR
};


enum wxSemaError
{
    wxSEMA_NO_ERROR = 0,
    wxSEMA_INVALID,         // semaphore hasn't been initialized successfully
    wxSEMA_BUSY,            // returned by TryWait() if Wait() would block
    wxSEMA_TIMEOUT,         // returned by WaitTimeout()
    wxSEMA_OVERFLOW,        // Post() would increase counter past the max
    wxSEMA_MISC_ERROR
};


enum wxThreadError
{
    wxTHREAD_NO_ERROR = 0,      // No error
    wxTHREAD_NO_RESOURCE,       // No resource left to create a new thread
    wxTHREAD_RUNNING,           // The thread is already running
    wxTHREAD_NOT_RUNNING,       // The thread isn't running
    wxTHREAD_KILLED,            // Thread we waited for had to be killed
    wxTHREAD_MISC_ERROR         // Some other error
};


enum wxThreadKind
{
    wxTHREAD_DETACHED,
    wxTHREAD_JOINABLE
};


enum
{
    WXTHREAD_MIN_PRIORITY      = 0u,
    WXTHREAD_DEFAULT_PRIORITY  = 50u,
    WXTHREAD_MAX_PRIORITY      = 100u
};


enum wxMutexType
{
    // normal mutex: try to always use this one
    wxMUTEX_DEFAULT,

    // recursive mutex: don't use these ones with wxCondition
    wxMUTEX_RECURSIVE
};


enum wxCriticalSectionType
{
    // recursive critical section
    wxCRITSEC_DEFAULT,

    // non-recursive critical section
    wxCRITSEC_NON_RECURSIVE
};


enum
{
    wxTP_DEFAULT = 0
};


enum wxStringTokenizerMode
{
    wxTOKEN_INVALID = -1,   // set by def ctor until SetString() is called
    wxTOKEN_DEFAULT,        // strtok() for whitespace delims, RET_EMPTY else
    wxTOKEN_RET_EMPTY,      // return empty token in the middle of the string
    wxTOKEN_RET_EMPTY_ALL,  // return trailing empty tokens too
    wxTOKEN_RET_DELIMS,     // return the delim with token (implies RET_EMPTY)
    wxTOKEN_STRTOK          // behave exactly like strtok(3)
};


enum
{
    // lay out the toolbar horizontally
    wxTB_HORIZONTAL  = wxHORIZONTAL,    // == 0x0004
    wxTB_TOP         = wxTB_HORIZONTAL,

    // lay out the toolbar vertically
    wxTB_VERTICAL    = wxVERTICAL,      // == 0x0008
    wxTB_LEFT        = wxTB_VERTICAL,

    // show 3D buttons (wxToolBarSimple only)
    wxTB_3DBUTTONS   = 0x0010,

    // "flat" buttons (Win32/GTK only)
    wxTB_FLAT        = 0x0020,

    // dockable toolbar (GTK only)
    wxTB_DOCKABLE    = 0x0040,

    // don't show the icons (they're shown by default)
    wxTB_NOICONS     = 0x0080,

    // show the text (not shown by default)
    wxTB_TEXT        = 0x0100,

    // don't show the divider between toolbar and the window (Win32 only)
    wxTB_NODIVIDER   = 0x0200,

    // no automatic alignment (Win32 only, useless)
    wxTB_NOALIGN     = 0x0400,

    // show the text and the icons alongside, not vertically stacked (Win32/GTK)
    wxTB_HORZ_LAYOUT = 0x0800,
    wxTB_HORZ_TEXT   = wxTB_HORZ_LAYOUT | wxTB_TEXT,

    // don't show the toolbar short help tooltips
    wxTB_NO_TOOLTIPS = 0x1000,

    // lay out toolbar at the bottom of the window
    wxTB_BOTTOM       = 0x2000,

    // lay out toolbar at the right edge of the window
    wxTB_RIGHT        = 0x4000
};


enum
{
    wxFULLSCREEN_NOMENUBAR   = 0x0001,
    wxFULLSCREEN_NOTOOLBAR   = 0x0002,
    wxFULLSCREEN_NOSTATUSBAR = 0x0004,
    wxFULLSCREEN_NOBORDER    = 0x0008,
    wxFULLSCREEN_NOCAPTION   = 0x0010,

    wxFULLSCREEN_ALL         = wxFULLSCREEN_NOMENUBAR | wxFULLSCREEN_NOTOOLBAR |
                               wxFULLSCREEN_NOSTATUSBAR | wxFULLSCREEN_NOBORDER |
                               wxFULLSCREEN_NOCAPTION
};


enum
{
    wxUSER_ATTENTION_INFO = 1,
    wxUSER_ATTENTION_ERROR = 2
};


enum wxTreeItemIcon
{
    wxTreeItemIcon_Normal,              // not selected, not expanded
    wxTreeItemIcon_Selected,            //     selected, not expanded
    wxTreeItemIcon_Expanded,            // not selected,     expanded
    wxTreeItemIcon_SelectedExpanded,    //     selected,     expanded
    wxTreeItemIcon_Max
};


enum
{
    wxTL_SINGLE         = 0x0000,       // This is the default anyhow.
    wxTL_MULTIPLE       = 0x0001,       // Allow multiple selection.
    wxTL_CHECKBOX       = 0x0002,       // Show checkboxes in the first column.
    wxTL_3STATE         = 0x0004,       // Allow 3rd state in checkboxes.
    wxTL_USER_3STATE    = 0x0008,       // Allow user to set 3rd state.

    wxTL_DEFAULT_STYLE  = wxTL_SINGLE,
    wxTL_STYLE_MASK     = wxTL_SINGLE |
                          wxTL_MULTIPLE |
                          wxTL_CHECKBOX |
                          wxTL_3STATE |
                          wxTL_USER_3STATE
};


enum wxURIHostType
{
    wxURI_REGNAME,      // Host is a normal register name (www.mysite.com etc.)
    wxURI_IPV4ADDRESS,  // Host is a version 4 ip address (192.168.1.100)
    wxURI_IPV6ADDRESS,  // Host is a version 6 ip address [aa:aa:aa:aa::aa:aa]:5050
    wxURI_IPVFUTURE     // Host is a future ip address (wxURI is unsure what kind)
};


enum wxURIFieldType
{
    wxURI_SCHEME = 1,
    wxURI_USERINFO = 2,
    wxURI_SERVER = 4,
    wxURI_PORT = 8,
    wxURI_PATH = 16,
    wxURI_QUERY = 32,
    wxURI_FRAGMENT = 64
};


enum wxURIFlags
{
    wxURI_STRICT = 1
};


enum
{
    // execute the process asynchronously
    wxEXEC_ASYNC    = 0,

    // execute it synchronously, i.e. wait until it finishes
    wxEXEC_SYNC     = 1,

    // under Windows, don't hide the child even if it's IO is redirected (this
    // is done by default)
    wxEXEC_SHOW_CONSOLE   = 2,

    // deprecated synonym for wxEXEC_SHOW_CONSOLE, use the new name as it's
    // more clear
    wxEXEC_NOHIDE = wxEXEC_SHOW_CONSOLE,

    // under Unix, if the process is the group leader then passing wxKILL_CHILDREN to wxKill
    // kills all children as well as pid
    wxEXEC_MAKE_GROUP_LEADER = 4,

    // by default synchronous execution disables all program windows to avoid
    // that the user interacts with the program while the child process is
    // running, you can use this flag to prevent this from happening
    wxEXEC_NODISABLE = 8,

    // by default, the event loop is run while waiting for synchronous execution
    // to complete and this flag can be used to simply block the main process
    // until the child process finishes
    wxEXEC_NOEVENTS = 16,

    // under Windows, hide the console of the child process if it has one, even
    // if its IO is not redirected
    wxEXEC_HIDE_CONSOLE = 32,

    // convenient synonym for flags given system()-like behaviour
    wxEXEC_BLOCK = wxEXEC_SYNC | wxEXEC_NOEVENTS
};


enum wxSignal
{
    wxSIGNONE = 0,  // verify if the process exists under Unix
    wxSIGHUP,
    wxSIGINT,
    wxSIGQUIT,
    wxSIGILL,
    wxSIGTRAP,
    wxSIGABRT,
    wxSIGIOT = wxSIGABRT,   // another name
    wxSIGEMT,
    wxSIGFPE,
    wxSIGKILL,
    wxSIGBUS,
    wxSIGSEGV,
    wxSIGSYS,
    wxSIGPIPE,
    wxSIGALRM,
    wxSIGTERM

    // further signals are different in meaning between different Unix systems
};


enum wxKillError
{
    wxKILL_OK,              // no error
    wxKILL_BAD_SIGNAL,      // no such signal
    wxKILL_ACCESS_DENIED,   // permission denied
    wxKILL_NO_PROCESS,      // no such process
    wxKILL_ERROR            // another, unspecified error
};


enum wxKillFlags
{
    wxKILL_NOCHILDREN = 0,  // don't kill children
    wxKILL_CHILDREN = 1     // kill children
};


enum wxShutdownFlags
{
    wxSHUTDOWN_FORCE    = 1,// can be combined with other flags (MSW-only)
    wxSHUTDOWN_POWEROFF = 2,// power off the computer
    wxSHUTDOWN_REBOOT   = 4,// shutdown and reboot
    wxSHUTDOWN_LOGOFF   = 8 // close session (currently MSW-only)
};


enum
{
    wxBROWSER_NEW_WINDOW   = 0x01,
    wxBROWSER_NOBUSYCURSOR = 0x02
};


enum
{
    // strip '&' characters
    wxStrip_Mnemonics = 1,

    // strip everything after '\t'
    wxStrip_Accel = 2,

    // strip everything (this is the default)
    wxStrip_All = wxStrip_Mnemonics | wxStrip_Accel
};


enum wxNumValidatorStyle
{
    wxNUM_VAL_DEFAULT               = 0x0,
    wxNUM_VAL_THOUSANDS_SEPARATOR   = 0x1,
    wxNUM_VAL_ZERO_AS_BLANK         = 0x2,
    wxNUM_VAL_NO_TRAILING_ZEROES    = 0x4
};


enum wxTextValidatorStyle
{
    wxFILTER_NONE = 0x0,
    wxFILTER_EMPTY = 0x1,
    wxFILTER_ASCII = 0x2,
    wxFILTER_ALPHA = 0x4,
    wxFILTER_ALPHANUMERIC = 0x8,
    wxFILTER_DIGITS = 0x10,
    wxFILTER_NUMERIC = 0x20,
    wxFILTER_INCLUDE_LIST = 0x40,
    wxFILTER_INCLUDE_CHAR_LIST = 0x80,
    wxFILTER_EXCLUDE_LIST = 0x100,
    wxFILTER_EXCLUDE_CHAR_LIST = 0x200
};


enum wxFSVolumeFlags
{
    // is the volume mounted?
    wxFS_VOL_MOUNTED = 0x0001,

    // is the volume removable (floppy, CD, ...)?
    wxFS_VOL_REMOVABLE = 0x0002,

    // read only? (otherwise read write)
    wxFS_VOL_READONLY = 0x0004,

    // network resources
    wxFS_VOL_REMOTE = 0x0008
};


enum wxFSVolumeKind
{
    wxFS_VOL_FLOPPY,
    wxFS_VOL_DISK,
    wxFS_VOL_CDROM,
    wxFS_VOL_DVDROM,
    wxFS_VOL_NETWORK,
    wxFS_VOL_OTHER,
    wxFS_VOL_MAX
};


enum wxFSIconType
{
    wxFS_VOL_ICO_SMALL = 0,
    wxFS_VOL_ICO_LARGE,
    wxFS_VOL_ICO_SEL_SMALL,
    wxFS_VOL_ICO_SEL_LARGE,
    wxFS_VOL_ICO_MAX
};


enum wxWebViewZoom
{
    wxWEB_VIEW_ZOOM_TINY,
    wxWEB_VIEW_ZOOM_SMALL,
    wxWEB_VIEW_ZOOM_MEDIUM,
    wxWEB_VIEW_ZOOM_LARGE,
    wxWEB_VIEW_ZOOM_LARGEST
};


enum wxWebViewZoomType
{
    //Scales entire page, including images
    wxWEB_VIEW_ZOOM_TYPE_LAYOUT,
    wxWEB_VIEW_ZOOM_TYPE_TEXT
};


enum wxWebViewNavigationError
{
    wxWEB_NAV_ERR_CONNECTION,
    wxWEB_NAV_ERR_CERTIFICATE,
    wxWEB_NAV_ERR_AUTH,
    wxWEB_NAV_ERR_SECURITY,
    wxWEB_NAV_ERR_NOT_FOUND,
    wxWEB_NAV_ERR_REQUEST,
    wxWEB_NAV_ERR_USER_CANCELLED,
    wxWEB_NAV_ERR_OTHER
};


enum wxWebViewReloadFlags
{
    //Default, may access cache
    wxWEB_VIEW_RELOAD_DEFAULT,
    wxWEB_VIEW_RELOAD_NO_CACHE 
};


enum wxWindowVariant
{
    wxWINDOW_VARIANT_NORMAL,  // Normal size
    wxWINDOW_VARIANT_SMALL,   // Smaller size (about 25 % smaller than normal)
    wxWINDOW_VARIANT_MINI,    // Mini size (about 33 % smaller than normal)
    wxWINDOW_VARIANT_LARGE,   // Large size (about 25 % larger than normal)
    wxWINDOW_VARIANT_MAX
};


enum wxShowEffect
{
    wxSHOW_EFFECT_NONE,
    wxSHOW_EFFECT_ROLL_TO_LEFT,
    wxSHOW_EFFECT_ROLL_TO_RIGHT,
    wxSHOW_EFFECT_ROLL_TO_TOP,
    wxSHOW_EFFECT_ROLL_TO_BOTTOM,
    wxSHOW_EFFECT_SLIDE_TO_LEFT,
    wxSHOW_EFFECT_SLIDE_TO_RIGHT,
    wxSHOW_EFFECT_SLIDE_TO_TOP,
    wxSHOW_EFFECT_SLIDE_TO_BOTTOM,
    wxSHOW_EFFECT_BLEND,
    wxSHOW_EFFECT_EXPAND,
    wxSHOW_EFFECT_MAX
};


enum
{
    wxSEND_EVENT_POST = 1
};


enum
{
    wxEXTEND_LAST_ON_EACH_LINE = 1,
    // don't leave spacers in the beginning of a new row
    wxREMOVE_LEADING_SPACES = 2,

    wxWRAPSIZER_DEFAULT_FLAGS = wxEXTEND_LAST_ON_EACH_LINE |
                                wxREMOVE_LEADING_SPACES
};


enum wxXmlNodeType
{
    // note: values are synchronized with xmlElementType from libxml
    wxXML_ELEMENT_NODE       =  1,
    wxXML_ATTRIBUTE_NODE     =  2,
    wxXML_TEXT_NODE          =  3,
    wxXML_CDATA_SECTION_NODE =  4,
    wxXML_ENTITY_REF_NODE    =  5,
    wxXML_ENTITY_NODE        =  6,
    wxXML_PI_NODE            =  7,
    wxXML_COMMENT_NODE       =  8,
    wxXML_DOCUMENT_NODE      =  9,
    wxXML_DOCUMENT_TYPE_NODE = 10,
    wxXML_DOCUMENT_FRAG_NODE = 11,
    wxXML_NOTATION_NODE      = 12,
    wxXML_HTML_DOCUMENT_NODE = 13
};


enum wxXmlDocumentLoadFlag
{
    wxXMLDOC_NONE = 0,
    wxXMLDOC_KEEP_WHITESPACE_NODES = 1
};


enum wxXmlResourceFlags
{
    wxXRC_USE_LOCALE     = 1,
    wxXRC_NO_SUBCLASSING = 2,
    wxXRC_NO_RELOADING   = 4
};


enum wxZipMethod
{
    wxZIP_METHOD_STORE,
    wxZIP_METHOD_SHRINK,
    wxZIP_METHOD_REDUCE1,
    wxZIP_METHOD_REDUCE2,
    wxZIP_METHOD_REDUCE3,
    wxZIP_METHOD_REDUCE4,
    wxZIP_METHOD_IMPLODE,
    wxZIP_METHOD_TOKENIZE,
    wxZIP_METHOD_DEFLATE,
    wxZIP_METHOD_DEFLATE64,
    wxZIP_METHOD_BZIP2 = 12,
    wxZIP_METHOD_DEFAULT = 0xffff
};


enum wxZipSystem
{
    wxZIP_SYSTEM_MSDOS,
    wxZIP_SYSTEM_AMIGA,
    wxZIP_SYSTEM_OPENVMS,
    wxZIP_SYSTEM_UNIX,
    wxZIP_SYSTEM_VM_CMS,
    wxZIP_SYSTEM_ATARI_ST,
    wxZIP_SYSTEM_OS2_HPFS,
    wxZIP_SYSTEM_MACINTOSH,
    wxZIP_SYSTEM_Z_SYSTEM,
    wxZIP_SYSTEM_CPM,
    wxZIP_SYSTEM_WINDOWS_NTFS,
    wxZIP_SYSTEM_MVS,
    wxZIP_SYSTEM_VSE,
    wxZIP_SYSTEM_ACORN_RISC,
    wxZIP_SYSTEM_VFAT,
    wxZIP_SYSTEM_ALTERNATE_MVS,
    wxZIP_SYSTEM_BEOS,
    wxZIP_SYSTEM_TANDEM,
    wxZIP_SYSTEM_OS_400
};


enum wxZipAttributes
{
    wxZIP_A_RDONLY = 0x01,
    wxZIP_A_HIDDEN = 0x02,
    wxZIP_A_SYSTEM = 0x04,
    wxZIP_A_SUBDIR = 0x10,
    wxZIP_A_ARCH   = 0x20,

    wxZIP_A_MASK   = 0x37
};


enum wxZipFlags
{
    wxZIP_ENCRYPTED         = 0x0001,
    wxZIP_DEFLATE_NORMAL    = 0x0000,   // normal compression
    wxZIP_DEFLATE_EXTRA     = 0x0002,   // extra compression
    wxZIP_DEFLATE_FAST      = 0x0004,   // fast compression
    wxZIP_DEFLATE_SUPERFAST = 0x0006,   // superfast compression
    wxZIP_DEFLATE_MASK      = 0x0006,
    wxZIP_SUMS_FOLLOW       = 0x0008,   // crc and sizes come after the data
    wxZIP_ENHANCED          = 0x0010,
    wxZIP_PATCH             = 0x0020,
    wxZIP_STRONG_ENC        = 0x0040,
    wxZIP_UNUSED            = 0x0F80,
    wxZIP_RESERVED          = 0xF000
};


enum wxZlibCompressionLevels {
    wxZ_DEFAULT_COMPRESSION = -1,
    wxZ_NO_COMPRESSION = 0,
    wxZ_BEST_SPEED = 1,
    wxZ_BEST_COMPRESSION = 9
};


enum wxZLibFlags {
    wxZLIB_NO_HEADER = 0,    // raw deflate stream, no header or checksum
    wxZLIB_ZLIB = 1,         // zlib header and checksum
    wxZLIB_GZIP = 2,         // gzip header and checksum, requires zlib 1.2.1+
    wxZLIB_AUTO = 3          // autodetect header zlib or gzip
};

