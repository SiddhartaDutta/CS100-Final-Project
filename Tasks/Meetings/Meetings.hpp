#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

#include <list>

#include "../ParentTask.hpp"
#include "../../TaskStructs/DateStruct.hpp"
#include "../../TaskStructs/TimeStruct.hpp"

using namespace std;

class Meetings : public ParentTask {

	private:

		// Title of task
		String title;
		
		// Date of task
		date eventDate;

		// Start time of task
		time startTime;

		// End time of task
		time endTime;

		// Location of task
		String location;

		// Subtask list
		list<ParentTask> subTasks;

	public:

		// Constructor
		Meetings(String title, int month, int day, int year, String location, int startTimeHour, int startTimeMin, int endTimeHour, int endTimeMin) : ParentTask() {
			
			this->title = title;

			this->eventDate.month = month;
			this->eventDate.day = day;
			this->eventDate.year = year;

			this->location = location;

			this->startTime.hour = startTimeHour;
			this->startTime.minute = startTimeMin;

			this->endTime.hour = endTimeHour;
			this->endTime.minute = endTimeMin;
	
		}

		

};

#endif
