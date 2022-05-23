#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

#include <vector>

#include "../ParentTask.hpp"
#include "../../attributeClasses/Date.hpp"
#include "../../attributeClasses/Time.hpp"

using namespace std;

class Meeting : public ParentTask {

	private:
		
		// Date of task
		Date* eventDate;

		// Start time of task
		Time* startTime;

		// End time of task
		Time* endTime;

		// Location of task
		string location;

		// Subtask list
		vector<ParentTask*> subTasks;

	public:

		// Constructor
		Meeting(string title, int month, int day, int year, string location, int startTimeHour, int startTimeMin, int endTimeHour, int endTimeMin) : ParentTask() {
			
			this->title = title;

			eventDate->setMonth(month);
			eventDate->setDay(day);
			eventDate->setYear(year);

			this->location = location;

			startTime->setHour(startTimeHour);
			startTime->setMinute(startTimeMin);

			endTime->setHour(endTimeHour);
			endTime->setMinute(endTimeMin);
	
		}

		/* MUTATORS */

		/// Edits start time of task
		void setStartTime(int hour, int minute);

		/// Edits end time of task
		void setEndTime(int hour, int minute);

		/// Edits date of task
		void setDate(int month, int day, int year);

		/// Edits location of task
		void setLocation(std::string location);

		

		/* ACCESSORS */

		void printAllInfo();
		void editTask();
		
		Time* getStartTime() const;
		Time* getEndTime() const;
		Date* getDate() const;
		string getLocation() const;

};

#endif
