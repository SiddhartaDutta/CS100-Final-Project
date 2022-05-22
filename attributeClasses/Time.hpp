#ifndef __TIME_HPP__
#define __TIME_HPP__

class Time {

	private:
		int hour;
		int minute;

	public:
		// Accessors
		int getHour() const { return hour; }

		int getMinute() const { return minute; }

		// Mutators
		void setHour(int hour){ this->hour = hour; }

		void setMinute(int minute){ this->minute = minute; }

};

#endif
