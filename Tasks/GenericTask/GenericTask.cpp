#include "GenericTask.hpp"

using namespace std;

/* ACCESSORS */
string GenericTask::getDescription() const { return description; }

/* MUTATORS */
void GenericTask::setDescription(string newDesc){ description = newDesc; }