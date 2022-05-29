#ifndef __PARENT_TASK__
#define __PARENT_TASK__

#include <vector>

class ParentTask {

	protected:
		std::string title;

		// Subtask list
		vector<ParentTask*> subTasks;

	public:

		// Constructor
		ParentTask(){}

		// Virtual Deconstructor
		virtual ~ParentTask(){}

		// Pure Virtual Functions
		virtual void printAllInfo() = 0;
		virtual void editTask() = 0;
	
		// Mutators
		void setTitle(std::string title);
		void setTitleFromMenu();
		void operateSubTaskMenu();

		// Accessors
		std::string getTitle();

};

#endif
