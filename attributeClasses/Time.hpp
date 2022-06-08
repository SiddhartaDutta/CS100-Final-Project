#ifndef __TIME_HPP__
#define __TIME_HPP__

#include <string>
#include <iostream>

class Time {

	private:
		int hour;
		int minute;

	public:
		Time(int hour = 0, int minute = 0){
			this->hour = hour;
			this->minute = minute;
		}
	
		// Accessors
		int getHour() const { return hour; }

		int getMinute() const { return minute; }

		void print(std::ostream& output){
			output << hour << ':' << minute << std::endl;
		}

		// Mutators
		void setHour(int hour){ this->hour = hour; }

		void setMinute(int minute){ this->minute = minute; }

};

#endif
