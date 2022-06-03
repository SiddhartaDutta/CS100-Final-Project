#include <iostream>
#include "Meeting.hpp"

using namespace std;

/* ACCESSORS */

void Meeting::printAllInfo(){
	cout << "test\n";
}

void Meeting::editTask(){
	cout <<"task edited\n";
}

Time* Meeting::getStartTime() const { return startTime; }

Time* Meeting::getEndTime() const { return endTime; }

Date* Meeting::getDate() const { return eventDate; }

string Meeting::getLocation() const { return location; }
