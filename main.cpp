//#include <iostream>

#include "Tasks/ParentTask.hpp"
#include "Tasks/Meeting/Meeting.hpp"

using namespace std;

int main(){

	bool run = true;

	ParentTask* mainTask = new Meeting();

	do{

		// Print
		cout << "1. View Task Details\n";
		// Edit
		cout << "2. Edit Task Attributes\n";
		// Exit
		cout << "3. Exit Program\n";

		// Processing

	} while (run);
	

	return 0;

}
