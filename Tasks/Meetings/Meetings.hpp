#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

#include <list>

#include "../ParentTask.hpp"
#include "../../attributeClasses/Date.hpp"
#include "../../attributeClasses/Time.hpp"

using namespace std;

class Meeting : public ParentTask {

	private:
		
		// Date of task
		Date eventDate();

		// Start time of task
		Time startTime();

		// End time of task
		Time endTime();

		// Location of task
		string location;

		// Subtask list
		list<ParentTask> subTasks;

	public:

		// Constructor
		Meeting(string title, int month, int day, int year, string location, int startTimeHour, int startTimeMin, int endTimeHour, int endTimeMin) : ParentTask() {
			
			this->title = title;
			type = Meeting;

			this->eventDate.setMonth(month);
			this->eventDate.setDay(day);
			this->eventDate.setYear(year);

			this->location = location;

			this->startTime.setHour(startTimeHour);
			this->startTime.setMinute(startTimeMin);

			this->endTime.setHour(endTimeHour);
			this->endTime.setMinute(endTimeMin);
	
		}

		/* MUTATORS */

		/// Edits start time of task
		void setStartTime(int hour, int minute);

		/// Edits end time of task
		void setEndTime(int hour, int minute);

		/// Edits date of task
		void setDate(int month, int day, int year);

		/// Edits location of task
		void setLocation(string location);

		

		/* ACCESSORS */

		void PrintAllInfo();

};

#endif
