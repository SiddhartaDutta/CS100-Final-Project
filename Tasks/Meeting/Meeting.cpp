#include "Meeting.hpp"

//#include <string>
//#include <iostream>

using namespace std;

/* ACCESSORS */

void Meeting::printAllInfo(){
	cout << "Title: " << title << endl;
	cout << "\tTask Type: Meeting\n";

	cout << "\tDate: ";
	eventDate->print(cout);

	cout << "\tStart Time: ";
	startTime->print(cout);

	cout << "\tEnd Time: ";
	startTime->print(cout);

	cout << "\tLocation: " << location << "\n\n";
}

Time* Meeting::getStartTime() const { return startTime; }

Time* Meeting::getEndTime() const { return endTime; }

Date* Meeting::getDate() const { return eventDate; }

string Meeting::getLocation() const { return location; }

/* MUTATORS */
void Meeting::setLocation(string location){ this->location = location; }

void Meeting::editTask(std::istream& input, std::ostream& output){
	output << "--- Selected Task ---\n";

	// Print task
	this->printAllInfo();

	output << "\n";

	// Print menu
	output << "Options\n";
	output << "\t1. Edit Title\n";
	output << "\t2. Edit Date\n";
	output << "\t3. Edit Location\n";
	output << "\t4. Edit Start Time\n";
	output << "\t5. Edit End Time\n";
	output << "\t6. Edit Subtasks\n";
	output << "\t7. Exit Edit Menu\n";

	output << "Please enter a number corresponding to the attribute you would like to edit: ";
	
	// Input + processing
	try
	{
		string in;
		string inputGetline;
		input >> in;
		int selection = stoi(in);

		switch (selection){
			case 1:
				this->setTitleFromMenu(input, output);
				break;
			case 2:
				break;
			case 3:
				output << "Input new location: ";
				//string* temp = new string;
				getline(input, inputGetline);
				//this->setLocation(inputGetline);
				output << "Saved...\n";
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				//this->operateSubTaskMenu();
				break;
			case 7:
				break;
			default:
				throw selection;
		}
	} 
	catch (int i){
		output << " Error: Invalid selection with value: " << i << '\n';
		output << " Operation aborted.\n";
	}
	catch(...){
		output << " Error: Invalid input (non-numerical input).\n";
		output << " Operation aborted.\n";
	}
	
	
}
