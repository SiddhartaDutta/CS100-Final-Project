#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

#include <list>

#include "../ParentTask.hpp"
#include "../../attributeClasses/Date.hpp"
#include "../../attributeClasses/Time.hpp"

using namespace std;

class Meetings : public ParentTask {

	private:

		// Title of task
		String title;
		
		// Date of task
		Date eventDate;

		// Start time of task
		Time startTime;

		// End time of task
		Time endTime;

		// Location of task
		String location;

		// Subtask list
		list<ParentTask> subTasks;

	public:

		// Constructor
		Meetings(String title, int month, int day, int year, String location, int startTimeHour, int startTimeMin, int endTimeHour, int endTimeMin) : ParentTask() {
			
			this->title = title;

			this->eventDate.setMonth(month);
			this->eventDate.setDay(day);
			this->eventDate.setYear(year);

			this->location = location;

			this->startTime.setHour(startTimeHour);
			this->startTime.setMinute(startTimeMinute);

			this->endTime.setHour(endTimeHour);
			this->endTime.setMinute(endTimeMinute);
	
		}

		/* MUTATORS */

		/// Edits title of task
		void EditTitle(String newTitle);

		/// Edits start time of task
		void EditStartTime(int hour, int minute);

		/// Edits end time of task
		void EditEndTime(int hour, int minute);

		/// Edits date of task
		void EditDate(int month, int day, int year);

		/// Edits location of task
		void EditLocation(String location);

		

		/* ACCESSORS */

		String PrintAllInfo();

};

#endif
