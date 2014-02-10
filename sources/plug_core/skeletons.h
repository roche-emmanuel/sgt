#ifndef _sgt_SKELETONS_H_
#define _sgt_SKELETONS_H_

class __int64 {
};

class __uint64 {
};

class BaseClass {
};

class HWND {
};

class uintptr_t {
};

class void {
};

namespace boost {
	namespace gregorian {
		class date_duration {
		};

		class date_period {
		};

		class date {
		};

		class day_iterator {
		};

		class week_iterator {
		};

		class month_iterator {
		};

		class year_iterator {
		};

		namespace day_clock {
		};

	};

	namespace posix_time {
		class time_duration {
		};

		class hours: public boost::posix_time::time_duration {
		};

		class minutes: public boost::posix_time::time_duration {
		};

		class seconds: public boost::posix_time::time_duration {
		};

		class milliseconds: public boost::posix_time::time_duration {
		};

		class microseconds: public boost::posix_time::time_duration {
		};

		class ptime {
		};

		class time_period {
		};

		namespace microsec_clock {
		};

		namespace second_clock {
		};

	};

};

namespace OpenThreads {
	class Mutex {
	};

};

namespace osg {
	class depends_on {
	};

	class Referenced {
	};

};

namespace sgt {
	class ModuleProvider: public osg::Referenced {
	};

	class ModuleManager {
	};

	class LogManager: public osg::Referenced {
	public:
		class SinkVector {
		};

		class LevelFlagMap {
		};

		class TraceFlagMap {
		};

		class LogHandler: public osg::Referenced {
		};

	};

	class LogSink: public osg::Referenced {
	public:
		class StringSet {
		};

	};

};

namespace std {
	class istream {
	};

	class ostream {
	};

};

class sgtLock {
};


#endif
