#ifndef __PARENT_TASK__
#define __PARENT_TASK__

class ParentTask {

	public:

		// Constructor
		ParentTask(){}

		// Virtual Deconstructor
		virtual ~ParentTask(){}

		// Pure Virtual Functions
		virtual void printAllInfo() = 0;

};

#endif
