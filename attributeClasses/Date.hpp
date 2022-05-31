#ifndef __DATE_HPP__
#define __DATE_HPP__

#include <iostream>

bool getNumericalInput(std::string input);

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

		void setDate(std::istream& input, std::ostream& output){

			try
			{
				std::string in;
				int monthTemp;
				int dayTemp;
				int yearTemp;

				// YEAR INPUT
				std::output << "Input new year (enter number): ";
				std::input >> in;

				if(getNumericalInput(in)){
					int yearTemp = stoi(in);
				} else {
					std::output << " Error: Invalid input with input: ";
					throw in;
				}

				// MONTH INPUT
				std::output << "Input new month (enter number): ";
				std::input >> in;

				if(getNumericalInput(in)){

					int monthTemp = stoi(in);
					if(!(monthTemp > 0 && monthTemp < 13)){
						std::output << " Error: Invalid month with value: ";
						throw monthTemp;
					}

				} else {
					std::output << " Error: Invalid input with input: ";
					throw in;
				}

				// DAY INPUT
				std::output << "Input new day (enter number): ";
				std::input >> in;

				if(getNumericalInput(in)){

					int dayTemp = stoi(in);

					// If month has 31 days
					if(monthTemp == 1 || monthTemp == 3 || monthTemp == 5 || monthTemp == 7 || monthTemp == 8 || monthTemp == 10 || monthTemp == 12){
						if(!(dayTemp > 0 && dayTemp < 31)){
							std::output << " Error: Invalid day-month combo with value: ";
							throw dayTemp;
						}
					} 
					// If month has 30 days
					else if(monthTemp == 4 || monthTemp == 6 || monthTemp == 9 || monthTemp == 11){
						if(!(dayTemp > 0 && dayTemp < 30)){
							std::output << " Error: Invalid day-month combo with value: ";
							throw dayTemp;
						}
					} 
					// If February
					else if(monthTemp == 2){
						if(!(dayTemp > 0 && dayTemp < 29) || (dayTemp == 28 && (monthTemp%4 != 0))){
							std::output << " Error: Invalid day-month combo with value: ";
							throw dayTemp;
						}
					}
				
				} else {
					std::output << " Error: Invalid input with input: ";
					throw in;
				}

				month = monthTemp;
				day = dayTemp;
				year = yearTemp;

				std::output << "Saved...\n";


			}
			catch(string issueStr)
			{
				std::output << issueStr << '\n';
				std::output << " Operation aborted.\n";
			}
			catch(int issueInt)
			{
				std::output << issueInt << '\n';
				std::output << " Operation aborted.\n";
			}
				
		}

};

bool getNumericalInput(std::string input){
	try{
		stoi(input);
		return true;
	} catch (...){
		return false;
	}
}

#endif