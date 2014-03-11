struct HWND {};

typedef HWND WXWidget;


// missing classes:
class wxAuiToolBarItemArray {
};

class wxAuiNotebookPageArray {
};

class wxAuiPaneInfoArray {
};

class wxDataViewItemArray {
};

class wxAuiNotebookPage {
};

class wxSizerItem {
};

class wxAffineMatrix2DBase {
};

class wxRibbonPageTabInfoArray {
};

class wxRibbonGalleryItem {
};

class wxRibbonPageTabInfo {
};

class wxToolBarToolBase {
};

class wxPointList {
};

class wxArrayTreeItemIds {};
class wxTreeItemIdValue {};
class wxRichTextFloatCollector {};
class wxRichTextVariantArray {};
class wxRichTextRangeArray {};

class wxList {};
class wxArrayInt {};
class wxArrayLong {};
class wxArrayShort {};
class wxArrayDouble {};
class wxArrayPtrVoid {};

class wxGridCellCoords
{
public:
    wxGridCellCoords() { m_row = m_col = -1; }
    wxGridCellCoords( int r, int c ) { m_row = r; m_col = c; }

    // default copy ctor is ok

    int GetRow() const { return m_row; }
    void SetRow( int n ) { m_row = n; }
    int GetCol() const { return m_col; }
    void SetCol( int n ) { m_col = n; }
    void Set( int row, int col ) { m_row = row; m_col = col; }

    wxGridCellCoords& operator=( const wxGridCellCoords& other );
    bool operator==( const wxGridCellCoords& other ) const;
    bool operator!=( const wxGridCellCoords& other ) const;
    bool operator!() const;
};

class wxDataObjectBase
{
public:
    enum Direction
    {
        Get  = 0x01,    // format is supported by GetDataHere()
        Set  = 0x02,    // format is supported by SetData()
        Both = 0x03     // format is supported by both (unused currently)
    };
};

class wxObjectRefData {
protected:
    ~wxObjectRefData();
};

// class wxScrolledWindow : public wxPanel {
// };



typedef double wxDouble;
typedef int wxCoord;
typedef int wxEventType;
typedef wxWindow wxWindowBase;
typedef unsigned char wxByte;
typedef int wxSocketFlags;
typedef long off_t;
//typedef wchar_t wxChar;
typedef wxInt8 wxDash;
typedef wxColour wxColor;
typedef long long wxLongLong_t;

typedef wxHelpController wxHelpControllerBase;

class wxRibbonButtonBarButtonBase {};

class wxPGCell : public wxObject
{
public:
    wxPGCell();
    wxPGCell(const wxPGCell& other)
        : wxObject(other)
    {
    }

    wxPGCell( const wxString& text,
              const wxBitmap& bitmap = wxNullBitmap,
              const wxColour& fgCol = wxNullColour,
              const wxColour& bgCol = wxNullColour );

    virtual ~wxPGCell() { }

    wxPGCellData* GetData()
    {
        return (wxPGCellData*) m_refData;
    }

    const wxPGCellData* GetData() const
    {
        return (const wxPGCellData*) m_refData;
    }

    bool HasText() const;
    
    /**
        Sets empty but valid data to this cell object.
    */
    void SetEmptyData();

    /**
        Merges valid data from srcCell into this.
    */
    void MergeFrom( const wxPGCell& srcCell );

    void SetText( const wxString& text );
    void SetBitmap( const wxBitmap& bitmap );
    void SetFgCol( const wxColour& col );

    /**
        Sets font of the cell.

        @remarks Because wxPropertyGrid does not support rows of
                 different height, it makes little sense to change
                 size of the font. Therefore it is recommended
                 to use return value of wxPropertyGrid::GetFont()
                 or wxPropertyGrid::GetCaptionFont() as a basis
                 for the font that, after modifications, is passed
                 to this member function.
    */
    void SetFont( const wxFont& font );
    void SetBgCol( const wxColour& col );

    const wxString& GetText() const { return GetData()->m_text; }
    const wxBitmap& GetBitmap() const { return GetData()->m_bitmap; }
    const wxColour& GetFgCol() const { return GetData()->m_fgCol; }

    /**
        Returns font of the cell. If no specific font is set for this
        cell, then the font will be invalid.
    */
    const wxFont& GetFont() const { return GetData()->m_font; }
    const wxColour& GetBgCol() const { return GetData()->m_bgCol; }

    // Used mostly internally to figure out if this cell is supposed
    // to have default values when attached to a grid.
    bool IsInvalid() const;
};

class wxPGChoicesData : public wxObjectRefData
{
public:
    // Constructor sets m_refCount to 1.
    wxPGChoicesData();

    void CopyDataFrom( wxPGChoicesData* data );

    wxPGChoiceEntry& Insert( int index, const wxPGChoiceEntry& item );

    // Delete all entries
    void Clear();

    unsigned int GetCount() const
    {
        return (unsigned int) m_items.size();
    }

    const wxPGChoiceEntry& Item( unsigned int i ) const
    {
        wxASSERT_MSG( i < GetCount(), "invalid index" );
        return m_items[i];
    }

    wxPGChoiceEntry& Item( unsigned int i )
    {
        wxASSERT_MSG( i < GetCount(), "invalid index" );
        return m_items[i];
    }

private:
    ~wxPGChoicesData();
};

class wxPGChoiceEntry : public wxPGCell
{
public:
    wxPGChoiceEntry();
    wxPGChoiceEntry(const wxPGChoiceEntry& other):
    wxPGChoiceEntry( const wxString& label,int value = wxPG_INVALID_VALUE );
    virtual ~wxPGChoiceEntry() { };

    void SetValue( int value ) { m_value = value; }
    int GetValue() const { return m_value; }
};

class wxDatePickerCtrl : public wxControl { // prevent abstract definition of that class.
public:
	bool wxDatePickerCtrl::GetRange(wxDateTime * dt1, wxDateTime * dt2) const;
	wxDateTime wxDatePickerCtrl::GetValue() const;
	void wxDatePickerCtrl::SetRange(const wxDateTime & dt1, const wxDateTime & dt2);
	void wxDatePickerCtrl::SetValue(const wxDateTime & dt);
};

class sgtApp : public wxApp {};
sgtApp& wxGetApp();

#define wxEVT_COMMAND_TREELIST_SELECTION_CHANGED 0
#define wxEVT_COMMAND_TREELIST_ITEM_EXPANDING 0
#define wxEVT_COMMAND_TREELIST_ITEM_EXPANDED 0
#define wxEVT_COMMAND_TREELIST_ITEM_CHECKED 0
#define wxEVT_COMMAND_TREELIST_ITEM_ACTIVATED 0
#define wxEVT_COMMAND_TREELIST_ITEM_CONTEXT_MENU 0
#define wxEVT_COMMAND_TREELIST_COLUMN_SORTED 0

