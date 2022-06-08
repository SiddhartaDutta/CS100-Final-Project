#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

//#include <vector>

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

	public:

		// Constructor
		Meeting(string title = "", int month = 0, int day = 0, int year = 0, string location = "", int startTimeHour = 0, int startTimeMin = 0, int endTimeHour = 0, int endTimeMin = 0) : ParentTask() {
			
			this->title = title;
			
			eventDate = new Date(month, day, year);

			this->location = location;

			startTime = new Time(startTimeHour, startTimeMin);

			endTime = new Time(endTimeHour, endTimeMin);
	
		}

		~Meeting(){
			eventDate->~Date();
			startTime->~Time();
			endTime->~Time();

			for(int x = 0; x < subTasks.size(); x++){
				subTasks.at(x)->~ParentTask();
			}
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

		/// Runs menu to edit all attributes : follows pattern for universal object manip
		void editTask(std::istream& input, std::ostream& output);

		/* ACCESSORS */

		void printAllInfo();
		
		Time* getStartTime() const;
		Time* getEndTime() const;
		Date* getDate() const;
		string getLocation() const;

};

#endif
