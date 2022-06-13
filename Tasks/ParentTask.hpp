#ifndef __PARENT_TASK__
#define __PARENT_TASK__

#include <vector>
#include <string>
#include <iostream>

class ParentTask {

	protected:
		std::string title;

		// Subtask list
		std::vector<ParentTask*> subTasks;

	public:

		// Constructor
		ParentTask(){}

		// Virtual Deconstructor
		virtual ~ParentTask(){}

		// Pure Virtual Functions
		virtual void printAllInfo() = 0;
		virtual void editTask(std::istream& input, std::ostream& output) = 0;
	
		// Mutators
		void setTitle(std::string title);
		void setTitleFromMenu(std::istream& input, std::ostream& output);
		void operateSubTaskMenu();

		// Accessors
		std::string getTitle();

};

#endif
