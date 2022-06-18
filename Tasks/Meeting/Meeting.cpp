#include "Meeting.hpp"

//#include <string>
//#include <iostream>

using namespace std;

/* ACCESSORS */

void Meeting::printAllInfo(ostream& output){
	output << "Title: " << title << endl;
	output << "\tTask Type: Meeting\n";

	output << "\tDate: ";
	eventDate->print(output);

	output << "\tStart Time: ";
	startTime->print(output);

	output << "\tEnd Time: ";
	startTime->print(output);

	output << "\tLocation: " << location << "\n\n";
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
	this->printAllInfo(cout);

	//output << "\n";

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
				this->getDate()->setDate(input, output);
				break;
			case 3:
				output << "Input new location: ";
				input.ignore();
				getline(input, in);
				this->setLocation(in);
				output << "Saved...\n\n";
				break;
			case 4:
				this->getStartTime()->setTime(input, output);
				break;
			case 5:
				this->getEndTime()->setTime(input, output);
				break;
			case 6:
				//this->operateSubTaskMenu();
				break;
			case 7:
				output << '\n';
				break;
			default:
				throw selection;
		}
	} 
	catch (int i){
		output << " Error: Invalid selection with value: " << i << '\n';
		output << " Operation aborted.\n\n";
	}
	catch(...){
		output << " Error: Invalid input (non-numerical input).\n";
		output << " Operation aborted.\n\n";
	}
	
	
}
