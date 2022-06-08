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

		~Time(){}
	
		// Accessors
		int getHour() const { return hour; }

		int getMinute() const { return minute; }

		void print(std::ostream& output){
			output << hour << ':' << minute << std::endl;
		}

		// Mutators
		void setHour(int hour){ this->hour = hour; }

		void setMinute(int minute){ this->minute = minute; }

		void setTime(std::istream& input, std::ostream& output){

			try
			{
				std::string in1, in2;

				output << "Input new hour (enter number (24-hour clock)): ";
				input >> in1;

				//output << std::endl;

				output << "Input new minute (enter number): ";
				input >> in2;

				//output << std::endl;

				int tempHour = std::stoi(in1) % 24;
				int tempMinute = std::stoi(in2) % 60;

				this->setHour(tempHour);
				this->setMinute(tempMinute);
				output << "Saved...\n\n";
			}
			catch(...)
			{
				output << " Error: Non-numerical input.\n Operation aborted.\n\n";
			}
			

		}
};

#endif
