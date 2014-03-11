#include "wx_extensions.h"

int GetX(wxPoint* point) {
	return point->x;
}

int GetY(wxPoint* point) {
	return point->y;
}

bool disconnect(wxEvtHandler* handler, int eventType) {
	logDEBUG3("Calling Disconnect with etype="<<eventType);
	return handler->Disconnect((wxEventType)eventType);
}

bool disconnect(wxEvtHandler* handler, int id, int eventType) {
	logDEBUG3("Calling Disconnect with id=" << id << ", etype="<<eventType);
	return handler->Disconnect(id, (wxEventType)eventType);
}

bool disconnect(wxEvtHandler* handler, int id, int id2, int eventType) {
	logDEBUG3("Calling Disconnect with id=" << id << ", id2=" << id2 << ", etype="<<eventType);
	return handler->Disconnect(id, id2, (wxEventType)eventType);
}

int connect(wxEvtHandler* handler, int id, int id2, int eventType, lua_Function* dummy, lua_State* L) {
	trDEBUG4("Luna","Entering connect extension");

	// Create a new lua event handler:
	LuaEventHandler* luahandler = new LuaEventHandler();
	
	wxString result = luahandler->connect( L, 4, id, id2, (wxEventType)eventType, handler );
	
	if(!result.IsEmpty()){
		delete luahandler;
		luaL_error(L,result.ToStdString().c_str());
	}

	trDEBUG4("Luna","Leaving connect extension");

	return 0;
}

int connect(wxEvtHandler* handler, int id, int eventType, lua_Function* dummy, lua_State* L) {
	return connect(handler,id,id,eventType,dummy,L);
}

int connect(wxEvtHandler* handler, int eventType, lua_Function* dummy, lua_State* L) {
	return connect(handler,wxID_ANY,wxID_ANY,eventType,dummy,L);
}

void composeWith(wxImage* mainImg, wxImage* subImg, int corner) {
	
	CHECK(subImg,"Invalid sub image.");
	CHECK(subImg->GetWidth() < mainImg->GetWidth(),"Invalid sub image width.")
	CHECK(subImg->GetHeight() < mainImg->GetHeight(),"Invalid sub image height.")

	unsigned char *ptr,*src;
	ptr = mainImg->GetData();
	unsigned int offset = 0;

	// Copy the sub image on top of mainImg, in the bottom right corner:
	int ww = mainImg->GetWidth();
	int hh = mainImg->GetHeight();

	int subww = subImg->GetWidth();
	int subhh = subImg->GetHeight();

	// This is were we should define the starting point for the image copy operation
	// depending on the corner used.
	// For now assume corner = BOTTOM_RIGHT.
	ptr += ((hh-subhh)*ww+(ww-subww))*3;
	offset = ww-subww;

	src = subImg->GetData();

	bool useMask = false;
	unsigned char r,g,b;
	if(mainImg->HasMask()) {
		r = mainImg->GetMaskRed();
		g = mainImg->GetMaskGreen();
		b = mainImg->GetMaskBlue();
		useMask = true;
	}
	
	// The bottom part where the check image is should be visible:
	unsigned char* ptr2 = mainImg->GetAlpha();
	if(ptr2)
		ptr2 += ((hh-subhh)*ww+(ww-subww));
	
	unsigned char* ptr3 = subImg->GetAlpha();

	unsigned char r1,g1,b1,a1;
	unsigned char r2,g2,b2,a2;

	for(int row = 0; row < subImg->GetHeight(); ++row) {
		for(int col = 0; col < subImg->GetWidth(); ++col) {
			r2 = (*src++);
			g2 = (*src++);
			b2 = (*src++);
			a2 = ptr3 ? (*ptr3++) : 255;
			
			if(useMask && r==r2 && g==g2 && b==b2) {
				ptr += 3;
				if(ptr2)
					ptr2 += 1;// keep previous transparency value.
			}
			else {
				r1 = *ptr;
				(*ptr++) = (unsigned char) ((float)r1+ (float)(r2-r1)*(float)a2/255.0f);
				g1 = *ptr;
				(*ptr++) = (unsigned char) ((float)g1+ (float)(g2-g1)*(float)a2/255.0f);
				b1 = *ptr;
				(*ptr++) = (unsigned char) ((float)b1+ (float)(b2-b1)*(float)a2/255.0f);
				
				if(ptr2) {
					a1 = (*ptr2);
					(*ptr2++) = std::max(a1,a2); // show this pixel.
				}
			}
		}			

		ptr += offset*3;
		if(ptr2)
			ptr2 += offset;
	}	
}

wxDEFINE_EVENT(sgtEVT_LOG_MESSAGE,wxCommandEvent);

void onPerformLog(wxCommandEvent& event) {
	// std::cout << "Performing log of message: " << event.GetString() << std::endl;
	sgt::LogManager::instance().doLog(event.GetInt(),"",event.GetString().ToStdString());
};

class wxLogHandler : public sgt::LogManager::LogHandler {
public:
	wxLogHandler(wxEvtHandler* handler) : _handler(handler) {
		std::cout << "Binding onPerformLog." << std::endl;
		_threadId = boost::this_thread::get_id();
		_handler->Bind(sgtEVT_LOG_MESSAGE, &onPerformLog);
		std::cout << "onPerformLog bound in thread " << _threadId << std::endl;
	};
	
	~wxLogHandler() {
		std::cout << "Not unbinding onPerformLog." << std::endl;
		// std::cout << "Unbinding onPerformLog." << std::endl;
		//_handler->Unbind(sgtEVT_LOG_MESSAGE, &onPerformLog);
		// std::cout << "onPerformLog unbound." << std::endl;
	}

	virtual void handle(int level, std::string trace, std::string msg);
	
protected:
	wxEvtHandler* _handler;
	boost::thread::id _threadId;
};

void wxLogHandler::handle(int level, std::string trace, std::string msg) {
	// std::cout << "WX handling message: " << msg << std::endl;
	if(_threadId == boost::this_thread::get_id()) {
		// Send this message to the logmanager directly:
		sgt::LogManager::instance().doLog(level,trace,msg);
		return;
	}
	
	wxCommandEvent* event = new wxCommandEvent(sgtEVT_LOG_MESSAGE,0);
	event->SetInt(level);
	event->SetString(msg.c_str());
	
	_handler->QueueEvent(event);
};

sgt::LogManager::LogHandler* createWxLogHandler(wxEvtHandler* handler) {
	CHECK_RET(handler,NULL,"Invalid handler.");
	return new wxLogHandler(handler);
}


