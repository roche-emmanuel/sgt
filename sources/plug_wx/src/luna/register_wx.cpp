#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_wx(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"wx");
	Luna< wxEventFilter >::Register(L);
	Luna< wxObject >::Register(L);
	Luna< wxTrackable >::Register(L);
	Luna< wxEvtHandler >::Register(L);
	Luna< wxAppConsole >::Register(L);
	Luna< wxApp >::Register(L);
	Luna< sgtApp >::Register(L);
	Luna< wxAboutDialogInfo >::Register(L);
	Luna< wxAcceleratorEntry >::Register(L);
	Luna< wxAcceleratorTable >::Register(L);
	Luna< wxEvent >::Register(L);
	Luna< wxActivateEvent >::Register(L);
	Luna< wxAffineMatrix2D >::Register(L);
	Luna< wxAffineMatrix2DBase >::Register(L);
	Luna< wxGDIObject >::Register(L);
	Luna< wxAnimation >::Register(L);
	Luna< wxWindow >::Register(L);
	Luna< wxControl >::Register(L);
	Luna< wxAnimationCtrl >::Register(L);
	Luna< wxAnyButton >::Register(L);
	Luna< wxAppTraits >::Register(L);
	Luna< wxArrayDouble >::Register(L);
	Luna< wxArrayInt >::Register(L);
	Luna< wxArrayLong >::Register(L);
	Luna< wxArrayPtrVoid >::Register(L);
	Luna< wxArrayShort >::Register(L);
	Luna< wxArrayString >::Register(L);
	Luna< wxArrayTreeItemIds >::Register(L);
	Luna< wxArtProvider >::Register(L);
	Luna< wxAuiToolBarArt >::Register(L);
	Luna< wxAuiDefaultToolBarArt >::Register(L);
	Luna< wxAuiDockArt >::Register(L);
	Luna< wxAuiManager >::Register(L);
	Luna< wxAuiManagerEvent >::Register(L);
	Luna< wxWithImages >::Register(L);
	Luna< wxBookCtrlBase >::Register(L);
	Luna< wxAuiNotebook >::Register(L);
	Luna< wxCommandEvent >::Register(L);
	Luna< wxNotifyEvent >::Register(L);
	Luna< wxBookCtrlEvent >::Register(L);
	Luna< wxAuiNotebookEvent >::Register(L);
	Luna< wxAuiNotebookPage >::Register(L);
	Luna< wxAuiNotebookPageArray >::Register(L);
	Luna< wxAuiPaneInfo >::Register(L);
	Luna< wxAuiPaneInfoArray >::Register(L);
	Luna< wxAuiTabArt >::Register(L);
	Luna< wxAuiToolBar >::Register(L);
	Luna< wxAuiToolBarEvent >::Register(L);
	Luna< wxAuiToolBarItem >::Register(L);
	Luna< wxAuiToolBarItemArray >::Register(L);
	Luna< wxBannerWindow >::Register(L);
	Luna< wxBitmap >::Register(L);
	Luna< wxButton >::Register(L);
	Luna< wxBitmapButton >::Register(L);
	Luna< wxItemContainerImmutable >::Register(L);
	Luna< wxItemContainer >::Register(L);
	Luna< wxTextEntry >::Register(L);
	Luna< wxComboBox >::Register(L);
	Luna< wxBitmapComboBox >::Register(L);
	Luna< wxDataObject >::Register(L);
	Luna< wxDataObjectSimple >::Register(L);
	Luna< wxBitmapDataObject >::Register(L);
	Luna< wxBitmapHandler >::Register(L);
	Luna< wxToggleButton >::Register(L);
	Luna< wxBitmapToggleButton >::Register(L);
	Luna< wxSizer >::Register(L);
	Luna< wxBoxSizer >::Register(L);
	Luna< wxBrush >::Register(L);
	Luna< wxList >::Register(L);
	Luna< wxBrushList >::Register(L);
	Luna< wxBusyCursor >::Register(L);
	Luna< wxBusyInfo >::Register(L);
	Luna< wxCalculateLayoutEvent >::Register(L);
	Luna< wxCalendarCtrl >::Register(L);
	Luna< wxCalendarDateAttr >::Register(L);
	Luna< wxDateEvent >::Register(L);
	Luna< wxCalendarEvent >::Register(L);
	Luna< wxCaret >::Register(L);
	Luna< wxCheckBox >::Register(L);
	Luna< wxControlWithItems >::Register(L);
	Luna< wxListBox >::Register(L);
	Luna< wxCheckListBox >::Register(L);
	Luna< wxChildFocusEvent >::Register(L);
	Luna< wxChoice >::Register(L);
	Luna< wxChoicebook >::Register(L);
	Luna< wxClassInfo >::Register(L);
	Luna< wxClient >::Register(L);
	Luna< wxClientData >::Register(L);
	Luna< wxClientDataContainer >::Register(L);
	Luna< wxDC >::Register(L);
	Luna< wxWindowDC >::Register(L);
	Luna< wxClientDC >::Register(L);
	Luna< wxClipboard >::Register(L);
	Luna< wxClipboardTextEvent >::Register(L);
	Luna< wxCloseEvent >::Register(L);
	Luna< wxCmdLineEntryDesc >::Register(L);
	Luna< wxCmdLineParser >::Register(L);
	Luna< wxCollapsiblePane >::Register(L);
	Luna< wxCollapsiblePaneEvent >::Register(L);
	Luna< wxColour >::Register(L);
	Luna< wxColourData >::Register(L);
	Luna< wxColourDatabase >::Register(L);
	Luna< wxNonOwnedWindow >::Register(L);
	Luna< wxTopLevelWindow >::Register(L);
	Luna< wxDialog >::Register(L);
	Luna< wxColourDialog >::Register(L);
	Luna< wxPickerBase >::Register(L);
	Luna< wxColourPickerCtrl >::Register(L);
	Luna< wxColourPickerEvent >::Register(L);
	Luna< wxComboCtrl >::Register(L);
	Luna< wxComboCtrlFeatures >::Register(L);
	Luna< wxComboPopup >::Register(L);
	Luna< wxCommand >::Register(L);
	Luna< wxCommandLinkButton >::Register(L);
	Luna< wxCommandProcessor >::Register(L);
	Luna< wxCondition >::Register(L);
	Luna< wxConfigBase >::Register(L);
	Luna< wxConfigPathChanger >::Register(L);
	Luna< wxConnection >::Register(L);
	Luna< wxConnectionBase >::Register(L);
	Luna< wxContextHelp >::Register(L);
	Luna< wxContextHelpButton >::Register(L);
	Luna< wxContextMenuEvent >::Register(L);
	Luna< wxConvAuto >::Register(L);
	Luna< wxStreamBase >::Register(L);
	Luna< wxOutputStream >::Register(L);
	Luna< wxCountingOutputStream >::Register(L);
	Luna< wxCriticalSection >::Register(L);
	Luna< wxCriticalSectionLocker >::Register(L);
	Luna< wxCSConv >::Register(L);
	Luna< wxCursor >::Register(L);
	Luna< wxCustomDataObject >::Register(L);
	Luna< wxDataFormat >::Register(L);
	Luna< wxSocketBase >::Register(L);
	Luna< wxDatagramSocket >::Register(L);
	Luna< wxDataInputStream >::Register(L);
	Luna< wxDataObjectBase >::Register(L);
	Luna< wxDataObjectComposite >::Register(L);
	Luna< wxDataOutputStream >::Register(L);
	Luna< wxDataViewRenderer >::Register(L);
	Luna< wxDataViewBitmapRenderer >::Register(L);
	Luna< wxDataViewChoiceRenderer >::Register(L);
	Luna< wxHeaderColumn >::Register(L);
	Luna< wxSettableHeaderColumn >::Register(L);
	Luna< wxDataViewColumn >::Register(L);
	Luna< wxDataViewCtrl >::Register(L);
	Luna< wxDataViewCustomRenderer >::Register(L);
	Luna< wxDataViewDateRenderer >::Register(L);
	Luna< wxDataViewEvent >::Register(L);
	Luna< wxDataViewIconText >::Register(L);
	Luna< wxDataViewIconTextRenderer >::Register(L);
	Luna< wxDataViewModel >::Register(L);
	Luna< wxDataViewListModel >::Register(L);
	Luna< wxDataViewIndexListModel >::Register(L);
	Luna< wxDataViewItem >::Register(L);
	Luna< wxDataViewItemArray >::Register(L);
	Luna< wxDataViewItemAttr >::Register(L);
	Luna< wxDataViewListCtrl >::Register(L);
	Luna< wxDataViewListStore >::Register(L);
	Luna< wxDataViewModelNotifier >::Register(L);
	Luna< wxDataViewProgressRenderer >::Register(L);
	Luna< wxDataViewSpinRenderer >::Register(L);
	Luna< wxDataViewTextRenderer >::Register(L);
	Luna< wxDataViewToggleRenderer >::Register(L);
	Luna< wxDataViewTreeCtrl >::Register(L);
	Luna< wxDataViewTreeStore >::Register(L);
	Luna< wxDataViewVirtualListModel >::Register(L);
	Luna< wxDatePickerCtrl >::Register(L);
	Luna< wxDateSpan >::Register(L);
	Luna< wxDateTime >::Register(L);
	Luna< wxDateTime::Tm >::Register(L);
	Luna< wxDateTimeHolidayAuthority >::Register(L);
	Luna< wxDateTimeWorkDays >::Register(L);
	Luna< wxDCBrushChanger >::Register(L);
	Luna< wxDCClipper >::Register(L);
	Luna< wxDCFontChanger >::Register(L);
	Luna< wxDCPenChanger >::Register(L);
	Luna< wxDCTextColourChanger >::Register(L);
	Luna< wxRendererNative >::Register(L);
	Luna< wxDelegateRendererNative >::Register(L);
	Luna< wxDialogLayoutAdapter >::Register(L);
	Luna< wxDialUpEvent >::Register(L);
	Luna< wxDialUpManager >::Register(L);
	Luna< wxDir >::Register(L);
	Luna< wxDirDialog >::Register(L);
	Luna< wxDirPickerCtrl >::Register(L);
	Luna< wxDirTraverser >::Register(L);
	Luna< wxDisplay >::Register(L);
	Luna< wxDisplayChangedEvent >::Register(L);
	Luna< wxFrame >::Register(L);
	Luna< wxDocChildFrame >::Register(L);
	Luna< wxDocManager >::Register(L);
	Luna< wxMDIChildFrame >::Register(L);
	Luna< wxDocMDIChildFrame >::Register(L);
	Luna< wxMDIParentFrame >::Register(L);
	Luna< wxDocMDIParentFrame >::Register(L);
	Luna< wxDocParentFrame >::Register(L);
	Luna< wxDocTemplate >::Register(L);
	Luna< wxDocument >::Register(L);
	Luna< wxDragImage >::Register(L);
	Luna< wxDropFilesEvent >::Register(L);
	Luna< wxDropSource >::Register(L);
	Luna< wxDropTarget >::Register(L);
	Luna< wxDynamicLibrary >::Register(L);
	Luna< wxDynamicLibraryDetails >::Register(L);
	Luna< wxPanel >::Register(L);
	Luna< wxEditableListBox >::Register(L);
	Luna< wxEncodingConverter >::Register(L);
	Luna< wxEraseEvent >::Register(L);
	Luna< wxEventBlocker >::Register(L);
	Luna< wxEventLoopActivator >::Register(L);
	Luna< wxEventLoopBase >::Register(L);
	Luna< wxExecuteEnv >::Register(L);
	Luna< wxHelpController >::Register(L);
	Luna< wxExtHelpController >::Register(L);
	Luna< wxFFile >::Register(L);
	Luna< wxInputStream >::Register(L);
	Luna< wxFFileInputStream >::Register(L);
	Luna< wxFFileOutputStream >::Register(L);
	Luna< wxFile >::Register(L);
	Luna< wxFileConfig >::Register(L);
	Luna< wxFileCtrl >::Register(L);
	Luna< wxFileCtrlEvent >::Register(L);
	Luna< wxFileDataObject >::Register(L);
	Luna< wxFileDialog >::Register(L);
	Luna< wxFileDirPickerEvent >::Register(L);
	Luna< wxFileDropTarget >::Register(L);
	Luna< wxFileHistory >::Register(L);
	Luna< wxFileInputStream >::Register(L);
	Luna< wxFileName >::Register(L);
	Luna< wxFileOutputStream >::Register(L);
	Luna< wxFilePickerCtrl >::Register(L);
	Luna< wxFileSystem >::Register(L);
	Luna< wxFileSystemHandler >::Register(L);
	Luna< wxFileSystemWatcher >::Register(L);
	Luna< wxFileSystemWatcherEvent >::Register(L);
	Luna< wxTranslationsLoader >::Register(L);
	Luna< wxFileTranslationsLoader >::Register(L);
	Luna< wxFileType >::Register(L);
	Luna< wxFileTypeInfo >::Register(L);
	Luna< wxFilterClassFactory >::Register(L);
	Luna< wxFilterInputStream >::Register(L);
	Luna< wxFilterOutputStream >::Register(L);
	Luna< wxFindReplaceData >::Register(L);
	Luna< wxFindReplaceDialog >::Register(L);
	Luna< wxGridSizer >::Register(L);
	Luna< wxFlexGridSizer >::Register(L);
	Luna< wxValidator >::Register(L);
	Luna< wxFocusEvent >::Register(L);
	Luna< wxFont >::Register(L);
	Luna< wxFontData >::Register(L);
	Luna< wxFontDialog >::Register(L);
	Luna< wxFontEnumerator >::Register(L);
	Luna< wxFontList >::Register(L);
	Luna< wxFontMapper >::Register(L);
	Luna< wxFontMetrics >::Register(L);
	Luna< wxFontPickerCtrl >::Register(L);
	Luna< wxFontPickerEvent >::Register(L);
	Luna< wxFSFile >::Register(L);
	Luna< wxFSVolume >::Register(L);
	Luna< wxSocketClient >::Register(L);
	Luna< wxProtocol >::Register(L);
	Luna< wxFTP >::Register(L);
	Luna< wxGauge >::Register(L);
	Luna< wxGBPosition >::Register(L);
	Luna< wxSizerItem >::Register(L);
	Luna< wxGBSizerItem >::Register(L);
	Luna< wxGBSpan >::Register(L);
	Luna< wxGCDC >::Register(L);
	Luna< wxGenericDirCtrl >::Register(L);
	Luna< wxGenericValidator >::Register(L);
	Luna< wxGLCanvas >::Register(L);
	Luna< wxGLContext >::Register(L);
	Luna< wxGraphicsObject >::Register(L);
	Luna< wxGraphicsBitmap >::Register(L);
	Luna< wxGraphicsBrush >::Register(L);
	Luna< wxGraphicsContext >::Register(L);
	Luna< wxGraphicsFont >::Register(L);
	Luna< wxGraphicsGradientStop >::Register(L);
	Luna< wxGraphicsGradientStops >::Register(L);
	Luna< wxGraphicsMatrix >::Register(L);
	Luna< wxGraphicsPath >::Register(L);
	Luna< wxGraphicsPen >::Register(L);
	Luna< wxGraphicsRenderer >::Register(L);
	Luna< wxScrolledWindow >::Register(L);
	Luna< wxGrid >::Register(L);
	Luna< wxGridBagSizer >::Register(L);
	Luna< wxGridCellAttr >::Register(L);
	Luna< wxGridCellAttrProvider >::Register(L);
	Luna< wxGridCellEditor >::Register(L);
	Luna< wxGridCellTextEditor >::Register(L);
	Luna< wxGridCellAutoWrapStringEditor >::Register(L);
	Luna< wxGridCellRenderer >::Register(L);
	Luna< wxGridCellStringRenderer >::Register(L);
	Luna< wxGridCellAutoWrapStringRenderer >::Register(L);
	Luna< wxGridCellBoolEditor >::Register(L);
	Luna< wxGridCellBoolRenderer >::Register(L);
	Luna< wxGridCellChoiceEditor >::Register(L);
	Luna< wxGridCellCoords >::Register(L);
	Luna< wxGridCellDateTimeRenderer >::Register(L);
	Luna< wxGridCellEnumEditor >::Register(L);
	Luna< wxGridCellEnumRenderer >::Register(L);
	Luna< wxGridCellFloatEditor >::Register(L);
	Luna< wxGridCellFloatRenderer >::Register(L);
	Luna< wxGridCellNumberEditor >::Register(L);
	Luna< wxGridCellNumberRenderer >::Register(L);
	Luna< wxGridCornerHeaderRenderer >::Register(L);
	Luna< wxGridHeaderLabelsRenderer >::Register(L);
	Luna< wxGridColumnHeaderRenderer >::Register(L);
	Luna< wxGridColumnHeaderRendererDefault >::Register(L);
	Luna< wxGridCornerHeaderRendererDefault >::Register(L);
	Luna< wxGridEditorCreatedEvent >::Register(L);
	Luna< wxGridEvent >::Register(L);
	Luna< wxGridRangeSelectEvent >::Register(L);
	Luna< wxGridRowHeaderRenderer >::Register(L);
	Luna< wxGridRowHeaderRendererDefault >::Register(L);
	Luna< wxGridSizeEvent >::Register(L);
	Luna< wxGridSizesInfo >::Register(L);
	Luna< wxGridTableBase >::Register(L);
	Luna< wxGridUpdateLocker >::Register(L);
	Luna< wxHeaderButtonParams >::Register(L);
	Luna< wxHeaderColumnSimple >::Register(L);
	Luna< wxHeaderCtrl >::Register(L);
	Luna< wxHeaderCtrlEvent >::Register(L);
	Luna< wxHeaderCtrlSimple >::Register(L);
	Luna< wxHelpProvider >::Register(L);
	Luna< wxSimpleHelpProvider >::Register(L);
	Luna< wxHelpControllerHelpProvider >::Register(L);
	Luna< wxHelpEvent >::Register(L);
	Luna< wxVarScrollHelperBase >::Register(L);
	Luna< wxVarHScrollHelper >::Register(L);
	Luna< wxHScrolledWindow >::Register(L);
	Luna< wxHtmlCell >::Register(L);
	Luna< wxHtmlCellEvent >::Register(L);
	Luna< wxHtmlColourCell >::Register(L);
	Luna< wxHtmlContainerCell >::Register(L);
	Luna< wxHtmlDCRenderer >::Register(L);
	Luna< wxHtmlEasyPrinting >::Register(L);
	Luna< wxHtmlFilter >::Register(L);
	Luna< wxHtmlHelpController >::Register(L);
	Luna< wxHtmlHelpData >::Register(L);
	Luna< wxHtmlHelpDialog >::Register(L);
	Luna< wxHtmlHelpFrame >::Register(L);
	Luna< wxHtmlHelpWindow >::Register(L);
	Luna< wxHtmlLinkEvent >::Register(L);
	Luna< wxHtmlLinkInfo >::Register(L);
	Luna< wxVarVScrollHelper >::Register(L);
	Luna< wxVScrolledWindow >::Register(L);
	Luna< wxVListBox >::Register(L);
	Luna< wxHtmlListBox >::Register(L);
	Luna< wxHtmlModalHelp >::Register(L);
	Luna< wxHtmlParser >::Register(L);
	Luna< wxPrintout >::Register(L);
	Luna< wxHtmlPrintout >::Register(L);
	Luna< wxHtmlRenderingInfo >::Register(L);
	Luna< wxHtmlRenderingStyle >::Register(L);
	Luna< wxHtmlTag >::Register(L);
	Luna< wxHtmlTagHandler >::Register(L);
	Luna< wxModule >::Register(L);
	Luna< wxHtmlTagsModule >::Register(L);
	Luna< wxHtmlWidgetCell >::Register(L);
	Luna< wxHtmlWindow >::Register(L);
	Luna< wxHtmlWinParser >::Register(L);
	Luna< wxHtmlWinTagHandler >::Register(L);
	Luna< wxHTTP >::Register(L);
	Luna< wxHVScrolledWindow >::Register(L);
	Luna< wxHyperlinkCtrl >::Register(L);
	Luna< wxHyperlinkEvent >::Register(L);
	Luna< wxIcon >::Register(L);
	Luna< wxIconBundle >::Register(L);
	Luna< wxIconizeEvent >::Register(L);
	Luna< wxIconLocation >::Register(L);
	Luna< wxIdleEvent >::Register(L);
	Luna< wxIdManager >::Register(L);
	Luna< wxImage >::Register(L);
	Luna< wxImage::HSVValue >::Register(L);
	Luna< wxImage::RGBValue >::Register(L);
	Luna< wxImageHandler >::Register(L);
	Luna< wxImageHistogram >::Register(L);
	Luna< wxImageList >::Register(L);
	Luna< wxIndividualLayoutConstraint >::Register(L);
	Luna< wxInfoBar >::Register(L);
	Luna< wxInitDialogEvent >::Register(L);
	Luna< wxInitializer >::Register(L);
	Luna< wxSockAddress >::Register(L);
	Luna< wxIPaddress >::Register(L);
	Luna< wxIPV4address >::Register(L);
	Luna< wxJoystick >::Register(L);
	Luna< wxJoystickEvent >::Register(L);
	Luna< wxKeyboardState >::Register(L);
	Luna< wxKeyEvent >::Register(L);
	Luna< wxLanguageInfo >::Register(L);
	Luna< wxLayoutAlgorithm >::Register(L);
	Luna< wxLayoutConstraints >::Register(L);
	Luna< wxLinuxDistributionInfo >::Register(L);
	Luna< wxListbook >::Register(L);
	Luna< wxListCtrl >::Register(L);
	Luna< wxListEvent >::Register(L);
	Luna< wxListItem >::Register(L);
	Luna< wxListItemAttr >::Register(L);
	Luna< wxListView >::Register(L);
	Luna< wxLocale >::Register(L);
	Luna< wxLog >::Register(L);
	Luna< wxLogChain >::Register(L);
	Luna< wxLogGui >::Register(L);
	Luna< wxLogInterposer >::Register(L);
	Luna< wxLogInterposerTemp >::Register(L);
	Luna< wxLogNull >::Register(L);
	Luna< wxLogRecordInfo >::Register(L);
	Luna< wxLogStderr >::Register(L);
	Luna< wxLogStream >::Register(L);
	Luna< wxLogTextCtrl >::Register(L);
	Luna< wxLogWindow >::Register(L);
	Luna< wxLongLong >::Register(L);
	Luna< wxMask >::Register(L);
	Luna< wxMatrix2D >::Register(L);
	Luna< wxMaximizeEvent >::Register(L);
	Luna< wxMDIClientWindow >::Register(L);
	Luna< wxMediaCtrl >::Register(L);
	Luna< wxMediaEvent >::Register(L);
	Luna< wxMemoryDC >::Register(L);
	Luna< wxMemoryFSHandler >::Register(L);
	Luna< wxMemoryInputStream >::Register(L);
	Luna< wxMemoryOutputStream >::Register(L);
	Luna< wxMenu >::Register(L);
	Luna< wxMenuBar >::Register(L);
	Luna< wxMenuEvent >::Register(L);
	Luna< wxMenuItem >::Register(L);
	Luna< wxMessageDialog >::Register(L);
	Luna< wxMessageOutput >::Register(L);
	Luna< wxMessageOutputStderr >::Register(L);
	Luna< wxMessageOutputBest >::Register(L);
	Luna< wxMessageOutputDebug >::Register(L);
	Luna< wxMessageOutputMessageBox >::Register(L);
	Luna< wxMetafile >::Register(L);
	Luna< wxMetafileDC >::Register(L);
	Luna< wxMimeTypesManager >::Register(L);
	Luna< wxMiniFrame >::Register(L);
	Luna< wxMirrorDC >::Register(L);
	Luna< wxMouseCaptureChangedEvent >::Register(L);
	Luna< wxMouseCaptureLostEvent >::Register(L);
	Luna< wxMouseState >::Register(L);
	Luna< wxMouseEvent >::Register(L);
	Luna< wxMouseEventsManager >::Register(L);
	Luna< wxMoveEvent >::Register(L);
	Luna< wxMsgCatalog >::Register(L);
	Luna< wxMultiChoiceDialog >::Register(L);
	Luna< wxMutex >::Register(L);
	Luna< wxMutexLocker >::Register(L);
	Luna< wxNativeFontInfo >::Register(L);
	Luna< wxNavigationKeyEvent >::Register(L);
	Luna< wxNotebook >::Register(L);
	Luna< wxNumberFormatter >::Register(L);
	Luna< wxObjectRefData >::Register(L);
	Luna< wxOwnerDrawnComboBox >::Register(L);
	Luna< wxPageSetupDialog >::Register(L);
	Luna< wxPageSetupDialogData >::Register(L);
	Luna< wxPaintDC >::Register(L);
	Luna< wxPaintEvent >::Register(L);
	Luna< wxPalette >::Register(L);
	Luna< wxPaletteChangedEvent >::Register(L);
	Luna< wxTextEntryDialog >::Register(L);
	Luna< wxPasswordEntryDialog >::Register(L);
	Luna< wxPathList >::Register(L);
	Luna< wxPen >::Register(L);
	Luna< wxPenList >::Register(L);
	Luna< wxPersistenceManager >::Register(L);
	Luna< wxPersistentObject >::Register(L);
	Luna< wxPGCell >::Register(L);
	Luna< wxPGChoiceEntry >::Register(L);
	Luna< wxPGChoices >::Register(L);
	Luna< wxPGChoicesData >::Register(L);
	Luna< wxPGEditor >::Register(L);
	Luna< wxPGMultiButton >::Register(L);
	Luna< wxPGProperty >::Register(L);
	Luna< wxPGValidationInfo >::Register(L);
	Luna< wxPlatformInfo >::Register(L);
	Luna< wxPoint >::Register(L);
	Luna< wxPoint2DDouble >::Register(L);
	Luna< wxPoint2DInt >::Register(L);
	Luna< wxPointList >::Register(L);
	Luna< wxPopupWindow >::Register(L);
	Luna< wxPopupTransientWindow >::Register(L);
	Luna< wxPosition >::Register(L);
	Luna< wxPowerEvent >::Register(L);
	Luna< wxPreviewCanvas >::Register(L);
	Luna< wxPreviewControlBar >::Register(L);
	Luna< wxPreviewFrame >::Register(L);
	Luna< wxPrintData >::Register(L);
	Luna< wxPrintDialog >::Register(L);
	Luna< wxPrintDialogData >::Register(L);
	Luna< wxPrinter >::Register(L);
	Luna< wxPrinterDC >::Register(L);
	Luna< wxPrintPreview >::Register(L);
	Luna< wxProcess >::Register(L);
	Luna< wxProcessEvent >::Register(L);
	Luna< wxProgressDialog >::Register(L);
	Luna< wxPropagateOnce >::Register(L);
	Luna< wxPropagationDisabler >::Register(L);
	Luna< wxPropertyGridInterface >::Register(L);
	Luna< wxPropertyGrid >::Register(L);
	Luna< wxPropertyGridEvent >::Register(L);
	Luna< wxPropertyGridHitTestResult >::Register(L);
	Luna< wxPropertyGridManager >::Register(L);
	Luna< wxPropertyGridPage >::Register(L);
	Luna< wxPropertySheetDialog >::Register(L);
	Luna< wxProtocolLog >::Register(L);
	Luna< wxQuantize >::Register(L);
	Luna< wxQueryLayoutInfoEvent >::Register(L);
	Luna< wxQueryNewPaletteEvent >::Register(L);
	Luna< wxRadioBox >::Register(L);
	Luna< wxRadioButton >::Register(L);
	Luna< wxRealPoint >::Register(L);
	Luna< wxRearrangeCtrl >::Register(L);
	Luna< wxRearrangeDialog >::Register(L);
	Luna< wxRearrangeList >::Register(L);
	Luna< wxRect >::Register(L);
	Luna< wxRect2DDouble >::Register(L);
	Luna< wxRect2DInt >::Register(L);
	Luna< wxRecursionGuard >::Register(L);
	Luna< wxRecursionGuardFlag >::Register(L);
	Luna< wxRegConfig >::Register(L);
	Luna< wxRegEx >::Register(L);
	Luna< wxRegion >::Register(L);
	Luna< wxRegKey >::Register(L);
	Luna< wxRendererVersion >::Register(L);
	Luna< wxResourceTranslationsLoader >::Register(L);
	Luna< wxRibbonArtProvider >::Register(L);
	Luna< wxRibbonControl >::Register(L);
	Luna< wxRibbonBar >::Register(L);
	Luna< wxRibbonBarEvent >::Register(L);
	Luna< wxRibbonButtonBar >::Register(L);
	Luna< wxRibbonButtonBarButtonBase >::Register(L);
	Luna< wxRibbonButtonBarEvent >::Register(L);
	Luna< wxRibbonGallery >::Register(L);
	Luna< wxRibbonGalleryEvent >::Register(L);
	Luna< wxRibbonGalleryItem >::Register(L);
	Luna< wxRibbonPage >::Register(L);
	Luna< wxRibbonPageTabInfo >::Register(L);
	Luna< wxRibbonPageTabInfoArray >::Register(L);
	Luna< wxRibbonPanel >::Register(L);
	Luna< wxRibbonToolBar >::Register(L);
	Luna< wxRichMessageDialog >::Register(L);
	Luna< wxRichTextAction >::Register(L);
	Luna< wxTextAttr >::Register(L);
	Luna< wxRichTextAttr >::Register(L);
	Luna< wxRichTextObject >::Register(L);
	Luna< wxRichTextCompositeObject >::Register(L);
	Luna< wxRichTextParagraphLayoutBox >::Register(L);
	Luna< wxRichTextBox >::Register(L);
	Luna< wxRichTextCell >::Register(L);
	Luna< wxRichTextStyleDefinition >::Register(L);
	Luna< wxRichTextCharacterStyleDefinition >::Register(L);
	Luna< wxRichTextCommand >::Register(L);
	Luna< wxRichTextContextMenuPropertiesInfo >::Register(L);
	Luna< wxRichTextCtrl >::Register(L);
	Luna< wxRichTextEvent >::Register(L);
	Luna< wxRichTextFileHandler >::Register(L);
	Luna< wxRichTextFloatCollector >::Register(L);
	Luna< wxRichTextFontTable >::Register(L);
	Luna< wxRichTextFormattingDialog >::Register(L);
	Luna< wxRichTextFormattingDialogFactory >::Register(L);
	Luna< wxRichTextHeaderFooterData >::Register(L);
	Luna< wxRichTextHTMLHandler >::Register(L);
	Luna< wxRichTextImage >::Register(L);
	Luna< wxRichTextImageBlock >::Register(L);
	Luna< wxRichTextLine >::Register(L);
	Luna< wxRichTextParagraphStyleDefinition >::Register(L);
	Luna< wxRichTextListStyleDefinition >::Register(L);
	Luna< wxRichTextObjectAddress >::Register(L);
	Luna< wxRichTextParagraph >::Register(L);
	Luna< wxRichTextPlainText >::Register(L);
	Luna< wxRichTextPlainTextHandler >::Register(L);
	Luna< wxRichTextPrinting >::Register(L);
	Luna< wxRichTextPrintout >::Register(L);
	Luna< wxRichTextProperties >::Register(L);
	Luna< wxRichTextRange >::Register(L);
	Luna< wxRichTextRangeArray >::Register(L);
	Luna< wxRichTextRenderer >::Register(L);
	Luna< wxRichTextSelection >::Register(L);
	Luna< wxRichTextStdRenderer >::Register(L);
	Luna< wxRichTextStyleComboCtrl >::Register(L);
	Luna< wxRichTextStyleListBox >::Register(L);
	Luna< wxRichTextStyleListCtrl >::Register(L);
	Luna< wxRichTextStyleOrganiserDialog >::Register(L);
	Luna< wxRichTextStyleSheet >::Register(L);
	Luna< wxRichTextTable >::Register(L);
	Luna< wxRichTextVariantArray >::Register(L);
	Luna< wxRichTextXMLHandler >::Register(L);
	Luna< wxRichToolTip >::Register(L);
	Luna< wxSashEvent >::Register(L);
	Luna< wxSashWindow >::Register(L);
	Luna< wxSashLayoutWindow >::Register(L);
	Luna< wxScreenDC >::Register(L);
	Luna< wxScrollBar >::Register(L);
	Luna< wxScrolledCanvas >::Register(L);
	Luna< wxScrollEvent >::Register(L);
	Luna< wxScrollWinEvent >::Register(L);
	Luna< wxTextCtrl >::Register(L);
	Luna< wxSearchCtrl >::Register(L);
	Luna< wxSemaphore >::Register(L);
	Luna< wxServer >::Register(L);
	Luna< wxSetCursorEvent >::Register(L);
	Luna< wxShowEvent >::Register(L);
	Luna< wxSimpleHtmlListBox >::Register(L);
	Luna< wxSingleChoiceDialog >::Register(L);
	Luna< wxSingleInstanceChecker >::Register(L);
	Luna< wxSize >::Register(L);
	Luna< wxSizeEvent >::Register(L);
	Luna< wxSizerFlags >::Register(L);
	Luna< wxXmlResourceHandler >::Register(L);
	Luna< wxSizerXmlHandler >::Register(L);
	Luna< wxSlider >::Register(L);
	Luna< wxSocketEvent >::Register(L);
	Luna< wxSocketInputStream >::Register(L);
	Luna< wxSocketOutputStream >::Register(L);
	Luna< wxSocketServer >::Register(L);
	Luna< wxSortedArrayString >::Register(L);
	Luna< wxSound >::Register(L);
	Luna< wxSpinButton >::Register(L);
	Luna< wxSpinCtrl >::Register(L);
	Luna< wxSpinCtrlDouble >::Register(L);
	Luna< wxSpinDoubleEvent >::Register(L);
	Luna< wxSpinEvent >::Register(L);
	Luna< wxSplashScreen >::Register(L);
	Luna< wxSplitterEvent >::Register(L);
	Luna< wxSplitterRenderParams >::Register(L);
	Luna< wxSplitterWindow >::Register(L);
	Luna< wxStackFrame >::Register(L);
	Luna< wxStackWalker >::Register(L);
	Luna< wxStandardPaths >::Register(L);
	Luna< wxStaticBitmap >::Register(L);
	Luna< wxStaticBox >::Register(L);
	Luna< wxStaticBoxSizer >::Register(L);
	Luna< wxStaticLine >::Register(L);
	Luna< wxStaticText >::Register(L);
	Luna< wxStatusBar >::Register(L);
	Luna< wxStatusBarPane >::Register(L);
	Luna< wxStdDialogButtonSizer >::Register(L);
	Luna< wxStdInputStream >::Register(L);
	Luna< wxStdOutputStream >::Register(L);
	Luna< wxStopWatch >::Register(L);
	Luna< wxStreamToTextRedirector >::Register(L);
	Luna< wxString >::Register(L);
	Luna< wxStringClientData >::Register(L);
	Luna< wxStringInputStream >::Register(L);
	Luna< wxStringOutputStream >::Register(L);
	Luna< wxStringTokenizer >::Register(L);
	Luna< wxStyledTextCtrl >::Register(L);
	Luna< wxStyledTextEvent >::Register(L);
	Luna< wxSVGFileDC >::Register(L);
	Luna< wxSymbolPickerDialog >::Register(L);
	Luna< wxSysColourChangedEvent >::Register(L);
	Luna< wxSystemOptions >::Register(L);
	Luna< wxSystemSettings >::Register(L);
	Luna< wxTarClassFactory >::Register(L);
	Luna< wxTarEntry >::Register(L);
	Luna< wxTarInputStream >::Register(L);
	Luna< wxTarOutputStream >::Register(L);
	Luna< wxTaskBarIcon >::Register(L);
	Luna< wxTaskBarIconEvent >::Register(L);
	Luna< wxTCPClient >::Register(L);
	Luna< wxTCPConnection >::Register(L);
	Luna< wxTCPServer >::Register(L);
	Luna< wxTempFile >::Register(L);
	Luna< wxTempFileOutputStream >::Register(L);
	Luna< wxTextAttrBorder >::Register(L);
	Luna< wxTextAttrBorders >::Register(L);
	Luna< wxTextAttrDimension >::Register(L);
	Luna< wxTextAttrDimensionConverter >::Register(L);
	Luna< wxTextAttrDimensions >::Register(L);
	Luna< wxTextAttrSize >::Register(L);
	Luna< wxTextBoxAttr >::Register(L);
	Luna< wxTextCompleter >::Register(L);
	Luna< wxTextCompleterSimple >::Register(L);
	Luna< wxTextDataObject >::Register(L);
	Luna< wxTextDropTarget >::Register(L);
	Luna< wxTextFile >::Register(L);
	Luna< wxTextInputStream >::Register(L);
	Luna< wxTextOutputStream >::Register(L);
	Luna< wxTextValidator >::Register(L);
	Luna< wxTextWrapper >::Register(L);
	Luna< wxThread >::Register(L);
	Luna< wxThreadEvent >::Register(L);
	Luna< wxThreadHelper >::Register(L);
	Luna< wxTimePickerCtrl >::Register(L);
	Luna< wxTimer >::Register(L);
	Luna< wxTimerEvent >::Register(L);
	Luna< wxTimerRunner >::Register(L);
	Luna< wxTimeSpan >::Register(L);
	Luna< wxTipProvider >::Register(L);
	Luna< wxTipWindow >::Register(L);
	Luna< wxToolBar >::Register(L);
	Luna< wxToolBarToolBase >::Register(L);
	Luna< wxToolbook >::Register(L);
	Luna< wxToolTip >::Register(L);
	Luna< wxTransform2D >::Register(L);
	Luna< wxTranslations >::Register(L);
	Luna< wxTreebook >::Register(L);
	Luna< wxTreeCtrl >::Register(L);
	Luna< wxTreeEvent >::Register(L);
	Luna< wxTreeItemData >::Register(L);
	Luna< wxTreeItemId >::Register(L);
	Luna< wxTreeItemIdValue >::Register(L);
	Luna< wxTreeListCtrl >::Register(L);
	Luna< wxTreeListEvent >::Register(L);
	Luna< wxTreeListItem >::Register(L);
	Luna< wxTreeListItemComparator >::Register(L);
	Luna< wxUIActionSimulator >::Register(L);
	Luna< wxULongLong >::Register(L);
	Luna< wxUniChar >::Register(L);
	Luna< wxUniCharRef >::Register(L);
	Luna< wxUpdateUIEvent >::Register(L);
	Luna< wxURI >::Register(L);
	Luna< wxURL >::Register(L);
	Luna< wxURLDataObject >::Register(L);
	Luna< wxUString >::Register(L);
	Luna< wxVariant >::Register(L);
	Luna< wxVariantData >::Register(L);
	Luna< wxVersionInfo >::Register(L);
	Luna< wxVideoMode >::Register(L);
	Luna< wxView >::Register(L);
	Luna< wxVisualAttributes >::Register(L);
	Luna< wxWindowCreateEvent >::Register(L);
	Luna< wxWindowDestroyEvent >::Register(L);
	Luna< wxWindowDisabler >::Register(L);
	Luna< wxWindowModalDialogEvent >::Register(L);
	Luna< wxWindowUpdateLocker >::Register(L);
	Luna< wxWizard >::Register(L);
	Luna< wxWizardEvent >::Register(L);
	Luna< wxWizardPage >::Register(L);
	Luna< wxWizardPageSimple >::Register(L);
	Luna< wxWrapSizer >::Register(L);
	Luna< wxXLocale >::Register(L);
	Luna< wxXmlAttribute >::Register(L);
	Luna< wxXmlDocument >::Register(L);
	Luna< wxXmlNode >::Register(L);
	Luna< wxXmlResource >::Register(L);
	Luna< wxZipClassFactory >::Register(L);
	Luna< wxZipEntry >::Register(L);
	Luna< wxZipInputStream >::Register(L);
	Luna< wxZipNotifier >::Register(L);
	Luna< wxZipOutputStream >::Register(L);
	Luna< wxZlibInputStream >::Register(L);
	Luna< wxZlibOutputStream >::Register(L);
	Luna< wxVector< wxTreeListItem > >::Register(L);
	Luna< wxWindowList >::Register(L);
	Luna< wxTimerImpl >::Register(L);
	Luna< wxSizerItemList >::Register(L);
	Luna< wxArrayVideoModes >::Register(L);
	Luna< wxMDIClientWindowBase >::Register(L);
	Luna< wxDynamicLibraryDetailsArray >::Register(L);
	Luna< wxFontEncodingArray >::Register(L);
	Luna< wxDirFilterListCtrl >::Register(L);
	Luna< wxGridCellCoordsArray >::Register(L);
	Luna< wxHtmlBookRecArray >::Register(L);
	Luna< wxHtmlHelpDataItems >::Register(L);
	Luna< wxHtmlRenderingState >::Register(L);
	Luna< sockaddr >::Register(L);
	Luna< wxMenuItemList >::Register(L);
	Luna< wxScopedCharTypeBuffer< char > >::Register(L);
	Luna< wxPGCellData >::Register(L);
	Luna< wxPGWindowList >::Register(L);
	Luna< wxPGCellRenderer >::Register(L);
	Luna< wxPGEditorDialogAdapter >::Register(L);
	Luna< wxRibbonToolBarToolBase >::Register(L);
	Luna< wxSplashScreenWindow >::Register(L);
	Luna< wxToolBarBase >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"wx");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"wx");

	luna_pushModule(L,"wx");
	return 1;
}

#ifdef __cplusplus
}
#endif

