#ifndef __PARENT_TASK__
#define __PARENT_TASK__

#include "TaskType.hpp"

class ParentTask {

	private:
		string title;
		TaskType type;			

	public:

		// Constructor
		ParentTask(){}

		// Virtual Deconstructor
		virtual ~ParentTask(){}

		// Pure Virtual Functions
		virtual void printAllInfo();

		// Mutators
		void setTitle(string title){ this-> title = title; }
		void setTaskType(TaskType type){ this-> type = type; }

		// Accessors
		string getTitle(){ return title; }
		TaskType getTaskType(){ return type; }

};

#endif
