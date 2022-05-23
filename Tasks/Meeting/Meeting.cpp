#include <iostream>
#include "Meetings.hpp"

using namespace std;

/* ACCESSORS */

void Meetings::PrintAllInfo(){
	cout << "test\n";
}

string Meetings::getTitle() const { return title; }

Time Meetings::getStartTime() const { return startTime; }

Time Meetings::getEndTime() const { return endTime; }

Date Meetings::getDate() const { return eventDate; }

string Meetings::getLocation() const { return location; }
