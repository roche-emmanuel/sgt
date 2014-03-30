#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<HWND,dstType> {
	static inline dstType* cast(HWND* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTrackable,dstType> {
	static inline dstType* cast(wxTrackable* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAboutDialogInfo,dstType> {
	static inline dstType* cast(wxAboutDialogInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAcceleratorEntry,dstType> {
	static inline dstType* cast(wxAcceleratorEntry* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAffineMatrix2D,dstType> {
	static inline dstType* cast(wxAffineMatrix2D* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAffineMatrix2DBase,dstType> {
	static inline dstType* cast(wxAffineMatrix2DBase* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayDouble,dstType> {
	static inline dstType* cast(wxArrayDouble* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayInt,dstType> {
	static inline dstType* cast(wxArrayInt* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayLong,dstType> {
	static inline dstType* cast(wxArrayLong* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayPtrVoid,dstType> {
	static inline dstType* cast(wxArrayPtrVoid* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayShort,dstType> {
	static inline dstType* cast(wxArrayShort* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayString,dstType> {
	static inline dstType* cast(wxArrayString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxArrayTreeItemIds,dstType> {
	static inline dstType* cast(wxArrayTreeItemIds* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAuiNotebookPage,dstType> {
	static inline dstType* cast(wxAuiNotebookPage* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAuiNotebookPageArray,dstType> {
	static inline dstType* cast(wxAuiNotebookPageArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAuiPaneInfo,dstType> {
	static inline dstType* cast(wxAuiPaneInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAuiPaneInfoArray,dstType> {
	static inline dstType* cast(wxAuiPaneInfoArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAuiToolBarItem,dstType> {
	static inline dstType* cast(wxAuiToolBarItem* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxAuiToolBarItemArray,dstType> {
	static inline dstType* cast(wxAuiToolBarItemArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxList,dstType> {
	static inline dstType* cast(wxList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxBrushList,dstType> {
	static inline dstType* cast(wxBrushList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxBusyCursor,dstType> {
	static inline dstType* cast(wxBusyCursor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCalendarDateAttr,dstType> {
	static inline dstType* cast(wxCalendarDateAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxClassInfo,dstType> {
	static inline dstType* cast(wxClassInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCmdLineEntryDesc,dstType> {
	static inline dstType* cast(wxCmdLineEntryDesc* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCmdLineParser,dstType> {
	static inline dstType* cast(wxCmdLineParser* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxColourDatabase,dstType> {
	static inline dstType* cast(wxColourDatabase* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxComboCtrlFeatures,dstType> {
	static inline dstType* cast(wxComboCtrlFeatures* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCondition,dstType> {
	static inline dstType* cast(wxCondition* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxConfigPathChanger,dstType> {
	static inline dstType* cast(wxConfigPathChanger* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxConvAuto,dstType> {
	static inline dstType* cast(wxConvAuto* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCriticalSection,dstType> {
	static inline dstType* cast(wxCriticalSection* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCriticalSectionLocker,dstType> {
	static inline dstType* cast(wxCriticalSectionLocker* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxCSConv,dstType> {
	static inline dstType* cast(wxCSConv* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataFormat,dstType> {
	static inline dstType* cast(wxDataFormat* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataInputStream,dstType> {
	static inline dstType* cast(wxDataInputStream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataObjectBase,dstType> {
	static inline dstType* cast(wxDataObjectBase* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataOutputStream,dstType> {
	static inline dstType* cast(wxDataOutputStream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataViewItem,dstType> {
	static inline dstType* cast(wxDataViewItem* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataViewItemArray,dstType> {
	static inline dstType* cast(wxDataViewItemArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDataViewItemAttr,dstType> {
	static inline dstType* cast(wxDataViewItemAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDateSpan,dstType> {
	static inline dstType* cast(wxDateSpan* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDateTime,dstType> {
	static inline dstType* cast(wxDateTime* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDateTime::Tm,dstType> {
	static inline dstType* cast(wxDateTime::Tm* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDateTimeHolidayAuthority,dstType> {
	static inline dstType* cast(wxDateTimeHolidayAuthority* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDateTimeWorkDays,dstType> {
	static inline dstType* cast(wxDateTimeWorkDays* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDCBrushChanger,dstType> {
	static inline dstType* cast(wxDCBrushChanger* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDCClipper,dstType> {
	static inline dstType* cast(wxDCClipper* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDCFontChanger,dstType> {
	static inline dstType* cast(wxDCFontChanger* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDCPenChanger,dstType> {
	static inline dstType* cast(wxDCPenChanger* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDCTextColourChanger,dstType> {
	static inline dstType* cast(wxDCTextColourChanger* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDir,dstType> {
	static inline dstType* cast(wxDir* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDisplay,dstType> {
	static inline dstType* cast(wxDisplay* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDynamicLibrary,dstType> {
	static inline dstType* cast(wxDynamicLibrary* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxDynamicLibraryDetails,dstType> {
	static inline dstType* cast(wxDynamicLibraryDetails* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxEventLoopActivator,dstType> {
	static inline dstType* cast(wxEventLoopActivator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxExecuteEnv,dstType> {
	static inline dstType* cast(wxExecuteEnv* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFFile,dstType> {
	static inline dstType* cast(wxFFile* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFile,dstType> {
	static inline dstType* cast(wxFile* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFileName,dstType> {
	static inline dstType* cast(wxFileName* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFileType,dstType> {
	static inline dstType* cast(wxFileType* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFileTypeInfo,dstType> {
	static inline dstType* cast(wxFileTypeInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFontList,dstType> {
	static inline dstType* cast(wxFontList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFontMetrics,dstType> {
	static inline dstType* cast(wxFontMetrics* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxFSVolume,dstType> {
	static inline dstType* cast(wxFSVolume* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGBPosition,dstType> {
	static inline dstType* cast(wxGBPosition* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGBSpan,dstType> {
	static inline dstType* cast(wxGBSpan* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGraphicsGradientStop,dstType> {
	static inline dstType* cast(wxGraphicsGradientStop* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGraphicsGradientStops,dstType> {
	static inline dstType* cast(wxGraphicsGradientStops* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGridCellAttr,dstType> {
	static inline dstType* cast(wxGridCellAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGridCellCoords,dstType> {
	static inline dstType* cast(wxGridCellCoords* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGridSizesInfo,dstType> {
	static inline dstType* cast(wxGridSizesInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGridUpdateLocker,dstType> {
	static inline dstType* cast(wxGridUpdateLocker* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxHeaderButtonParams,dstType> {
	static inline dstType* cast(wxHeaderButtonParams* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxHtmlModalHelp,dstType> {
	static inline dstType* cast(wxHtmlModalHelp* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxHtmlRenderingInfo,dstType> {
	static inline dstType* cast(wxHtmlRenderingInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxHtmlTag,dstType> {
	static inline dstType* cast(wxHtmlTag* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxIconLocation,dstType> {
	static inline dstType* cast(wxIconLocation* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxIdManager,dstType> {
	static inline dstType* cast(wxIdManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxImage::HSVValue,dstType> {
	static inline dstType* cast(wxImage::HSVValue* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxImage::RGBValue,dstType> {
	static inline dstType* cast(wxImage::RGBValue* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxImageHistogram,dstType> {
	static inline dstType* cast(wxImageHistogram* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxInitializer,dstType> {
	static inline dstType* cast(wxInitializer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxKeyboardState,dstType> {
	static inline dstType* cast(wxKeyboardState* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxLanguageInfo,dstType> {
	static inline dstType* cast(wxLanguageInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxLinuxDistributionInfo,dstType> {
	static inline dstType* cast(wxLinuxDistributionInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxListItemAttr,dstType> {
	static inline dstType* cast(wxListItemAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxLogNull,dstType> {
	static inline dstType* cast(wxLogNull* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxLogRecordInfo,dstType> {
	static inline dstType* cast(wxLogRecordInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxLongLong,dstType> {
	static inline dstType* cast(wxLongLong* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxMatrix2D,dstType> {
	static inline dstType* cast(wxMatrix2D* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxMimeTypesManager,dstType> {
	static inline dstType* cast(wxMimeTypesManager* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxMouseState,dstType> {
	static inline dstType* cast(wxMouseState* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxMsgCatalog,dstType> {
	static inline dstType* cast(wxMsgCatalog* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxMutex,dstType> {
	static inline dstType* cast(wxMutex* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxMutexLocker,dstType> {
	static inline dstType* cast(wxMutexLocker* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxNativeFontInfo,dstType> {
	static inline dstType* cast(wxNativeFontInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxNumberFormatter,dstType> {
	static inline dstType* cast(wxNumberFormatter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxObjectRefData,dstType> {
	static inline dstType* cast(wxObjectRefData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPathList,dstType> {
	static inline dstType* cast(wxPathList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPenList,dstType> {
	static inline dstType* cast(wxPenList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPGChoices,dstType> {
	static inline dstType* cast(wxPGChoices* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPGChoicesData,dstType> {
	static inline dstType* cast(wxPGChoicesData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPGValidationInfo,dstType> {
	static inline dstType* cast(wxPGValidationInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPlatformInfo,dstType> {
	static inline dstType* cast(wxPlatformInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPoint,dstType> {
	static inline dstType* cast(wxPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPoint2DDouble,dstType> {
	static inline dstType* cast(wxPoint2DDouble* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPoint2DInt,dstType> {
	static inline dstType* cast(wxPoint2DInt* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPointList,dstType> {
	static inline dstType* cast(wxPointList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPosition,dstType> {
	static inline dstType* cast(wxPosition* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPropagateOnce,dstType> {
	static inline dstType* cast(wxPropagateOnce* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPropagationDisabler,dstType> {
	static inline dstType* cast(wxPropagationDisabler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxPropertyGridHitTestResult,dstType> {
	static inline dstType* cast(wxPropertyGridHitTestResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRealPoint,dstType> {
	static inline dstType* cast(wxRealPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRearrangeCtrl,dstType> {
	static inline dstType* cast(wxRearrangeCtrl* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRearrangeDialog,dstType> {
	static inline dstType* cast(wxRearrangeDialog* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRect,dstType> {
	static inline dstType* cast(wxRect* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRect2DDouble,dstType> {
	static inline dstType* cast(wxRect2DDouble* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRect2DInt,dstType> {
	static inline dstType* cast(wxRect2DInt* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRecursionGuard,dstType> {
	static inline dstType* cast(wxRecursionGuard* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRecursionGuardFlag,dstType> {
	static inline dstType* cast(wxRecursionGuardFlag* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRegEx,dstType> {
	static inline dstType* cast(wxRegEx* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRegKey,dstType> {
	static inline dstType* cast(wxRegKey* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRendererVersion,dstType> {
	static inline dstType* cast(wxRendererVersion* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRibbonButtonBarButtonBase,dstType> {
	static inline dstType* cast(wxRibbonButtonBarButtonBase* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRibbonGalleryItem,dstType> {
	static inline dstType* cast(wxRibbonGalleryItem* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRibbonPageTabInfo,dstType> {
	static inline dstType* cast(wxRibbonPageTabInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRibbonPageTabInfoArray,dstType> {
	static inline dstType* cast(wxRibbonPageTabInfoArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttr,dstType> {
	static inline dstType* cast(wxTextAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextAttr,dstType> {
	static inline dstType* cast(wxRichTextAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextContextMenuPropertiesInfo,dstType> {
	static inline dstType* cast(wxRichTextContextMenuPropertiesInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextFloatCollector,dstType> {
	static inline dstType* cast(wxRichTextFloatCollector* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextObjectAddress,dstType> {
	static inline dstType* cast(wxRichTextObjectAddress* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextRange,dstType> {
	static inline dstType* cast(wxRichTextRange* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextRangeArray,dstType> {
	static inline dstType* cast(wxRichTextRangeArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextSelection,dstType> {
	static inline dstType* cast(wxRichTextSelection* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichTextVariantArray,dstType> {
	static inline dstType* cast(wxRichTextVariantArray* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxRichToolTip,dstType> {
	static inline dstType* cast(wxRichToolTip* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxSemaphore,dstType> {
	static inline dstType* cast(wxSemaphore* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxSingleInstanceChecker,dstType> {
	static inline dstType* cast(wxSingleInstanceChecker* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxSize,dstType> {
	static inline dstType* cast(wxSize* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxSizerFlags,dstType> {
	static inline dstType* cast(wxSizerFlags* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxSortedArrayString,dstType> {
	static inline dstType* cast(wxSortedArrayString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxSplitterRenderParams,dstType> {
	static inline dstType* cast(wxSplitterRenderParams* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxStatusBarPane,dstType> {
	static inline dstType* cast(wxStatusBarPane* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxStopWatch,dstType> {
	static inline dstType* cast(wxStopWatch* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxStreamToTextRedirector,dstType> {
	static inline dstType* cast(wxStreamToTextRedirector* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxString,dstType> {
	static inline dstType* cast(wxString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTarClassFactory,dstType> {
	static inline dstType* cast(wxTarClassFactory* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTempFile,dstType> {
	static inline dstType* cast(wxTempFile* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttrBorder,dstType> {
	static inline dstType* cast(wxTextAttrBorder* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttrBorders,dstType> {
	static inline dstType* cast(wxTextAttrBorders* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttrDimension,dstType> {
	static inline dstType* cast(wxTextAttrDimension* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttrDimensionConverter,dstType> {
	static inline dstType* cast(wxTextAttrDimensionConverter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttrDimensions,dstType> {
	static inline dstType* cast(wxTextAttrDimensions* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextAttrSize,dstType> {
	static inline dstType* cast(wxTextAttrSize* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextBoxAttr,dstType> {
	static inline dstType* cast(wxTextBoxAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTextInputStream,dstType> {
	static inline dstType* cast(wxTextInputStream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTimerRunner,dstType> {
	static inline dstType* cast(wxTimerRunner* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTimeSpan,dstType> {
	static inline dstType* cast(wxTimeSpan* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxToolBarToolBase,dstType> {
	static inline dstType* cast(wxToolBarToolBase* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTranslations,dstType> {
	static inline dstType* cast(wxTranslations* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTreeItemId,dstType> {
	static inline dstType* cast(wxTreeItemId* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTreeItemIdValue,dstType> {
	static inline dstType* cast(wxTreeItemIdValue* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxTreeListItem,dstType> {
	static inline dstType* cast(wxTreeListItem* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxUIActionSimulator,dstType> {
	static inline dstType* cast(wxUIActionSimulator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxULongLong,dstType> {
	static inline dstType* cast(wxULongLong* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxUniChar,dstType> {
	static inline dstType* cast(wxUniChar* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxUniCharRef,dstType> {
	static inline dstType* cast(wxUniCharRef* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxUString,dstType> {
	static inline dstType* cast(wxUString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxVersionInfo,dstType> {
	static inline dstType* cast(wxVersionInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxVideoMode,dstType> {
	static inline dstType* cast(wxVideoMode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxVisualAttributes,dstType> {
	static inline dstType* cast(wxVisualAttributes* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxWindowDisabler,dstType> {
	static inline dstType* cast(wxWindowDisabler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxWindowUpdateLocker,dstType> {
	static inline dstType* cast(wxWindowUpdateLocker* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxXLocale,dstType> {
	static inline dstType* cast(wxXLocale* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxZipClassFactory,dstType> {
	static inline dstType* cast(wxZipClassFactory* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxVector< wxTreeListItem >,dstType> {
	static inline dstType* cast(wxVector< wxTreeListItem >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

