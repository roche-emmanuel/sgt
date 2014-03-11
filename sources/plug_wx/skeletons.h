#ifndef _wx_SKELETONS_H_
#define _wx_SKELETONS_H_

class sgtApp: public wxApp {
};

class wxAboutDialogInfo {
};

class wxAcceleratorEntry {
};

class wxAcceleratorTable: public wxObject {
};

class wxActivateEvent: public wxEvent {
};

class wxAffineMatrix2D {
};

class wxAffineMatrix2DBase {
};

class wxAnimation: public wxGDIObject {
};

class wxAnimationCtrl: public wxControl {
};

class wxAnyButton: public wxControl {
};

class wxApp: public wxAppConsole {
};

class wxAppConsole: public wxEvtHandler, public wxEventFilter {
};

class wxAppTraits {
};

class wxArrayDouble {
};

class wxArrayInt {
};

class wxArrayLong {
};

class wxArrayPtrVoid {
};

class wxArrayShort {
};

class wxArrayString {
};

class wxArrayTreeItemIds {
};

class wxArtProvider: public wxObject {
};

class wxAuiDefaultToolBarArt: public wxAuiToolBarArt {
};

class wxAuiDockArt {
};

class wxAuiManager: public wxEvtHandler {
};

class wxAuiManagerEvent: public wxEvent {
};

class wxAuiNotebook: public wxBookCtrlBase {
};

class wxAuiNotebookEvent: public wxBookCtrlEvent {
};

class wxAuiNotebookPage {
};

class wxAuiNotebookPageArray {
};

class wxAuiPaneInfo {
};

class wxAuiPaneInfoArray {
};

class wxAuiTabArt {
};

class wxAuiToolBar: public wxControl {
};

class wxAuiToolBarArt {
};

class wxAuiToolBarEvent: public wxNotifyEvent {
};

class wxAuiToolBarItem {
};

class wxAuiToolBarItemArray {
};

class wxBannerWindow: public wxWindow {
};

class wxBitmap: public wxGDIObject {
};

class wxBitmapButton: public wxButton {
};

class wxBitmapComboBox: public wxComboBox {
};

class wxBitmapDataObject: public wxDataObjectSimple {
};

class wxBitmapHandler: public wxObject {
};

class wxBitmapToggleButton: public wxToggleButton {
};

class wxBookCtrlBase: public wxControl, public wxWithImages {
};

class wxBookCtrlEvent: public wxNotifyEvent {
};

class wxBoxSizer: public wxSizer {
};

class wxBrush: public wxGDIObject {
};

class wxBrushList: public wxList {
};

class wxBusyCursor {
};

class wxBusyInfo {
};

class wxButton: public wxAnyButton {
};

class wxCalculateLayoutEvent: public wxEvent {
};

class wxCalendarCtrl: public wxControl {
};

class wxCalendarDateAttr {
};

class wxCalendarEvent: public wxDateEvent {
};

class wxCaret {
};

class wxCheckBox: public wxControl {
};

class wxCheckListBox: public wxListBox {
};

class wxChildFocusEvent: public wxCommandEvent {
};

class wxChoice: public wxControlWithItems {
};

class wxChoicebook: public wxBookCtrlBase {
};

class wxClassInfo {
};

class wxClient: public wxObject {
};

class wxClientData {
};

class wxClientDataContainer {
};

class wxClientDC: public wxWindowDC {
};

class wxClipboard: public wxObject {
};

class wxClipboardTextEvent: public wxCommandEvent {
};

class wxCloseEvent: public wxEvent {
};

class wxCmdLineEntryDesc {
};

class wxCmdLineParser {
};

class wxCollapsiblePane: public wxControl {
};

class wxCollapsiblePaneEvent: public wxCommandEvent {
};

class wxColour: public wxObject {
};

class wxColourData: public wxObject {
};

class wxColourDatabase {
};

class wxColourDialog: public wxDialog {
};

class wxColourPickerCtrl: public wxPickerBase {
};

class wxColourPickerEvent: public wxCommandEvent {
};

class wxComboBox: public wxControl, public wxItemContainer, public wxTextEntry {
};

class wxComboCtrl: public wxControl, public wxTextEntry {
};

class wxComboCtrlFeatures {
};

class wxComboPopup {
};

class wxCommand: public wxObject {
};

class wxCommandEvent: public wxEvent {
};

class wxCommandLinkButton: public wxButton {
};

class wxCommandProcessor: public wxObject {
};

class wxCondition {
};

class wxConfigBase: public wxObject {
};

class wxConfigPathChanger {
};

class wxConnection: public wxObject {
};

class wxConnectionBase: public wxObject {
};

class wxContextHelp: public wxObject {
};

class wxContextHelpButton: public wxBitmapButton {
};

class wxContextMenuEvent: public wxCommandEvent {
};

class wxControl: public wxWindow {
};

class wxControlWithItems: public wxControl, public wxItemContainer {
};

class wxConvAuto {
};

class wxCountingOutputStream: public wxOutputStream {
};

class wxCriticalSection {
};

class wxCriticalSectionLocker {
};

class wxCSConv {
};

class wxCursor: public wxGDIObject {
};

class wxCustomDataObject: public wxDataObjectSimple {
};

class wxDataFormat {
};

class wxDatagramSocket: public wxSocketBase {
};

class wxDataInputStream {
};

class wxDataObject {
};

class wxDataObjectBase {
};

class wxDataObjectComposite: public wxDataObject {
};

class wxDataObjectSimple: public wxDataObject {
};

class wxDataOutputStream {
};

class wxDataViewBitmapRenderer: public wxDataViewRenderer {
};

class wxDataViewChoiceRenderer: public wxDataViewRenderer {
};

class wxDataViewColumn: public wxSettableHeaderColumn {
};

class wxDataViewCtrl: public wxControl {
};

class wxDataViewCustomRenderer: public wxDataViewRenderer {
};

class wxDataViewDateRenderer: public wxDataViewRenderer {
};

class wxDataViewEvent: public wxNotifyEvent {
};

class wxDataViewIconText: public wxObject {
};

class wxDataViewIconTextRenderer: public wxDataViewRenderer {
};

class wxDataViewIndexListModel: public wxDataViewListModel {
};

class wxDataViewItem {
};

class wxDataViewItemArray {
};

class wxDataViewItemAttr {
};

class wxDataViewListCtrl: public wxDataViewCtrl {
};

class wxDataViewListModel: public wxDataViewModel {
};

class wxDataViewListStore: public wxDataViewIndexListModel {
};

class wxDataViewModel {
};

class wxDataViewModelNotifier {
};

class wxDataViewProgressRenderer: public wxDataViewRenderer {
};

class wxDataViewRenderer: public wxObject {
};

class wxDataViewSpinRenderer: public wxDataViewCustomRenderer {
};

class wxDataViewTextRenderer: public wxDataViewRenderer {
};

class wxDataViewToggleRenderer: public wxDataViewRenderer {
};

class wxDataViewTreeCtrl: public wxDataViewCtrl {
};

class wxDataViewTreeStore: public wxDataViewModel {
};

class wxDataViewVirtualListModel: public wxDataViewListModel {
};

class wxDateEvent: public wxCommandEvent {
};

class wxDatePickerCtrl: public wxControl {
};

class wxDateSpan {
};

class wxDateTime {
public:
	class Tm {
	};

};

class wxDateTimeHolidayAuthority {
};

class wxDateTimeWorkDays {
};

class wxDC: public wxObject {
};

class wxDCBrushChanger {
};

class wxDCClipper {
};

class wxDCFontChanger {
};

class wxDCPenChanger {
};

class wxDCTextColourChanger {
};

class wxDelegateRendererNative: public wxRendererNative {
};

class wxDialog: public wxTopLevelWindow {
};

class wxDialogLayoutAdapter {
};

class wxDialUpEvent: public wxEvent {
};

class wxDialUpManager {
};

class wxDir {
};

class wxDirDialog: public wxDialog {
};

class wxDirPickerCtrl: public wxPickerBase {
};

class wxDirTraverser {
};

class wxDisplay {
};

class wxDisplayChangedEvent: public wxEvent {
};

class wxDocChildFrame: public wxFrame {
};

class wxDocManager: public wxEvtHandler {
};

class wxDocMDIChildFrame: public wxMDIChildFrame {
};

class wxDocMDIParentFrame: public wxMDIParentFrame {
};

class wxDocParentFrame: public wxFrame {
};

class wxDocTemplate: public wxObject {
};

class wxDocument: public wxEvtHandler {
};

class wxDragImage: public wxObject {
};

class wxDropFilesEvent: public wxEvent {
};

class wxDropSource {
};

class wxDropTarget {
};

class wxDynamicLibrary {
};

class wxDynamicLibraryDetails {
};

class wxEditableListBox: public wxPanel {
};

class wxEncodingConverter: public wxObject {
};

class wxEraseEvent: public wxEvent {
};

class wxEvent: public wxObject {
};

class wxEventBlocker: public wxEvtHandler {
};

class wxEventFilter {
};

class wxEventLoopActivator {
};

class wxEventLoopBase {
};

class wxEvtHandler: public wxObject, public wxTrackable {
};

class wxExecuteEnv {
};

class wxExtHelpController: public wxHelpController {
};

class wxFFile {
};

class wxFFileInputStream: public wxInputStream {
};

class wxFFileOutputStream: public wxOutputStream {
};

class wxFile {
};

class wxFileConfig: public wxConfigBase {
};

class wxFileCtrl: public wxControl {
};

class wxFileCtrlEvent: public wxCommandEvent {
};

class wxFileDataObject: public wxDataObjectSimple {
};

class wxFileDialog: public wxDialog {
};

class wxFileDirPickerEvent: public wxCommandEvent {
};

class wxFileDropTarget: public wxDropTarget {
};

class wxFileHistory: public wxObject {
};

class wxFileInputStream: public wxInputStream {
};

class wxFileName {
};

class wxFileOutputStream: public wxOutputStream {
};

class wxFilePickerCtrl: public wxPickerBase {
};

class wxFileSystem: public wxObject {
};

class wxFileSystemHandler: public wxObject {
};

class wxFileSystemWatcher: public wxEvtHandler {
};

class wxFileSystemWatcherEvent: public wxEvent {
};

class wxFileTranslationsLoader: public wxTranslationsLoader {
};

class wxFileType {
};

class wxFileTypeInfo {
};

class wxFilterClassFactory: public wxObject {
};

class wxFilterInputStream: public wxInputStream {
};

class wxFilterOutputStream: public wxOutputStream {
};

class wxFindReplaceData: public wxObject {
};

class wxFindReplaceDialog: public wxDialog {
};

class wxFlexGridSizer: public wxGridSizer {
};

class wxFloatingPointValidator: public wxNumValidator {
};

class wxFocusEvent: public wxEvent {
};

class wxFont: public wxGDIObject {
};

class wxFontData: public wxObject {
};

class wxFontDialog: public wxDialog {
};

class wxFontEnumerator {
};

class wxFontList: public wxList {
};

class wxFontMapper {
};

class wxFontMetrics {
};

class wxFontPickerCtrl: public wxPickerBase {
};

class wxFontPickerEvent: public wxCommandEvent {
};

class wxFrame: public wxTopLevelWindow {
};

class wxFSFile: public wxObject {
};

class wxFSVolume {
};

class wxFTP: public wxProtocol {
};

class wxGauge: public wxControl {
};

class wxGBPosition {
};

class wxGBSizerItem: public wxSizerItem {
};

class wxGBSpan {
};

class wxGCDC: public wxDC {
};

class wxGDIObject: public wxObject {
};

class wxGenericDirCtrl: public wxControl {
};

class wxGenericValidator: public wxValidator {
};

class wxGLCanvas: public wxWindow {
};

class wxGLContext: public wxObject {
};

class wxGraphicsBitmap: public wxGraphicsObject {
};

class wxGraphicsBrush: public wxGraphicsObject {
};

class wxGraphicsContext: public wxGraphicsObject {
};

class wxGraphicsFont: public wxGraphicsObject {
};

class wxGraphicsGradientStop {
};

class wxGraphicsGradientStops {
};

class wxGraphicsMatrix: public wxGraphicsObject {
};

class wxGraphicsObject: public wxObject {
};

class wxGraphicsPath: public wxGraphicsObject {
};

class wxGraphicsPen: public wxGraphicsObject {
};

class wxGraphicsRenderer: public wxObject {
};

class wxGrid: public wxScrolledWindow {
};

class wxGridBagSizer: public wxFlexGridSizer {
};

class wxGridCellAttr {
};

class wxGridCellAttrProvider: public wxClientDataContainer {
};

class wxGridCellAutoWrapStringEditor: public wxGridCellTextEditor {
};

class wxGridCellAutoWrapStringRenderer: public wxGridCellStringRenderer {
};

class wxGridCellBoolEditor: public wxGridCellEditor {
};

class wxGridCellBoolRenderer: public wxGridCellRenderer {
};

class wxGridCellChoiceEditor: public wxGridCellEditor {
};

class wxGridCellCoords {
};

class wxGridCellDateTimeRenderer: public wxGridCellStringRenderer {
};

class wxGridCellEditor {
};

class wxGridCellEnumEditor: public wxGridCellChoiceEditor {
};

class wxGridCellEnumRenderer: public wxGridCellStringRenderer {
};

class wxGridCellFloatEditor: public wxGridCellTextEditor {
};

class wxGridCellFloatRenderer: public wxGridCellStringRenderer {
};

class wxGridCellNumberEditor: public wxGridCellTextEditor {
};

class wxGridCellNumberRenderer: public wxGridCellStringRenderer {
};

class wxGridCellRenderer {
};

class wxGridCellStringRenderer: public wxGridCellRenderer {
};

class wxGridCellTextEditor: public wxGridCellEditor {
};

class wxGridColumnHeaderRenderer: public wxGridHeaderLabelsRenderer {
};

class wxGridColumnHeaderRendererDefault: public wxGridColumnHeaderRenderer {
};

class wxGridCornerHeaderRenderer {
};

class wxGridCornerHeaderRendererDefault: public wxGridCornerHeaderRenderer {
};

class wxGridEditorCreatedEvent: public wxCommandEvent {
};

class wxGridEvent: public wxNotifyEvent {
};

class wxGridHeaderLabelsRenderer: public wxGridCornerHeaderRenderer {
};

class wxGridRangeSelectEvent: public wxNotifyEvent {
};

class wxGridRowHeaderRenderer: public wxGridHeaderLabelsRenderer {
};

class wxGridRowHeaderRendererDefault: public wxGridRowHeaderRenderer {
};

class wxGridSizeEvent: public wxNotifyEvent {
};

class wxGridSizer: public wxSizer {
};

class wxGridSizesInfo {
};

class wxGridTableBase: public wxObject {
};

class wxGridUpdateLocker {
};

class wxHeaderButtonParams {
};

class wxHeaderColumn {
};

class wxHeaderColumnSimple: public wxSettableHeaderColumn {
};

class wxHeaderCtrl: public wxControl {
};

class wxHeaderCtrlEvent: public wxNotifyEvent {
};

class wxHeaderCtrlSimple: public wxHeaderCtrl {
};

class wxHelpController {
};

class wxHelpControllerHelpProvider: public wxSimpleHelpProvider {
};

class wxHelpEvent: public wxCommandEvent {
};

class wxHelpProvider {
};

class wxHScrolledWindow: public wxPanel, public wxVarHScrollHelper {
};

class wxHtmlCell: public wxObject {
};

class wxHtmlCellEvent: public wxCommandEvent {
};

class wxHtmlColourCell: public wxHtmlCell {
};

class wxHtmlContainerCell: public wxHtmlCell {
};

class wxHtmlDCRenderer: public wxObject {
};

class wxHtmlEasyPrinting: public wxObject {
};

class wxHtmlFilter: public wxObject {
};

class wxHtmlHelpController {
};

class wxHtmlHelpData: public wxObject {
};

class wxHtmlHelpDialog: public wxFrame {
};

class wxHtmlHelpFrame: public wxFrame {
};

class wxHtmlHelpWindow: public wxWindow {
};

class wxHtmlLinkEvent: public wxCommandEvent {
};

class wxHtmlLinkInfo: public wxObject {
};

class wxHtmlListBox: public wxVListBox {
};

class wxHtmlModalHelp {
};

class wxHtmlParser {
};

class wxHtmlPrintout: public wxPrintout {
};

class wxHtmlRenderingInfo {
};

class wxHtmlRenderingStyle {
};

class wxHtmlTag {
};

class wxHtmlTagHandler: public wxObject {
};

class wxHtmlTagsModule: public wxModule {
};

class wxHtmlWidgetCell: public wxHtmlCell {
};

class wxHtmlWindow: public wxScrolledWindow {
};

class wxHtmlWinParser: public wxHtmlParser {
};

class wxHtmlWinTagHandler: public wxHtmlTagHandler {
};

class wxHTTP: public wxProtocol {
};

class wxHVScrolledWindow: public wxPanel {
};

class wxHyperlinkCtrl: public wxControl {
};

class wxHyperlinkEvent: public wxCommandEvent {
};

class wxIcon: public wxGDIObject {
};

class wxIconBundle: public wxGDIObject {
};

class wxIconizeEvent: public wxEvent {
};

class wxIconLocation {
};

class wxIdleEvent: public wxEvent {
};

class wxIdManager {
};

class wxImage: public wxObject {
public:
	class HSVValue {
	};

	class RGBValue {
	};

};

class wxImageHandler: public wxObject {
};

class wxImageHistogram {
};

class wxImageList: public wxObject {
};

class wxIndividualLayoutConstraint: public wxObject {
};

class wxInfoBar: public wxControl {
};

class wxInitDialogEvent: public wxEvent {
};

class wxInitializer {
};

class wxInputStream: public wxStreamBase {
};

class wxIntegerValidator: public wxNumValidator {
};

class wxIPaddress: public wxSockAddress {
};

class wxIPV4address: public wxIPaddress {
};

class wxItemContainer: public wxItemContainerImmutable {
};

class wxItemContainerImmutable {
};

class wxJoystick: public wxObject {
};

class wxJoystickEvent: public wxEvent {
};

class wxKeyboardState {
};

class wxKeyEvent: public wxEvent, public wxKeyboardState {
};

class wxLanguageInfo {
};

class wxLayoutAlgorithm: public wxObject {
};

class wxLayoutConstraints: public wxObject {
};

class wxLinuxDistributionInfo {
};

class wxList {
};

class wxListbook: public wxBookCtrlBase {
};

class wxListBox: public wxControlWithItems {
};

class wxListCtrl: public wxControl {
};

class wxListEvent: public wxNotifyEvent {
};

class wxListItem: public wxObject {
};

class wxListItemAttr {
};

class wxListView: public wxListCtrl {
};

class wxLocale {
};

class wxLog {
};

class wxLogChain: public wxLog {
};

class wxLogGui: public wxLog {
};

class wxLogInterposer: public wxLogChain {
};

class wxLogInterposerTemp: public wxLogChain {
};

class wxLogNull {
};

class wxLogRecordInfo {
};

class wxLogStderr: public wxLog {
};

class wxLogStream: public wxLog {
};

class wxLogTextCtrl: public wxLog {
};

class wxLogWindow: public wxLogInterposer {
};

class wxLongLong {
};

class wxMask: public wxObject {
};

class wxMatrix2D {
};

class wxMaximizeEvent: public wxEvent {
};

class wxMDIChildFrame: public wxFrame {
};

class wxMDIClientWindow: public wxWindow {
};

class wxMDIParentFrame: public wxFrame {
};

class wxMediaCtrl: public wxControl {
};

class wxMediaEvent: public wxNotifyEvent {
};

class wxMemoryDC: public wxDC {
};

class wxMemoryFSHandler: public wxFileSystemHandler {
};

class wxMemoryInputStream: public wxInputStream {
};

class wxMemoryOutputStream: public wxOutputStream {
};

class wxMenu: public wxEvtHandler {
};

class wxMenuBar: public wxWindow {
};

class wxMenuEvent: public wxEvent {
};

class wxMenuItem: public wxObject {
};

class wxMessageDialog: public wxDialog {
};

class wxMessageOutput {
};

class wxMessageOutputBest: public wxMessageOutputStderr {
};

class wxMessageOutputDebug: public wxMessageOutputStderr {
};

class wxMessageOutputMessageBox: public wxMessageOutput {
};

class wxMessageOutputStderr: public wxMessageOutput {
};

class wxMetafile: public wxObject {
};

class wxMetafileDC: public wxDC {
};

class wxMimeTypesManager {
};

class wxMiniFrame: public wxFrame {
};

class wxMirrorDC: public wxDC {
};

class wxModule: public wxObject {
};

class wxMouseCaptureChangedEvent: public wxEvent {
};

class wxMouseCaptureLostEvent: public wxEvent {
};

class wxMouseEvent: public wxEvent, public wxMouseState {
};

class wxMouseEventsManager: public wxEvtHandler {
};

class wxMouseState: public wxKeyboardState {
};

class wxMoveEvent: public wxEvent {
};

class wxMsgCatalog {
};

class wxMultiChoiceDialog: public wxDialog {
};

class wxMutex {
};

class wxMutexLocker {
};

class wxNativeFontInfo {
};

class wxNavigationKeyEvent: public wxEvent {
};

class wxNonOwnedWindow: public wxWindow {
};

class wxNotebook: public wxBookCtrlBase {
};

class wxNotifyEvent: public wxCommandEvent {
};

class wxNumberFormatter {
};

class wxNumValidator: public wxValidator {
};

class wxObject {
};

class wxObjectRefData {
};

class wxOutputStream: public wxStreamBase {
};

class wxOwnerDrawnComboBox: public wxComboCtrl {
};

class wxPageSetupDialog: public wxDialog {
};

class wxPageSetupDialogData: public wxObject {
};

class wxPaintDC: public wxWindowDC {
};

class wxPaintEvent: public wxEvent {
};

class wxPalette: public wxGDIObject {
};

class wxPaletteChangedEvent: public wxEvent {
};

class wxPanel: public wxWindow {
};

class wxPasswordEntryDialog: public wxTextEntryDialog {
};

class wxPathList: public wxArrayString {
};

class wxPen: public wxGDIObject {
};

class wxPenList {
};

class wxPersistenceManager {
};

class wxPersistentObject {
};

class wxPersistentWindow: public wxPersistentObject {
};

class wxPGCell: public wxObject {
};

class wxPGChoiceEntry: public wxPGCell {
};

class wxPGChoices {
};

class wxPGChoicesData: public wxObjectRefData {
};

class wxPGEditor: public wxObject {
};

class wxPGMultiButton: public wxWindow {
};

class wxPGProperty: public wxObject {
};

class wxPGValidationInfo {
};

class wxPickerBase: public wxControl {
};

class wxPlatformInfo {
};

class wxPoint {
};

class wxPoint2DDouble {
};

class wxPoint2DInt {
};

class wxPointList {
};

class wxPopupTransientWindow: public wxPopupWindow {
};

class wxPopupWindow: public wxNonOwnedWindow {
};

class wxPosition {
};

class wxPowerEvent: public wxEvent {
};

class wxPreviewCanvas: public wxScrolledWindow {
};

class wxPreviewControlBar: public wxPanel {
};

class wxPreviewFrame: public wxFrame {
};

class wxPrintData: public wxObject {
};

class wxPrintDialog: public wxDialog {
};

class wxPrintDialogData: public wxObject {
};

class wxPrinter: public wxObject {
};

class wxPrinterDC: public wxDC {
};

class wxPrintout: public wxObject {
};

class wxPrintPreview: public wxObject {
};

class wxProcess: public wxEvtHandler {
};

class wxProcessEvent: public wxEvent {
};

class wxProgressDialog: public wxDialog {
};

class wxPropagateOnce {
};

class wxPropagationDisabler {
};

class wxPropertyGrid: public wxControl, public wxPropertyGridInterface {
};

class wxPropertyGridEvent: public wxCommandEvent {
};

class wxPropertyGridHitTestResult {
};

class wxPropertyGridInterface {
};

class wxPropertyGridManager: public wxPanel, public wxPropertyGridInterface {
};

class wxPropertyGridPage: public wxEvtHandler, public wxPropertyGridInterface {
};

class wxPropertySheetDialog: public wxDialog {
};

class wxProtocol: public wxSocketClient {
};

class wxProtocolLog {
};

class wxQuantize: public wxObject {
};

class wxQueryLayoutInfoEvent: public wxEvent {
};

class wxQueryNewPaletteEvent: public wxEvent {
};

class wxRadioBox: public wxControl {
};

class wxRadioButton: public wxControl {
};

class wxRealPoint {
};

class wxRearrangeCtrl {
};

class wxRearrangeDialog {
};

class wxRearrangeList: public wxCheckListBox {
};

class wxRect {
};

class wxRect2DDouble {
};

class wxRect2DInt {
};

class wxRecursionGuard {
};

class wxRecursionGuardFlag {
};

class wxRegConfig: public wxConfigBase {
};

class wxRegEx {
};

class wxRegion: public wxGDIObject {
};

class wxRegKey {
};

class wxRendererNative {
};

class wxRendererVersion {
};

class wxResourceTranslationsLoader: public wxTranslationsLoader {
};

class wxRibbonArtProvider {
};

class wxRibbonBar: public wxRibbonControl {
};

class wxRibbonBarEvent: public wxNotifyEvent {
};

class wxRibbonButtonBar: public wxRibbonControl {
};

class wxRibbonButtonBarButtonBase {
};

class wxRibbonButtonBarEvent: public wxCommandEvent {
};

class wxRibbonControl: public wxControl {
};

class wxRibbonGallery: public wxRibbonControl {
};

class wxRibbonGalleryEvent: public wxCommandEvent {
};

class wxRibbonGalleryItem {
};

class wxRibbonPage: public wxRibbonControl {
};

class wxRibbonPageTabInfo {
};

class wxRibbonPageTabInfoArray {
};

class wxRibbonPanel: public wxRibbonControl {
};

class wxRibbonToolBar: public wxRibbonControl {
};

class wxRichMessageDialog {
};

class wxRichTextAction: public wxObject {
};

class wxRichTextAttr: public wxTextAttr {
};

class wxRichTextBox: public wxRichTextParagraphLayoutBox {
};

class wxRichTextCell: public wxRichTextBox {
};

class wxRichTextCharacterStyleDefinition: public wxRichTextStyleDefinition {
};

class wxRichTextCommand: public wxCommand {
};

class wxRichTextCompositeObject: public wxRichTextObject {
};

class wxRichTextContextMenuPropertiesInfo {
};

class wxRichTextCtrl: public wxControl {
};

class wxRichTextEvent: public wxNotifyEvent {
};

class wxRichTextFileHandler: public wxObject {
};

class wxRichTextFloatCollector {
};

class wxRichTextFontTable: public wxObject {
};

class wxRichTextFormattingDialog: public wxPropertySheetDialog {
};

class wxRichTextFormattingDialogFactory: public wxObject {
};

class wxRichTextHeaderFooterData: public wxObject {
};

class wxRichTextHTMLHandler: public wxRichTextFileHandler {
};

class wxRichTextImage: public wxRichTextObject {
};

class wxRichTextImageBlock: public wxObject {
};

class wxRichTextLine {
};

class wxRichTextListStyleDefinition: public wxRichTextParagraphStyleDefinition {
};

class wxRichTextObject: public wxObject {
};

class wxRichTextObjectAddress {
};

class wxRichTextParagraph: public wxRichTextCompositeObject {
};

class wxRichTextParagraphLayoutBox: public wxRichTextCompositeObject {
};

class wxRichTextParagraphStyleDefinition: public wxRichTextStyleDefinition {
};

class wxRichTextPlainText: public wxRichTextObject {
};

class wxRichTextPlainTextHandler: public wxRichTextFileHandler {
};

class wxRichTextPrinting: public wxObject {
};

class wxRichTextPrintout: public wxPrintout {
};

class wxRichTextProperties: public wxObject {
};

class wxRichTextRange {
};

class wxRichTextRangeArray {
};

class wxRichTextRenderer: public wxObject {
};

class wxRichTextSelection {
};

class wxRichTextStdRenderer: public wxRichTextRenderer {
};

class wxRichTextStyleComboCtrl: public wxComboCtrl {
};

class wxRichTextStyleDefinition: public wxObject {
};

class wxRichTextStyleListBox: public wxHtmlListBox {
};

class wxRichTextStyleListCtrl: public wxControl {
};

class wxRichTextStyleOrganiserDialog: public wxDialog {
};

class wxRichTextStyleSheet: public wxObject {
};

class wxRichTextTable: public wxRichTextBox {
};

class wxRichTextVariantArray {
};

class wxRichTextXMLHandler: public wxRichTextFileHandler {
};

class wxRichToolTip {
};

class wxSashEvent: public wxCommandEvent {
};

class wxSashLayoutWindow: public wxSashWindow {
};

class wxSashWindow: public wxWindow {
};

class wxScreenDC: public wxDC {
};

class wxScrollBar: public wxControl {
};

class wxScrolledCanvas: public wxWindow {
};

class wxScrolledWindow: public wxPanel {
};

class wxScrollEvent: public wxCommandEvent {
};

class wxScrollWinEvent: public wxEvent {
};

class wxSearchCtrl: public wxTextCtrl {
};

class wxSemaphore {
};

class wxServer {
};

class wxSetCursorEvent: public wxEvent {
};

class wxSettableHeaderColumn: public wxHeaderColumn {
};

class wxShowEvent: public wxEvent {
};

class wxSimpleHelpProvider: public wxHelpProvider {
};

class wxSimpleHtmlListBox: public wxHtmlListBox, public wxItemContainer {
};

class wxSingleChoiceDialog: public wxDialog {
};

class wxSingleInstanceChecker {
};

class wxSize {
};

class wxSizeEvent: public wxEvent {
};

class wxSizer: public wxObject {
};

class wxSizerFlags {
};

class wxSizerItem: public wxObject {
};

class wxSizerXmlHandler: public wxXmlResourceHandler {
};

class wxSlider: public wxControl {
};

class wxSockAddress: public wxObject {
};

class wxSocketBase: public wxObject {
};

class wxSocketClient: public wxSocketBase {
};

class wxSocketEvent: public wxEvent {
};

class wxSocketInputStream: public wxInputStream {
};

class wxSocketOutputStream: public wxOutputStream {
};

class wxSocketServer: public wxSocketBase {
};

class wxSortedArrayString: public wxArrayString {
};

class wxSound: public wxObject {
};

class wxSpinButton: public wxControl {
};

class wxSpinCtrl: public wxControl {
};

class wxSpinCtrlDouble: public wxControl {
};

class wxSpinDoubleEvent: public wxNotifyEvent {
};

class wxSpinEvent: public wxNotifyEvent {
};

class wxSplashScreen: public wxFrame {
};

class wxSplitterEvent: public wxNotifyEvent {
};

class wxSplitterRenderParams {
};

class wxSplitterWindow: public wxWindow {
};

class wxStackFrame {
};

class wxStackWalker {
};

class wxStandardPaths {
};

class wxStaticBitmap: public wxControl {
};

class wxStaticBox: public wxControl {
};

class wxStaticBoxSizer: public wxBoxSizer {
};

class wxStaticLine: public wxControl {
};

class wxStaticText: public wxControl {
};

class wxStatusBar: public wxControl {
};

class wxStatusBarPane {
};

class wxStdDialogButtonSizer: public wxBoxSizer {
};

class wxStdInputStream {
};

class wxStdOutputStream {
};

class wxStopWatch {
};

class wxStreamBase: public wxObject {
};

class wxStreamToTextRedirector {
};

class wxString {
};

class wxStringClientData: public wxClientData {
};

class wxStringInputStream: public wxInputStream {
};

class wxStringOutputStream: public wxOutputStream {
};

class wxStringTokenizer: public wxObject {
};

class wxStyledTextCtrl: public wxControl {
};

class wxStyledTextEvent: public wxCommandEvent {
};

class wxSVGFileDC: public wxDC {
};

class wxSymbolPickerDialog: public wxDialog {
};

class wxSysColourChangedEvent: public wxEvent {
};

class wxSystemOptions: public wxObject {
};

class wxSystemSettings: public wxObject {
};

class wxTarClassFactory {
};

class wxTarEntry {
};

class wxTarInputStream {
};

class wxTarOutputStream {
};

class wxTaskBarIcon: public wxEvtHandler {
};

class wxTaskBarIconEvent: public wxEvent {
};

class wxTCPClient: public wxObject {
};

class wxTCPConnection: public wxObject {
};

class wxTCPServer: public wxObject {
};

class wxTempFile {
};

class wxTempFileOutputStream: public wxOutputStream {
};

class wxTextAttr {
};

class wxTextAttrBorder {
};

class wxTextAttrBorders {
};

class wxTextAttrDimension {
};

class wxTextAttrDimensionConverter {
};

class wxTextAttrDimensions {
};

class wxTextAttrSize {
};

class wxTextBoxAttr {
};

class wxTextCompleter {
};

class wxTextCompleterSimple: public wxTextCompleter {
};

class wxTextCtrl: public wxControl, public wxTextEntry {
};

class wxTextDataObject: public wxDataObjectSimple {
};

class wxTextDropTarget: public wxDropTarget {
};

class wxTextEntry {
};

class wxTextEntryDialog: public wxDialog {
};

class wxTextFile {
};

class wxTextInputStream {
};

class wxTextOutputStream {
};

class wxTextValidator: public wxValidator {
};

class wxTextWrapper {
};

class wxThread {
};

class wxThreadEvent: public wxEvent {
};

class wxThreadHelper {
};

class wxTimePickerCtrl: public wxControl {
};

class wxTimer: public wxEvtHandler {
};

class wxTimerEvent: public wxEvent {
};

class wxTimerRunner {
};

class wxTimeSpan {
};

class wxTipProvider {
};

class wxTipWindow: public wxWindow {
};

class wxToggleButton: public wxAnyButton {
};

class wxToolBar: public wxControl {
};

class wxToolBarToolBase {
};

class wxToolbook: public wxBookCtrlBase {
};

class wxToolTip: public wxObject {
};

class wxTopLevelWindow: public wxNonOwnedWindow {
};

class wxTrackable {
};

class wxTransform2D {
};

class wxTranslations {
};

class wxTranslationsLoader {
};

class wxTreebook: public wxBookCtrlBase {
};

class wxTreeCtrl: public wxControl {
};

class wxTreeEvent: public wxNotifyEvent {
};

class wxTreeItemData: public wxClientData {
};

class wxTreeItemId {
};

class wxTreeItemIdValue {
};

class wxTreeListCtrl: public wxWindow {
};

class wxTreeListEvent: public wxNotifyEvent {
};

class wxTreeListItem {
};

class wxTreeListItemComparator {
};

class wxUIActionSimulator {
};

class wxULongLong {
};

class wxUniChar {
};

class wxUniCharRef {
};

class wxUpdateUIEvent: public wxCommandEvent {
};

class wxURI: public wxObject {
};

class wxURL: public wxURI {
};

class wxURLDataObject: public wxTextDataObject {
};

class wxUString {
};

class wxValidator: public wxEvtHandler {
};

class wxVarHScrollHelper: public wxVarScrollHelperBase {
};

class wxVariant: public wxObject {
};

class wxVariantData: public wxObjectRefData {
};

class wxVarScrollHelperBase {
};

class wxVarVScrollHelper: public wxVarScrollHelperBase {
};

class wxVersionInfo {
};

class wxVideoMode {
};

class wxView: public wxEvtHandler {
};

class wxVisualAttributes {
};

class wxVListBox: public wxVScrolledWindow {
};

class wxVScrolledWindow: public wxPanel, public wxVarVScrollHelper {
};

class wxWindow: public wxEvtHandler {
};

class wxWindowCreateEvent: public wxCommandEvent {
};

class wxWindowDC: public wxDC {
};

class wxWindowDestroyEvent: public wxCommandEvent {
};

class wxWindowDisabler {
};

class wxWindowModalDialogEvent: public wxCommandEvent {
};

class wxWindowUpdateLocker {
};

class wxWithImages {
};

class wxWizard: public wxDialog {
};

class wxWizardEvent: public wxNotifyEvent {
};

class wxWizardPage: public wxPanel {
};

class wxWizardPageSimple: public wxWizardPage {
};

class wxWrapSizer: public wxBoxSizer {
};

class wxXLocale {
};

class wxXmlAttribute {
};

class wxXmlDocument: public wxObject {
};

class wxXmlNode {
};

class wxXmlResource: public wxObject {
};

class wxXmlResourceHandler: public wxObject {
};

class wxZipClassFactory {
};

class wxZipEntry {
};

class wxZipInputStream {
};

class wxZipNotifier {
};

class wxZipOutputStream {
};

class wxZlibInputStream: public wxFilterInputStream {
};

class wxZlibOutputStream: public wxFilterOutputStream {
};

class wxScopedCharBuffer {
};

class wxScopedWCharBuffer {
};

class wxTreeListItems {
};


#endif
