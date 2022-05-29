#include <string>
#include <iostream>
#include "Meeting.hpp"

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
void Meeting::editTask(){
	cout << "Selected Task:\n\n";

	// Print task
	this->printAllInfo();

	cout << "\n";

	// Print menu
	cout << "Options\n";
	cout << "\t1. Edit Title\n";
	cout << "\t2. Edit Date\n";
	cout << "\t3. Edit Location\n";
	cout << "\t4. Edit Start Time\n";
	cout << "\t5. Edit End Time\n";
	cout << "\t6. Edit Subtasks\n";

	cout << "Please enter a number corresponding to the attribute you would like to edit: ";
	
	// Input + processing
	try
	{
		string input;
		cin >> input;
		int selection = stoi(input);

		switch (selection){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				throw selection;
		}
	} 
	catch (int i){
		cout << " Error: Invalid selection with value: " << i << '\n';
		cout << " Operation aborted.\n";
	}
	catch(...){
		cout << " Error: Invalid input (non-numerical input).\n";
		cout << " Operation aborted.\n";
	}
	
	
}
