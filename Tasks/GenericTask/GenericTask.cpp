#include "GenericTask.hpp"

using namespace std;

/* ACCESSORS */
string GenericTask::getDescription() const { return description; }

//void printAll

/* MUTATORS */
void GenericTask::setDescription(string newDesc){ description = newDesc; }