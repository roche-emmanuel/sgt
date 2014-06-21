
bool hasModuleData(const std::string& name);
bool loadModuleFromFile(const std::string& name, const std::string& filename);

// int loadModuleFromMemory(const std::string& data, const std::string& mname, const std::string& entryname, lua_State* L);
// int loadModuleFromMemory(const std::string& mname, const std::string& entryname, lua_State* L);

struct HWND {
};

namespace OpenThreads {

class Mutex {
};

};

// This is a trick to successfully export Referenced and Object classes from the core
// module and use them from all other osg modules.
namespace osg {

/** LUNA_EXTERNAL osg */
class DeleteHandler {
protected:
	~DeleteHandler();
};

/** LUNA_EXTERNAL osg */
class Observer {
protected:
	~Observer();
};

/** LUNA_EXTERNAL osg */
class ObserverSet : public osg::Referenced {
};

/** LUNA_EXTERNAL osg */
class UserDataContainer : public osg::Object {
};

/** LUNA_EXTERNAL osg */
class CopyOp {
protected:
	~CopyOp();
};

/** LUNA_EXTERNAL osg */
class State : public osg::Referenced, public osg::Observer {
protected:
	~State();
};

};

class __int64 {
};

class __uint64 {
};

class uintptr_t {
};

class void {
};

namespace std {

class istream {
protected:
	istream();
	~istream();
};

class ostream {
protected:
	ostream();
	~ostream();
};

}

void doLog(int level, const std::string& msg);
void doLogV(int level, const std::string& msg);
void doTrace(int level, const std::string& trace, const std::string& msg);
void doTraceV(int level, const std::string& trace, const std::string& msg);

namespace boost {

namespace gregorian {

class date_duration {
public:
	date_duration(long);
	
	long days() const;
	bool is_negative() const;
	
	bool operator==(const date_duration& rhs);
	bool operator<(const date_duration& rhs);
	
	//date_duration operator+(date_duration) const;
	//date_duration operator-(date_duration) const;
};

typedef date_duration days;

class date_period {
public:
	date_period(date&, date&);
	date_period(date&, days&);
	date_period(const date_period&);
	
	void shift(const days&);
	void expand(const days&);
	
	date begin();
	date last();
	date end();
	days length();
	bool is_null();
	
	bool contains(const date&);
	bool contains(date_period&);
	bool contains(date_period&);
	bool intersects(date_period&);
	
	date_period intersection(date_period&);
	bool is_adjacent(date_period&);
	bool is_after(date&);
	bool is_before(date&);
	date_period merge(date_period&);
	date_period span(date_period&);
	
	
	bool operator==(const date_period& rhs);
	bool operator<(const date_period& rhs);
	
	//date_duration operator+(date_duration) const;
	//date_duration operator-(date_duration) const;
};

/** LUNA_RENAME date_period_to_simple_string */
std::string to_simple_string(date_period& dp);

class date {
public:
	date();
	date(int year, int month, int day);
	date(const date& rhs);
	
	int year() const;
	int month() const;
	int day() const;
	
	int day_of_week() const;
	int day_of_year() const;
	
	date end_of_month() const;
	
	bool is_not_a_date() const;
	
	long modjulian_day() const;
	long julian_day() const;
	int week_number() const
	
	bool operator==(const date& rhs);
	bool operator<(const date& rhs);
	
	date operator+(date_duration&) const;
	date operator-(date_duration&) const;
	date_duration operator-(date&) const;
};

date from_string(std::string);
date from_undelimited_string(std::string);

/** LUNA_RENAME date_to_simple_string */
std::string to_simple_string(date& d);

/** LUNA_RENAME date_to_iso_string */
std::string to_iso_string(date& d);

/** LUNA_RENAME date_to_iso_extended_string */
std::string to_iso_extended_string(date& d);

class day_iterator {
public:
	day_iterator(date& start_date, int day_count=1);
};

class week_iterator {
public:
	week_iterator(date& start_date, int week_count=1);
};

class month_iterator {
public:
	month_iterator(date& start_date, int month_count=1);
};

class year_iterator {
public:
	year_iterator(date& start_date, int year_count=1);
};

namespace day_clock {

date local_day();
date universal_day();

};

};


namespace posix_time {

namespace second_clock {

/** LUNA_RENAME second_local_time */
ptime local_time();

/** LUNA_RENAME second_universal_time */
ptime universal_time();

};

namespace microsec_clock {

/** LUNA_RENAME microsec_local_time */
ptime local_time();

/** LUNA_RENAME microsec_universal_time */
ptime universal_time();

};

class time_duration {
public:
	time_duration(long, long, long, long);
	
	long hours();
	long minutes();
	long seconds();
	
	long total_seconds();
	long total_milliseconds();
	long total_microseconds();
	long total_nanoseconds();
	long fractional_seconds();
	
	bool is_negative();
	
	time_duration invert_sign();
	
	int num_fractional_digits();
	long ticks_per_second();
	
	__int64 ticks();
	
	time_duration unit();
	
	bool is_neg_infinity() const;
	bool is_pos_infinity() const;
	
	bool is_not_a_date_time() const;
	bool is_special() const;
	
	bool operator==(const time_duration& rhs);
	bool operator<(const time_duration& rhs);	
	
	time_duration operator+(time_duration&) const;
	time_duration operator-(time_duration&) const;
	
	time_duration operator/(int);
	time_duration operator*(int);
};

class hours : public time_duration {
public:
	hours(long);
};

class minutes : public time_duration {
public:
	minutes(long);
};

class seconds : public time_duration {
public:
	seconds(long);
};

class milliseconds : public time_duration {
public:
	milliseconds(long);
};

class microseconds : public time_duration {
public:
	microseconds(long);
};

time_duration duration_from_string(std::string);
std::string to_simple_string(time_duration&);
std::string to_iso_string(time_duration);


class ptime {
public:
	ptime();
	ptime(gregorian::date&);
	ptime(gregorian::date&,time_duration&);
	ptime(ptime&);
	
	gregorian::date date();
	time_duration time_of_day();
	bool is_infinity() const;
	bool is_neg_infinity() const;
	bool is_pos_infinity() const;
	bool is_not_a_date_time() const;
	bool is_special() const;

	bool operator==(const ptime& rhs);
	bool operator<(const ptime& rhs);	
	
	ptime operator+(gregorian::date_duration&) const;
	ptime operator-(gregorian::date_duration&) const;	
	
	ptime operator+(time_duration&) const;
	ptime operator-(time_duration&) const;	
	
	time_duration operator-(ptime&);
};

ptime time_from_string(std::string);
ptime from_iso_string(std::string);

std::string to_simple_string(ptime&);
std::string to_iso_string(ptime&);
std::string to_iso_extended_string(ptime&);

class time_period {
public:
	time_period(ptime&, ptime&);
	time_period(ptime&, time_duration&);
	time_period(time_period& rhs);
	
	void shift(time_duration&);
	void expand(time_duration&);
	
	ptime begin();
	ptime last();
	ptime end();
	
	time_duration length();
	
	bool is_null();
	bool contains(ptime&);
	bool contains(time_period&);
	bool intersects(time_period&);
	
	time_period intersection(time_period&);
	time_period merge(time_period&);
	time_period span(time_period&);
	
	bool operator==(const time_period& rhs);
	bool operator<(const time_period& rhs);	
};

std::string to_simple_string(time_period& dp);

};

};

namespace sgt {

class ModuleManager {
protected:
	~ModuleManager();
public:
	static ModuleProvider& instance();
	static void destroy();
	static bool isInstanciated();
};

};

LUNA_IMPLEMENT_VECTOR(int);
LUNA_IMPLEMENT_VECTOR(float);
LUNA_IMPLEMENT_VECTOR(double);
LUNA_IMPLEMENT_VECTOR(void*);
