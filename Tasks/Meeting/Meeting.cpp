#include "Meeting.hpp"

#include <string>
#include <iostream>

using namespace std;

/* ACCESSORS */

void Meeting::printAllInfo(){
	cout << "test\n";
}

Time* Meeting::getStartTime() const { return startTime; }

Time* Meeting::getEndTime() const { return endTime; }

Date* Meeting::getDate() const { return eventDate; }

string Meeting::getLocation() const { return location; }

/* MUTATORS */
void Meeting::editTask(std::istream& input, std::ostream& output){
	output << "Selected Task:\n\n";

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

	output << "Please enter a number corresponding to the attribute you would like to edit: ";
	
	// Input + processing
	try
	{
		string in;
		input >> in;
		int selection = stoi(in);

		switch (selection){
			case 1:
				this->setTitleFromMenu(cin, cout);
				break;
			case 2:
				break;
			case 3:
				cout << "Input new location: ";
				getline(cin, in);
				this->setLocation(in);
				cout << "Saved...\n";
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				this->operateSubTaskMenu();
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
