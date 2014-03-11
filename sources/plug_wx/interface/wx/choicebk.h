/////////////////////////////////////////////////////////////////////////////
// Name:        choicebk.h
// Purpose:     interface of wxChoicebook
// Author:      wxWidgets team
// RCS-ID:      $Id$
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

/**
    @class wxChoicebook

    wxChoicebook is a class similar to wxNotebook, but uses a wxChoice control
    to show the labels instead of the tabs.

    For usage documentation of this class, please refer to the base abstract class
    wxBookCtrl. You can also use the @ref page_samples_notebook to see wxChoicebook in
    action.

    wxChoicebook allows the use of wxBookCtrlBase::GetControlSizer(), allowing
    a program to add other controls next to the choice control. This is
    particularly useful when screen space is restricted, as it often is when
    wxChoicebook is being employed.

    @beginStyleTable
    @style{wxCHB_DEFAULT}
           Choose the default location for the labels depending on the current
           platform (left everywhere except Mac where it is top).
    @style{wxCHB_TOP}
           Place labels above the page area.
    @style{wxCHB_LEFT}
           Place labels on the left side.
    @style{wxCHB_RIGHT}
           Place labels on the right side.
    @style{wxCHB_BOTTOM}
           Place labels below the page area.
    @endStyleTable

    @beginEventEmissionTable{wxBookCtrlEvent}
    @event{EVT_CHOICEBOOK_PAGE_CHANGED(id, func)}
        The page selection was changed.
        Processes a @c wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED event.
    @event{EVT_CHOICEBOOK_PAGE_CHANGING(id, func)}
        The page selection is about to be changed.
        Processes a @c wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGING event.
        This event can be vetoed (using wxNotifyEvent::Veto()).
    @endEventTable

    @library{wxcore}
    @category{bookctrl}
    @appearance{choicebook.png}

    @see @ref overview_bookctrl, wxNotebook, @ref page_samples_notebook
*/
class wxChoicebook : public wxBookCtrlBase
{
public:
    // at open curl
    /**
        Constructs a choicebook control.
    */
    wxChoicebook();
    wxChoicebook(wxWindow* parent, wxWindowID id,
                 const wxPoint& pos = wxDefaultPosition,
                 const wxSize& size = wxDefaultSize,
                 long style = 0,
                 const wxString& name = wxEmptyString);
    // at close curl

    /**
        Returns the wxChoice associated with the control.
    */
    wxChoice * GetChoiceCtrl() const;

	// implementation of pure virtuals:
	virtual int GetPageImage(size_t nPage) const;
	virtual bool SetPageImage(size_t page, int image);
	virtual wxString GetPageText(size_t nPage) const;
	virtual bool SetPageText(size_t page, const wxString & text);
	virtual int GetSelection() const;
	virtual int SetSelection(size_t page);
	virtual int ChangeSelection(size_t page);
	virtual bool InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE);
	
protected:
	virtual wxWindow* DoRemovePage(size_t arg1);
};

