#ifndef __MEETINGS_HPP__
#define __MEETINGS_HPP__

#include <list>

using namespace std;

class Meetings : public ParentTask {

	private:

		// Title of task
		String title;
		
		// Date of task
		String date;

		// Location of task
		String location;

		// Start time of task
		String startTime;

		// End time of task
		String endTime;

		// Subtask list
		list<ParentTask> subTasks;

	public:

		// Constructor
		Meetings(String title, String date, String location, String startTime, String endTime) : ParentTask() {
			
			

		}

		

};

#endif
