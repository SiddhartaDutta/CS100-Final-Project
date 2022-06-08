#ifndef __DATE_HPP__
#define __DATE_HPP__

#include <iostream>
#include <string>

//bool getNumericalInput(std::string input);

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

		~Date(){}

		// Accessors
		int getMonth() const { return month; }

		int getDay() const { return day; }

		int getYear() const { return year; }

		void print(std::ostream& output){
			output << month << '/' << day << '/' << year << std::endl;
		}

		// Mutators
		void setMonth(int month){ this->month = month; }

		void setDay(int day){ this->day = day; }

		void setYear(int year){ this->year = year; }

		void setDate(std::istream& input, std::ostream& output){

			try{
				std::string in1, in2, in3;

				// Year Input
				output << "Input new year (enter number): ";
				input >> in1;

				//output << std::endl;

				// Month Input
				output << "Input new month (enter number): ";
				input >> in2;

				//output << std::endl;

				// Day Input
				output << "Input new day (enter number): ";
				input >> in3;

				//output << std::endl;

				// Convert all inputs
				int tempMonth = std::stoi(in2);
				int tempDay = std::stoi(in3);
				int tempYear = std::stoi(in1);

				// Verify month
				if(!(tempMonth > 0 && tempMonth < 13)){
					output << " Error: Invalid month with value: ";
					throw tempMonth;
				}

				// Verify day
				if(tempMonth == 1 || tempMonth == 3 || tempMonth == 5 || tempMonth == 7 || tempMonth == 8 || tempMonth == 10 || tempMonth == 12){
					if(!(tempDay > 0 && tempDay < 32)){
						output << " Error: Invalid day-month combo with value: ";
						throw tempDay;
					}
				} 
				// If month has 30 days
				else if(tempMonth == 4 || tempMonth == 6 || tempMonth == 9 || tempMonth == 11){
					if(!(tempDay > 0 && tempDay < 31)){
						output << " Error: Invalid day-month combo with value: ";
						throw tempDay;
					}
				} 
				// If February
				else if(tempMonth == 2){
					if(!(tempDay > 0 && tempDay < 29) || (tempDay == 29 && (tempYear%4 == 0))){
						output << " Error: Invalid day-month combo with value: ";
						throw tempDay;
					}
				}

				this->setDay(tempDay);
				this->setMonth(tempMonth);
				this->setYear(tempYear);
				output << "Saved...\n\n";

			} catch(int issueInt){
				output << issueInt << '\n';
				output << " Operation aborted.\n\n";
			} catch(...){
				output << " Error: Non-numerical input.\n Operation aborted.\n\n";
			}

#pragma region oldC
/*
			try
			{
				std::string in;
				int monthTemp;
				int dayTemp;
				int yearTemp;

				// YEAR INPUT
				output << "Input new year (enter number): ";
				input >> in;

				if(true){
					int yearTemp = std::stoi(in);
					std::cout << "YEAR INPUT: " << yearTemp << std::endl;
				} else {
					output << " Error: Invalid input with input: ";
					throw in;
				}

				// MONTH INPUT
				output << "Input new month (enter number): ";
				input >> in;

				if(true){

					int monthTemp = std::stoi(in);
					if(!(monthTemp > 0 && monthTemp < 13)){
						output << " Error: Invalid month with value: ";
						throw monthTemp;
					}

				} else {
					output << " Error: Invalid input with input: ";
					throw in;
				}

				// DAY INPUT
				output << "Input new day (enter number): ";
				input >> in;

				if(true){

					int dayTemp = std::stoi(in);

					// If month has 31 days
					if(monthTemp == 1 || monthTemp == 3 || monthTemp == 5 || monthTemp == 7 || monthTemp == 8 || monthTemp == 10 || monthTemp == 12){
						if(!(dayTemp > 0 && dayTemp < 31)){
							output << " Error: Invalid day-month combo with value: ";
							throw dayTemp;
						}
					} 
					// If month has 30 days
					else if(monthTemp == 4 || monthTemp == 6 || monthTemp == 9 || monthTemp == 11){
						if(!(dayTemp > 0 && dayTemp < 30)){
							output << " Error: Invalid day-month combo with value: ";
							throw dayTemp;
						}
					} 
					// If February
					else if(monthTemp == 2){
						if(!(dayTemp > 0 && dayTemp < 29) || (dayTemp == 28 && (monthTemp%4 != 0))){
							output << " Error: Invalid day-month combo with value: ";
							throw dayTemp;
						}
					}
				
				} else {
					output << " Error: Invalid input with input: ";
					throw in;
				}

				std::cout << monthTemp << std::endl;
				this->setMonth(monthTemp);
				std::cout << this->getMonth() << std::endl;
				this->setDay(dayTemp);
				this->setYear(yearTemp);

				output << "Saved...\n";


			}
			catch(std::string issueStr)
			{
				output << issueStr << '\n';
				output << " Operation aborted.\n";
			}
			catch(int issueInt)
			{
				output << issueInt << '\n';
				output << " Operation aborted.\n";
			}
			*/
#pragma endregion
				
		}

};

// bool getNumericalInput(std::string input){
// 	try{
// 		std::stoi(input);
// 		return true;
// 	} catch (...){
// 		//return false;
// 	}
// 	return false;
// }

#endif
