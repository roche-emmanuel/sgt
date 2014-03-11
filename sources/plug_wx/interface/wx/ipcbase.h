/////////////////////////////////////////////////////////////////////////////
// Name:        ipcbase.h
// Purpose:     interface of wxConnectionBase
// Author:      wxWidgets team
// RCS-ID:      $Id$
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

/**
    An enumeration for formats .
*/
enum wxIPCFormat
{
    wxIPC_INVALID =     0,
    wxIPC_TEXT =        1,  ///< CF_TEXT
    wxIPC_BITMAP =      2,  ///< CF_BITMAP
    wxIPC_METAFILE =    3,  ///< CF_METAFILEPICT
    wxIPC_SYLK =        4,
    wxIPC_DIF =         5,
    wxIPC_TIFF =        6,
    wxIPC_OEMTEXT =     7,  ///< CF_OEMTEXT
    wxIPC_DIB =         8,  ///< CF_DIB
    wxIPC_PALETTE =     9,
    wxIPC_PENDATA =     10,
    wxIPC_RIFF =        11,
    wxIPC_WAVE =        12,
    wxIPC_UTF16TEXT =   13, ///< CF_UNICODE
    wxIPC_ENHMETAFILE = 14,
    wxIPC_FILENAME =    15, ///< CF_HDROP
    wxIPC_LOCALE =      16,
    wxIPC_UTF8TEXT =    17,
    wxIPC_UTF32TEXT =   18,
    wxIPC_UNICODETEXT = wxIPC_UTF16TEXT,
    wxIPC_PRIVATE =     20
};

/**
    @class wxConnectionBase

    @todo Document this class.

    This class provides base, common functionality shared between
    wxDDEConnection, and wxTCPConnection.

    @library{wxbase}
    @category{ipc}

    @see wxDDEConnection, wxTCPConnection
*/
class wxConnectionBase: public wxObject
{
public:
	virtual const void *Request(const wxString &,size_t *,wxIPCFormat) = 0;
	
	virtual bool StartAdvise(const wxString &) = 0;
	virtual bool StopAdvise(const wxString &) = 0;
	virtual bool Disconnect(void) = 0;
	
protected:
	virtual bool DoExecute(const void *,size_t,wxIPCFormat) = 0;
	virtual bool DoPoke(const wxString &,const void *,size_t,wxIPCFormat) = 0;
	virtual bool DoAdvise(const wxString &,const void *,size_t,wxIPCFormat) = 0;
};

