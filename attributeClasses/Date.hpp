#ifndef __DATE_HPP__
#define __DATE_HPP__

class Date {

	private:
		int month;
		int day;
		int year;

	public:
		Date(int month = 0, int day = 0, int year = 0){
			this->month = month;
			this->day = day;
			this->year = year;
		}

		// Accessors
		int getMonth() const { return month; }

		int getDay() const { return day; }

		int getYear() const { return year; }

		// Mutators
		void setMonth(int month){ this->month = month; }

		void setDay(int day){ this->day = day; }

		void setYear(int year){ this->year = year; }

};

#endif
