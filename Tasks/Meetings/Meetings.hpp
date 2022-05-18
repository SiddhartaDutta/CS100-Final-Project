#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

#include <list>

#include "../ParentTask.hpp"

using namespace std;

class Meetings : public ParentTask {

	private:

		// Title of task
		String title;
		
		// Date of task
		int date[3];

		// Location of task
		String location;

		// Start time of task
		int startTime[2];

		// End time of task
		int endTime[2];

		// Subtask list
		list<ParentTask> subTasks;

	public:

		// Constructor
		Meetings(String title, int month, int day, int year, String location, int startTimeHour, int startTimeMin, int endTimeHour, int endTimeMin) : ParentTask() {
			
			this->title = title;

			this->date[0] = month;
			this->date[1] = day;
			this->date[2] = year;

			this->location = location;

			this->startTime[0] = startTimeHour;
			this->startTime[1] = startTimeMin;
	
			this->endTime[0] = endTimeHour;
			this->endTime[1] = endTimeMin;

		}

		

};

#endif
