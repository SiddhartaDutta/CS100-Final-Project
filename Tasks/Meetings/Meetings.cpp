#include "Meetings.hpp"

using namespace std;

/* ACCESSORS */

String Meetings::getTitle() const { return title; }

Time Meetings::getStartTime() const { return startTime; }

Time Meetings::getEndTime() const { return endTime; }

Date Meetings::getDate() const { return eventDate; }

String Meetings::getLocation const { return location; }
