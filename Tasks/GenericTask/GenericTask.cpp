#include "GenericTask.hpp"

using namespace std;

/* ACCESSORS */
string GenericTask::getDescription() const { return description; }

void GenericTask::printAllInfo(ostream& output){
	output << "Title: " << title << endl;
	output << "\tTask Type: Generic Task\n";

	output << "\tDescription: " << description << "\n\n";
}

/* MUTATORS */
void GenericTask::setDescription(string newDesc){ description = newDesc; }