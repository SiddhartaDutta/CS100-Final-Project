//#include <iostream>

#include "Tasks/ParentTask.hpp"
#include "Tasks/Meeting/Meeting.hpp"

using namespace std;

int main(){

	bool run = true;
	string input;

	ParentTask* mainTask = new Meeting();

	do{

		cout << "  TASK MANAGER\n";
		cout << "----- Menu -----\n";

		// Print
		cout << "1. View Task Details\n";
		// Edit
		cout << "2. Edit Task Attributes\n";
		// Exit
		cout << "3. Exit Program\n";

		// Input
		cout << "Please enter selection: ";
		cin >> input;
		cout << endl;

		// Processing
		try{

			int selection = stoi(input);

			switch(selection){
				case 1:
					mainTask->printAllInfo();
					break;

				case 2:
					mainTask->editTask(cin, cout);
					break;

				case 3:
					cout << "Clearing used memory...\n";
					run = false;
					break;

				default:
					cout << "Invalid Selection.\n\n";
			}

		} catch(...){
			cout << "Invalid input.\n\n";
		}

	} while (run);

	cout << "Program exited.\n";

	return 0;

}