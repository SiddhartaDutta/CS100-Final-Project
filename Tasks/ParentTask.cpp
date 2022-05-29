#include "ParentTask.hpp"

#include <string>
#include <iostream>

using namespace std;

// Accessors
string ParentTask::getTitle(){ return title; }

// Mutators
void ParentTask::setTitle(string title){ this->title = title; }

void ParentTask::setTitleFromMenu(istream& input, ostream& output){
    output << "Input new title: ";
    input >> title;
    output << "Saved...\n";
}